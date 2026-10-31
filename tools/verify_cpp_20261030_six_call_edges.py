#!/usr/bin/env python3
"""Six C++17 source declarations grounded in original Xbox call edges.

Syntax and direct-call evidence are NOT proof of guest ABI, linkage or behavior.
The retail XBE is never stored in the repository. CI can run source-only.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA256 = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
# (entry, original body SHA256, original body length, call VA, callee VA)
CALLERS = (
    (0x001E7800, '465B6A409B565D69EC48545F4E3DB52F3A56674FA808FD26C1C0997040C1529D', 30, 0x001E7815, 0x001E7880),
    (0x001E7820, '48C09C7A8E6DF856CFDD10FBF824AE2BF6FACA8AF266F577740C9867DC2AF665', 44, 0x001E7843, 0x001E7880),
    (0x001E7850, '4B4CE98F6D25DD4ABE2C074A72B54D754EAA330E737F05FC5C5AB1EE6240FBBE', 44, 0x001E7873, 0x001E7880),
    (0x001D13A0, '272D8B6226E7E71DFA6ADB357164883953D1AB60A8B39338FF84905CE89733C6', 43, 0x001D13BB, 0x0003D730),
    (0x001D92E0, 'A776A8F373911FCE934531B6550790039D4F49E6C68DA3EAE603E4B7AC70BB37', 50, 0x001D92FD, 0x0003D730),
    (0x002051A0, 'E3A76B5FAA2432FB58473861ACBBAC22CB117BA34F5F83EA489CC359DAAC40EC', 429, 0x00205226, 0x0003D730),
)
CALLEES = (
    (0x001E7880, 'D4B020A2A1921FAA5D3859A8990C7073CF7C1C7BFFC0D877170F6416A47621F2', 231),
    (0x0003D730, '3EC87AE35CBFA399D66DE90F69F5C87EC9E2870C6255D8BDC5132662E0B37912', 111),
)
DECLS = {
    0x001E7880: 'extern void FUN_001e7880(void);',
    0x0003D730: 'extern undefined4 *FUN_0003d730(undefined4 *param_1, undefined4 *param_2);',
}
# Original VA-addressed bytes, not invented host ABI.
WINDOWS = {
    0x001E7801: '8b3548994600', # ESI <- guest global [0x00469948]
    0x001E782D: '8b3548994600',
    0x001E785D: '8b3548994600',
    0x001E7880: '8b4604',       # callee reads guest [ESI+4]
    0x001E7966: 'c3',           # callee RET (no stack cleanup)
    0x001D13B4: '578d4e0451', # PUSH source+4, PUSH destination+4
    0x001D92F3: '8d4e04518d570452',
    0x00205220: '5157eb025751', # two conditional push orders
    0x0003D730: '83ec0c',
    0x0003D79C: 'c20800',     # callee RET 8 (two stack DWORDs)
}

def source_path(root, entry):
    name = f'0x{entry:08x}'
    return root / 'src' / 'main_unclassified' / ('band_' + name[2:6]) / (name + '.cpp')

def validate_source(content, entry, digest, callee):
    if f'Entry: 0x{entry:08x}' not in content:
        raise ValueError(f'original entry changed at {entry:08x}')
    if 'Input x86 body SHA-256: ' + digest not in content:
        raise ValueError(f'original body SHA label changed at {entry:08x}')
    if 'ABI_UNVERIFIED' not in content:
        raise ValueError(f'ABI uncertainty erased at {entry:08x}')
    if DECLS[callee] not in content:
        raise ValueError(f'missing source-matched declaration at {entry:08x}')
    symbol = f'FUN_{callee:08x}'
    if len(re.findall(r'\b' + symbol + r'\s*\(', content)) != 2:
        raise ValueError(f'unexpected call/declaration count at {entry:08x}')

def verify_sources(root):
    clang = shutil.which('clang++')
    if not clang:
        raise RuntimeError('clang++ is required')
    for entry, digest, _, _, callee in CALLERS:
        path = source_path(root, entry)
        content = path.read_text(encoding='utf-8')
        validate_source(content, entry, digest, callee)
        for opt in ('-O0', '-O2'):
            result = subprocess.run([clang, '-std=c++17', '-x', 'c++', '-fsyntax-only',
                                     '-ferror-limit=3', opt, '-I', str(root / 'include'), str(path)],
                                    text=True, capture_output=True, timeout=60)
            if result.returncode:
                raise RuntimeError(f'{entry:08x} {opt}: {result.stderr[-1800:]}')
        print(f'0x{entry:08X}: source provenance and Clang++17 -O0/-O2 PASS')

def xbe_reader(data):
    base = struct.unpack_from('<I', data, 0x104)[0]
    count = struct.unpack_from('<I', data, 0x11c)[0]
    table = struct.unpack_from('<I', data, 0x120)[0] - base
    sections = [struct.unpack_from('<IIIII', data, table + 0x38 * i) for i in range(count)]
    def read(va, size):
        for _, start, memory_size, raw, stored in sections:
            if start <= va and va + size <= start + min(memory_size, stored):
                pos = raw + va - start
                return data[pos:pos+size]
        raise ValueError(f'XBE VA outside stored sections: {va:08x}')
    return read

def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError('original Xbox executable SHA-256 mismatch')
    read = xbe_reader(data)
    for entry, digest, length in CALLEES:
        if hashlib.sha256(read(entry, length)).hexdigest().upper() != digest:
            raise ValueError(f'original callee body mismatch: {entry:08x}')
    for entry, digest, length, call_va, callee in CALLERS:
        if hashlib.sha256(read(entry, length)).hexdigest().upper() != digest:
            raise ValueError(f'original caller body mismatch: {entry:08x}')
        call = read(call_va, 5)
        if call[0] != 0xe8 or call_va + 5 + struct.unpack('<i', call[1:])[0] != callee:
            raise ValueError(f'original direct CALL mismatch: {call_va:08x}')
    for va, hexdigits in WINDOWS.items():
        if read(va, len(hexdigits)//2) != bytes.fromhex(hexdigits):
            raise ValueError(f'original instruction window mismatch: {va:08x}')
    print('Authenticated original XBE: eight complete body hashes, six direct CALLs, ten opcode windows PASS')

def self_test():
    entry, digest, _, _, callee = CALLERS[0]
    good = f'/* Entry: 0x{entry:08x}; Input x86 body SHA-256: {digest}; ABI_UNVERIFIED */\n' + DECLS[callee] + '\nvoid demo() { FUN_001e7880(); }\n'
    validate_source(good, entry, digest, callee)
    mutants = [good.replace('ABI_UNVERIFIED','ABI_VERIFIED'),
               good.replace('FUN_001e7880();','FUN_001e7881();'),
               good.replace(DECLS[callee], ''),
               good.replace(digest, '0'*64)]
    for bad in mutants:
        try: validate_source(bad, entry, digest, callee)
        except ValueError: pass
        else: raise AssertionError('negative source regression escaped detection')
    data = bytearray(b'\xe8\x66\x00\x00\x00')
    target = 0x001E7815 + 5 + struct.unpack('<i', data[1:])[0]
    assert target == 0x001E7880
    data[1] ^= 1
    assert 0x001E7815 + 5 + struct.unpack('<i', data[1:])[0] != 0x001E7880
    print('Negative source and CALL mutation controls PASS')

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path)
    parser.add_argument('--xbe', type=Path)
    parser.add_argument('--self-test', action='store_true')
    args = parser.parse_args()
    if args.self_test: self_test()
    if args.xbe: verify_xbe(args.xbe)
    if args.root: verify_sources(args.root)
    if not args.xbe: print('Original XBE not provided: instruction verification unavailable (CI source-only)')
    print('Xbox guest ABI, linkage, native behavior remain ABI_UNVERIFIED')

if __name__ == '__main__':
    main()
