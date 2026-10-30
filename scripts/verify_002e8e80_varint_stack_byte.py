#!/usr/bin/env python3
"""Verify original varint byte emission and right-shift instruction."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002E8EB4,"c0e007"),(0x002E8EB7,"80e17f"),
        (0x002E8EBA,"0ac1"),(0x002E8EBC,"88442418"),
        (0x002E8EC0,"0facf307"))
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("unexpected XBE")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"FAIL {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002e/0x002e8e80.cpp").read_text()
 for token in ("UINT32_C(0xffffff00)","UINT8_C(0x7f)"):
  if token not in s:raise SystemExit("source mismatch: "+token)
 print("PASS: five varint bit packing, byte write and right shift instructions")
 print("Guest32 argument-slot adapter remains unresolved.")
if __name__=="__main__":main()
