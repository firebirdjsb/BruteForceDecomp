#!/usr/bin/env python3
"""Pin allocator's partial-width stack and argument operations to original x86."""
import argparse,hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=((0x002F65F5,"80650f00"),(0x002F6600,"c645f440"),
        (0x002F6604,"0fb64d0f"),(0x002F663D,"8a4d0f"),
        (0x002F6640,"884df4"),(0x002F6643,"fe450f"))
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",type=Path)
 p.add_argument("repo",type=Path)
 a=p.parse_args()
 d=a.xbe.read_bytes()
 if hashlib.sha256(d).hexdigest()!=SHA:p.error("XBE digest mismatch")
 for va,h in CHECKS:
  b=bytes.fromhex(h)
  if d[va-0x10000:va-0x10000+len(b)]!=b:raise SystemExit(f"x86 mismatch at {va:#x}")
 s=(a.repo/"src/main_unclassified/band_002f/0x002f65dc.cpp").read_text()
 for token in ("(uint8_t)(param_2 >> 24)","*(uint8_t *)&local_10",
               "(param_2 & UINT32_C(0x00ffffff)) | ((uint32_t)bVar1 << 24)"):
  if token not in s:raise SystemExit("source mismatch: "+token)
 print("PASS: six original partial-width instructions and C reconstruction")
 print("Full allocator guest ABI remains unverified.")
if __name__=="__main__":main()
