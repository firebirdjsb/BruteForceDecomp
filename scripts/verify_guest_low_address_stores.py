#!/usr/bin/env python3
"""Verify exact original Xbox guest low-address stores in two C11 drafts.

These are deliberately not host-native memory safety or 1:1 runtime tests.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    (0x001E78E8, "33c9884904", "src/main_unclassified/band_001e/0x001e7880.cpp", "*(volatile undefined1 *)(uintptr_t)UINT32_C(0x00000004) = 0;"),
    (0x001E7937, "33c0885804", "src/main_unclassified/band_001e/0x001e7880.cpp", "*(volatile undefined1 *)(uintptr_t)UINT32_C(0x00000004) = 1;"),
    (0x002856DF, "33c0894004", "src/main_unclassified/band_0028/0x002856b0.cpp", "*(volatile undefined4 *)(uintptr_t)UINT32_C(0x00000004) = 0;"),
)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("repo", type=Path)
    args = p.parse_args()
    blob = args.xbe.read_bytes()
    if hashlib.sha256(blob).hexdigest() != XBE_SHA256:
        p.error("original XBE SHA-256 mismatch")
    for address, encoded, source, expression in CASES:
        expected = bytes.fromhex(encoded)
        actual = blob[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL {address:#x}: original bytes {actual.hex()} != {expected.hex()}")
        if expression not in (args.repo / source).read_text(encoding="utf-8"):
            raise SystemExit(f"FAIL {source}: guest store missing or changed")
        print(f"PASS {address:#010x}: guest store instruction and draft expression pinned")
    print("Native-PC guest-memory mapping and fault semantics remain unverified.")

if __name__ == "__main__":
    main()
