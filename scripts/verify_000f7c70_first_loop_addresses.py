#!/usr/bin/env python3
"""Pin 0x000F7C70 first loop original incoming-word and local output aliases.

Original XBE SHA256 pinned; guest register calling conventions remain
ABI_UNVERIFIED even if the C draft compiles.
"""
import argparse
import hashlib
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC="src/main_unclassified/band_000f/0x000f7c70.cpp"
SITES=(
 (0x000f7c70,"83ec50"),
 (0x000f7c73,"53"),
 (0x000f7c74,"55"),
 (0x000f7c7b,"56"),
 (0x000f7c7c,"57"),
 (0x000f7d20,"8b54b420"),
 (0x000f7d24,"8b44b430"),
 (0x000f7d28,"8d4c2464"),
 (0x000f7d2c,"51"),
 (0x000f7d2d,"8d5c2418"),
 (0x000f7d31,"89542468"),
 (0x000f7d35,"89442418"),
 (0x000f7d39,"e8821a0f00"),
 (0x000f7d40,"8bdd"),
 (0x000f7d42,"e819490100"),
)
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 a=p.parse_args()
 s=(a.root/SRC).read_text()
 assert "puVar4 = (undefined1 *)&iStack_4c;" in s
 assert "FUN_001e97c0(&param_1);" in s
 assert "register0x00000010" not in s.split("puVar4 = (undefined1 *)&iStack_4c;")[0].split("  if ((((param_1")[0]
 assert "ABI_UNVERIFIED" in s
 print("PASS 0x000F7C70 first-loop stack aliases")
 if a.xbe:
  b=a.xbe.read_bytes()
  assert hashlib.sha256(b).hexdigest()==SHA,"wrong original XBE"
  for va,code in SITES:
   exp=bytes.fromhex(code)
   got=b[va-0x10000:va-0x10000+len(exp)]
   assert got==exp,f"0x{va:08X}: {got.hex()} != {code}"
  print(f"PASS {len(SITES)} original instruction windows")
 else:print("NOTE original XBE opcode checks require --xbe")
if __name__=="__main__":
 main()
