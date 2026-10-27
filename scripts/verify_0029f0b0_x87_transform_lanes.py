#!/usr/bin/env python3
"""Verify original 0x0029F0B0 x87 returned float32 matrix-lane contracts.

Source/Clang tests are CI-local. Original opcode windows are verified
only when the user supplies the pinned original XBE with --xbe. This
reconstruction does NOT verify the native x87 return calling convention,
rounding control, register-preservation or FUN_00212280's implicit ESI.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0029/0x0029f0b0.c"
WINDOWS = (
 (0x29f0b0,"57","save original EDI source object"),
 (0x29f0f7,"c21000","RET 0x10 for four caller stack arguments"),
 (0x29f12c,"d95c241c","first returned x87 float to guest scratch"),
 (0x29f13c,"d95c2420","second x87 float to adjacent guest scratch"),
 (0x29f14c,"d95c2414","third x87 float to guest scratch"),
 (0x29f15c,"52","helper third pushed float word"),
 (0x29f15d,"50","helper second pushed float word"),
 (0x29f15e,"51","helper first pushed float word"),
 (0x29f15f,"e81c31f7ff","call original matrix builder 0x212280"),
 (0x29f18a,"d95c2420","first x87 matrix row scale"),
 (0x29f199,"d95c2414","second x87 matrix row scale"),
 (0x29f1a5,"ff511c","third x87 matrix row scale"),
 (0x29f1a8,"d9442420","load first scalar for matrix multiply"),
 (0x29f1ae,"d91e","store multiplied binary32"),
 (0x29f214,"d95c241c","diagonal 3 sampling first output"),
 (0x29f224,"d95c2420","diagonal 3 sampling second output"),
 (0x29f234,"d91e","diagonal 3 final binary32 output"),
 (0x29f2a1,"8b442420","translation sampling original next receiver"),
 (0x29f2a9,"d95c2424","translation source[5] binary32"),
 (0x29f2b5,"d95c241c","translation source[4] binary32"),
 (0x29f2c5,"d95c2420","translation source[3] binary32"),
 (0x29f2cd,"894e24","write matrix translation X"),
 (0x29f2d0,"895628","write matrix translation Y"),
 (0x29f2d3,"89462c","write matrix translation Z"),
 (0x29f2dc,"c21000","final RET 0x10"),
)
def active(s):
 return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
def source_check(root):
 txt=(root/SOURCE).read_text(encoding="utf8")
 s=active(txt)
 assert "Entry: 0x0029f0b0," in txt
 assert "Input x86 body SHA-256:" in txt and "ABI_UNVERIFIED" in txt
 for expected in (
  "FUN_0029f0b0(int *source, float query, int *context, float *matrix)",
  "float a_value =",
  "float b_value =",
  "float c_value =",
  "FUN_00212280(c_value,b_value,a_value);",
  "float s0 =", "float s1 =", "float s2 =",
  "matrix[0] *= s0; matrix[1] *= s0; matrix[2] *= s0;",
  "matrix[3] *= s1; matrix[4] *= s1; matrix[5] *= s1;",
  "matrix[6] *= s2; matrix[7] *= s2; matrix[8] *= s2;",
  "matrix[0] = s0; matrix[1] = 0.0f; matrix[2] = 0.0f;",
  "matrix[3] = 0.0f; matrix[4] = s1; matrix[5] = 0.0f;",
  "matrix[6] = 0.0f; matrix[7] = 0.0f; matrix[8] = s2;",
  "matrix[9] = tx; matrix[10] = ty; matrix[11] = tz;",
 ):
  assert expected in s, f"source x87 transform contract missing: {expected}"
 assert "(int *)(float)" not in s and "(float)param_4" not in s
 assert "matrix[0] = 1.0f" in s and "matrix[9] = 0.0f" in s
 assert "native" in txt and "implicit ESI" in txt
 print("PASS source x87 scalar sampling and original 3x4 matrix lanes")
def clang_check(root):
 cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
      "-Wno-implicit-function-declaration","-Wno-int-conversion",
      "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
      "-Wno-int-to-pointer-cast","-Wno-return-type",
      "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)]
 r=subprocess.run(cmd,capture_output=True,text=True)
 assert r.returncode == 0,r.stderr[:2000]
 print("PASS isolated host Clang C11 for 0x0029F0B0")
def xbe_check(path):
 data=path.read_bytes()
 assert hashlib.sha256(data).hexdigest()==XBE_SHA256,"original Xbox XBE mismatch"
 for va,hexbytes,why in WINDOWS:
  expected=bytes.fromhex(hexbytes)
  actual=data[va-0x10000:va-0x10000+len(expected)]
  assert actual==expected,f"0x{va:08X} {why}: {actual.hex()} != {hexbytes}"
 print(f"PASS all {len(WINDOWS)} original x87 and matrix store instruction sites")
def main():
 parser=argparse.ArgumentParser()
 parser.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 parser.add_argument("--xbe",type=Path)
 parser.add_argument("--clang",action="store_true")
 args=parser.parse_args()
 source_check(args.root)
 if args.clang:clang_check(args.root)
 if args.xbe:xbe_check(args.xbe)
 else:print("NOTE: private Xbox XBE verification local-only")
if __name__=="__main__":
 main()
