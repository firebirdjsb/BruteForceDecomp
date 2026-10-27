#!/usr/bin/env python3
"""Verify one original x86 output DWORD reused by three stream callbacks.

This checks C11 source and optional original private XBE opcode windows.
Native stream ABI, guest pointer conversion, and runtime equivalence remain
ABI_UNVERIFIED.
"""
import argparse, hashlib, re, subprocess
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/main_unclassified/band_0027/0x00270790.c"
SITES=(
 (0x270790,"558bec83e4f881","aligned guest stack"),
 (0x2707bb,"8d442408","original count output at ESP+8"),
 (0x2707c2,"c744241800000000","separate loop index initialization"),
 (0x2707ca,"ff5228","initial virtual count callback"),
 (0x27088e,"8d5c2408","first capacity retry output at same ESP+8"),
 (0x270892,"53","push same output pointer"),
 (0x27089b,"ff5214","first retry callback"),
 (0x27089e,"8b542408","reload first written count"),
 (0x2708a2,"3b560c","compare first written count"),
 (0x270928,"8d5c2408","second capacity retry output at same ESP+8"),
 (0x27092c,"53","push output pointer again"),
 (0x270935,"ff5214","second retry callback"),
 (0x270938,"8b542408","reload second written count"),
 (0x27093c,"3b560c","compare second written count"),
 (0x27097b,"c20400","original RET 4"),
)
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 p.add_argument("--clang",action="store_true")
 a=p.parse_args()
 source=(a.root/SOURCE).read_text()
 s=re.sub(r"/\*.*?\*/|//[^\n]*","",source,flags=re.S)
 assert "Entry: 0x00270790," in source and "ABI_UNVERIFIED" in source
 assert "uint uStack_228;" in s
 assert "(**(code **)(*param_1 + 0x28))(&uStack_228);" in s
 assert s.count("unaff_ESI[3],&uStack_228);")==2
 assert "stack0xfffffdd0" not in s
 print("PASS: shared stream count DWORD at three original callsites")
 if a.clang:
  args=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype","-I",str(a.root/"include"),
        str(a.root/SOURCE)]
  r=subprocess.run(args,text=True,capture_output=True)
  assert r.returncode==0,r.stderr[:2000]
  print("PASS isolated Clang C11")
 if a.xbe:
  b=a.xbe.read_bytes()
  assert hashlib.sha256(b).hexdigest()==SHA,"wrong original Xbox executable"
  for va,h,meaning in SITES:
   exp=bytes.fromhex(h)
   got=b[va-0x10000:va-0x10000+len(exp)]
   assert got==exp,f"0x{va:08X} {meaning}: {got.hex()} != {h}"
  print(f"PASS {len(SITES)} original XBE instruction windows")
 else: print("NOTE original XBE not in CI; native ABI unverified")
if __name__=="__main__": main()
