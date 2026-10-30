#!/usr/bin/env python3
"""Verify thread notification list-head, argument, and stack cleanup instructions."""
import argparse, hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002F4BA9,"8b35ec763b00"),(0x002F4BAF,"bfec763b00"),
        (0x002F4BB6,"ff742410"),(0x002F4BCF,"c20400"))
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",type=Path)
 p.add_argument("repo",type=Path)
 a=p.parse_args()
 data=a.xbe.read_bytes()
 if hashlib.sha256(data).hexdigest()!=SHA:p.error("XBE hash mismatch")
 for va,encoded in CHECKS:
  b=bytes.fromhex(encoded)
  if data[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"FAIL at {va:#x}")
 source=(a.repo/"src/main_unclassified/band_002f/0x002f4b9a.cpp").read_text()
 for token in ("XAPILIB__XapiCallThreadNotifyRoutines(undefined4 param_1)",
               "UINT32_C(0x003b76ec)","ppuVar2[2])(param_1)"):
  if token not in source:raise SystemExit("FAIL source: "+token)
 print("PASS: list-head, sentinel, stack argument and ret 4 original bytes")
 print("Indirect callback target and native ABI remain unverified.")
if __name__=="__main__":main()
