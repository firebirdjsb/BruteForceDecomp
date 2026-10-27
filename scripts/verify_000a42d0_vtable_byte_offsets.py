#!/usr/bin/env python3
"""Check eight original x86 vtable calls in 0x000A42D0.

The Xbox vtable has 32-bit slots at BYTE offsets +0x28 and +0x24.
The Ghidra draft erroneously indexed a UINT32 as an array. This source
contract is not an implementation of native host vtable ABI translation.
Original copyrighted XBE may be checked locally using --xbe.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

ORIGINAL_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_000a/0x000a42d0.c"
SITES = (
    (0x000a42ea, "a108334400", "load global guest object"),
    (0x000a42fe, "8b10", "load guest vtable"),
    (0x000a4301, "ff5228", "vtable offset +0x28"),
    (0x000a4333, "8b08", "reload guest vtable"),
    (0x000a4336, "ff5124", "vtable offset +0x24"),
    (0x000a435f, "8b10", "reload guest vtable"),
    (0x000a4362, "ff5228", "vtable offset +0x28"),
    (0x000a4394, "8b08", "reload guest vtable"),
    (0x000a4397, "ff5124", "vtable offset +0x24"),
    (0x000a43c0, "8b10", "reload guest vtable"),
    (0x000a43c3, "ff5228", "vtable offset +0x28"),
    (0x000a43f5, "8b08", "reload guest vtable"),
    (0x000a43f8, "ff5124", "vtable offset +0x24"),
    (0x000a4421, "8b10", "reload guest vtable"),
    (0x000a4424, "ff5228", "vtable offset +0x28"),
    (0x000a4456, "8b08", "reload guest vtable"),
    (0x000a4459, "ff5124", "vtable offset +0x24"),
)

def check_source(root):
    s = (root / SOURCE).read_text(encoding="utf-8")
    src = re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)
    assert "Entry: 0x000a42d0" in s and "Input x86 body SHA-256:" in s
    assert "ABI_UNVERIFIED" in s
    for offset in ("0x000A4301", "0x000A4459"):
        assert offset in s
    assert src.count("(**(code **)(*DAT_00443308 + 0x28))") == 4
    assert src.count("(**(code **)(*DAT_00443308 + 0x24))") == 4
    assert "(*DAT_00443308)[10]" not in src and "(*DAT_00443308)[9]" not in src
    print("PASS 0x000A42D0: four +0x28 and four +0x24 virtual calls")

def check_clang(root):
    p = root / SOURCE
    argv = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
            "-Wno-implicit-function-declaration", "-Wno-int-conversion",
            "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
            "-Wno-int-to-pointer-cast", "-Wno-return-type",
            "-Wno-deprecated-non-prototype", "-I", str(root/"include"), str(p)]
    result = subprocess.run(argv, capture_output=True, text=True)
    assert result.returncode == 0, f"Clang 0x000A42D0: {result.stderr[:1700]}"
    print("PASS 0x000A42D0 isolated Clang C11")

def check_xbe(path):
    data = path.read_bytes()
    assert hashlib.sha256(data).hexdigest() == ORIGINAL_SHA256, "wrong original Xbox binary"
    for address, expected_hex, purpose in SITES:
        expected = bytes.fromhex(expected_hex)
        found = data[address-0x10000:address-0x10000+len(expected)]
        assert found == expected, f"0x{address:08X} {purpose}: got {found.hex()}"
        print(f"PASS original 0x{address:08X}: {purpose}")
    print(f"PASS: {len(SITES)} original x86 instruction-byte checks")

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    p.add_argument("--clang", action="store_true")
    args = p.parse_args()
    check_source(args.root)
    if args.clang:
        check_clang(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("NOTE: original XBE private; CI only checks source and Clang")
    print("PASS: native guest virtual dispatch and ABI remain unverified")

if __name__ == "__main__":
    main()
