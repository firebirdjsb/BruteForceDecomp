#!/usr/bin/env python3
"""Regression checks for three Xbox C11 guest-stack storage repairs.

Evidence is opcode exact, and source tokens are checked separately.
No whole-function 1:1 or host ABI claim is implied.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x002E8D88, "6a01"),             # PUSH 1 (count)
    (0x002E8D8A, "8d542418"),         # LEA EDX,[ESP+0x18] (out-word)
    (0x002E8D90, "c744242000000000"), # MOV DWORD [ESP+0x20],0
    (0x002E8DA0, "8b4c2420"),         # MOV ECX,[ESP+0x20] readback
    (0x002E8DA7, "890c98"),           # MOV [EAX+EBX*4],ECX
    (0x0027BF3A, "b9813e5e0b"),       # MOV ECX,second tag
    (0x0027BF4A, "8d44240c"),         # LEA EAX,[ESP+0x0c]
    (0x0027BF56, "894c2410"),         # MOV [ESP+0x10],ECX after push
    (0x0023B2E0, "51"),               # PUSH ECX seeds reserved slot
    (0x0023B30F, "8d542410"),         # LEA EDX,[ESP+0x10] (same reserved slot)
    (0x0023B314, "e8a7060000"),       # CALL 0x0023B9C0
)
SOURCES = (
    ("src/main_unclassified/band_002e/0x002e8d30.cpp", (
        "uint32_t guest_read_word;",
        "guest_read_word = 0;",
        "FUN_002e8b40(param_1,&guest_read_word,1)",
        "uVar1 * 4) = guest_read_word;",
    )),
    ("src/main_unclassified/band_0027/0x0027bed0.cpp", (
        "local_4 = 0x0b5e3e81;",
        "FUN_00237ff0(&local_4);",
    )),
    ("src/main_unclassified/band_0023/0x0023b2e0.cpp", (
        "uint32_t guest_constructor_context = (uint32_t)(uintptr_t)in_ECX;",
        "FUN_0023b9c0(&guest_constructor_context,uVar2,puVar1);",
    )),
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, help="the unmodified original Xbox XBE")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    image = args.xbe.read_bytes()
    for address, hexbytes in CHECKS:
        want = bytes.fromhex(hexbytes)
        actual = image[address - 0x10000:address - 0x10000 + len(want)]
        if actual != want:
            raise SystemExit(f"XBE signature mismatch at {address:08X}: {actual.hex()}")
    for path, invariants in SOURCES:
        source = (args.repo / path).read_text(encoding="utf-8")
        for invariant in invariants:
            if invariant not in source:
                raise SystemExit(f"{path}: missing source invariant {invariant}")
        if "stack0xfffffff8" in source or "stack0xfffffff4" in source:
            raise SystemExit(f"{path}: unresolved guest stack reference remains")
    print(f"PASS: {len(CHECKS)} original Xbox instruction signatures; {len(SOURCES)} source slots")
    print("NOTE: full callback ABI, guest pointer mapping, and native linking unverified")

if __name__ == "__main__":
    main()
