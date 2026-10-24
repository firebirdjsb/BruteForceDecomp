#!/usr/bin/env python3
"""Verify original 8- and 16-bit stack parameter writes for transfer flags."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002E7B8F,"c644242000"),(0x002E7B96,"c644242001"),
        (0x002E7BEC,"c6442428ff"),(0x002E7C48,"88542420"),
        (0x002E7C4C,"88542429"))
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("XBE digest mismatch")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"Mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002e/0x002e7b70.c").read_text()
 for token in ("UINT32_C(0xffffff00)","UINT32_C(0xffff0000)","((uint32_t)bVar2 << 8)"):
  if token not in s:raise SystemExit("source mismatch: "+token)
 print("PASS: 5 transfer flag stack-byte instruction signatures")
if __name__=="__main__":main()
