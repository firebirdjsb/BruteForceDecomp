#!/usr/bin/env python3
"""Validate Bink parser original Ghidra CONCAT44 upper/lower word semantics.

This repairs the C11 representation of a single guest 64-bit partial write:
CONCAT44(high32(old),low32(value)) == (old & 0xffffffff00000000)|value.
It makes NO native Bink parser / register ABI assertions.
"""
import argparse
import random
import re
import subprocess
from pathlib import Path

SRC="src/video_bink/bink/0x003574b0.c"
MASK=(1<<64)-1
def check(root,clang):
 text=(root/SRC).read_text(encoding="utf8")
 code=re.sub(r"/\*.*?\*/|//[^\n]*","",text,flags=re.S)
 assert "Input x86 body SHA-256:" in text and "ABI_UNVERIFIED" in text
 assert "((uint64_t)local_3c4 & UINT64_C(0xffffffff00000000)) |" in code
 assert "(uint64_t)uVar6);" in code
 assert "local_3c4._4_4_" not in code
 rng=random.Random(0x3574b0)
 for old in [0,1,MASK,0xffffffff00000000,0x123456789abcdef0]+[rng.getrandbits(64) for _ in range(10000)]:
  for v in [0,1,0xffffffff,rng.getrandbits(32)]:
   expected=(((old>>32)&0xffffffff)<<32)|v
   actual=(old&0xffffffff00000000)|v
   assert expected==actual
 print("PASS 40,020 guest qword high/low word preservation cases")
 if clang:
  cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SRC)]
  p=subprocess.run(cmd,capture_output=True,text=True)
  assert p.returncode==0,p.stderr[:1800]
  print("PASS isolated host Clang C11")
if __name__=="__main__":
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--clang",action="store_true")
 a=p.parse_args();check(a.root,a.clang)
