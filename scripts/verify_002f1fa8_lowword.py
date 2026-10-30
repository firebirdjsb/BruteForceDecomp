#!/usr/bin/env python3
"""XBE identity and source-level regression for 0x002f1fa8; guest ABI remains unresolved."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((3088296,"558bec83ec24"),(3088310,"668b4b0a"),(3088330,"668b460a"))
TOKENS=["uint16_t guest_exponent = (uint16_t)(uVar3 + 0xc002);","guest_exponent = (uint16_t)(guest_exponent - 1);","guest_exponent = (uint16_t)(guest_exponent + 1);"]
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("wrong original Xbox executable")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"x86 mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002f/0x002f1fa8.cpp").read_text()
 for token in TOKENS:
  if token not in s:raise SystemExit("missing C11 source invariant: "+token)
 print("PASS: XBE signatures and C11 source invariants; runtime ABI unverified")
if __name__=="__main__":main()
