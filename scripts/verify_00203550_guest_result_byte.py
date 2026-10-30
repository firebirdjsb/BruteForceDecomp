#!/usr/bin/env python3
"""Verify 0x00203550's guest incoming-argument low-byte storage.

The original 32-bit argument slot is independently used as a mutable
single-byte match flag. Preserving this is different from overwriting
the host pointer to the caller's data buffer.

Source-only CI checks storage invariants; optional private XBE verifies
original instructions. No complete native ABI equivalence is claimed.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x00203551, "8b5c2408"),    # first incoming argument mode -> EBX
    (0x00203556, "8b6c2414"),    # data pointer -> EBP
    (0x0020355B, "8b742414"),    # field identifier -> ESI
    (0x00203565, "e846b8ffff"),  # original fallback helper
    (0x0020356C, "8844241c"),    # AL saved to low byte of third stack word
    (0x00203594, "8844241c"),
    (0x002035CF, "8844241c"),
    (0x0020360F, "8844241c"),
    (0x00203647, "8844241c"),
    (0x00203677, "8844241c"),
    (0x002036AE, "8844241c"),
    (0x002036E0, "8844241c"),
    (0x00203714, "8844241c"),
    (0x00203738, "8844241c"),
    (0x0020375C, "8844241c"),
    (0x0020377E, "c644241c01"),  # first immediate byte store
    (0x002037A6, "8a442430"),    # reload the byte after helper
    (0x002037CF, "c644241c01"),  # second immediate byte store
    (0x00203819, "e832fbffff"),  # helper receives pointer to argument slot
    (0x0020381E, "8a44241c"),    # AL returned from same guest slot
    (0x00203826, "c20c00"),      # RET 12 for three guest DWORD arguments
)
SOURCE = "src/main_unclassified/band_0020/0x00203550.cpp"

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    text = (args.repo / SOURCE).read_text(encoding="utf-8")
    for token in (
        '#include "bf_x86_word_lanes.h"',
        "bf_x86_word_store_byte(&param_3,0U,(uint8_t)cVar6);",
        "bf_x86_word_store_byte(&param_3,0U,UINT8_C(0));",
        "return (char)bf_x86_word_load_byte(&param_3,0U);",
        "FUN_00203350(uVar3,&param_1,param_2,pbVar5,&param_3);",
    ):
        if token not in text:
            raise SystemExit(f"Missing guest byte contract: {token!r}")
    if text.count("bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));") != 12:
        raise SystemExit("Expected exactly 12 recovered guest-result byte stores")
    if "param_3._0_1_" in text or "(char)param_3" in text:
        raise SystemExit("Unresolved Ghidra partial-pointer access remains")
    if args.xbe is None:
        print("PASS: 0x00203550 source-only byte lane contract")
        return
    data = args.xbe.read_bytes()
    for address, hexcode in OPCODES:
        expected = bytes.fromhex(hexcode)
        observed = data[address - 0x10000:address - 0x10000 + len(expected)]
        if expected != observed:
            raise SystemExit(f"Original XBE mismatch 0x{address:08X}: {observed.hex()}")
    print(f"PASS: {len(OPCODES)} original x86 opcode signatures and byte-source invariants")
    print("NOTE: host pointer mapping and full x86 callback ABI not yet verified")

if __name__ == "__main__":
    main()
