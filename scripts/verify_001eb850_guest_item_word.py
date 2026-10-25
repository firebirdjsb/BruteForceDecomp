#!/usr/bin/env python3
"""Verify 0x001EB850 guest DWORD copy/indirect-call argument contract.

Source-only CI checks the narrow reconstructed stack-word relationship and
isolated host Clang C11 syntax. Passing a privately held XBE additionally
checks the original bytes and function body digest. No native ABI claim.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "a1214266c250223909f9fba8d18a0d9ebc531e84ceba4ab7d3d637f9757612f2"
ENTRY = 0x001EB850
END = 0x001EB8C5
SOURCE = "src/main_unclassified/band_001e/0x001eb850.c"
# Exact original x86 instructions: copy value into a distinct guest stack word,
# pass its address to virtual slot +0x48, and return without rereading it.
INSTRUCTIONS = (
    (0x001EB8A2, "8b1b"),          # MOV EBX,[EBX] (load 32-bit object field)
    (0x001EB8A4, "85db"),          # TEST EBX,EBX
    (0x001EB8A6, "895c2410"),      # MOV [ESP+0x10],EBX
    (0x001EB8AA, "7410"),          # JE skip virtual call
    (0x001EB8AC, "8b5620"),        # MOV EDX,[ESI+0x20]
    (0x001EB8AF, "8b07"),          # MOV EAX,[EDI]
    (0x001EB8B1, "8d4c2410"),      # LEA ECX,[ESP+0x10]
    (0x001EB8B5, "51"),            # PUSH ECX (address of copied word)
    (0x001EB8B6, "52"),            # PUSH EDX (other argument)
    (0x001EB8B7, "8bcf"),          # MOV ECX,EDI (this)
    (0x001EB8B9, "ff5048"),        # CALL [EAX+0x48]
    (0x001EB8BC, "8b470c"),        # MOV EAX,[EDI+0x0C] (no output reread)
    (0x001EB8BF, "5f5e5bc20400"), # POPs and RET 4
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path, help="private original XBE, never committed")
    ap.add_argument("--root", type=Path, default=Path("."))
    args = ap.parse_args()
    root = args.root.resolve()
    source = (root / SOURCE).read_text(encoding="utf-8")
    required = (
        "undefined4 guest_item_word;",
        "guest_item_word = (undefined4)*piVar1;",
        "if (guest_item_word != 0) {",
        "(*(undefined4 *)(in_ECX + 0x20),&guest_item_word)",
        "return param_1[3];",
    )
    for fragment in required:
        if fragment not in source:
            raise SystemExit(f"Missing guest stack-word contract: {fragment}")
    if "stack0xfffffffc" in source:
        raise SystemExit("Unresolved synthetic stack reference remains")
    if "&(*piVar1)" in source or "(void *)piVar1" in source:
        raise SystemExit("Guest output word incorrectly aliased to object field")
    cmd = [
        "clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype", "-I", str(root / "include"),
        str(root / SOURCE),
    ]
    subprocess.run(cmd, check=True)
    if args.xbe:
        data = args.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != XBE_SHA256:
            raise SystemExit("Original XBE SHA-256 mismatch")
        body = data[ENTRY - 0x10000:END - 0x10000]
        if hashlib.sha256(body).hexdigest() != BODY_SHA256:
            raise SystemExit("Original function body digest mismatch")
        for address, raw in INSTRUCTIONS:
            expected = bytes.fromhex(raw)
            actual = data[address - 0x10000:address - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"XBE instruction mismatch at 0x{address:08X}")
    print("PASS: 0x001EB850 distinct guest DWORD output argument and isolated Clang C11")
    print("NOTE: native Xbox virtual ABI and guest pointer translation unverified")

if __name__ == "__main__":
    main()
