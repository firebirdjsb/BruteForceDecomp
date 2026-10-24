#!/usr/bin/env python3
"""Verify the 0x800B parser command immediate from the original XBE."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
VA = 0x0009C315
INSN = bytes.fromhex("c744241c0b800000")
SOURCE = "src/main_unclassified/band_0009/0x0009bb40.c"
REPAIRED = "local_d8 = (byte *)UINT32_C(0x800b);"
BROKEN = "XBE_FILE_HEADER_00010000.Signature + 0xfd"

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("repo", type=Path)
    args = p.parse_args()
    binary = args.xbe.read_bytes()
    if hashlib.sha256(binary).hexdigest() != XBE_SHA256:
        p.error("unexpected XBE digest")
    if binary[VA - 0x10000:VA - 0x10000 + len(INSN)] != INSN:
        raise SystemExit("FAIL: original x86 immediate changed")
    src = (args.repo / SOURCE).read_text(encoding="utf-8")
    if REPAIRED not in src or BROKEN in src:
        raise SystemExit("FAIL: C11 immediate does not match original")
    print("PASS: x86 0x0009C315 writes 0x800B to caller stack; C draft matches")
    print("This is a syntax repair, not a complete ABI or runtime verification.")

if __name__ == "__main__":
    main()
