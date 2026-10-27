#!/usr/bin/env python3
"""Verify the distinct original 0x0022DE10 guest output word at 0x0022E005."""
import argparse
import hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/main_unclassified/band_0022/0x0022de10.c"
OPCODES=(
 (0x0022DE10,"83ec74"),
 (0x0022DE1B,"53"),
 (0x0022DE1C,"57"),
 (0x0022DFF4,"6a00"),
 (0x0022DFF6,"8d442414"),
 (0x0022DFFA,"897c2410"),
 (0x0022E004,"50"),
 (0x0022E005,"8d442414"),
 (0x0022E009,"e802e1f4ff"),
)
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path("."))
 p.add_argument("--xbe",type=Path)
 a=p.parse_args()
 s=(a.root/SOURCE).read_text()
 assert "uint32_t guest_call_word;" in s
 assert "FUN_0017c110(&guest_call_word,0)" in s
 assert "stack0xffffff88" not in s
 assert "ABI_UNVERIFIED" in s
 print("PASS original guest call output word represented separately")
 if a.xbe:
  b=a.xbe.read_bytes()
  assert hashlib.sha256(b).hexdigest()==SHA,"original XBE mismatch"
  for va,code in OPCODES:
   exp=bytes.fromhex(code)
   got=b[va-0x10000:va-0x10000+len(exp)]
   assert got==exp,f"0x{va:08X}: {got.hex()} != {code}"
  print(f"PASS {len(OPCODES)} original instruction windows")
 else:
  print("NOTE original XBE not supplied")
if __name__=="__main__":
 main()
