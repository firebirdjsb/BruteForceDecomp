#!/usr/bin/env python3
"""Verify the original 0x0005BE70 guest-null-read instruction contract.

A Clang syntax pass does not establish that a native Windows address 0x14
behaves like original Xbox guest memory. This gate only pins the x86 bytes
and the exact draft expression; no original executable is committed.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
ENTRY = 0x0005BEA0
EXPECTED = bytes.fromhex("33c08b4014c3")  # xor eax,eax; mov eax,[eax+0x14]; ret
EXPRESSION = "return *(volatile undefined4 *)(uintptr_t)UINT32_C(0x14);"

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("source", type=Path)
    args = p.parse_args()
    image = args.xbe.read_bytes()
    if hashlib.sha256(image).hexdigest() != XBE_SHA256:
        p.error("original XBE SHA-256 mismatch")
    actual = image[ENTRY - 0x10000:ENTRY - 0x10000 + len(EXPECTED)]
    if actual != EXPECTED:
        raise SystemExit(f"guest-null-read instruction mismatch: {actual.hex()}")
    if EXPRESSION not in args.source.read_text(encoding="utf-8"):
        raise SystemExit("C11 guest-address expression missing or modified")
    print("PASS: original guest read [0x14] and matching draft expression")
    print("NOTE: native-PC guest-memory and fault semantics remain unverified")

if __name__ == "__main__":
    main()
