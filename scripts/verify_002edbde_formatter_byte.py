#!/usr/bin/env python3
"""Original-XBE instruction evidence for 0x002edbde.cpp."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((3071804,"8885b0fdffff"))
TOKENS=["((uint8_t *)&local_254[0])[0]"]
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("XBE digest mismatch")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"Mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002e/0x002edbde.cpp").read_text()
 for token in TOKENS:
  if token not in s:raise SystemExit("Source mismatch: "+token)
 print("PASS: original x86 instruction signatures and source expressions")
 print("Guest ABI and native linkage are not verified.")
if __name__=="__main__":main()
