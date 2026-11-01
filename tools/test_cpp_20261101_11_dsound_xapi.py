#!/usr/bin/env python3
"""Retail-XBE and strict C++17 source-only declaration gate; Xbox ABI_UNVERIFIED."""
import argparse
import hashlib
import re
import struct
import subprocess
import unittest
from pathlib import Path

SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
NOTE = '/* Source-matched declarations; original E8 calls verified. Xbox ABI_UNVERIFIED. */\n'
# caller, first callee, exact source preimage SHA256, first callee XBE body length
ROWS = '''
00312cac 00311b20 cb93191707f0289f05c0725af1865d97eaa55b60087765819e7ad11add32c7a1 58
00312e64 00311d35 af8b6a66eb2f0b9796b8b5f44396e62abff869bad8515d688a8d2bcbb6899ca0 77
00313210 00311f35 18072394123de0bb419b61c486f27f60bdf44ede815e7833a7bdd6bb857222e5 51
003142e5 00313e3c 73dbe6886fe15f8aae2e66fd8271bf1faaefdeebd42406cb4d95cc3efb9a9d8a 56
0031452f 00314300 24b15644f8c0f3c96e9bc3908e6e6e101833987f438e1a54745b26554d6138d2 37
00318d84 00318b5c d074552ed075f0ed16f9bd5e20352bcf8345b10f7194bb19923ddbd4e4e1cbfe 90
00319a4c 0031998f 37dfa32352e10b3f2f7023defe49ae8b3e8eae90b4f8f17fd847d9d5ea0877aa 61
0031aeb7 0031aa8e 93db05d9137bbb42f6cf391f69ff35454730abf9f39aba793beb48af5e331637 34
0031afbd 0031acd6 be7cbcbc679ab69dabbc0b050a2b30a183a2cac33dc6e89888f9f34b45dddeb7 97
0031bf72 0031bba1 e28f28403be4780b9e5785322905f6dbd5533477c691feeca545984eb0cff9fd 165
00380098 00380fc8 424b10771d6f755458ec84be00f6cc50c783dbb567054323ba5e2175b4cf6748 13
'''.strip().splitlines()

def source(root, name):
    area = 'xpp_role_unverified' if name.startswith('0038') else 'audio_dsound'
    return root / 'src/platform' / area / ('0x'+name+'.cpp')

def label(text):
    m = re.search(r'Input x86 body SHA-256:\s*([A-F0-9]{64})', text)
    assert m, 'original body label missing'
    return m.group(1)

def declarations(entry, first):
    if entry == '00380098':
        return [f'extern undefined4 FUN_{first}(undefined4 param_1);',
                'extern void FUN_00382383(void);']
    return [f'extern void FUN_{first}(void);',
            'extern void FUN_00314937(int param_1);']

def check(root, xbe=None, local_only=False):
    raw = xbe.read_bytes() if xbe else None
    if raw:
        assert hashlib.sha256(raw).hexdigest().upper() == SHA, 'non-retail XBE rejected'
        base, = struct.unpack_from('<I', raw, 0x104)
        count, table = struct.unpack_from('<II', raw, 0x11c)
        assert 0 < count < 100 and table >= base
        sections = [struct.unpack_from('<6I', raw, table-base+i*56) for i in range(count)]
        def read(va, n):
            for _, start, virt, offset, size, _ in sections:
                if start <= va and va+n <= start+min(virt,size):
                    return raw[offset+va-start:offset+va-start+n]
            raise AssertionError('unbacked guest address '+hex(va))
    passes = negatives = edges = 0
    seen = set()
    for entry, first, prehash, firstlen in (line.split() for line in ROWS):
        text = source(root, entry).read_text()
        decls = declarations(entry, first)
        block = NOTE + ''.join(d+'\n' for d in decls)
        assert text.count(block) == 1
        old = text.replace(block, '', 1)
        assert hashlib.sha256(old.encode()).hexdigest() == prehash
        assert label(text) == label(old) and 'ABI_UNVERIFIED' in text
        second = '00382383' if entry == '00380098' else '00314937'
        if not local_only:
            for callee, decl in zip((first, second), decls):
                ctext = source(root, callee).read_text()
                assert decl[len('extern '):-1] in ctext and label(ctext)
        cmd = ['clang++','-std=c++17','-x','c++','-fsyntax-only','-I',str(root/'include')]
        for opt in ('-O0','-O2'):
            result = subprocess.run([*cmd,opt,str(source(root,entry))],capture_output=True,text=True)
            assert result.returncode == 0, result.stderr
            passes += 1
        for mutant in [text.replace(d+'\n','',1) for d in decls]+[old]:
            result = subprocess.run([*cmd,'-'],input=mutant,capture_output=True,text=True)
            assert result.returncode != 0 and 'undeclared identifier' in result.stderr
            negatives += 1
        if raw:
            a = int(entry,16)
            size = 35 if entry == '00380098' else 27
            body = read(a,size)
            assert hashlib.sha256(body).hexdigest().upper() == label(text)
            assert body.endswith(b'\xc3' if entry == '00380098' else b'\xc2\x04\x00')
            seen.add(entry)
            for callee, offset, length in ((first,7 if entry=='00380098' else 3,int(firstlen)),
                                          (second,14 if entry=='00380098' else 16,
                                           118 if entry=='00380098' else 52)):
                site = a+offset
                ins = read(site,5)
                assert ins[0] == 0xe8
                disp, = struct.unpack_from('<i',ins,1)
                assert (site+5+disp)&0xffffffff == int(callee,16)
                for i in range(1,5):
                    changed = bytearray(ins);changed[i] ^= 1
                    d, = struct.unpack_from('<i',changed,1)
                    assert (site+5+d)&0xffffffff != int(callee,16)
                edges += 1
                if callee not in seen and not local_only:
                    cbody = read(int(callee,16),length)
                    assert hashlib.sha256(cbody).hexdigest().upper() == label(source(root,callee).read_text())
                    seen.add(callee)
    assert passes == 22 and negatives == 33
    print('PASS: 11 source SHA preimages, 22 Clang++17 O0/O2 passes, 33 negative controls')
    if raw:
        assert edges == 22
        print(f'PASS: pinned retail XBE, 22 E8 targets, {len(seen)} original body digests, 88 operand negatives')
    print('ABI_UNVERIFIED: original Xbox registers, prototypes, guest memory, linkage and behavior')

class SourceDeclarationGates(unittest.TestCase):
    def test_source_only(self):
        check(Path(__file__).resolve().parents[1])

if __name__ == '__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe',type=Path)
    p.add_argument('--local-caller-only',action='store_true')
    a=p.parse_args()
    check(a.root,a.xbe,a.local_caller_only)
