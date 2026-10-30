#!/usr/bin/env python3
"""Verify register/output ownership of original Xbox iterator 0x001FEB60.

Checks source ABI and exact original instructions when a private XBE is passed.
This is evidence for later caller reconstruction, not a native ABI claim.
"""
import argparse
import hashlib
from pathlib import Path

SOURCE = "src/main_unclassified/band_001f/0x001feb60.cpp"
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
    # 0x001FF0F0 caller: ESI=filter, EBX=output, EAX=cursor, EDI=owner.
    (0x001FF116, "8bb42408010000"),
    (0x001FF11E, "89442414"),
    (0x001FF122, "8d5c2410"),
    (0x001FF126, "8d442414"),
    (0x001FF12A, "8bfd"),
    (0x001FF12C, "e82ffaffff"),
    (0x001FF140, "8b7c2410"),
    # 0x002058C0 caller: same register layout, different frame size.
    (0x002058FC, "8b742418"),
    (0x00205901, "89442414"),
    (0x00205905, "8d5c2410"),
    (0x00205909, "8d442414"),
    (0x0020590D, "8bfd"),
    (0x0020590F, "e84c92ffff"),
    (0x00205920, "8b742410"),
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
    callers = (
        ("src/main_unclassified/band_001f/0x001ff0f0.cpp", "FUN_001feb60()"),
        ("src/main_unclassified/band_0020/0x002058c0.cpp", "FUN_001feb60()"),
    )
    for path, call in callers:
        if call not in (args.root / path).read_text(encoding="utf-8"):
            raise SystemExit(f"iterator call missing in {path}")
    if args.xbe:
        image = args.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != SHA:
            raise SystemExit("original XBE SHA-256 mismatch")
        for address, hex_bytes in OPCODES:
            expected = bytes.fromhex(hex_bytes)
            actual = image[address - 0x10000:address - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"original instruction mismatch at 0x{address:08x}")
    print("PASS: iterator and both caller register setup / output reads")
    print("NOTE: callers' register ABI and host guest-pointer translation remain unverified")

if __name__ == "__main__":
    main()
