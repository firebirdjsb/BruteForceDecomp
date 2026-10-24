#!/usr/bin/env python3
"""Verify XBE section count, pointer, stride, name offset, and stdcall return."""
import argparse, hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002F7857,"8b351c010100"),(0x002F785D,"8b3d20010100"),
        (0x002F7863,"6bf638"),(0x002F786A,"ff7714"),
        (0x002F7887,"83c738"),(0x002F789F,"c20400"))
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",type=Path)
 p.add_argument("repo",type=Path)
 a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("unexpected XBE SHA")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"x86 mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002f/0x002f783f.c").read_text()
 for token in ("sizeof(BF_XBE_SectionHeader) == 0x38",
               "offsetof(BF_XBE_SectionHeader, SectionName) == 0x14",
               "UINT32_C(0x0001011c)","UINT32_C(0x00010120)",
               "guest_section += UINT32_C(0x38)"):
  if token not in s:raise SystemExit("source mismatch: "+token)
 print("PASS: 6 XBE section-enumeration instructions and source layout")
 print("Guest32 relocation and native import ABI still unverified.")
if __name__=="__main__":main()
