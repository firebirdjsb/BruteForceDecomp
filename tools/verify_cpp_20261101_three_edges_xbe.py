#!/usr/bin/env python3
"""Bounded retail-XBE checks for three C++17 draft call-site repairs.

Proves original CALL and stack/operand facts, not native linkage or 1:1 runtime.
Never commit the retail XBE; pass its private local path with --xbe.
"""
import argparse
import hashlib
from pathlib import Path
import struct

XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
CASES = (
    (0x002e12a0, 106, 'B0069AB178F347C6FBAF080E540977278F8FD2F51D7D5EADEB2990433BADFE6F', 0x002e12ef, 0x002e0960),
    (0x002e1360, 53, '9D6F3DD5E3D4A422BCA34424403F86A19BD29B35E09EE8B0FE9D96FD5D48345A', 0x002e1389, 0x002e0960),
    (0x002f07e5, 338, '7A5217CF5E0093CE8CEC4543609B41040FAE2CFE292A724A937EE8CC0EE66160', 0x002f08d9, 0x002f0784),
)
CALLEES = (
    (0x002e0960, 282, 'BF14B3A4579F557D2F875EFBD64D49EA458867FE6C7CFB22561813B22D72CBDA'),
    (0x002f0784, 97, 'DC235BF126CC3F8643CFD942AA2B00255DFCD11B83BA660F8C2954584A86D87D'),
)
SOURCES = (
    ('src/main_unclassified/band_002e/0x002e12a0.cpp', '75f7560f59f2e366f1d4c7ddb678123968d129a96c4476537d79721730caef3e'),
    ('src/main_unclassified/band_002e/0x002e1360.cpp', 'e090c4d5f5dfac54ba91239e49fb632da5b1d86254999c65b5b4fcf8b07f555b'),
    ('src/main_unclassified/band_002f/0x002f07e5.cpp', 'bdc0b441411c15cdf367ac2fc72d2ebc7ceb0636a51514ff18766e2df39ed402'),
)

def mapped(xbe, sections, va, size):
    for _, base, vsize, off, rsize, _ in sections:
        delta = va - base
        if 0 <= delta and delta + size <= min(vsize, rsize):
            return xbe[off + delta:off + delta + size]
    raise ValueError(f'unmapped retail-XBE address {va:#x}')

def verify_xbe(xbe):
    if xbe[:4] != b'XBEH' or hashlib.sha256(xbe).hexdigest().upper() != XBE_SHA:
        raise ValueError('retail XBE SHA-256 mismatch')
    base, = struct.unpack_from('<I', xbe, 0x104)
    count, table = struct.unpack_from('<II', xbe, 0x11c)
    if not 1 <= count <= 256:
        raise ValueError('invalid XBE sections')
    sections = [struct.unpack_from('<6I', xbe, table-base+i*56) for i in range(count)]
    for entry, size, digest in CALLEES:
        body = mapped(xbe, sections, entry, size)
        assert hashlib.sha256(body).hexdigest().upper() == digest
    for entry, size, digest, site, target in CASES:
        body = mapped(xbe, sections, entry, size)
        assert hashlib.sha256(body).hexdigest().upper() == digest
        call = mapped(xbe, sections, site, 5)
        assert call[0] == 0xe8 and site+5+struct.unpack_from('<i',call,1)[0] == target
        altered = bytearray(call); altered[1] ^= 1
        assert site+5+struct.unpack_from('<i',altered,1)[0] != target
        altered_body = bytearray(body); altered_body[site-entry] ^= 1
        assert hashlib.sha256(altered_body).hexdigest().upper() != digest
    # Two stack DWORDs, with scratch pointer pushed last; callee RET 8.
    assert mapped(xbe,sections,0x002e12d4,2) == b'\x56\x8d'
    assert mapped(xbe,sections,0x002e12e3,3) == b'\x51\x8b\xca'
    assert mapped(xbe,sections,0x002e137c,2) == b'\x50\x8d'
    assert mapped(xbe,sections,0x002e1381,3) == b'\x51\x8b\xca'
    for ret in (0x002e0a6b,0x002e0a77):
        assert mapped(xbe,sections,ret,3) == b'\xc2\x08\x00'
    # Double input is an original 64-bit stack bit pattern.
    assert mapped(xbe,sections,0x002f07e8,3) == b'\xdd\x45\x08'
    assert mapped(xbe,sections,0x002f0891,3) == b'\xdd\x45\x10'
    assert mapped(xbe,sections,0x002f08d4,5) == b'\x51\x51\xdd\x1c\x24'
    print('PASS pinned XBE, 3 caller and 2 callee bodies, 3 E8 edges, 6 mutation controls, original stack/x87 windows')

def verify_sources(root):
    for path, expected in SOURCES:
        data = (root/path).read_bytes()
        assert hashlib.sha256(data).hexdigest() == expected, f'source drift: {path}'
    print('PASS 3 exact reviewed C++17 source digests')

def self_test():
    for bits in (0x3ff0000000000000,0xbff0000000000000,0x8000000000000000,0x7ff0000000000000,0x7ff8000000000001):
        lo, hi = bits & 0xffffffff, bits >> 32
        packed = ((hi << 32)|lo).to_bytes(8,'little')
        assert struct.unpack('<Q',struct.pack('<d',struct.unpack('<d',packed)[0]))[0] == bits
    assert float(0x3ff0000000000000) != struct.unpack('<d',bytes.fromhex('000000000000f03f'))[0]
    print('PASS 64-bit IEEE754 bit-pattern positive and numeric-conversion negative controls')

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe', type=Path)
    p.add_argument('--root', type=Path)
    args = p.parse_args()
    self_test()
    if args.root: verify_sources(args.root)
    if args.xbe: verify_xbe(args.xbe.read_bytes())

if __name__ == '__main__': main()
