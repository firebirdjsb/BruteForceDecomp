#!/usr/bin/env python3
"""Verify two original Xbox formatter vararg stack addresses; no host pointer inference."""
import argparse
import hashlib
from pathlib import Path

SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS = (
    (0x002EA9C1, "8d4514"),
    (0x002EA9C4, "50"),
    (0x002EA9C5, "ff7510"),
    (0x002EAA91, "8d4510"),
    (0x002EAA94, "50"),
    (0x002EAA95, "ff750c"),
)
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != SHA256:
        parser.error("unexpected XBE")
    for address, hexbytes in CHECKS:
        expected = bytes.fromhex(hexbytes)
        actual = data[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"opcode mismatch at {address:#x}: {actual.hex()}")
    print("PASS: six original x86 formatter vararg instruction signatures")

if __name__ == "__main__":
    main()
