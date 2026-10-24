#!/usr/bin/env python3
"""Original XBE evidence for the two parser dispatchers.

The output object is supplied through EBX to 0x001FEB60, then reloaded
from the caller stack and its +8 opcode field. This script deliberately
does not pretend the current Ghidra C has a recovered register ABI.
"""
import argparse
import hashlib
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# (VA, bytes, purpose)
CONTRACT = (
    (0x001FF122, "8d5c2410", "EBX points to the output pointer slot"),
    (0x001FF12C, "e82ffaffff", "call parser helper 0x001FEB60"),
    (0x001FF140, "8b7c2410", "reload parser result object"),
    (0x001FF144, "8b4708", "load opcode from result+8"),
    (0x001FF147, "83c0fe", "dispatcher subtracts 2"),
    (0x00205905, "8d5c2410", "EBX points to the output pointer slot"),
    (0x0020590F, "e84c92ffff", "call parser helper 0x001FEB60"),
    (0x00205920, "8b742410", "reload parser result object"),
    (0x00205924, "8b4608", "load opcode from result+8"),
    (0x00205927, "83c0fc", "dispatcher subtracts 4"),
)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("repo", type=Path)
    args = p.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != EXPECTED_SHA256:
        p.error("XBE digest mismatch")
    for va, hexbytes, purpose in CONTRACT:
        expected = bytes.fromhex(hexbytes)
        actual = data[va - 0x10000:va - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL {va:#x} {purpose}: {actual.hex()}")
    for path in (
        "src/main_unclassified/band_001f/0x001ff0f0.c",
        "src/main_unclassified/band_0020/0x002058c0.c",
    ):
        source = (args.repo / path).read_text(encoding="utf-8")
        if "switch(uRam00000008)" in source:
            print(f"UNRESOLVED {path}: decompiler lost EBX output-pointer ABI")
        elif "switch(" not in source:
            raise SystemExit(f"FAIL: dispatch unexpectedly missing from {path}")
    print(f"PASS: {len(CONTRACT)} original x86 instruction signatures")
    print("Parser output-pointer ABI still requires source reconstruction and compiler checks.")

if __name__ == "__main__":
    main()
