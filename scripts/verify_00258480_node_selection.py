#!/usr/bin/env python3
"""Verify XBE node selection uses two distinct stack locals and one input word.

The original MOV/LEA pairs at 0x002584BA-0x002584D3 select either the
candidate node or the root/sentinel. The original RET 4 confirms an
incoming guest DWORD; its low word is OR-ed with the selected node's word.
Host register ABI for FUN_00281B40 remains unresolved.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x258480, "8b08"),
    (0x258487, "8d542408"),
    (0x25849B, "8b7c2408"),
    (0x2584BA, "8954240c"),
    (0x2584C5, "8d44240c"),
    (0x2584CB, "894c2410"),
    (0x2584CF, "8d442410"),
    (0x2584D3, "8b00"),
    (0x2584E7, "0fb74010"),
    (0x2584EB, "660b442410"),
    (0x2584F7, "89442410"),
    (0x258500, "e83b960200"),
    (0x258508, "c20400"),
)
SOURCE = "src/main_unclassified/band_0025/0x00258480.c"
INVARIANTS = (
    "FUN_00258480(uint32_t guest_argument_word)",
    "uint32_t guest_key_word;",
    "&guest_key_word);",
    "local_c[0] = puVar3;",
    "local_c[1] = puVar2;",
    "ppuVar5 = &local_c[1];",
    "ppuVar5 = &local_c[0];",
    "(uint16_t)guest_argument_word);",
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--root", type=Path, default=Path("."))
    a = ap.parse_args()
    source = (a.root / SOURCE).read_text(encoding="utf-8")
    compressed = "".join(source.split())
    for check in INVARIANTS:
        if "".join(check.split()) not in compressed:
            raise SystemExit(f"missing node/guest word contract: {check}")
    if "stack0x" in source:
        raise SystemExit("unresolved guessed guest stack pointer")
    if a.xbe is None:
        print("PASS: 0x00258480 source-only candidate/root/argument word contract")
        return
    blob = a.xbe.read_bytes()
    for addr, opcodes in OPCODES:
        expected = bytes.fromhex(opcodes)
        actual = blob[addr - 0x10000:addr - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"original XBE opcode mismatch at 0x{addr:08X}")
    print(f"PASS: {len(OPCODES)} original x86 instructions and 0x00258480 source contract")
    print("Native callback ABI and runtime equivalence are not verified")

if __name__ == "__main__":
    main()
