#!/usr/bin/env python3
"""Verify four recovered first-class guest incoming DWORD stack aliases.

Fail-closed source inspection runs in GitHub Actions. The original XBE is
private and can optionally be checked locally with --xbe. C11 validity is
checked separately by the full syntax inventory. Xbox calling conventions,
varargs traversal, and native guest memory mapping remain unverified.
"""
import argparse
import hashlib
import re
from pathlib import Path

SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    ("001e3550", "stack0x00000010",
     "void FUN_001e3550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)",
     "FUN_0001f4f0(&param_4,0,0xffffffff);", "0x001E356D"),
    ("00295370", "stack0x00000008",
     "void FUN_00295370(undefined4 param_1,undefined4 param_2)",
     "FUN_002eba94(local_1f8,param_1,&param_2);", "0x0029537A"),
    ("002ea9a9", "stack0x00000010",
     "undefined4 FUN_002ea9a9(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)",
     "uVar1 = FUN_002ed38c(&local_24,param_3,&param_4);", "0x002EA9C1"),
    ("002eaa86", "stack0x0000000c",
     "undefined4 FUN_002eaa86(undefined1 *param_1,undefined4 param_2,undefined4 param_3)",
     "uVar1 = FUN_002edbde(&local_24,param_2,&param_3);", "0x002EAA91"),
)
# Verified original instructions, including both RET 0x0C exits of FUN_0001f4f0.
INSTRUCTIONS = (
    (0x001e356d, "8d44243c"),
    (0x0001f539, "c20c00"),
    (0x0001f593, "c20c00"),
    (0x00295374, "81ecf8010000"),
    (0x0029537a, "8d842400020000"),
    (0x002ea9c1, "8d4514"),
    (0x002eaa91, "8d4510"),
)

def uncomment(source):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)

def verify_source(root):
    for address, legacy, signature, call, site in CASES:
        path = root / f"src/main_unclassified/band_{address[:4]}/0x{address}.c"
        source = path.read_text(encoding="utf-8")
        active = uncomment(source)
        assert f"Entry: 0x{address}," in source, address
        assert "Input x86 body SHA-256:" in source, address
        assert "ABI_UNVERIFIED" in source, address
        assert site in source, address
        assert signature in active, address
        assert call in active, address
        assert legacy not in active, address
        print(f"PASS 0x{address}: original incoming DWORD address recovered")
    print("PASS: four source contracts, original Xbox ABI still unverified")

def verify_xbe(path):
    raw = path.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    assert sha == SHA256, f"wrong original Xbox executable hash: {sha}"
    for va, hexbytes in INSTRUCTIONS:
        expected = bytes.fromhex(hexbytes)
        start = va - 0x10000
        got = raw[start:start + len(expected)]
        assert got == expected, f"0x{va:08x}: expected {hexbytes}, found {got.hex()}"
        print(f"PASS x86 0x{va:08x}: {hexbytes}")
    print("PASS: seven original XBE instruction checks")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    verify_source(args.root)
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("NOTE: original XBE absent from GitHub Actions; local byte checks required")

if __name__ == "__main__":
    main()
