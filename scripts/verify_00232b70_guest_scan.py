#!/usr/bin/env python3
"""Verify the original x86 0x00232B70 scan length and C11 source spelling.

Source-only tests run in CI; matching private XBE checked with --xbe.
This does not implement the guest dynamic stack or COM callback ABI.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FILE = "src/main_unclassified/band_0023/0x00232b70.c"
SITES = (
    (0x00232b70, "b804200000", "guest stack probe size 0x2004"),
    (0x00232b7c, "8d7c2408", "LEA guest dynamic stack destination"),
    (0x00232b9f, "57", "COM method receives count"),
    (0x00232bae, "8d442408", "scan buffer beginning"),
    (0x00232bb2, "8d5001", "scan base plus one byte"),
    (0x00232bb6, "8a08", "load byte"),
    (0x00232bb8, "40", "advance scan cursor"),
    (0x00232bc4, "2bc2", "calculate end minus (base +1)"),
    (0x00232bc6, "50", "push computed byte length"),
    (0x00232bcb, "50", "push original buffer pointer"),
    (0x00232bcc, "e8ffd2deff", "call original string helper"),
    (0x00232bd7, "c20400", "return with one incoming guest DWORD popped"),
)

def source_test(root):
    src = (root / FILE).read_text()
    ac = re.sub(r"/\*.*?\*/|//[^\n]*", "", src, flags=re.S)
    assert "Entry: 0x00232b70," in src
    assert "Input x86 body SHA-256:" in src
    assert "ABI_UNVERIFIED" in src
    assert "0x00232BC4" in src
    assert "FUN_0001fed0(&param_1,(int)(pcVar2 - ((char *)&param_1 + 1)));" in ac
    assert "stack0x00000005" not in ac
    print("PASS 0x00232B70 source: scan_end - (base+1) preserves guest length")

def clang_test(root):
    path = root / FILE
    flags = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype", "-I", str(root/"include")]
    r = subprocess.run(flags + [str(path)], capture_output=True, text=True)
    assert r.returncode == 0, r.stderr[:1600]
    print("PASS 0x00232B70: isolated host Clang C11")

def xbe_test(path):
    b = path.read_bytes()
    assert hashlib.sha256(b).hexdigest() == XBE_HASH, "original Xbox XBE mismatch"
    for va, h, why in SITES:
        expected = bytes.fromhex(h)
        actual = b[va-0x10000:va-0x10000+len(expected)]
        assert actual == expected, f"0x{va:08X} {why}: got {actual.hex()}"
        print(f"PASS original XBE 0x{va:08X}: {why}")
    print(f"PASS: {len(SITES)} original x86 byte checks")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--clang", action="store_true")
    args = ap.parse_args()
    source_test(args.root)
    if args.clang:
        clang_test(args.root)
    if args.xbe:
        xbe_test(args.xbe)
    else:
        print("NOTE: original XBE is private; CI does not reverify guest bytes")
    print("PASS: evidence source-only, native runtime/ABI remains unverified")

if __name__ == "__main__":
    main()
