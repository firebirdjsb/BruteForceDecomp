#!/usr/bin/env python3
"""Verify Xbox 0x00264A50 two-DWORD asynchronous IO stack result.

The callback's address operand LEA EDX,[ESP+8] at 0x264A79 refers to
guest local DWORD 0; MOV EAX,[ESP+0xc] at 0x264A89 reads DWORD 1.
The same output pair is forwarded through another virtual callback.
Source-only CI does not validate native callback ABI or guest memory mapping.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x264A50, "55"),
    (0x264A53, "83e4f8"),
    (0x264A56, "83ec08"),
    (0x264A59, "53"),
    (0x264A5A, "57"),
    (0x264A79, "8d542408"),
    (0x264A80, "ff5110"),
    (0x264A89, "8b44240c"),
    (0x264A91, "83f8ff"),
    (0x264A96, "56"),
    (0x264A97, "8d4c240c"),
    (0x264AA0, "8b44240c"),
    (0x264AB2, "8d542408"),
    (0x264ABD, "ff5114"),
    (0x264AC0, "8b4618"),
    (0x264B15, "682cb24600"),
)
SOURCE = "src/main_unclassified/band_0026/0x00264a50.c"
TOKENS = (
    "uint32_t guest_io_result[2] = {0, 0};",
    "piVar1,guest_io_result);",
    "if (guest_io_result[1] == 0) break;",
    "if (guest_io_result[1] == UINT32_MAX)",
    "(int)guest_io_result[1]",
    "(unaff_ESI + 0x48),guest_io_result);",
)
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", nargs="?", type=Path)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    text = (args.root / SOURCE).read_text(encoding="utf-8")
    compact = "".join(text.split())
    for token in TOKENS:
        if "".join(token.split()) not in compact:
            raise SystemExit(f"guest IO stack contract missing: {token}")
    if "stack0x" in text or "iStack_10" in text:
        raise SystemExit("unresolved stack slot remains")
    if args.xbe is None:
        print("PASS: source-only guest IO two-DWORD stack contract")
        return
    xbe = args.xbe.read_bytes()
    for address, bytecode in CHECKS:
        expected = bytes.fromhex(bytecode)
        actual = xbe[address-0x10000:address-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"original XBE opcode mismatch at 0x{address:08X}")
    print(f"PASS: {len(CHECKS)} original Xbox opcodes and two-DWORD guest IO source contract")
    print("Implicit ECX calling convention of 0x00264B30 remains unverified")

if __name__ == "__main__":
    main()
