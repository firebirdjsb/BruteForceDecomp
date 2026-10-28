#!/usr/bin/env python3
"""Verify recovered 0x0011C810 vtable +0x30 -> actual host source bridge."""
import argparse
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

BODIES = {
 "src/main_unclassified/band_0011/0x0011c810.c":"A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255",
 "src/main_unclassified/band_0001/0x0001d0c0.c":"799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4",
 "src/main_unclassified/band_0012/0x0012b2a0.c":"C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E",
}
def main():
 ap=argparse.ArgumentParser(description=__doc__)
 ap.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 ap.add_argument("--clang",default=shutil.which("clang"))
 ap.add_argument("--xbe",type=Path)
 args=ap.parse_args()
 if not args.clang:ap.error("clang is required")
 root=args.root.resolve()
 for name,digest in BODIES.items():
  if ("Input x86 body SHA-256: "+digest) not in (root/name).read_text():
   ap.error("Original body provenance changed: "+name)
 caller=(root/"src/main_unclassified/band_0011/0x0011c810.c").read_text()
 if "FUN_0001d0c0();" not in caller or "FUN_0012b2a0();" not in caller:
  ap.error("Original caller interface changed; reassess virtual bridge")
 if args.xbe:
  subprocess.run([sys.executable,str(root/"scripts/verify_0011c810_matrix_frame.py"),
      "--root",str(root),"--xbe",str(args.xbe)],check=True)
 flags=["-std=c11","-Wall","-Wextra","-Werror","-pedantic","-I",str(root/"include")]
 syntax=str(root/"tests/test_0011c810_virtual_call_syntax.c")
 for target in ("i686-pc-windows-msvc","x86_64-pc-windows-msvc"):
  subprocess.run([args.clang,*flags,"-target",target,"-fsyntax-only",syntax],check=True)
 sources=[str(root/x) for x in (
   "tests/test_0011c810_virtual_call_link.c",
   "tests/support/bf_0011c810_guest_producer_bridge.c",
   "src/main_unclassified/band_0001/0x0001d0c0.c",
   "src/main_unclassified/band_0012/0x0012b2a0.c")]
 with tempfile.TemporaryDirectory(prefix="bf_0011c810_virtual_") as temp:
  for opt in ("-O0","-O2"):
   out=str(Path(temp)/("test_"+opt[1:]))
   subprocess.run([args.clang,*flags,"-Wno-parentheses","-Wno-literal-range",
      "-Wno-strict-prototypes",opt,*sources,"-lm","-o",out],check=True)
   subprocess.run([out],check=True)
 print("PASS vtable +0x30 guest pointer chain, returned EAX, two callsite slots and host source linkage")
 print("NOTE: the actual virtual method and Xbox ABI/x87 parity are NOT established")
 if not args.xbe: print("NOTE: original XBE not freshly reauthenticated in this run")
if __name__=="__main__":main()
