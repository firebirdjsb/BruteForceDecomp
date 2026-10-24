#!/usr/bin/env python3
"""Verify the media-validation stack field is written with a 16-bit MOV."""
import argparse, hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",type=Path)
 p.add_argument("repo",type=Path)
 a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("original XBE SHA mismatch")
 va=0x002F80B8
 b=bytes.fromhex("66c745c82c00")
 if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit("original 16-bit store mismatch")
 src=(a.repo/"src/main_unclassified/band_002f/0x002f801f.c").read_text()
 if "*(uint16_t *)&local_3c[0] = UINT16_C(0x002c);" not in src:raise SystemExit("source mismatch")
 print("PASS: original MOV WORD PTR [EBP-0x38],0x2c and 16-bit C store")
 print("Complete native stack layout remains unverified.")
if __name__=="__main__":main()
