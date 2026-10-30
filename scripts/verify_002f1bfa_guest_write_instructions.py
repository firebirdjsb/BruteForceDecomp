#!/usr/bin/env python3
"""Pin original __flswbuf low-word write and 2-byte write call sequence."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x2f1ce3,"6a02"),(0x2f1ce7,"8d450c"),(0x2f1cec,"66895d0c"),(0x2f1cf0,"e8b0d7ffff"),(0x2f1cf8,"89450c"))
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path);a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("wrong XBE")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-65536:va-65536+len(b)]!=b:raise SystemExit(f"opcode mismatch {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002f/0x002f1bfa.cpp").read_text()
 for t in ("uint16_t guest_write_word;","guest_write_word = (uint16_t)param_1;","FUN_002ef4a5(uVar2,&guest_write_word,2)"):
  if t not in s:raise SystemExit("missing source token "+t)
 print("PASS: x86 two-byte write and C buffer invariant (host ABI still unverified)")
if __name__=="__main__":main()
