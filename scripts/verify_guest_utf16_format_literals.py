#!/usr/bin/env python3
"""Verify 10 guest UTF-16 format-string references in the matching Xbox XBE.

The original XBE is never distributed in Git. Source declarations are only
syntax-level placeholders, NOT working host UTF-16/relocation/linkage support.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
# Original function, guest address, original PUSH VA, Ghidra label, UTF-16 data.
CASES = (
 ('0008e0d0',0x0040db8c,0x0008e123,'u__7_1d_0040db8c','%7.1d'),
 ('0008e0d0',0x0040db7c,0x0008e1e6,'u__3_1d___0040db7c','%3.1d%%'),
 ('000f7ae0',0x0040cd38,0x000f7b78,'u__s__1__0040cd38','%s (1)'),
 ('000f7ae0',0x0040cd28,0x000f7bc2,'u__s__2__0040cd28','%s (2)'),
 ('000f9e10',0x0040cc9c,0x000f9eaa,'u__d__s___d__0040cc9c','%d\t%s  (%d)'),
 ('000f9e10',0x0040cc90,0x000f9ed9,'u__d__s_0040cc90','%d\t%s'),
 ('000cbdd0',0x0040d654,0x000cbe53,'u__d____d_0040d654','%d / %d'),
 ('000cbdd0',0x0040d664,0x000cbe8d,'u__d_Regen_0040d664','%d Regen'),
 ('001051e0',0x0040cc20,0x00105379,'u__0040cc20','\n   '),
 ('001051e0',0x0040cc2c,0x001053d3,'u___0040cc2c','   -'),
)

def read_va(binary, address, size):
    base, = struct.unpack_from('<I', binary, 0x104)
    section_count, section_table = struct.unpack_from('<II', binary, 0x11c)
    for index in range(section_count):
        offset = section_table - base + 56 * index
        _, va, _, raw, raw_size = struct.unpack_from('<IIIII', binary, offset)
        relative = address - va
        if 0 <= relative and relative + size <= raw_size:
            return binary[raw+relative:raw+relative+size]
    raise ValueError(f'VA 0x{address:08x} has no backed XBE section')

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('xbe', type=Path)
    parser.add_argument('--repo', type=Path, help='Optionally verify the five C draft declarations')
    args = parser.parse_args()
    binary = args.xbe.read_bytes()
    if hashlib.sha256(binary).hexdigest() != XBE_SHA256:
        parser.error('Original XBE SHA-256 mismatch')
    for function, address, instruction, symbol, value in CASES:
        encoded = value.encode('utf-16le') + b'\0\0'
        if read_va(binary, address, len(encoded)) != encoded:
            raise SystemExit(f'FAIL original guest UTF-16 bytes {address:#x}')
        if read_va(binary, instruction, 5) != b'\x68' + struct.pack('<I', address):
            raise SystemExit(f'FAIL original PUSH immediate {instruction:#x}')
        if args.repo:
            source = args.repo / 'src' / 'main_unclassified' / f'band_{function[:4]}' / f'0x{function}.c'
            content = source.read_text(encoding='utf-8')
            if f'extern const uint16_t {symbol}[];' not in content:
                raise SystemExit(f'FAIL missing source declaration {symbol}')
            if f'Entry: 0x{function}' not in content or 'ABI_UNVERIFIED' not in content:
                raise SystemExit(f'FAIL source provenance/ABI warning {function}')
    print(f'PASS: matching-XBE SHA-256, {len(CASES)} UTF-16 literals and {len(CASES)} PUSH instructions')
    if args.repo:
        print(f'PASS: {len(CASES)} guest source declarations across {len(set(c[0] for c in CASES))} functions')
    print('Not verified: guest string relocation, host UTF-16 ABI, linkage or runtime behavior')

if __name__ == '__main__':
    main()
