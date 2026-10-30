#!/usr/bin/env python3
"""Verify 0x00220DD0 returns its first of five local out-arguments.

Five x86 LEA/PUSH pairs address distinct four-byte stack words.
The fourth formal call argument points to the lowest word at guest ESP+8.
MOV EAX,[ESP+8] immediately after the call returns that exact output.
CI only checks source invariants; original XBE is private and optional.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x220DF3, "8d54240c"),
    (0x220DF7, "52"),
    (0x220DF8, "8d442414"),
    (0x220DFC, "50"),
    (0x220DFD, "8d4c241c"),
    (0x220E01, "51"),
    (0x220E02, "8d542424"),
    (0x220E06, "52"),
    (0x220E07, "8d442418"),
    (0x220E0B, "50"),
    (0x220E0E, "56"),
    (0x220E0F, "e8ec301500"),
    (0x220E14, "8b442408"),
    (0x220E1D, "c3"),
)
SOURCE = "src/main_unclassified/band_0022/0x00220dd0.cpp"
MARKERS = (
    "uint32_t guest_first_output_word;",
    "FUN_00373f00(iVar2,0,0,&guest_first_output_word,auStack_8,auStack_c,auStack_10,auStack_14);",
    "return guest_first_output_word;",
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", nargs="?", type=Path)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    code = (args.root / SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        if marker not in code:
            raise SystemExit(f"missing guest C11 stack/return evidence: {marker}")
    if "stack0xffffffe8" in code or "unaff_ESI" in code:
        raise SystemExit("unresolved guest stack source/return alias")
    if args.xbe is None:
        print("PASS: 0x00220DD0 source-only guest output-return contract")
        return
    xbe = args.xbe.read_bytes()
    for address, signature in CHECKS:
        opcode = bytes.fromhex(signature)
        if xbe[address - 0x10000:address - 0x10000 + len(opcode)] != opcode:
            raise SystemExit(f"original Xbox x86 instruction mismatch at 0x{address:08X}")
    print(f"PASS: {len(CHECKS)} Xbox instruction signatures and one C11 return slot")
    print("Full guest register ABI, original resource callback, and native linking remain unverified")

if __name__ == "__main__":
    main()
