#!/usr/bin/env python3
"""Original Xbox 0x000F7C70 vtable+0x8C arguments and guest output.

Checks source and isolated Clang C11; optional private --xbe validates
the pinned original XBE SHA-256 and the exact x86 argument windows.
This is not proof of native virtual calling conventions or guest memory.
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

SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC = "src/main_unclassified/band_000f/0x000f7c70.c"
SITES = (
 (0x000f7c70, "83ec50", "original 0x50 guest local frame"),
 (0x000f7c73, "53", "save EBX"),
 (0x000f7c74, "55", "save EBP"),
 (0x000f7c7b, "56", "save ESI"),
 (0x000f7c7c, "57", "save EDI"),
 (0x000f7daa, "8b442468", "load incoming guest second DWORD S+8"),
 (0x000f7db6, "50", "push third argument"),
 (0x000f7db7, "8d442420", "address local buffer S-0x44"),
 (0x000f7dbb, "50", "push second argument"),
 (0x000f7dbc, "8d442418", "address distinct output word S-0x50"),
 (0x000f7dc0, "50", "push first argument"),
 (0x000f7dc1, "ff928c000000", "invoke original virtual slot +0x8C"),
 (0x000f7dc7, "8b442410", "reload 32-bit result output"),
 (0x000f7dcb, "85c0", "branch decision reads same output"),
)
def active(src):
 return re.sub(r"/\*.*?\*/|//[^\n]*","",src,flags=re.S)
def check(root, xbe, clang):
 src=(root/SRC).read_text(encoding="utf-8"); code=active(src)
 assert "Input x86 body SHA-256:" in src and "ABI_UNVERIFIED" in src
 assert "uint32_t guest_result_word;" in code
 assert "(&guest_result_word,auStack_48 + 4,param_2);" in code
 assert "unaff_EDI = (int)guest_result_word;" in code
 assert "stack0xffffffac" not in code
 assert "0x000F7DB6..0x000F7DC1" in src
 print("PASS vtable output and two independent argument addresses")
 if clang:
  argv=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype","-I",str(root/"include"),
        str(root/SRC)]
  r=subprocess.run(argv,capture_output=True,text=True)
  assert r.returncode==0,r.stderr[:1800]
  print("PASS isolated Clang C11")
 if xbe:
  data=xbe.read_bytes();assert hashlib.sha256(data).hexdigest()==SHA,"wrong original XBE"
  for va,op,why in SITES:
   expect=bytes.fromhex(op);got=data[va-0x10000:va-0x10000+len(expect)]
   assert got==expect,f"0x{va:08X} {why}: {got.hex()} != {op}"
   print(f"PASS original 0x{va:08X}: {why}")
  print(f"PASS {len(SITES)} original instruction windows")
 else:
  print("NOTE original XBE byte checks require --xbe")
if __name__=="__main__":
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument("--xbe",type=Path)
 p.add_argument("--clang",action="store_true")
 a=p.parse_args();check(a.root,a.xbe,a.clang)
