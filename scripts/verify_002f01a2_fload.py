#!/usr/bin/env python3
"""Verify x87 __fload branch, 80-bit construction and normal double load."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002F01A9,"668b450e"),(0x002F01B0,"6625f07f"),
        (0x002F01BA,"6681cbff7f"),(0x002F01C9,"0fa4d80b"),
        (0x002F01D3,"db6df6"),(0x002F01D8,"dd4508"))
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("XBE mismatch")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"XBE mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002f/0x002f01a2.c").read_text()
 for token in ("LDBL_MANT_DIG == 64","high_word | UINT16_C(0x7fff)",
               "memcpy(extended + 8, &exponent","return (float10)value"):
  if token not in s:raise SystemExit("source mismatch: "+token)
 print("PASS: six original __fload x87 instructions and C representation guards")
if __name__=="__main__":main()
