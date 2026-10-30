#!/usr/bin/env python3
"""Check both IOCTL request-size stores use 16-bit guest layout."""
import argparse
from pathlib import Path
def main():
 p=argparse.ArgumentParser();p.add_argument("repo",type=Path);a=p.parse_args()
 s=(a.repo/"src/main_unclassified/band_002f/0x002f801f.cpp").read_text()
 token="*(uint16_t *)&local_3c[0] = UINT16_C(0x002c);"
 if s.count(token)!=2:raise SystemExit("Expected exactly two 16-bit size stores")
 if "local_3c[0]._0_2_" in s:raise SystemExit("Ghidra pseudo-member remains")
 print("PASS: two 16-bit request-size stores (source invariant only)")
if __name__=="__main__":main()
