#!/usr/bin/env python3
"""Verify three original Xbox import-slot instructions, not host ABI."""
import argparse
import hashlib
from pathlib import Path
SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    (0x002F4BD9, "ff3524653800", "src/main_unclassified/band_002f/0x002f4bd2.c",
     "*(uint32_t *)(uintptr_t)UINT32_C(0x00386524)"),
    (0x002F7FF7, "ff3580643800", "src/main_unclassified/band_002f/0x002f7f68.c",
     "*(uint32_t *)(uintptr_t)UINT32_C(0x00386480)"),
    (0x002F5D5F, "8b0dac7a3800", "src/main_unclassified/band_002f/0x002f5d1f.c",
     "*(uint32_t *)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00387aac) = UINT32_C(0xfffffffb)"),
)
def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("xbe",type=Path)
    ap.add_argument("repo",type=Path)
    args=ap.parse_args()
    data=args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest()!=SHA:
        ap.error("XBE digest mismatch")
    for va,hexdump,path,source in CASES:
        expected=bytes.fromhex(hexdump)
        got=data[va-0x10000:va-0x10000+len(expected)]
        if got!=expected:
            raise SystemExit(f"FAIL original x86 at {va:#x}: {got.hex()}")
        if source not in (args.repo/path).read_text(encoding="utf-8"):
            raise SystemExit(f"FAIL source expression: {path}")
    print("PASS: 3 original import-slot/store signatures and C11 expressions")
    print("Guest-memory mappings and complete function ABI remain unverified.")
if __name__=="__main__":
    main()
