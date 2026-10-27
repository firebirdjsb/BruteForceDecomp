#!/usr/bin/env python3
"""Verify two original Xbox packed float3 SUBPS and x87 dot sequences.

Checks source contracts and (with --xbe) 24 authenticated original x86
windows. Isolated host Clang syntax is not full guest ABI/runtime proof;
x87 precision, 32-bit guest pointers and SIMD high lanes remain unverified.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path
SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC="src/main_unclassified/band_002d/0x002d80b0.c"
SITES=(
 (0x2d85c0,"8d44244c","LEA first float3 output"),
 (0x2d85d4,"f30f1008","first MOVSS"),
 (0x2d85d8,"0f164804","first MOVHPS"),
 (0x2d85e0,"f30f1012","second MOVSS input"),
 (0x2d85e4,"0f165204","second MOVHPS input"),
 (0x2d85e8,"0f5cca","packed first SUBPS"),
 (0x2d85ef,"f30f1108","first float3 low-lane store"),
 (0x2d85f3,"0f174804","first float3 upper lanes"),
 (0x2d85f7,"8d54245c","LEA second float3 output"),
 (0x2d8607,"f30f1008","second MOVSS"),
 (0x2d860f,"8b54246c","load source pointer"),
 (0x2d8613,"f30f1012","second MOVSS input"),
 (0x2d8617,"0f165204","second MOVHPS input"),
 (0x2d861b,"0f5cca","packed second SUBPS"),
 (0x2d8622,"f30f1108","second float3 low lane"),
 (0x2d8626,"0f174804","second float3 upper lanes"),
 (0x2d862a,"d944245c","x87 FLD position X"),
 (0x2d862e,"d84c244c","x87 FMUL edge X"),
 (0x2d8632,"d9442464","x87 FLD position Z"),
 (0x2d8636,"d84c2454","x87 FMUL edge Z"),
 (0x2d863a,"dec1","x87 FADDP x+z"),
 (0x2d863c,"d9442460","x87 FLD position Y"),
 (0x2d8640,"d84c2450","x87 FMUL edge Y"),
 (0x2d8644,"dec1","x87 FADDP sum Y"),
)
def active(s):
 return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
def check(root,xbe,clang):
 txt=(root/SRC).read_text(encoding="utf8");code=active(txt)
 assert "Entry: 0x002d80b0," in txt and "ABI_UNVERIFIED" in txt
 assert "#include <xmmintrin.h>" in txt
 assert "const __m128 guest_delta_edge = _mm_sub_ps(" in code
 assert "const __m128 guest_delta_position = _mm_sub_ps(" in code
 assert code.count("_mm_setr_ps(")==4 and code.count("_mm_storeu_ps(")==2
 assert "long double guest_dot_x87 =" in code
 assert "guest_position_lanes[0] * (long double)guest_edge_lanes[0]" in code
 assert "guest_position_lanes[2] * (long double)guest_edge_lanes[2]" in code
 assert "guest_position_lanes[1] * (long double)guest_edge_lanes[1]" in code
 assert "if (guest_dot_x87 < 0.0L)" in code
 assert "local_50 = (uint *)(*pfVar18 - *pfVar16)" not in code
 assert "local_40 = (int *)(*pfVar16 - *local_30)" not in code
 print("PASS two packed original float3 differences and x87 X,Z,Y dot storage")
 if clang:
  cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SRC)]
  result=subprocess.run(cmd,capture_output=True,text=True)
  assert result.returncode==0,result.stderr[:2100]
  print("PASS isolated Clang C11")
 if xbe:
  b=xbe.read_bytes()
  assert hashlib.sha256(b).hexdigest()==SHA,"original XBE SHA256 mismatch"
  for va,h,why in SITES:
   wanted=bytes.fromhex(h);got=b[va-0x10000:va-0x10000+len(wanted)]
   assert got==wanted,f"0x{va:08X} {why}: {got.hex()} != {h}"
   print(f"PASS original 0x{va:08X}: {why}")
  print(f"PASS {len(SITES)} instruction windows")
 else:print("NOTE original XBE bytes require --xbe")
if __name__=="__main__":
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 p.add_argument("--clang",action="store_true")
 a=p.parse_args();check(a.root,a.xbe,a.clang)
