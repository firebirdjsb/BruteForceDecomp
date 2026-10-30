#!/usr/bin/env python3
"""Validate the C11 0x0021FD80 byte-lane / AL-result repair.

Original Xbox x86 instructions write AL into the low byte of the third
incoming stack argument on early paths.  After helper calls, they reload
that byte, but subsequent branches only set AL for the return, WITHOUT
writing the guest argument.  These are different storage identities.

Source-only mode works in CI.  Pass the private original XBE to check
all opcode signatures. Neither mode verifies full native host ABI.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x0021FD81, "8b5c2408"),    # first arg (mode) from guest stack
    (0x0021FD86, "8b6c2414"),    # EBP = data pointer / third arg
    (0x0021FD8B, "8b742414"),    # ESI = identifier / second arg
    (0x0021FD95, "e886fef3ff"),  # fallback helper
    (0x0021FD9C, "8844241c"),    # save low AL in incoming arg DWORD
    (0x0021FDC2, "8844241c"),    # early match: stack byte = 1
    (0x0021FDF0, "8844241c"),
    (0x0021FE1E, "8844241c"),
    (0x0021FE48, "8844241c"),
    (0x0021FE72, "8844241c"),
    (0x0021FE9A, "c644241c01"),  # early match: immediate byte write
    (0x0021FEE3, "8a442434"),    # reload modified incoming stack byte
    (0x0021FF12, "b001"),        # late match: MOV AL,1 only
    (0x0021FF38, "b001"),
    (0x0021FF56, "b001"),
    (0x0021FF65, "b001"),
    (0x0021FF6B, "c20c00"),      # RET 12: three original DWORD arguments
)
SOURCE = "src/main_unclassified/band_0021/0x0021fd80.cpp"

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?", help="original private Xbox XBE")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    body = (args.repo / SOURCE).read_text(encoding="utf-8")
    for token in (
        '#include "bf_x86_word_lanes.h"',
        "bf_x86_word_store_byte(&param_3,0U,(uint8_t)cVar5);",
        "bf_x86_word_store_byte(&param_3,0U,UINT8_C(0));",
        "return_byte = bf_x86_word_load_byte(&param_3,0U);",
        "return (char)return_byte;",
    ):
        if token not in body:
            raise SystemExit(f"Missing byte/AL contract: {token}")
    if body.count("bf_x86_word_store_byte(&param_3,0U,UINT8_C(1));") != 6:
        raise SystemExit("Early byte-store count must remain exactly six")
    if body.count("return_byte = UINT8_C(1);") != 3:
        raise SystemExit("Late AL-only result count must remain exactly three")
    if "param_3._0_1_" in body:
        raise SystemExit("Ghidra partial pointer field remains")
    if args.xbe is None:
        print("PASS: 0x0021FD80 source-only byte-lane/AL separation")
        return
    image = args.xbe.read_bytes()
    for address, expected_hex in OPCODES:
        expect = bytes.fromhex(expected_hex)
        found = image[address - 0x10000:address - 0x10000 + len(expect)]
        if found != expect:
            raise SystemExit(f"XBE signature mismatch at {address:08X}: {found.hex()}")
    print(f"PASS: {len(OPCODES)} original XBE instructions and C11 guest byte-lane contract")
    print("NOTE: calling conventions and guest memory mapping not fully verified")

if __name__ == "__main__":
    main()
