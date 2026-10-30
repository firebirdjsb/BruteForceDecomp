#!/usr/bin/env python3
"""Verify original 0x000823B0 vector-begin guest stack alias.

Source-only CI cannot prove the implicit ECX thiscall ABI or native guest
pointer translation. Use --xbe with the original private Xbox executable
to authenticate and verify exact original instruction bytes.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
import re
import subprocess
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC="src/main_unclassified/band_0008/0x000823b0.c"
SITES=(
 (0x000823b6,"83ec74","allocate 0x74 original guest locals"),
 (0x000823b9,"53555657","save EBX EBP ESI EDI"),
 (0x000827b0,"8b7c2428","load vector-begin pointer at entry ESP-0x5C"),
 (0x000827b6,"8b54242c","load vector-end pointer at entry ESP-0x58"),
 (0x000827f8,"8d442418","LEA existing vector-begin word at entry ESP-0x6C"),
 (0x000827fc,"506a0151","push output-word pointer, count, source word"),
 (0x00082802,"8d4c2430","set ECX to original vector descriptor"),
 (0x00082806,"8910","store vector end pointer into pushed argument"),
 (0x00082808,"e8732fffff","call original 0x00075780"),
 (0x000757a3,"8b4510","callee reads address of source word"),
 (0x000757a6,"8b08","callee dereferences that source word"),
)

def verify(root,xbe,clang):
 s=(root/SRC).read_text()
 code=re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
 assert "Entry: 0x000823b0," in s
 assert "Input x86 body SHA-256:" in s and "ABI_UNVERIFIED" in s
 assert "int *piStack_6c;" in code
 assert "FUN_00075780(piStack_68,1,&piStack_6c);" in code
 assert "stack0xffffff84" not in code
 assert "0x000827F8" in s and "0x00082802" in s
 print("PASS shared original vector-begin word and separate ECX descriptor")
 if clang:
  args=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SRC)]
  p=subprocess.run(args,capture_output=True,text=True)
  assert p.returncode==0,p.stderr[:1900]
  print("PASS isolated Clang C11")
 if xbe:
  data=xbe.read_bytes()
  assert hashlib.sha256(data).hexdigest()==SHA,"wrong original XBE"
  for va,h,why in SITES:
   exp=bytes.fromhex(h)
   got=data[va-0x10000:va-0x10000+len(exp)]
   assert got==exp,f"0x{va:08X}: {why}, got {got.hex()}, expected {h}"
   print(f"PASS original 0x{va:08X}: {why}")
  print(f"PASS {len(SITES)} original instruction windows")
 else:
  print("NOTE original XBE opcode checks require --xbe")

if __name__=="__main__":
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 p.add_argument("--clang",action="store_true")
 a=p.parse_args()
 verify(a.root,a.xbe,a.clang)
