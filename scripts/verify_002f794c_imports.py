#!/usr/bin/env python3
"""Pin CancelIo file-object type and IDE channel import reads."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002F7962,"ff3564653800"),(0x002F7988,"8b1560653800"),
        (0x002F798E,"83c228"),(0x002F79CA,"8b1560653800"))
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("XBE mismatch")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"XBE mismatch {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002f/0x002f794c.c").read_text()
 for token in ("UINT32_C(0x00386564)","UINT32_C(0x00386560)"):
  if token not in s:raise SystemExit("source mismatch "+token)
 print("PASS: four original CancelIo import and offset instructions")
 print("Indirect calls, list representation and guest-memory adapter remain unverified.")
if __name__=="__main__":main()
