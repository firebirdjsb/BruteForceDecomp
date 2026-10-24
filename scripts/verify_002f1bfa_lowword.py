#!/usr/bin/env python3
"""XBE identity and source-level regression for 0x002f1bfa; guest ABI remains unresolved."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((3087354,"558bec515356"),(3087360,"8b750c"),(3087363,"8b460c"))
TOKENS=["uint16_t guest_write_word;","guest_write_word = (uint16_t)param_1;","FUN_002ef4a5(uVar2,&guest_write_word,2)"]
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("wrong original Xbox executable")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"x86 mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002f/0x002f1bfa.c").read_text()
 for token in TOKENS:
  if token not in s:raise SystemExit("missing C11 source invariant: "+token)
 print("PASS: XBE signatures and C11 source invariants; runtime ABI unverified")
if __name__=="__main__":main()
