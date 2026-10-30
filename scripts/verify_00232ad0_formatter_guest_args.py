#!/usr/bin/env python3
"""Check bounded formatter's original third incoming guest DWORD alias.

Usage: python3 scripts/verify_00232ad0_formatter_guest_args.py --root .
       python3 scripts/verify_00232ad0_formatter_guest_args.py --xbe default.xbe

Original XBE is not distributed via GitHub. Syntax and original binary
checks alone do not establish ABI compatibility or the omitted grow branch.
"""
import argparse
import hashlib
import re
from pathlib import Path

XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0023/0x00232ad0.cpp"
SITES = (
    (0x00232ad4, "81ec00080000", "allocate 2048-byte local buffer"),
    (0x00232ada, "535657", "save EBX, ESI, EDI"),
    (0x00232add, "8d842418080000", "address third incoming DWORD"),
    (0x00232ae4, "50", "push formatter cursor address"),
    (0x00232af7, "e826880b00", "invoke formatter"),
)

def source_check(root):
    s = (root / SOURCE).read_text(encoding="utf-8")
    active = re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)
    for fragment in (
        "Entry: 0x00232ad0,",
        "Input x86 body SHA-256:",
        "ABI_UNVERIFIED",
        "0x00232ADD",
    ):
        assert fragment in s, f"missing provenance: {fragment}"
    assert "undefined4 FUN_00232ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)" in active
    assert "FUN_002eb322(local_800,0x800,param_2,&param_3)" in active
    assert "stack0x0000000c" not in active
    print("PASS: third incoming DWORD forwarded by address to formatter; original x86 provenance retained")

def xbe_check(path):
    raw = path.read_bytes()
    assert hashlib.sha256(raw).hexdigest() == XBE_HASH, "unexpected original XBE"
    for va, hexbytes, purpose in SITES:
        expected = bytes.fromhex(hexbytes)
        actual = raw[va-0x10000:va-0x10000+len(expected)]
        assert actual == expected, f"original 0x{va:08X} mismatch: {purpose}"
        print(f"PASS XBE 0x{va:08X}: {purpose}")
    print("PASS: five original instruction checks; guest varargs ABI not certified")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    source_check(args.root)
    if args.xbe:
        xbe_check(args.xbe)
    else:
        print("NOTE: XBE absent in CI; instruction byte checks are local-only")

if __name__ == "__main__":
    main()
