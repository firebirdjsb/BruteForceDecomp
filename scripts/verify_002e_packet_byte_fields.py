#!/usr/bin/env python3
"""Pin original packet field byte accesses to original Brute Force XBE."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002E13B7,"c644241a00"),(0x002E143C,"8a44241b"),
        (0x002E1825,"c644242200"),(0x002E182C,"8a542423"),
        (0x002E184A,"88542423"),(0x002E18A9,"c644242500"))
def main():
 p=argparse.ArgumentParser();p.add_argument("xbe",type=Path);p.add_argument("repo",type=Path)
 a=p.parse_args();d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("unexpected XBE")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"FAIL {va:#x}")
 for f in ("0x002e13a0.cpp","0x002e1800.cpp"):
  s=(a.repo/"src/main_unclassified/band_002e"/f).read_text()
  if "((uint8_t *)&local_18)[3]" not in s:raise SystemExit("source mismatch: "+f)
 s2=(a.repo/"src/main_unclassified/band_002e/0x002e13a0.cpp").read_text()
 if "(uint32_t)(uint8_t)param_1 << 4" not in s2:raise SystemExit("Source mismatch: (uint32_t)(uint8_t)param_1 << 4")
 print("PASS: six packet byte field instructions and both source expressions")
if __name__=="__main__":main()
