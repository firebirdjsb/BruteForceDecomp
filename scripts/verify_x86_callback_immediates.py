#!/usr/bin/env python3
"""Verify original XBE callback immediates and C11 guest-address spellings."""
import argparse
import hashlib
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    (0x001EC31B, "c70568e8400018a02e00",
     "src/main_unclassified/band_001e/0x001ec170.c",
     "DAT_0040e868 = UINT32_C(0x002ea018);"),
    (0x0021CF18, "68e0cf2100",
     "src/main_unclassified/band_0021/0x0021cd00.c",
     "(piVar6,UINT32_C(0x0021cfe0),param_1)"),
)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("repo", type=Path)
    a = p.parse_args()
    b = a.xbe.read_bytes()
    if hashlib.sha256(b).hexdigest() != EXPECTED_SHA256:
        p.error("original XBE SHA256 mismatch")
    for va, signature, path, spelling in CASES:
        expected = bytes.fromhex(signature)
        actual = b[va - 0x10000:va - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL: original instruction {va:#x}: {actual.hex()}")
        if spelling not in (a.repo / path).read_text(encoding="utf-8"):
            raise SystemExit(f"FAIL: missing original guest callback address in {path}")
    print("PASS: 2 original instruction signatures and 2 source guest-address spellings")
    print("Native host callbacks require separate guest-address relocation and ABI mapping.")

if __name__ == "__main__":
    main()
