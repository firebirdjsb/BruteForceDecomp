#!/usr/bin/env python3
"""Source-only C++17 links and narrow original-XBE DWORD output evidence.

No full Xbox ABI, guest-pointer translation or 1:1 behavior is inferred.
"""
from __future__ import annotations
import argparse
import hashlib
import re
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
# Exact reviewed postimages; the original-body SHA-256 labels remain untouched.
FILES = {
    'src/platform/online_xonline/0x0033bcae.cpp': ('a3158441a8fbc31cc7e95ce96d47530caf010e4c6b10d22705e3d94d2951e850', 'B283330811A1E01F7A5699C7B62F8C5344552C7C41223EEEC524F9D30673B5A9'),
    'src/platform/online_xonline/0x0033ee8d.cpp': ('e057db724e576eab6a1671e7e14fb27b2fdaf75ea898969980b3fbe1dea58ae3', 'DC115508A1E32BBFFC27032368E0C4C6113914A83E31E4C9363CCAA542EF3BEA'),
    'src/main_unclassified/band_002e/0x002e4a30.cpp': ('69fcb60ca0388e3d4d437f62950c19269bec0391ad0e6677ddec5bac332ffb75', '6A6094DC4C9D2A3A40E2BF9B10413A88DF126B14A7D16295A586A8BC3FE0F354'),
    'src/main_unclassified/band_002e/0x002e49c0.cpp': ('f7a33f063336ac010f2f54c3f554e12d15b06d5e0c27b1d3ca460e281cd872c1', 'DB0AB9EFA04F8F43837A67846AFC18CC4FDAE54E18B0258E2CCD64C79A79438C'),
}
PAIRS = (('0x0033bcae.cpp', '0x0033ee8d.cpp', 'FUN_0033ee8d'),
         ('0x002e4a30.cpp', '0x002e49c0.cpp', 'FUN_002e49c0'))
CALLS = ((0x0033bcc2, 0x0033ee8d, 'e8c6310000'),
         (0x002e4a40, 0x002e49c0, 'e87bffffff'))
# Observed narrow instruction windows, never whole game-function equivalence.
WINDOWS = ((0x33bcb8,'8d45fc'),(0x33bcbb,'50'),(0x33bcbc,'ff7118'),
           (0x33bccb,'8b4dfc'),(0x33bcd9,'c20400'),(0x33ee99,'8b5018'),
           (0x33ee9c,'8911'),(0x33eeab,'8b400c'),(0x33eeae,'c20c00'),
           (0x2e4a30,'51'),(0x2e4a31,'8d442400'),(0x2e4a35,'50'),
           (0x2e4a36,'8b44240c'),(0x2e4a3a,'8d54240c'),(0x2e4a3e,'52'),
           (0x2e4a3f,'50'),(0x2e4a45,'8b442408'),(0x2e4a4a,'c20400'),
           (0x2e49f2,'890a'),(0x2e49ff,'8930'),(0x2e4a10,'c20c00'))

def command(args, success=True):
    p = subprocess.run(args, capture_output=True, text=True)
    if (p.returncode == 0) != success:
        raise AssertionError(f"Unexpected command result: {args}\n{p.stderr[-1600:]}")
    return p.stdout

def call(site, target, expected, actual):
    if len(expected) != 5 or expected[0] != 0xe8 or actual != expected:
        raise ValueError('Original CALL bytes mismatch')
    if (site + 5 + struct.unpack_from('<i', actual, 1)[0]) & 0xffffffff != target:
        raise ValueError('Original CALL target mismatch')

def window(site, expected, actual):
    if actual != expected:
        raise ValueError(f'Original instruction mismatch at {site:#x}')

def xbe_bytes(data, va, size):
    base, n, table = (struct.unpack_from('<I', data, off)[0] for off in (0x104,0x11c,0x120))
    if data[:4] != b'XBEH' or base != 0x10000 or not 1 <= n <= 64:
        raise ValueError('Unexpected XBE header')
    for i in range(n):
        off = table - base + i * 0x38
        _, start, vsize, raw, rawsize = struct.unpack_from('<5I', data, off)
        if start <= va and va + size <= start + min(vsize, rawsize) and raw + rawsize <= len(data):
            offset = raw + va - start
            return data[offset:offset+size]
    raise ValueError('Original instruction not raw-backed')

