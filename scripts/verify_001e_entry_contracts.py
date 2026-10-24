#!/usr/bin/env python3
"""Check selected Brute Force original Xbox x86 contract bytes.

The XBE is private evidence and must never be committed. This test checks
machine-code facts only; it does not claim C11 semantic equivalence.
"""
import argparse
import hashlib
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
IMAGE_BASE_DELTA = 0x10000

# Entry opcode sequences confirmed against the original XBE.
INSTRUCTIONS = {
    0x001E1B30: bytes.fromhex("83ec5c8b41048b49085333db3bc155"),
    0x001E1DC0: bytes.fromhex("83ec408b41048b49085333db3bc156"),
    0x001E1F40: bytes.fromhex("83f906"),
}

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path, help="Original user-owned default.xbe")
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_SHA256:
        raise SystemExit(f"XBE hash mismatch: {digest}")
    for va, expected in INSTRUCTIONS.items():
        offset = va - IMAGE_BASE_DELTA
        actual = data[offset:offset + len(expected)]
        if actual != expected:
            raise SystemExit(f"Instruction mismatch at 0x{va:08X}: {actual.hex()}")
        print(f"0x{va:08X}: {actual.hex()} OK")
    print("Original XBE and entry contract bytes verified; C11 behavior NOT verified.")

if __name__ == "__main__":
    main()
