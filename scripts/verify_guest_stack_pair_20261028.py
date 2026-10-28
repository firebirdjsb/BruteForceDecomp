#!/usr/bin/env python3
"""Private-XBE instruction-window gate for two guest-stack repair candidates.

Evidence-gathering only: no C11, whole-function ABI or runtime equivalence claim.
The copyrighted XBE is consumed locally and must never be committed.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
TEXT_FILE_BIAS = 0x10000
WINDOWS = {
    "0x00257b50": (
        (0x257b53, "81 ec 20 01 00 00", "allocate 0x120 stack bytes"),
        (0x257b99, "56", "save ESI"),
        (0x257c05, "8d 4c 24 1c", "per-item interface output"),
        (0x257c49, "68 04 01 00 00", "request 0x104 bytes"),
        (0x257c4e, "8d 54 24 28", "first read destination"),
        (0x257c5c, "8d 44 24 24", "first string scan"),
        (0x257c6c, "53", "save EBX"),
        (0x257c88, "68 04 01 00 00", "second 0x104 read"),
        (0x257c8d, "8d 44 24 2c", "second read destination"),
        (0x257c9b, "8d 44 24 28", "second string scan"),
        (0x257cc0, "5b", "restore EBX"),
        (0x257cc6, "8d 54 24 14", "closing output address"),
    ),
    "0x002a75d0": (
        (0x2a75d0, "81 ec 44 01 00 00", "allocate 0x144 bytes"),
        (0x2a7610, "57", "save EDI"),
        (0x2a763f, "88 5c 24 54", "empty-string byte store"),
        (0x2a765d, "8b 4d 00", "load virtual-call owner"),
        (0x2a7660, "53 6a 01", "push zero and one-byte count"),
        (0x2a7663, "8d 54 24 40", "one-byte read output"),
        (0x2a7668, "55 ff 51 10", "indirect stream read"),
        (0x2a76ad, "6a 04", "four-byte count in other branch"),
        (0x2a76af, "8d 44 24 3c", "four-byte output address"),
        (0x2a76b8, "8b 44 24 34", "read distinct adjacent slot"),
        (0x2a770d, "8d 4c 24 10", "interface output pointer"),
        (0x2a7711, "51 68 90 2b 40 00", "push output and IID"),
        (0x2a7717, "56 ff 10", "indirect interface call"),
        (0x2a7726, "8d 4c 24 14", "next interface output"),
    ),
}

def verify(xbe: bytes) -> int:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("Original XBE SHA-256 mismatch; refuse instruction inspection")
    total = 0
    for entry, windows in WINDOWS.items():
        for address, hex_bytes, description in windows:
            expected = bytes.fromhex(hex_bytes)
            offset = address - TEXT_FILE_BIAS
            if offset < 0 or offset + len(expected) > len(xbe):
                raise ValueError(f"Out-of-bounds original instruction at 0x{address:08x}")
            if xbe[offset:offset + len(expected)] != expected:
                raise ValueError(f"Original bytes mismatch 0x{address:08x}: {description}")
            total += 1
        print(f"PASS {entry}: {len(windows)} authenticated instruction windows")
    print(f"PASS: {total} original instruction windows; no full ABI or behavior verification")
    return total

def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True, help="Private original XBE (not uploaded)")
    args = parser.parse_args()
    verify(args.xbe.read_bytes())

if __name__ == "__main__":
    main()
