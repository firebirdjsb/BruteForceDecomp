#!/usr/bin/env python3
"""Verify original 0x002D56E0 guest DWORD vtable chain and repaired C11.

This checks the *storage representation* and call-target lookup, not the
unverified ECX=this callback contract, x87 ST(0) return or guest memory
translation required for native PC execution.
"""
import argparse
from pathlib import Path
import shutil
import subprocess

SOURCE = "src/main_unclassified/band_002d/0x002d56e0.c"
OPCODES = (
    (0x002D5713, "8d5c2434"),     # LEA EBX,[ESP+0x34], first local 32-bit slot
    (0x002D57B5, "8b0b"),         # MOV ECX,[EBX], guest object pointer
    (0x002D57B7, "8b11"),         # MOV EDX,[ECX], guest vtable pointer
    (0x002D57B9, "ff12"),         # CALL DWORD PTR [EDX], vtable slot zero
    (0x002D5859, "83eb04"),       # SUB EBX,4, next guest object slot
    (0x002D5863, "0f8caefeffff"), # JL loop to 0x002D5717
)
TOKENS = (
    "uint32_t guest_object_word;",
    "uint32_t guest_vtable_word;",
    "uint32_t guest_method_word;",
    "memcpy(&guest_object_word, pfVar3, sizeof guest_object_word);",
    "guest_vtable_word = *(const uint32_t *)(uintptr_t)guest_object_word;",
    "guest_method_word = *(const uint32_t *)(uintptr_t)guest_vtable_word;",
    "fVar6 = (float10)(*(code *)(uintptr_t)guest_method_word)();",
)
def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--xbe", type=Path)
    args = p.parse_args()
    src = (args.root / SOURCE).read_text(encoding="utf-8")
    for token in TOKENS:
        if token not in src:
            raise SystemExit("Missing guest-object/vtable source: " + token)
    if "**(undefined4 **)*pfVar3" in src:
        raise SystemExit("Original erroneous float-to-pointer Ghidra expression remains")
    clang = shutil.which("clang")
    if clang:
        proc = subprocess.run(
            [clang, "-std=c11", "-fsyntax-only", "-ferror-limit=3",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype",
             "-I", str(args.root / "include"), str(args.root / SOURCE)],
            text=True, capture_output=True,
        )
        if proc.returncode:
            raise SystemExit("Focused Clang C11 failed:\n" + proc.stderr)
    if args.xbe:
        data = args.xbe.read_bytes()
        for address, opcode in OPCODES:
            expected = bytes.fromhex(opcode)
            off = address - 0x10000
            found = data[off:off + len(expected)]
            if found != expected:
                raise SystemExit(
                    f"Original x86 mismatch at 0x{address:08X}: {found.hex()} != {opcode}"
                )
        print(f"PASS: {len(OPCODES)} original XBE opcodes + focused Clang C11")
    else:
        print("PASS: source invariants + focused Clang C11 (private XBE not in CI)")
    print("No whole-function 1:1 or native guest ABI verification claimed.")


if __name__ == "__main__":
    main()
