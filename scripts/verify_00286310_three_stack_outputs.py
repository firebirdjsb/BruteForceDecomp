#!/usr/bin/env python3
"""Recover three guest DWORD slots and 3-argument x86 callback at 0x00286310.

Evidence is tied to the original Xbox XBE; CI source-only checks are not
original-instruction verification or proof of guest ABI/host memory equivalence.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x00286310, "83ec0c"),      # SUB ESP,0x0c
    (0x00286319, "8b6c2418"),    # saved second incoming out pointer in EBP
    (0x0028631F, "33f6"),        # XOR ESI,ESI
    (0x00286322, "8d542414"),    # address of count at entry ESP-8
    (0x00286329, "8974242c"),    # clear second stack arg word after EBP saved
    (0x00286330, "ff513c"),      # +0x3c GetCount-like virtual call
    (0x00286337, "8b442410"),    # read guest count
    (0x00286341, "8b442420"),    # read guest temporary interface
    (0x0028635B, "8d4c2424"),    # address of temp interface
    (0x00286364, "ff5240"),      # +0x40 virtual callback
    (0x0028636B, "8b13"),        # record word from implicit guest EBX
    (0x00286372, "89542414"),    # place record word at entry ESP-4
    (0x0028637B, "8d542410"),    # address of received interface at entry ESP-12
    (0x00286382, "8d542420"),    # address of record word
    (0x00286389, "89742420"),    # clear received interface output word
    (0x00286390, "ff5124"),      # +0x24 read callback
    (0x002863C4, "c20c00"),      # RET 12, three guest stack arguments
    (0x002863CB, "8b442420"),    # read temp interface on success
    (0x002863CF, "894500"),      # write first caller out pointer
    (0x002863D8, "8b4c2424"),    # read third incoming caller out pointer
    (0x002863E4, "8901"),        # write second caller out pointer
    (0x002863E9, "ff5104"),      # AddRef received interface
)
SOURCE = "src/main_unclassified/band_0028/0x00286310.c"
TOKENS = (
    "FUN_00286310(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)",
    "int32_t guest_count;",
    "uint32_t guest_current_interface_word = 0;",
    "uint32_t guest_received_interface_word = 0;",
    "uint32_t guest_record_word;",
    "guest_record_word = (uint32_t)*in_EBX;",
    "(DAT_004432fc,2,&guest_count)",
    "(DAT_004432fc,2,index,&guest_current_interface_word,0)",
    "(DAT_004432fc,2,&guest_record_word,1,",
    "&guest_received_interface_word,guest_current_interface_word)",
    "*param_2 = guest_current_interface_word;",
    "*param_3 = guest_received_interface_word;",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?", help="private original Xbox executable")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    source = (args.repo / SOURCE).read_text(encoding="utf-8")
    for marker in TOKENS:
        if marker not in source:
            raise SystemExit("missing guest stack contract: " + marker)
    if "stack0xffffffec" in source or "int32_t guest_count = 0;" in source:
        raise SystemExit("guest storage alias/init is not original")
    if args.xbe is None:
        print("PASS: 0x00286310 C11 guest stack source contract only")
        return
    xbe = args.xbe.read_bytes()
    for address, hexbytes in CHECKS:
        expected = bytes.fromhex(hexbytes)
        off = address - 0x10000
        actual = xbe[off:off + len(expected)]
        if actual != expected:
            raise SystemExit(
                f"original XBE mismatch at 0x{address:08x}: {actual.hex()} != {hexbytes}"
            )
    print(f"PASS: {len(CHECKS)} x86 opcodes and distinct guest callback stack words")
    print("NOT VERIFIED: original implicit EBX delivery or native platform callback ABI")

if __name__ == "__main__":
    main()
