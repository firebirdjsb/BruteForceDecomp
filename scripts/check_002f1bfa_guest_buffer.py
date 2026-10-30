#!/usr/bin/env python3
"""Source invariant check only; not an x86-equivalence or runtime ABI test."""
import argparse
from pathlib import Path
SOURCE="src/main_unclassified/band_002f/0x002f1bfa.cpp"
REQUIRED=["Keep the guest write count separate from the FILE pointer.","guest_write_word = (uint16_t)param_1;","guest_written_count = guest_write_result;","if (guest_written_count == iVar4)"]
FORBIDDEN=["param_2._2_2_"]
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
