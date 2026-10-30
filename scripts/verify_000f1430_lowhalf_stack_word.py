#!/usr/bin/env python3
"""Verify original MOV WORD [ESP+0x3C],BX writes *only* low 16 bits.

In FUN_000F1430, BX is zero before the original halfword write.
The high halfword of the 32-bit guest stack slot is not read by the
original instruction; a host C read/shift of an uninitialized 32-bit
word would introduce undefined behavior instead of preserving that
operand contract.  Optional private XBE proof covers exact opcodes.
"""
import argparse
from pathlib import Path

X86 = (
    (0x000F14D8, "33db"),          # XOR EBX,EBX
    (0x000F14DA, "56"),            # PUSH ESI
    (0x000F14DB, "c744245007000000"), # guest length 7
    (0x000F14E3, "895c244c"),      # guest length/count DWORD zero
    (0x000F14E7, "66895c243c"),    # MOV WORD [ESP+0x3c],BX
    (0x000F14F5, "8d4c2438"),      # pass local storage address
    (0x000F1501, "837c244c08"),    # compare guest string length against 8
)
SOURCE = "src/main_unclassified/band_000f/0x000f1430.cpp"
TOKENS = (
    '#include "bf_x86_word_lanes.h"',
    "bf_x86_word_store_byte(&uStack_18,0U,UINT8_C(0));",
    "bf_x86_word_store_byte(&uStack_18,1U,UINT8_C(0));",
    "puVar12 = (undefined4 *)(uintptr_t)uStack_18;",
    "if (uStack_18 == 0) goto LAB_000f1544;",
)
def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path, nargs="?", help="original private Xbox executable")
    p.add_argument("--repo", type=Path, default=Path("."))
    a = p.parse_args()
    source = (a.repo / SOURCE).read_text(encoding="utf-8")
    for token in TOKENS:
        if token not in source:
            raise SystemExit("Missing original-width C11 storage invariant: " + token)
    if "uStack_18._2_2_" in source:
        raise SystemExit("Illegal inferred subpiece read remains")
    if a.xbe is None:
        print("PASS: source-only guest low-halfword preservation; XBE not checked")
        return
    image = a.xbe.read_bytes()
    for addr, opcode in X86:
        expected = bytes.fromhex(opcode)
        actual = image[addr-0x10000:addr-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"Original XBE mismatch at 0x{addr:08X}: {actual.hex()} != {opcode}")
    print(f"PASS: {len(X86)} original Xbox instruction signatures and 2 byte stores")
    print("Native host calling convention, guest memory mapping, and complete SSE behavior remain unverified.")

if __name__ == "__main__":
    main()
