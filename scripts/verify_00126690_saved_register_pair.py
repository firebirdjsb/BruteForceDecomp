#!/usr/bin/env python3
"""Check the adjacent saved-EDI / saved-ESI guest stack words in 0x00126690.

Without the original XBE, only the source storage contract is checked.
Original x86 implicit register delivery to native PC functions remains unresolved.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x00126690, "83ec08"),       # SUB ESP,8
    (0x00126699, "57"),           # PUSH EDI, first word in 2-DWORD pair
    (0x001266A3, "53"),           # PUSH EBX
    (0x001266A4, "89742408"),     # MOV [ESP+8],ESI, next word
    (0x001266A8, "33ff"),         # XOR EDI,EDI
    (0x001266B7, "8d442404"),     # LEA EAX,[ESP+4], address of saved EDI
    (0x001266BB, "50"),           # PUSH EAX
    (0x001266BE, "e88d270500"),   # CALL 0x00178E50
    (0x001266C3, "83c404"),       # caller removes address argument
    (0x001266C6, "8bf8"),         # MOV EDI,EAX
    (0x001266CE, "89be20080000"),# MOV [ESI+0x820],EDI
    (0x001266E3, "c744241800000000"), # guest first argument word <- 0
    (0x00126703, "d95c2414"),   # FSTP m32fp -> same guest stack word
    (0x00126707, "8b442414"),   # read exact 32-bit float bits into EAX
    (0x00126714, "50"),         # PUSH raw 32-bit argument
    (0x0012671D, "e8dea90100"), # CALL FUN_00141100
    (0x00126729, "5f"),           # POP original saved EDI
    (0x0012672D, "c20800"),       # RET 8
)
SOURCE = "src/main_unclassified/band_0012/0x00126690.c"
REQUIRED = (
    "int unaff_EDI;",
    "int32_t saved_edi;",
    "int32_t adjacent_esi;",
    "} guest_stack_words = {unaff_EDI,unaff_ESI};",
    "sizeof(guest_stack_words) == 8",
    "FUN_00178e50(&guest_stack_words.saved_edi)",
    "uint32_t guest_float_arg_word;",
    "guest_float_arg_word = 0;",
    "memcpy(&guest_float_arg_word,&guest_float_scalar,sizeof guest_float_arg_word);",
    "FUN_00141100(guest_float_arg_word);",
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?", help="original private Xbox executable")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    text = (args.repo / SOURCE).read_text(encoding="utf-8")
    for expected in REQUIRED:
        if expected not in text:
            raise SystemExit("C11 storage invariant missing: " + expected)
    if "_param_2" in text:
        raise SystemExit("undecoded Ghidra first-argument float slot remains")
    if "stack0xfffffff8" in text:
        raise SystemExit("unresolved guest stack reference remains")
    if args.xbe is None:
        print("PASS: source-only adjacent guest stack DWORD contract")
        return
    raw = args.xbe.read_bytes()
    for address, signature in CHECKS:
        want = bytes.fromhex(signature)
        off = address - 0x10000
        actual = raw[off:off + len(want)]
        if actual != want:
            raise SystemExit(f"XBE mismatch at {address:08x}: {actual.hex()} != {signature}")
    print(f"PASS: {len(CHECKS)} x86 instruction signatures and adjacent guest C11 DWORDs")
    print("Original guest register ABI is still unverified.")

if __name__ == "__main__":
    main()
