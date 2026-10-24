#!/usr/bin/env python3
"""Verify Xbox 0x002E8F50 byte-serializer argument-slot instructions.

Does not establish host binary equivalence or the virtual callback prototype.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x002E8F5F, "668b07"),         # MOV AX,WORD [EDI]
    (0x002E8F68, "8ac4"),           # MOV AL,AH: high byte of 16-bit input
    (0x002E8F6A, "0c80"),           # OR AL,0x80
    (0x002E8F6C, "8d4c240c"),       # LEA ECX,[ESP+0xc]: caller argument slot
    (0x002E8F70, "8844240c"),       # MOV BYTE [ESP+0xc],AL
    (0x002E8F80, "8a17"),           # MOV DL,BYTE [EDI]
    (0x002E8F8B, "88542410"),       # MOV BYTE [ESP+0x10],DL after PUSH
    (0x002E8F97, "8d44240c"),       # LEA EAX,[ESP+0xc]: same argument slot
    (0x002E8F9B, "66c7070000"),     # MOV WORD [EDI],0
    (0x002E8FAC, "8a4c240c"),       # MOV CL,BYTE [ESP+0xc] (callback output)
    (0x002E8FB0, "84c9"),           # TEST CL,CL (signed high-bit)
    (0x002E8FB4, "80e17f"),         # AND CL,0x7f
    (0x002E8FC2, "668917"),         # MOV WORD [EDI],DX
    (0x002E8FCA, "660fb654240c"),   # MOVZX DX,BYTE [ESP+0xc]
    (0x002E8FD0, "660917"),         # OR WORD [EDI],DX
)
SOURCE = "src/main_unclassified/band_002e/0x002e8f50.c"
TOKENS = (
    "uint32_t guest_io_word;",
    "guest_io_word = (uint32_t)(uintptr_t)param_1;",
    "((int8_t)(uint8_t)guest_io_word < 0)",
    "guest_io_word & UINT32_C(0xffffff00)",
    "*param_1 |= (uint16_t)(uint8_t)guest_io_word;",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path)
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    original = args.xbe.read_bytes()
    for address, hexcode in CHECKS:
        expected = bytes.fromhex(hexcode)
        offset = address - 0x10000
        actual = original[offset:offset + len(expected)]
        if actual != expected:
            raise SystemExit(f"Original XBE mismatch at 0x{address:08x}: {actual.hex()}")
    source = (args.repo / SOURCE).read_text(encoding="utf-8")
    for token in TOKENS:
        if token not in source:
            raise SystemExit("Guest serializer source invariant missing: " + token)
    if "stack0x00000000" in source or "unaff_retaddr" in source:
        raise SystemExit("Unresolved guest argument or return address remains")
    print(f"PASS: {len(CHECKS)} x86 opcodes and C11 byte slot invariants")

if __name__ == "__main__":
    main()
