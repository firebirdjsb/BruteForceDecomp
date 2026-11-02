#!/usr/bin/env python3
"""Source-preimage and retail-XBE EAX output contract at 0x002E35C0.

The retail callee writes [EAX] then returns the same EAX guest address.
This is bounded x86 evidence, NOT a verified host pointer/guest32 ABI.
"""
from __future__ import annotations
import argparse
import hashlib
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
CALLEE_PREIMAGE = '567fa39d667fc66f0542b6da4a14605206354d5dcdf800f7d033c2c5ff2b5c49'
CALLER_PREIMAGE = 'bcc8619730b195db3582f76644cbcb520062abbf967c24da07120c104349489e'
BODY_DIGEST = '804BF5E43393D936EBDD7240D85469708F412F59ECF16DA3B5D1F39796D48C4C'
CALLEE_BYTES = bytes.fromhex('8b49048b4424048908c20400')
CALLER_WINDOW = bytes.fromhex('8d442414508bcde8f42c0000')
DECL = ('/* Original EAX is loaded from [ESP+4] and returned after a 4-byte output write; Xbox ABI_UNVERIFIED. */\n'
        'extern undefined4 * FUN_002e35c0(undefined4 *param_1);\n')
OLD_SIGNATURE = 'void FUN_002e35c0(undefined4 *param_1)'
NEW_SIGNATURE = 'undefined4 * FUN_002e35c0(undefined4 *param_1)'

def digest(text: str) -> str:
    return hashlib.sha256(text.encode()).hexdigest()

def source_gate(root: Path):
    base = root / 'src/main_unclassified/band_002e'
    caller_path, callee_path = base/'0x002e0890.cpp', base/'0x002e35c0.cpp'
    caller, callee = caller_path.read_text(), callee_path.read_text()
    assert caller.count(DECL) == 1, 'missing/duplicated caller declaration'
    assert callee.count(NEW_SIGNATURE) == 1 and callee.count('  return param_1;') == 1
    assert callee.count('  return;') == 0
    old_caller = caller.replace(DECL, '', 1)
    old_callee = callee.replace(NEW_SIGNATURE, OLD_SIGNATURE, 1).replace('  return param_1;', '  return;', 1)
    assert digest(old_caller) == CALLER_PREIMAGE, 'caller source drift'
    assert digest(old_callee) == CALLEE_PREIMAGE, 'callee source drift'
    assert 'Input x86 body SHA-256: ' + BODY_DIGEST in callee
    assert 'Entry: 0x002e0890' in caller and 'Entry: 0x002e35c0' in callee
    for altered in (caller.replace(DECL, '', 1), caller.replace(DECL, DECL+DECL, 1),
                    caller.replace('FUN_002e35c0(&param_1)', 'FUN_002e35c0(&param_2)', 1)):
        assert altered != caller and not (altered.count(DECL) == 1 and digest(altered.replace(DECL, '', 1)) == CALLER_PREIMAGE)
    for altered in (callee.replace('return param_1;', 'return nullptr;', 1),
                    callee.replace('*(undefined4 *)(in_ECX + 4)', '*(undefined4 *)(in_ECX + 8)', 1)):
        assert altered != callee
        assert digest(altered.replace(NEW_SIGNATURE, OLD_SIGNATURE, 1).replace('  return param_1;', '  return;', 1)) != CALLEE_PREIMAGE
    return caller_path, callee_path, old_caller

def clang_gate(root: Path, paths):
    clang = shutil.which('clang++')
    assert clang, 'clang++ unavailable'
    caller, callee, original = paths
    args = [clang, '-std=c++17', '-fsyntax-only', '-I', str(root/'include')]
    for path in (caller, callee):
        for opt in ('-O0','-O2'):
            p = subprocess.run([*args,opt,str(path)],capture_output=True,text=True,timeout=30)
            assert p.returncode == 0, f'{path.name} {opt}: {p.stderr}'
    with tempfile.TemporaryDirectory() as d:
        p = Path(d)/'old.cpp';p.write_text(original)
        bad = subprocess.run([*args,str(p)],capture_output=True,text=True,timeout=30)
        assert bad.returncode and "undeclared identifier 'FUN_002e35c0'" in bad.stderr

def sections(b):
    assert b[:4] == b'XBEH'
    base, n, table = (struct.unpack_from('<I',b,off)[0] for off in (0x104,0x11c,0x120))
    assert base == 0x10000 and 1 <= n <= 64
    result=[]
    for i in range(n):
        _,va,virtual,raw,size=struct.unpack_from('<5I',b,table-base+i*0x38)
        assert raw+size <= len(b)
        result.append((va,va+min(virtual,size),raw))
    return result

def raw_offset(layout,va,n):
    for start,end,raw in layout:
        if start <= va and va+n <= end:
            return raw+va-start
    raise AssertionError(f'not raw-backed {va:#x}')

def xbe_gate(path):
    b=path.read_bytes()
    assert hashlib.sha256(b).hexdigest()==XBE_SHA
    layout=sections(b)
    co=raw_offset(layout,0x002e35c0,len(CALLEE_BYTES))
    so=raw_offset(layout,0x002e08c0,len(CALLER_WINDOW))
    assert b[co:co+len(CALLEE_BYTES)] == CALLEE_BYTES
    assert hashlib.sha256(CALLEE_BYTES).hexdigest().upper()==BODY_DIGEST
    assert b[so:so+len(CALLER_WINDOW)] == CALLER_WINDOW
    call=0x002e08c7
    off=raw_offset(layout,call,5)
    assert b[off]==0xe8
    assert (call+5+struct.unpack_from('<i',b,off+1)[0])&0xffffffff == 0x002e35c0
    assert b[raw_offset(layout,0x002e35c9,3):raw_offset(layout,0x002e35c9,3)+3] == b'\xc2\x04\x00'
    for i in range(len(CALLEE_BYTES)):
        altered=bytearray(CALLEE_BYTES);altered[i]^=1
        assert altered != CALLEE_BYTES
    for i in range(1,5):
        altered=bytearray(b[off:off+5]);altered[i]^=1
        assert (call+5+struct.unpack_from('<i',altered,1)[0])&0xffffffff != 0x002e35c0
    return True

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--xbe',type=Path)
    args=parser.parse_args()
    paths=source_gate(args.root)
    clang_gate(args.root,paths)
    print('PASS: 2 source preimages, original body label, Clang++17 O0/O2, source negative controls')
    if args.xbe:
        xbe_gate(args.xbe)
        print('PASS: authenticated retail XBE, 12-byte callee body, EAX output, E8, RET4, mutation controls')
    else:
        print('Retail XBE unavailable in CI; source-only tests do not establish Xbox ABI')
    print('ABI_UNVERIFIED: guest32 address translation, native linkage, complete behavior')
if __name__=='__main__':main()
