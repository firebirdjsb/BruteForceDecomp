#!/usr/bin/env python3
"""Verify two original guest byte/stack contracts using the supplied private XBE.

0x000AF1A0 reads the same ESP+0x17 flag written by earlier byte stores.
0x002D29F0 sign-extends two object selector bytes to 32-bit integers.
Source-only CI validates the intended C11 reconstruction and Clang syntax.
This is not proof of whole-function ABI or native runtime equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
X86 = {
    0x000AF205: "88542417",       # MOV BYTE [ESP+0x17],DL
    0x000AF359: "c644241701",     # MOV BYTE [ESP+0x17],1
    0x000AF41E: "8a4c2417",       # MOV CL,BYTE [ESP+0x17]
    0x000AF422: "84c9",           # TEST CL,CL
    0x002D2A6C: "0fbe470e",       # MOVSX EAX,BYTE [EDI+0x0e]
    0x002D2A70: "0fbe530e",       # MOVSX EDX,BYTE [EBX+0x0e]
    0x002D2B28: "8b542430",       # MOV EDX,[ESP+0x30] -> signed selector
}
SOURCES = {
    "src/main_unclassified/band_000a/0x000af1a0.c": (
        "Entry: 0x000af1a0",
        "local_101 = '\\0';",
        "local_101 = '\\x01';",
        "if (local_101 != '\\0')",
    ),
    "src/main_unclassified/band_002d/0x002d29f0.c": (
        "Entry: 0x002d29f0",
        "int32_t guest_mode_16;",
        "int32_t guest_mode_2a;",
        "guest_mode_16 = (int32_t)*(int8_t *)(uintptr_t)(param_1 + 0x16);",
        "guest_mode_2a = (int32_t)*(int8_t *)(uintptr_t)(param_1 + 0x2a);",
        "switch(guest_mode_2a)",
        "if (guest_mode_16 == 1)",
        "if (guest_mode_16 == 3)",
        "local_90 = pfVar6 + 8;",
    ),
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def verify_source(root):
    clang = shutil.which("clang")
    if clang is None:
        raise SystemExit("Clang is required to validate C11 repairs")
    for relative, markers in SOURCES.items():
        path = root / relative
        src = path.read_text(encoding="utf-8")
        for marker in markers:
            if marker not in src:
                raise SystemExit(f"{relative}: missing invariant {marker!r}")
        if "uStack_124._3_1_" in src or "switch(local_8c)" in src:
            raise SystemExit(f"{relative}: unresolved source alias")
        for optimization in ("-O0", "-O2"):
            result = subprocess.run(
                [clang, *FLAGS, optimization, "-I", str(root / "include"), str(path)],
                capture_output=True, text=True,
            )
            if result.returncode:
                raise SystemExit(f"{relative} {optimization}: {result.stderr}")
    print("PASS: 2 guest-byte source aliases with Clang C11 O0/O2")

def verify_xbe(path):
    image = path.read_bytes()
    if hashlib.sha256(image).hexdigest() != EXPECTED_XBE_SHA256:
        raise SystemExit("Original Xbox XBE SHA256 mismatch")
    for address, opcode in X86.items():
        expected = bytes.fromhex(opcode)
        actual = image[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"Original instruction mismatch at 0x{address:08X}")
    print(f"PASS: {len(X86)} original x86 opcodes and XBE SHA256")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    verify_source(args.root)
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("Original XBE is private; CI checked source and Clang only")
    print("Unverified: cross-function calling conventions and native guest memory translation")

if __name__ == "__main__":
    main()
