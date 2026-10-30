#!/usr/bin/env python3
"""Verify guest stack word operations in FUN_002e9720; not a full ABI proof."""
import argparse
from pathlib import Path

CHECKS = (
    (0x002E973E, "668b07"),       # mov ax,[edi]: 16-bit input
    (0x002E9741, "89442418"),     # write zero-extended eax to guest stack
    (0x002E9745, "8d442418"),     # address of that stack word
    (0x002E9751, "8b0f"),         # mov ecx,[edi]: 32-bit value
    (0x002E9755, "894c2408"),     # write guest stack local
    (0x002E975D, "8d442408"),     # address of guest stack local
    (0x002E978E, "0fb7542408"),   # movzx edx,word [esp+8]
    (0x002E9793, "8911"),         # mov [ecx],edx
    (0x002E979D, "8902"),         # mov [edx],eax
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path)
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    data = args.xbe.read_bytes()
    for addr, hexcode in CHECKS:
        want = bytes.fromhex(hexcode)
        if data[addr-0x10000:addr-0x10000+len(want)] != want:
            raise SystemExit(f"XBE instruction mismatch at 0x{addr:08x}")
    src = (args.repo / "src/main_unclassified/band_002e/0x002e9720.cpp").read_text()
    for token in ("uint32_t guest_input_word = (uint32_t)*param_2;", "guest_value_word = *(const uint32_t *)param_2;", "*param_1 = (uint16_t)local_4;", "*(uint32_t *)param_2 = (uint32_t)iVar1;"):
        if token not in src:
            raise SystemExit("missing verified storage source: " + token)
    if "stack0xfffffff4" in src or "unaff_retaddr" in src:
        raise SystemExit("unresolved guest stack/return alias")
    print("PASS: nine original guest instruction signatures and C11 source invariants")
if __name__ == "__main__":
    main()
