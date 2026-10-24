#!/usr/bin/env python3
"""Pin both XCalculateSignatureBeginEx guest import loads to original x86."""
import argparse
import hashlib
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS=(
 (0x002F32EF,"0305ec643800","UINT32_C(0x003864ec) + uVar2 * 0x10"),
 (0x002F32F7,"a1e8643800","UINT32_C(0x003864e8)"),
)
def main():
 ap=argparse.ArgumentParser()
 ap.add_argument("xbe",type=Path)
 ap.add_argument("repo",type=Path)
 a=ap.parse_args()
 data=a.xbe.read_bytes()
 if hashlib.sha256(data).hexdigest()!=SHA: ap.error("unexpected XBE")
 source=(a.repo/"src/main_unclassified/band_002f/0x002f3298.c").read_text()
 if '#include "bf_xbe_certificate_layout.h"' not in source: raise SystemExit("missing certificate layout")
 for va,hexbytes,expr in CHECKS:
  expected=bytes.fromhex(hexbytes)
  if data[va-0x10000:va-0x10000+len(expected)]!=expected:
   raise SystemExit(f"original x86 mismatch at {va:#x}")
  if expr not in source: raise SystemExit(f"source mismatch for {va:#x}")
 print("PASS: certificate layout and two guest signature-key import reads")
 print("Does not establish native PC pointer relocation or ABI equivalence.")
if __name__=="__main__":main()
