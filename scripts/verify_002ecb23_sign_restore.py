#!/usr/bin/env python3
"""Original XBE instruction evidence plus C11 source invariant; no native ABI claim."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=[[3066727,"f6c405"],[3066732,"33c0"],[3066734,"40"],[3066768,"3bc1"],[3066772,"804d0f80"]]
TOKENS=["if (bVar1)","param_2 |= UINT32_C(0x80000000);"]
SOURCE="src/main_unclassified/band_002e/0x002ecb23.cpp"
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
