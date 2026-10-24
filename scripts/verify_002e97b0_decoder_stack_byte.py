#!/usr/bin/env python3
"""Verify byte write to x86 decoder argument slot, not host pointer layout."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002E9836,"884c240c"),(0x002E984F,"8a4c240c"),
        (0x002E9865,"8a4c240c"),(0x002E9870,"8d4c240c"))
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("XBE mismatch")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"XBE mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002e/0x002e97b0.c").read_text()
 if "((uint32_t)(uintptr_t)param_1 & UINT32_C(0xffffff00)) | bVar3" not in s:raise SystemExit("source mismatch")
 print("PASS: 4 decoder stack-byte instructions and guest32 mask")
 print("Host-pointer/guest32 adaptation remains unresolved.")
if __name__=="__main__":main()
