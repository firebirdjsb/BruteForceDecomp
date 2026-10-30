#!/usr/bin/env python3
"""Verify XGetAVPack's original two guest-memory loads."""
import argparse
import hashlib
from pathlib import Path
SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
VA = 0x002F8519
BYTES = bytes.fromhex("a1706538008b00c3")
EXPECTED = "return *(undefined4 *)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00386570);"
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path)
    ap.add_argument("repo", type=Path)
    a = ap.parse_args()
    data = a.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != SHA:
        ap.error("unexpected XBE")
    if data[VA-0x10000:VA-0x10000+len(BYTES)] != BYTES:
        raise SystemExit("original instruction bytes mismatch")
    if EXPECTED not in (a.repo/"src/main_unclassified/band_002f/0x002f8519.cpp").read_text():
        raise SystemExit("source load contract mismatch")
    print("PASS: mov eax,[0x386570]; mov eax,[eax]; ret")
    print("Guest-address dereference requires an Xbox memory map for native PC execution.")
if __name__ == "__main__":
    main()
