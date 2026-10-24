#!/usr/bin/env python3
"""Verify original XBE EDX normalization sequence and reconstructed C11 invariants."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002ecb5a,"ba03fcffff"),(0x002ecb85,"4a"),(0x002ecb86,"f6450e10"),(0x002ecb8c,"80650eef"),(0x002ecb94,"804d0f80"))
REQUIRED=("exponent = -1022;","exponent--;","iVar2 = exponent;","param_2 &= ~UINT32_C(0x00100000);")
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path);a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("unexpected XBE")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002e/0x002ecb23.c").read_text()
 for token in REQUIRED:
  if token not in s:raise SystemExit("missing "+token)
 if "extraout_EDX" in s:raise SystemExit("unresolved EDX remains")
 print("PASS: original x86 EDX and bit clear signatures, source invariants")
if __name__=="__main__":main()
