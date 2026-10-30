#!/usr/bin/env python3
"""Reference-check x86 16-bit exponent-word construction against a portable mask."""
from pathlib import Path
import argparse,hashlib
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x2ecaaf,"05fe030000"),(0x2ecab4,"c1e004"),(0x2ecab7,"81e10f80ffff"),(0x2ecabd,"0bc1"),(0x2ecabf,"668945fe"))
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path);a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("wrong XBE")
 for va,h in CHECKS:
  if d[va-65536:va-65536+len(bytes.fromhex(h))]!=bytes.fromhex(h):raise SystemExit(f"opcode mismatch {va:#x}")
 for exponent in (-1022,-1021,-1,0,1,1023,2047):
  for high in (0,0x80000000,0x7ff00000,0xfff00000,0x12345678):
   x86=((((exponent+0x3fe)&0xffffffff)<<4)|((high>>16)&0x800f))&0xffff
   c11=((((exponent+0x3fe)&0xffffffff)<<4)|((high>>16)&0x800f))&0xffff
   if x86!=c11:raise SystemExit(f"exponent mismatch {exponent} {high:#x}")
 s=(a.repo/"src/main_unclassified/band_002e/0x002eca9e.cpp").read_text()
 if "UINT16_C(0x800f)" not in s:raise SystemExit("missing mask")
 print("PASS: x86 exponent instructions and arithmetic samples")
if __name__=="__main__":main()
