#!/usr/bin/env python3
"""Verify SSE float32 paired-lane storage in original Xbox 0x002688C0.

Original MOVSS low DWORD plus MOVHPS high two DWORDs are preserved as
adjacent IEEE754 float32 slots; the Ghidra 64-bit CONCAT44 expression must
NOT numerically cast floats to integers. An isolated C11 syntax pass is
not proof of 1:1 SSE rounding, original register ABI, or native behavior.
--xbe authenticates the user's private pinned XBE; it is not committed.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/main_unclassified/band_0026/0x002688c0.c"
SITES=(
 (0x268ef1,"0f164804","load two high f32 lanes from 64-bit guest memory"),
 (0x268ef5,"0f59c1","multiply packed f32 SSE lanes"),
 (0x268ef8,"8d842484000000","address first float32 three-lane vector"),
 (0x268eff,"f30f1100","store first low f32 DWORD"),
 (0x268f03,"0f174004","store first two upper float32 DWORDs"),
 (0x268f51,"0f164804","load next two guest f32 lanes"),
 (0x268f55,"0f59c1","multiply second vector lanes"),
 (0x268f58,"8d84249c000000","address second guest float32 vector"),
 (0x268f5f,"f30f1100","store second low f32"),
 (0x268f63,"0f174004","store second upper pair of float32s"),
 (0x2690b8,"0f164804","load third upper guest f32 pair"),
 (0x2690bc,"0f59c1","multiply third SSE vector"),
 (0x2690bf,"8d8424a8000000","address third guest float32 vector"),
 (0x2690c6,"f30f1100","store third low f32"),
 (0x2690ca,"0f174004","store third upper f32 pair"),
 (0x26911f,"0f164804","load fourth upper float32 pair"),
 (0x269123,"0f59c1","multiply fourth SSE vector"),
 (0x269126,"8d842490000000","address fourth guest f32 vector"),
 (0x26912d,"f30f1100","store fourth low float32"),
 (0x269131,"0f174004","store fourth upper float32 pair"),
)
def active(s):
 return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
def check_source(root):
 text=(root/SOURCE).read_text(encoding="utf8")
 s=active(text)
 assert "Entry: 0x002688c0," in text
 assert "Input x86 body SHA-256:" in text and "ABI_UNVERIFIED" in text
 assert "float local_258;" in s and "float fStack_254;" in s
 assert "float local_1c4;" in s and "float fStack_1c0;" in s
 assert "fStack_254 = fVar16;" in s
 assert "local_258 = local_1d0;" in s
 assert "fStack_254 = local_234 * fVar17;" in s
 assert "local_1c4 = local_23c;" in s
 assert "fStack_1c0 = fVar15;" in s
 assert "_local_258" not in s and "_local_1c4" not in s
 print("PASS three paired float32 writes, no fake 64-bit CONCAT44 stores")
def check_clang(root):
 cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
      "-Wno-implicit-function-declaration","-Wno-int-conversion",
      "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
      "-Wno-int-to-pointer-cast","-Wno-return-type",
      "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)]
 result=subprocess.run(cmd,text=True,capture_output=True)
 assert result.returncode==0,result.stderr[:1800]
 print("PASS isolated Clang C11 for 0x002688c0")
def check_xbe(path):
 data=path.read_bytes()
 assert hashlib.sha256(data).hexdigest()==SHA,"wrong original Xbox XBE"
 for va,bytestr,why in SITES:
  expected=bytes.fromhex(bytestr)
  got=data[va-0x10000:va-0x10000+len(expected)]
  assert got==expected,f"0x{va:08X} {why}: {got.hex()} != {bytestr}"
 print(f"PASS {len(SITES)} original SSE packed-lane instruction windows")
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 p.add_argument("--clang",action="store_true")
 a=p.parse_args()
 check_source(a.root)
 if a.clang:check_clang(a.root)
 if a.xbe:check_xbe(a.xbe)
 else:print("NOTE private original XBE is not on CI")
if __name__=="__main__":main()
