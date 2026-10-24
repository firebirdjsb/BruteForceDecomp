#!/usr/bin/env python3
"""Check original XBE SIMD copy instructions and syntax-only split slot declarations."""
import argparse
import hashlib
from pathlib import Path

EXPECTED_XBE = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Addresses and bytes of key original instructions. VA maps to file offset VA-0x10000.
INSTRUCTIONS = (
    (0x0006C203, "b998584a00"),
    (0x0006C208, "0f1101"),
    (0x0006C212, "b8a8584a00"),
    (0x0006C217, "0f1100"),
    (0x0006C221, "bab8584a00"),
    (0x0006C22A, "0f1102"),
    (0x0006C236, "b9c8584a00"),
    (0x0006C23B, "0f1101"),
    (0x0006C30B, "ba58584a00"),
    (0x0006C31A, "b968584a00"),
    (0x0006C329, "b878584a00"),
    (0x0006C33E, "ba88584a00"),
    (0x000D2ECD, "c744240804d04600"),
    (0x000D2ED9, "0f1000"),
    (0x000D2EE1, "0f104810"),
    (0x000D2EE9, "0f1102"),
    (0x000D2EF1, "0f114a10"),
)
SLOTS = (
    ("src/main_unclassified/band_0006/0x0006c0d0.c", 0x004A589C, 0x004A58D4),
    ("src/main_unclassified/band_0006/0x0006c2c0.c", 0x004A585C, 0x004A5894),
    ("src/main_unclassified/band_000d/0x000d2e20.c", 0x0046D008, 0x0046D020),
)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("repo", type=Path)
    a = p.parse_args()
    data = a.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != EXPECTED_XBE:
        p.error("original XBE SHA-256 mismatch")
    for address, hexbytes in INSTRUCTIONS:
        expected = bytes.fromhex(hexbytes)
        actual = data[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL: {address:#x}: {actual.hex()} != {hexbytes}")
    total = 0
    for source, start, end in SLOTS:
        content = (a.repo / source).read_text(encoding="utf-8")
        for address in range(start, end + 1, 4):
            declaration = f"extern uint32_t uRam{address:08x};"
            if declaration not in content:
                raise SystemExit(f"FAIL: {source}: missing {declaration}")
            total += 1
    print(f"PASS: {len(INSTRUCTIONS)} original x86 instructions and {total} split guest DWORD declarations")
    print("No claim of C11 compilation, cross-function linking, guest-memory mapping, or 1:1 runtime equivalence.")

if __name__ == "__main__":
    main()
