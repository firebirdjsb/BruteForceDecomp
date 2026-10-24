#!/usr/bin/env python3
"""Check original XBE dataflow for CRC callback alias, two stack slots, and field clears.

The regression tests instruction operands and 32-bit source storage only.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x001E1D7A, "8d442410"), # callback +0x3c takes &same local CRC
    (0x001E1D8A, "8d442410"), # callback +0x1c takes &same local CRC
    (0x001E1D9A, "8d442410"), # callback +0x50 takes &same local CRC
    (0x00222D39, "8d4c2410"), # first callback takes type input slot
    (0x00222D42, "89742414"), # zero type word after PUSH
    (0x00222D54, "8d44240c"), # second callback takes reserved local word
    (0x00222D5B, "89742410"), # zero reserved local word after PUSH
    (0x00222D62, "8b4c2414"), # read back type argument slot
    (0x00222D7A, "8b44240c"), # check local callback word
    (0x00222D93, "8d44240c"), # pass same local to vtable +0xdc
    (0x0023B325, "897304"),   # clear object field at +8
    (0x0023B328, "897308"),   # clear object field at +12
)
SOURCES = (
    ("src/main_unclassified/band_001e/0x001e1d00.c", (
        "(+ 0x3c))(&local_4)",
        "(+ 0x1c))(&local_4)",
        "(+ 0x50))(&local_4)",
    )),
    ("src/main_unclassified/band_0022/0x00222d30.c", (
        "uint32_t guest_aux_word = 0;",
        "(&guest_aux_word);",
        "if (param_1 != DAT_0046d064)",
        "if ((guest_aux_word != 0)",
    )),
    ("src/main_unclassified/band_0023/0x0023b2e0.c", (
        "thunk_FUN_00237ec0(in_ECX[2]);",
        "in_ECX[2] = 0;",
        "in_ECX[3] = 0;",
    )),
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--repo", type=Path, default=Path("."))
    args = parser.parse_args()
    xbe = args.xbe.read_bytes()
    for address, expected_hex in CHECKS:
        expected = bytes.fromhex(expected_hex)
        off = address - 0x10000
        if xbe[off:off+len(expected)] != expected:
            raise SystemExit(f"XBE mismatch at 0x{address:08x}")
    for rel, markers in SOURCES:
        source = (args.repo / rel).read_text()
        for marker in markers:
            if marker not in source:
                raise SystemExit(f"{rel}: missing evidence-preserving C11 token {marker}")
        if "stack0x" in source:
            raise SystemExit(f"{rel}: unresolved guest stack remains")
    print(f"PASS: {len(CHECKS)} original x86 opcode signatures and {len(SOURCES)} source contracts")
    print("Whole-function ABI, memory layout, and runtime behavior remain unverified.")

if __name__ == "__main__":
    main()
