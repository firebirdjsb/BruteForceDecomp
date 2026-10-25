#!/usr/bin/env python3
"""Pin Xbox CRT stream field accesses to original XBE instructions."""
import argparse
import hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS=((0x2ea5ee,"f6460c83"),(0x2ea608,"894608"),(0x2ea60b,"8906"),(0x2ea60d,"89460c"),(0x2ea610,"894604"),(0x2eb173,"8b460c"),(0x2eb195,"ff7610"),(0x2eb1a9,"8b461c"),(0x2eb1b6,"83661c00"),(0x2eb1bd,"83660c00"))
def main():
 p=argparse.ArgumentParser()
 p.add_argument("xbe",nargs="?",type=Path)
 p.add_argument("--root",type=Path,default=Path("."))
 a=p.parse_args()
 h=(a.root/"include/bf_xbox_crt_stream.h").read_text()
 for field in ("flags_0c","handle_10","buffer_1c"):
  assert field in h
 for name in ("0x002ea5e9.c","0x002eb16e.c"):
  src=(a.root/"src/main_unclassified/band_002e"/name).read_text()
  assert '#include "bf_xbox_crt_stream.h"' in src
  assert "_IO_" not in src
 if a.xbe:
  b=a.xbe.read_bytes()
  assert hashlib.sha256(b).hexdigest()==SHA
  for address,raw in OPS:
   signature=bytes.fromhex(raw)
   assert b[address-0x10000:address-0x10000+len(signature)]==signature,hex(address)
 print("PASS: Xbox CRT stream source layout and original x86 access signatures")
if __name__=="__main__":main()
