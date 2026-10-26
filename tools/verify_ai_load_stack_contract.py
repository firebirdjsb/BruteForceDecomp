#!/usr/bin/env python3
"""Verify 0x000A20E0 stack/output instruction bytes in the original XBE.

This records original instruction evidence only, not a host ABI adaptation.
Usage: python tools/verify_ai_load_stack_contract.py original.xbe
"""
import hashlib
import sys
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = (
    (0xa20e0, "558bec83e4f881ec4c010000", "frame setup and 0x14c-byte allocation"),
    (0xa21b5, "8d542414", "output address for vtable +0x40"),
    (0xa21d0, "8d542418", "output address for interface vtable +0x00"),
    (0xa220b, "8d4c2424", "address of another local slot"),
    (0xa2245, "8b442414", "reload first interface pointer"),
    (0xa2253, "8b44241c", "reload enumerated count"),
)

def main():
    if len(sys.argv) != 2:
        raise SystemExit("usage: verify_ai_load_stack_contract.py original.xbe")
    data = Path(sys.argv[1]).read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_SHA256:
        raise SystemExit(f"wrong XBE SHA-256: {digest}")
    for va, expected_hex, purpose in SITES:
        expected = bytes.fromhex(expected_hex)
        actual = data[va - 0x10000:va - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL {va:#010x}: expected {expected_hex}, got {actual.hex()}")
        print(f"PASS {va:#010x}: {purpose}")
    print("PASS: original x86 bytes; host ABI and runtime still unverified")

if __name__ == "__main__":
    main()
