#!/usr/bin/env python3
"""Validate original dtold caller's stack input and C source binding."""
import argparse, hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SIGNATURES=((0x002F196D,"8d450850"),(0x002F1971,"8d45f450"),(0x002F1975,"e831ffffff"),(0x002F19C7,"c9c3"))
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",type=Path)
 p.add_argument("repo",type=Path)
 a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("XBE mismatch")
 for va,h in SIGNATURES:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"FAIL x86 at {va:#x}")
 src=(a.repo/"src/main_unclassified/band_002f/0x002f1965.cpp").read_text()
 for token in ("FUN_002f1965(undefined4 param_1)","___dtold(&local_10,&param_1);"):
  if token not in src:raise SystemExit("FAIL source "+token)
 print("PASS: EBP+8 input address, EBP-12 output address, call, and ret")
 print("Cross-function ABI and native guest-memory relocation remain unverified.")
if __name__=="__main__":main()
