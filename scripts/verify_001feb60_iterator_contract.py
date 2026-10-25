#!/usr/bin/env python3
"""Verify register/output ownership of original Xbox iterator 0x001FEB60.

Checks source ABI and exact original instructions when a private XBE is passed.
This is evidence for later caller reconstruction, not a native ABI claim.
"""
import argparse
import hashlib
from pathlib import Path

SOURCE = "src/main_unclassified/band_001f/0x001feb60.c"
SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = (
    (0x001FEB60, "c70300000000"), # output word *EBX = 0
    (0x001FEB66, "8b08"),         # iterator word from *EAX
    (0x001FEB68, "3b4f30"),       # compare list sentinel EDI+0x30
    (0x001FEB72, "8b4a08"),       # node payload from +8
    (0x001FEB75, "8b6e04"),       # filter key 1 from ESI+4
    (0x001FEB7D, "8b6e08"),       # filter key 2 from ESI+8
    (0x001FEB85, "8b6914"),       # signed range current
    (0x001FEB88, "3b6910"),       # signed range limit
    (0x001FEB8B, "7c0f"),         # signed less-than
    (0x001FEB91, "8910"),         # advance *EAX
    (0x001FEBA1, "890b"),         # write matched payload to *EBX
    (0x001FEBA7, "8908"),         # advance *EAX on match
    (0x001FEBA9, "b001"),         # AL success
)
TOKENS = (
    "*unaff_EBX = 0;",
    "if (*in_EAX != *(int *)(unaff_EDI + 0x30))",
    "*(int *)(unaff_ESI + 4)",
    "*(int *)(unaff_ESI + 8)",
    "*unaff_EBX = *(undefined4 *)(*in_EAX + 8);",
    "*in_EAX = *(int *)*in_EAX;",
)
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", nargs="?", type=Path)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    for token in TOKENS:
        if token not in source:
            raise SystemExit(f"missing original iterator contract: {token}")
    if args.xbe:
        image = args.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != SHA:
            raise SystemExit("original XBE SHA-256 mismatch")
        for address, hex_bytes in OPCODES:
            expected = bytes.fromhex(hex_bytes)
            actual = image[address - 0x10000:address - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"original instruction mismatch at 0x{address:08x}")
    print("PASS: original iterator output, filter, advance, and signed range contract")
    print("NOTE: callers' register ABI and host guest-pointer translation remain unverified")

if __name__ == "__main__":
    main()