def verify_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError('Original retail XBE hash mismatch')
    for site, target, raw in CALLS:
        call(site, target, bytes.fromhex(raw), xbe_bytes(data, site, 5))
    for site, raw in WINDOWS:
        expected = bytes.fromhex(raw)
        window(site, expected, xbe_bytes(data, site, len(expected)))

def source_checks(root):
    for rel, (sha, body) in FILES.items():
        data = (root / rel).read_bytes()
        assert hashlib.sha256(data).hexdigest() == sha, f'Changed reviewed source: {rel}'
        assert ('Input x86 body SHA-256: ' + body).encode() in data
    clang, ld, nm = (shutil.which(x) for x in ('clang++','ld','nm'))
    assert clang and ld and nm, 'Clang++, ld and nm required'
    with tempfile.TemporaryDirectory() as directory:
        tmp = Path(directory)
        for opt in ('-O0','-O2'):
            objects = {}
            for rel in FILES:
                src = root / rel
                flags = [clang,'-std=c++17',opt,'-I',str(root/'include')]
                command(flags + ['-x','c++','-fsyntax-only','-ferror-limit=3',str(src)])
                obj = tmp / (src.stem + opt + '.o')
                command(flags + ['-c',str(src),'-o',str(obj)])
                objects[src.name] = obj
            for caller, callee, symbol in PAIRS:
                output = tmp / (caller + opt + '.o')
                command([ld,'-r',str(objects[caller]),str(objects[callee]),'-o',str(output)])
                symbols = command([nm,'-C',str(output)])
                assert re.search(r'\bT ' + symbol + r'\(', symbols)
                assert not re.search(r'\bU ' + symbol + r'\(', symbols)
        negatives = (
            ('0x0033bcae.cpp','extern undefined4 FUN_0033ee8d(int param_1,undefined4 *param_2,undefined4 *param_3);',''),
            ('0x0033bcae.cpp','  undefined4 local_8;','  int local_8;'),
            ('0x002e4a30.cpp','extern uint FUN_002e49c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);',''),
            ('0x002e4a30.cpp','  undefined4 local_4;','  undefined1 local_4 [4];'),
        )
        for name, old, new in negatives:
            src = next(root.glob('src/**/' + name))
            text = src.read_text()
            assert text.count(old) == 1
            negative = tmp / name
            negative.write_text(text.replace(old,new,1))
            command([clang,'-std=c++17','-x','c++','-fsyntax-only','-I',str(root/'include'),str(negative)],False)
    print('PASS: four source SHA labels, O0/O2 syntax, two partial symbol links, four source negatives')

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe',type=Path,help='Private retail XBE outside Git')
    p.add_argument('--self-test',action='store_true')
    a = p.parse_args()
    source_checks(a.root.resolve())
    if a.self_test or a.xbe:
        rejected = 0
        for site,target,raw in CALLS:
            b = bytes.fromhex(raw)
            for t,actual in ((target ^ 1,b),(target,bytes([0x90])+b[1:]),
                             (target,b[:1]+bytes([b[1]^1])+b[2:])):
                try: call(site,t,b,actual)
                except ValueError: rejected += 1
                else: raise AssertionError('CALL negative accepted')
        for site, raw in WINDOWS:
            expected = bytes.fromhex(raw)
            changed = bytes([expected[0] ^ 1]) + expected[1:]
            try: window(site, expected, changed)
            except ValueError: rejected += 1
            else: raise AssertionError('Instruction-window negative accepted')
        print(f'PASS: {len(CALLS)} direct CALL fixtures, {len(WINDOWS)} instruction windows, {rejected} negatives')
    if a.xbe:
        data = a.xbe.read_bytes()
        verify_xbe(data)
        changed = bytearray(data)
        changed[-1] ^= 1
        try: verify_xbe(bytes(changed))
        except ValueError: print('PASS: retail XBE authenticated, modified XBE rejected')
        else: raise AssertionError('Modified XBE accepted')
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
