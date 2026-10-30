#!/usr/bin/env python3
"""Verify Xbox 0x002EBFE0 PUSH EAX / FSTCW low-word alias recovery.

The full guest x87 call/exception protocol remains ABI_UNVERIFIED.
Optional --xbe authenticates the private original and verifies opcodes.
"""
import argparse
import hashlib
import re
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC="src/main_unclassified/band_002e/0x002ebfe0.cpp"
SITES=(
 (0x002ebfe0,"8bc8","preserve entry EAX in ECX"),
 (0x002ebfe2,"50","push whole EAX 32-bit word"),
 (0x002ebfe3,"9bd93c24","WAIT/FSTCW overwrite low 16 bits of [ESP]"),
 (0x002ebfe7,"66813c247f02","compare resulting x87 control word with 0x027F"),
 (0x002ebfed,"7405","skip the control-state helper when already equal"),
 (0x002ebfef,"e819460000","restore default control via 0x002F060D"),
)
def active(s):
 return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
def check(root,xbe):
 s=(root/SRC).read_text(encoding="utf-8");code=active(s)
 assert "Entry: 0x002ebfe0," in s and "ABI_UNVERIFIED" in s
 assert "local_4 = in_FPUControlWord;" in code
 assert "uStack_2 = (undefined2)(in_EAX >> 16);" in code
 assert "_local_4" not in code
 print("PASS split guest control-word and saved EAX upper half")
 if xbe:
  b=xbe.read_bytes()
  assert hashlib.sha256(b).hexdigest()==SHA,"wrong original XBE"
  for va,opcode,why in SITES:
   exp=bytes.fromhex(opcode);got=b[va-0x10000:va-0x10000+len(exp)]
   assert got==exp,f"0x{va:08X} {why}: {got.hex()} != {opcode}"
   print(f"PASS 0x{va:08X} {why}")
  print(f"PASS {len(SITES)} original instruction sites")
 else:
  print("NOTE private XBE not available in CI; byte checks require --xbe")
if __name__=="__main__":
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 a=p.parse_args();check(a.root,a.xbe)
