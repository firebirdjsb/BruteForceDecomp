#!/usr/bin/env python3
"""Check 0x001EB740/0x001EBA10 guest size-word stack addresses.

The original machine code overwrites the first incoming guest argument DWORD
with an immediate (0x80 or 0xA8), then passes its address to a virtual call.
Host argument aliasing and the actual Xbox virtual ABI remain unverified.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x001EB740, "56"), (0x001EB741, "8b742408"),
    (0x001EB74A, "8d4f18"), (0x001EB750, "ff5020"),
    (0x001EB755, "8d44240c"), (0x001EB75A, "83c71c"),
    (0x001EB760, "c744241480000000"), (0x001EB768, "ff5254"),
    (0x001EB770, "c20400"),
    (0x001EBA10, "56"), (0x001EBA11, "8b742408"),
    (0x001EBA1A, "8d4f18"), (0x001EBA20, "ff5024"),
    (0x001EBA25, "8d44240c"), (0x001EBA2A, "83c71c"),
    (0x001EBA30, "c7442414a8000000"), (0x001EBA38, "ff5248"),
    (0x001EBA40, "c20400"),
)
SOURCES = (
    ("src/main_unclassified/band_001e/0x001eb740.c", "0x80", "0x54"),
    ("src/main_unclassified/band_001e/0x001eba10.c", "0xa8", "0x48"),
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path, help="original private Xbox executable")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    for rel, imm, method in SOURCES:
        source = (args.repo / rel).read_text(encoding="utf-8")
        tokens = (
            f"uint32_t guest_size_word = UINT32_C({imm});",
            f"(*param_1 + {method}))(in_ECX + 0x1c,&guest_size_word)",
        )
        for token in tokens:
            if token not in source:
                raise SystemExit(f"{rel}: missing source invariant {token}")
        if "stack0x00000000" in source:
            raise SystemExit(f"{rel}: invalid unresolved stack source")
    if args.xbe is None:
        print("PASS: two size-word source contracts (original XBE not checked)")
        return
    data = args.xbe.read_bytes()
    for address, expected_hex in OPCODES:
        expected = bytes.fromhex(expected_hex)
        actual = data[address-0x10000:address-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"Original XBE opcode mismatch at 0x{address:08X}")
    print(f"PASS: {len(OPCODES)} original XBE opcode signatures and two C11 size-word contracts")
    print("Whole-function calling convention, guest memory and host linkage remain unverified")

if __name__ == "__main__":
    main()
