#!/usr/bin/env python3
"""Source invariant check only; not an x86-equivalence or runtime ABI test."""
import argparse
from pathlib import Path
SOURCE="src/main_unclassified/band_002e/0x002e8f50.cpp"
REQUIRED=["UINT32_C(0xffffff00)","UINT32_C(0x7f)","UINT32_C(0x80)"]
FORBIDDEN=["param_1._1_3_","CONCAT31("]
def main():
 parser=argparse.ArgumentParser()
 parser.add_argument("repo",type=Path)
 args=parser.parse_args()
 source=(args.repo/SOURCE).read_text()
 for token in REQUIRED:
  if token not in source:raise SystemExit("missing source invariant: "+token)
 for token in FORBIDDEN:
  if token in source:raise SystemExit("regressed Ghidra expression: "+token)
 print("PASS: source invariants (does not establish guest instruction equivalence)")
if __name__=="__main__":main()
