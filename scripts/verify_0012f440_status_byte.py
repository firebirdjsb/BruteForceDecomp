#!/usr/bin/env python3
"""Verify one x86 guest stack status BYTE, not a whole-function ABI.

The original XBE writes byte [ESP+0x0F] as 0/1 then reloads and tests it.
Ghidra rendered this as the high-byte subpiece of uStack_54.
Call with --xbe for original opcode verification; the GitHub CI has no XBE.
"""
import argparse
from pathlib import Path

SOURCE = "src/main_unclassified/band_0012/0x0012f440.cpp"
EXPECTED = (
    (0x0012F5B1, "c644240f00"),       # MOV BYTE PTR [ESP+0x0F],0
    (0x0012F63A, "c644240f01"),       # MOV BYTE PTR [ESP+0x0F],1
    (0x0012F6E3, "8a44240f"),         # MOV AL,BYTE PTR [ESP+0x0F]
    (0x0012F6E7, "84c0"),             # TEST AL,AL
    (0x0012F6E9, "0f84c7feffff"),     # JE 0x0012F5B6
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    markers = (
        "uStack_54 = uStack_54 & 0xffffff;",
        "uStack_54 = CONCAT13(1,(undefined3)uStack_54);",
        "while ((uint8_t)(uStack_54 >> 24) == 0);",
    )
    for token in markers:
        if token not in source:
            raise SystemExit("missing source scalar lane contract: " + token)
    if "uStack_54._3_1_" in source:
        raise SystemExit("obsolete Ghidra member syntax remains")
    for low in (0, 1, 0x123456, 0xffffff):
        for high in (0, 1, 0x80, 0xff):
            word = ((high & 0xff) << 24) | low
            assert ((word >> 24) & 0xff) == high
            assert (word & 0xffffff) == low
    if args.xbe:
        data = args.xbe.read_bytes()
        for address, opcode in EXPECTED:
            expected = bytes.fromhex(opcode)
            offset = address - 0x10000
            actual = data[offset:offset + len(expected)]
            if actual != expected:
                raise SystemExit(
                    f"original XBE mismatch at 0x{address:08X}: {actual.hex()} != {opcode}"
                )
        print("PASS: five original x86 opcode signatures and C11 status lane")
    else:
        print("PASS: source high-byte contract only (original XBE not present in CI)")
    print("Whole-function runtime and Xbox calling convention remain unverified.")


if __name__ == "__main__":
    main()
