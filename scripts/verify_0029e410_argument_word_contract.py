#!/usr/bin/env python3
"""Validate guest argument-word address ownership at FUN_0029E410.

The original RET 8 proves two 32-bit stack arguments.  After saving four
registers, LEA [ESP+0x18] addresses argument 2 and LEA [ESP+0x14]
addresses argument 1.  The two virtual callbacks write different slots.
Without the private XBE only source invariants are checked.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x0029E410, "53"),             # save EBX
    (0x0029E411, "8b5c2408"),       # first incoming guest argument
    (0x0029E41E, "8b742418"),       # second incoming guest argument
    (0x0029E427, "ff5130"),         # source get count/index
    (0x0029E42C, "ff5734"),         # destination interface
    (0x0029E432, "ff5238"),         # source get count
    (0x0029E442, "8d4c2418"),       # &second argument word
    (0x0029E449, "ff5020"),         # first output callback
    (0x0029E44E, "8d442414"),       # &first argument word
    (0x0029E455, "ff5224"),         # second output callback
    (0x0029E458, "8b442418"),       # second argument word value
    (0x0029E45E, "8d542414"),       # &first argument word again
    (0x0029E465, "ff5114"),         # destination consumes both
    (0x0029E473, "c20800"),         # return cleans two 32-bit args
)
SOURCE = "src/main_unclassified/band_0029/0x0029e410.cpp"
CONTRACT = (
    "FUN_0029e410(int *param_1,int *param_2)",
    "uint32_t guest_first_arg_word = (uint32_t)(uintptr_t)param_1;",
    "uint32_t guest_second_arg_word = (uint32_t)(uintptr_t)param_2;",
    "(*param_2 + 0x20))(param_2,iVar1,&guest_second_arg_word)",
    "(*param_2 + 0x24))(param_2,iVar1,&guest_first_arg_word)",
    "(*param_1 + 0x14))(param_1,guest_second_arg_word,&guest_first_arg_word)",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?", help="private original Xbox XBE")
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    source = (a.repo / SOURCE).read_text(encoding="utf-8")
    for token in CONTRACT:
        if token not in source:
            raise SystemExit(f"Missing source contract: {token}")
    if "stack0xfffffff4" in source:
        raise SystemExit("Unresolved address of original incoming argument remains")
    if a.xbe is None:
        print("PASS: 0x0029E410 source-only guest argument contract (original XBE not checked)")
        return
    data = a.xbe.read_bytes()
    for address, expected_hex in OPCODES:
        expected = bytes.fromhex(expected_hex)
        actual = data[address-0x10000:address-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"Original XBE mismatch at 0x{address:08X}: {actual.hex()}")
    print(f"PASS: {len(OPCODES)} original x86 signatures and separate 32-bit argument slots")
    print("Virtual callback ABI and guest-memory mapping remain unverified")

if __name__ == "__main__":
    main()
