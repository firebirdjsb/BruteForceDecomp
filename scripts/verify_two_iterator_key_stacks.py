#!/usr/bin/env python3
"""Verify two iterator lookup sites initialize the same eight-byte C11 record.

The original XBE uses LEA of a two-DWORD local and initializes DWORD 0 to
the selector, DWORD 1 to zero immediately before the indirect lookup.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x0024D3E2, "8d4c2410"), # pointer to local iterator key
    (0x0024D3E9, "51"),       # pass pointer
    (0x0024D3EE, "89742414"), # first DWORD = incoming selector
    (0x0024D3F2, "c744241800000000"), # second DWORD = zero
    (0x0024D3FA, "e841c80200"), # call FUN_00279C40
    (0x0024D542, "8d4c2410"),
    (0x0024D549, "51"),
    (0x0024D54E, "89742414"),
    (0x0024D552, "c744241800000000"),
    (0x0024D55A, "e8e1c60200"),
)
SOURCES = (
    "src/main_unclassified/band_0024/0x0024d3c0.c",
    "src/main_unclassified/band_0024/0x0024d520.c",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    for rel in SOURCES:
        s = (a.repo / rel).read_text(encoding="utf-8")
        initial = "uStack_20 = param_2;\n    uStack_1c = 0;\n    piVar3 = (int *)FUN_00279c40(&uStack_20);"
        if initial not in s:
            raise SystemExit(f"{rel}: missing initialized guest key before first lookup")
        if "stack0xffffffd8" in s:
            raise SystemExit(f"{rel}: unresolved guest stack pointer")
    if a.xbe is None:
        print("PASS: two source-only iterator-key initialization contracts")
        return
    blob = a.xbe.read_bytes()
    for addr, hexcode in OPCODES:
        expected = bytes.fromhex(hexcode)
        actual = blob[addr-0x10000:addr-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"Original XBE mismatch at 0x{addr:08X}")
    print(f"PASS: {len(OPCODES)} original instruction signatures and 2 iterator-key records")
    print("No claim of cross-function linkage or complete native runtime equivalence")

if __name__ == "__main__":
    main()
