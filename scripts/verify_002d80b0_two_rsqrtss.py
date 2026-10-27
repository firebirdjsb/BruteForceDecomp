#!/usr/bin/env python3
"""Pin scalar RSQRTSS / MOVSS / FLD sequences in original 0x002D80B0.

The result is only the lower float32 XMM0 lane; upper lanes are not
read at these original callsites. This does NOT validate full host ABI,
guest pointer translation or all collision behavior.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC="src/main_unclassified/band_002d/0x002d80b0.c"
SITES=(
 (0x002d8333,"d95c2424","first squared vector distance stored to guest float32"),
 (0x002d833d,"f30f52442424","first scalar RSQRTSS from guest scratch"),
 (0x002d8343,"f30f1144241c","first RSQRTSS result stored with MOVSS"),
 (0x002d8349,"d944241c","first scalar result loaded into x87 ST"),
 (0x002d8406,"89542414","second float32 source copied to guest scratch"),
 (0x002d840a,"f30f52442414","second scalar RSQRTSS from guest scratch"),
 (0x002d8410,"f30f11442428","second RSQRTSS result stored with MOVSS"),
 (0x002d8416,"d9442428","second scalar result loaded into x87 ST"),
)
def uncomment(s):
 return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
def check(root,xbe,clang):
 text=(root/SRC).read_text(encoding="utf-8");s=uncomment(text)
 assert "Entry: 0x002d80b0," in text and "ABI_UNVERIFIED" in text
 assert "#include <xmmintrin.h>" in text
 assert "float guest_rsqrt_scalar;" in s
 assert s.count("_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(")==2
 assert "fVar20 = guest_rsqrt_scalar * fVar20;" in s
 assert "fVar20 = guest_rsqrt_scalar;" in s
 assert "rsqrtss(in_XMM0" not in s and "auVar21._0_4_" not in s
 print("PASS two native SSE scalar RSQRTSS results")
 if clang:
  cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),
       str(root/SRC)]
  r=subprocess.run(cmd,capture_output=True,text=True)
  assert r.returncode==0,r.stderr[:2000]
  print("PASS isolated Clang C11")
 if xbe:
  raw=xbe.read_bytes();assert hashlib.sha256(raw).hexdigest()==SHA,"wrong original XBE"
  for va,code,label in SITES:
   exp=bytes.fromhex(code);got=raw[va-0x10000:va-0x10000+len(exp)]
   assert got==exp,f"0x{va:08X} ({label}): {got.hex()} != {code}"
   print(f"PASS 0x{va:08X} {label}")
  print(f"PASS {len(SITES)} original opcode windows")
 else: print("NOTE private XBE not available; use --xbe for opcode checks")
if __name__=="__main__":
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 p.add_argument("--clang",action="store_true")
 a=p.parse_args();check(a.root,a.xbe,a.clang)
