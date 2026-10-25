#!/usr/bin/env python3
"""Verify guest argument-2 byte stores in original Xbox FUN_000ECDC0.

Six AL/CL-to-argument-byte stores occur at the same incoming guest stack
DWORD despite intermittent PUSH ESI and multiple call-site PUSH sequences.
EBX preserves the input descriptor pointer; the host pointer must not be
overwritten with an 8-bit success flag. The optional XBE check establishes
original instruction bytes, not a complete native calling convention.
"""
import argparse
from pathlib import Path

X86 = (
    (0x000ECDC1, "8b5c240c"),         # EBX <- second incoming DWORD
    (0x000ECDC6, "8b6c2414"),         # EBP <- third incoming DWORD
    (0x000ECDF3, "88442414"),         # [guest argument 2] <- AL
    (0x000ECE2B, "c644241801"),       # [guest argument 2] <- 1 (PUSH ESI)
    (0x000ECE95, "884c2418"),         # [guest argument 2] <- CL
    (0x000ECEEC, "884c2418"),         # [guest argument 2] <- CL
    (0x000ECF29, "884c2418"),         # [guest argument 2] <- CL
    (0x000ECF65, "c644241401"),       # [guest argument 2] <- 1 (after POP ESI)
    (0x000ECF82, "8d442418"),         # address of guest argument 2 for helper
    (0x000ECF8F, "8d442428"),         # original guest argument 3 forwarded by address
    (0x000ECFA0, "e87b021200"),       # helper FUN_0020D220
    (0x000ECFCC, "8a442414"),         # final low-byte return
    (0x000ECFD3, "c20c00"),           # three incoming guest DWORD arguments
)
SOURCE = "src/main_unclassified/band_000e/0x000ecdc0.c"
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?", help="original, private Brute Force Xbox executable")
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    source = (a.repo / SOURCE).read_text(encoding="utf-8")
    expected = (
        '#include "bf_x86_word_lanes.h"',
        'uint32_t guest_arg2_word = (uint32_t)(uintptr_t)param_2;',
        '(char)(uint8_t)guest_arg2_word',
        'FUN_000ee450(param_1,&param_3,piVar2);',
        '(char *)&guest_arg2_word,2)',
    )
    for token in expected:
        if token not in source:
            raise SystemExit(f"guest flag source invariant missing: {token}")
    if source.count("guest_arg2_word = bf_x86_word_replace_lo8(") != 6:
        raise SystemExit("guest flag source must contain exactly six byte stores")
    if "param_2._0_1_" in source or "(char)param_2" in source:
        raise SystemExit("Ghidra partial host-pointer storage remains")
    if a.xbe is None:
        print("PASS: C11 guest argument byte storage invariants; original XBE not checked")
        return
    image = a.xbe.read_bytes()
    for addr, hexbytes in X86:
        expected = bytes.fromhex(hexbytes)
        actual = image[addr - 0x10000:addr - 0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"original x86 opcode mismatch 0x{addr:08X}: {actual.hex()} != {hexbytes}")
    print(f"PASS: {len(X86)} original XBE instruction signatures and six guest argument byte writes")
    print("Guest-ESI implicit callee contracts and native host ABI remain unverified.")

if __name__ == "__main__":
    main()
