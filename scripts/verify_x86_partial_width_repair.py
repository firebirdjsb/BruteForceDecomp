#!/usr/bin/env python3
"""Check three recovered x86 partial-width operations against matching XBE."""
import argparse
import hashlib
from pathlib import Path

SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    (0x002F3941, "66817d0efffe", "src/main_unclassified/band_002f/0x002f390d.cpp",
     "(int16_t)((uint32_t)param_2 >> 16) != (int16_t)0xfeff"),
    (0x002F852C, "c645f801", "src/main_unclassified/band_002f/0x002f8521.cpp",
     "((local_c & UINT32_C(0xffffff00)) | UINT32_C(1))"),
    (0x002FEFD9, "c645e401", "src/main_unclassified/band_002f/0x002fef6f.cpp",
     "((local_20 & UINT32_C(0xffffff00)) | UINT32_C(1))"),
)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("repo", type=Path)
    a = p.parse_args()
    data = a.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != SHA:
        p.error("XBE hash mismatch")
    for va, signature, source, expected in CASES:
        original = bytes.fromhex(signature)
        actual = data[va - 0x10000:va - 0x10000 + len(original)]
        if actual != original:
            raise SystemExit(f"FAIL original instruction {va:#x}: {actual.hex()}")
        if expected not in (a.repo / source).read_text(encoding="utf-8"):
            raise SystemExit(f"FAIL source contract {source}")
    print("PASS: 3 original x86 instructions and corresponding C11 repairs")
    print("Does not establish whole-function equivalence or native PC linkage.")

if __name__ == "__main__":
    main()
