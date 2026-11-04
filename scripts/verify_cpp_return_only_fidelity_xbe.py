#!/usr/bin/env python3
"""Pin five original bodies whose return-only C++ drafts omit machine effects.

This evidence gate does not repair or execute the drafts, and does not clear
their five fidelity flags. No original executable bytes are stored here.
"""
import argparse
import hashlib
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, sections, file_offset

# Ordered inclusive/exclusive VA ranges reproduce the original body digests.
# The probe's intervening exception blocks lie outside its recorded body hash.
BODIES = {
    0x002ecc14: ([(0x002ecc14, 0x002ecc6d)], '7FB7ECCBA31465DD8621581517417C798527E069CD33D2E544D3766B66204EF2'),
    0x002ef9ea: ([(0x002ef9ea, 0x002efa07), (0x002efa20, 0x002efa2c)], 'EF9EF2A18DA9E7E4B054C1ACC328533F72141D68338BCF1458A13F9B104C826F'),
    0x002f04d0: ([(0x002f04d0, 0x002f04d5)], 'D0ECF339B80D438B6D0D3FCEF61D5CB5AD8EF4C6BF39BE985A29318BBC096C05'),
    0x002f060d: ([(0x002f060d, 0x002f0624)], 'E6EC999D45C3C78E22ED722D9CDD003CA3E8685D7954A7D030915DF1E55EB902'),
    0x002f0696: ([(0x002f0696, 0x002f06a3)], 'B0971B5D2CB4945DC056293D2DAC8D989FC1D1488B22EDB4125E67FDF93C85BD'),
}

def gather(raw, layout, ranges):
    chunks = []
    for start, end in ranges:
        if start >= end:
            raise ValueError('empty or reversed body range')
        offset = file_offset(layout, start, end - start)
        chunks.append(raw[offset:offset + end - start])
    return b''.join(chunks)

def self_test():
    # Synthetic data checks ordered discontiguous selection and excluded bytes.
    raw = bytes(range(32))
    layout = [(0x1000, 0x1020, 0)]
    selected = gather(raw, layout, [(0x1000, 0x1004), (0x1008, 0x100c)])
    assert selected == raw[:4] + raw[8:12]
    assert hashlib.sha256(selected).digest() != hashlib.sha256(raw[:12]).digest()
    mutant = bytearray(raw); mutant[0] ^= 1
    assert gather(mutant, layout, [(0x1000, 0x1004), (0x1008, 0x100c)]) != selected
    print('PASS: ordered discontiguous body selection and mutation negatives')

def verify(raw):
    if hashlib.sha256(raw).hexdigest() != XBE_SHA256:
        raise ValueError('retail XBE SHA-256 mismatch')
    layout = sections(raw)
    for entry, (ranges, expected) in BODIES.items():
        if hashlib.sha256(gather(raw, layout, ranges)).hexdigest().upper() != expected:
            raise ValueError(f'original body digest mismatch: {entry:#010x}')
    print('PASS: authenticated XBE and all five return-only draft body digests')
    print('CONFIRMED INCOMPLETE: original x87/control-word/probe effects remain unreconstructed')

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--self-test', action='store_true')
    parser.add_argument('--xbe', type=Path)
    args = parser.parse_args()
    if not args.self_test and not args.xbe:
        parser.error('supply --self-test and/or --xbe')
    if args.self_test:
        self_test()
    if args.xbe:
        verify(args.xbe.read_bytes())

if __name__ == '__main__':
    main()
