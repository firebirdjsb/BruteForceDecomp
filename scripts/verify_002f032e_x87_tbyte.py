#!/usr/bin/env python3
"""Check original x87 80-bit load and its recovered C operand type."""
import argparse,hashlib
from pathlib import Path
EXPECTED_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",type=Path)
 p.add_argument("repo",type=Path)
 a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=EXPECTED_SHA:p.error("unexpected original XBE")
 checks=((0x002F0332,"db2d32723b00"),(0x002F0338,"ded9"),(0x002F033A,"9bddbd60ffffff"))
 for va,h in checks:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"x87 bytes differ at {va:#x}")
 source=(a.repo/"src/main_unclassified/band_002f/0x002f032e.c").read_text()
 if "extern long double _DAT_003b7232;" not in source:raise SystemExit("C operand type mismatch")
 print("PASS: x87 FLD TBYTE, FCOMPP, FSTSW and C extended-precision declaration")
 print("Guest-memory relocation and platform long-double representation still require verification.")
if __name__=="__main__":main()
