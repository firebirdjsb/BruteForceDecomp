#!/usr/bin/env python3
"""Verify the ninth original x86 caller DWORD reused as GPU constant scratch.

Original Xbox RET 0x24 proves nine 32-bit incoming argument slots. The ninth
starts as a guest object pointer, then is overwritten in caller-owned x86 stack
storage and its highest byte is separately passed to a virtual method. C11
syntax does NOT verify guest pointer translation or a native stack ABI.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_000a/0x000a2ec0.c"
SITES = (
    (0x000a2ec0, "558bec83ec", "original saved frame and local stack"),
    (0x000a2ec9, "8b4528", "load 9th incoming guest DWORD as pointer"),
    (0x000a2ecc, "8b8888000000", "read initial guest +0x88 object field"),
    (0x000a30d9, "8b5528", "reload same guest ninth pointer"),
    (0x000a30dc, "d98290000000", "read initial guest +0x90 float field"),
    (0x000a3119, "8d4528", "address ninth guest DWORD as writable scratch"),
    (0x000a312b, "c7452800000000", "write 0 to ninth guest DWORD"),
    (0x000a3149, "c7452802020000", "write 0x202 to same scratch"),
    (0x000a315a, "8d5528", "pass same ninth guest address again"),
    (0x000a318a, "c7452801000000", "write 1 to same scratch"),
    (0x000a329d, "8d452b", "pass address of ninth DWORD highest byte"),
    (0x000a32bd, "88452b", "write highest byte of that DWORD"),
    (0x000a3321, "8d5528", "address ninth guest DWORD after byte write"),
    (0x000a332e, "c7452801000000", "write 1 to ninth DWORD"),
    (0x000a3377, "8b7d20", "read seventh incoming guest DWORD count"),
    (0x000a33c8, "c22400", "callee RET 0x24, exactly nine guest DWORDs"),
)

def uncomment(text):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)

def verify_source(root):
    text = (root / SOURCE).read_text(encoding="utf-8")
    src = uncomment(text)
    assert "Entry: 0x000a2ec0," in text
    assert "Input x86 body SHA-256:" in text
    assert "ABI_UNVERIFIED" in text
    assert "uint32_t param_4,uint32_t param_5,uint32_t param_6" in src
    assert "uint32_t param_7,uint32_t param_8,uint32_t param_9)" in src
    assert "*(int *)(uintptr_t)(param_9 + UINT32_C(0x88))" in src
    assert "*(float *)(uintptr_t)(param_9 + UINT32_C(0x90))" in src
    assert "FUN_0006a610(&param_9);" in src
    assert src.count("FUN_0006a610(&param_9);") >= 8
    assert "((uint8_t *)&param_9 + 3)" not in src  # exact source uses no extra parens
    assert "(uint8_t *)&param_9 + 3" in src
    assert "param_9 = (param_9 & UINT32_C(0x00ffffff))" in src
    assert "if (param_7 < 0x514)" in src
    for ghost in ("stack0x00000024", "_uStack00000024", "in_stack_0000001c", "uStack00000024"):
        assert ghost not in src, f"synthetic guest alias remains: {ghost}"
    print("PASS 0x000a2ec0 guest arg9 is one writable DWORD and arg7 is the count")

def verify_clang(root):
    argv = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
            "-Wno-implicit-function-declaration", "-Wno-int-conversion",
            "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
            "-Wno-int-to-pointer-cast", "-Wno-return-type",
            "-Wno-deprecated-non-prototype", "-I", str(root / "include"),
            str(root / SOURCE)]
    proc = subprocess.run(argv, capture_output=True, text=True)
    assert proc.returncode == 0, f"isolated C11: {proc.stderr[:1900]}"
    print("PASS 0x000a2ec0 isolated C11 syntax")

def verify_xbe(path):
    b = path.read_bytes()
    assert hashlib.sha256(b).hexdigest() == XBE_SHA256, "wrong original Xbox executable"
    for va, code, meaning in SITES:
        wanted = bytes.fromhex(code)
        actual = b[va - 0x10000:va - 0x10000 + len(wanted)]
        assert wanted == actual, f"0x{va:08X} {meaning}: {actual.hex()} != {code}"
        print(f"PASS 0x{va:08X}: {meaning}")
    print(f"PASS {len(SITES)} original Xbox instruction windows")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--clang", action="store_true")
    args = parser.parse_args()
    verify_source(args.root)
    if args.clang:
        verify_clang(args.root)
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("NOTE private original Xbox executable absent; CI checks source and Clang only")

if __name__ == "__main__":
    main()
