#!/usr/bin/env python3
"""Original XBE instruction evidence plus C11 source invariant; no native ABI claim."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=[[3066741,"d1650c"],[3066744,"f6450b80"],[3066750,"834d0c01"],[3066754,"d16508"]]
TOKENS=["param_2 = (uint32_t)iVar2;","param_1 = param_1 << 1;"]
SOURCE="src/main_unclassified/band_002e/0x002ecb23.c"
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path);a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("wrong XBE")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-65536:va-65536+len(b)]!=b:raise SystemExit(f"instruction mismatch {va:#x}")
 s=(a.repo/SOURCE).read_text()
 for token in TOKENS:
  if token not in s:raise SystemExit("missing source invariant: "+token)
 print("PASS: original instructions and source invariants; runtime ABI not proven")
if __name__=="__main__":main()
