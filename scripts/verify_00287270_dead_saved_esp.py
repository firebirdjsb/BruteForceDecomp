#!/usr/bin/env python3
"""Xbox 0x00287270 dead C saved-ESP aliases, original SEH preserved in evidence.

Original Xbox 0x0028728E saves ESP to EBP-0x10 for FS:0 unwind tracking.
Ghidra converts this to two unread C stack pointers. Removing those
unread C expressions repairs syntax only: native guest stack, SEH and
callee cleanup remain ABI_UNVERIFIED. --xbe authenticates private XBE.
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
SOURCE="src/main_unclassified/band_0028/0x00287270.c"
SITES=(
 (0x00287270,"558bec","original EBP frame"),
 (0x00287273,"6aff","push original -1 unwind state"),
 (0x00287275,"68308a3000","push guest SEH handler address"),
 (0x0028727a,"64a10000000050","save FS:0 predecessor and push EAX"),
 (0x00287281,"64892500000000","install original FS:0 SEH chain"),
 (0x00287288,"83ec54","reserve original guest 0x54-byte frame"),
 (0x0028728b,"535657","preserve EBX/ESI/EDI"),
 (0x0028728e,"8965f0","save original ESP to [EBP-0x10]"),
 (0x00287291,"8bf9","EDI receives this pointer"),
 (0x002875d9,"8be5","restore guest ESP from EBP"),
 (0x002875dc,"c20c00","return, callee cleans 12-byte arguments"),
)

def check_source(root):
 s=(root/SOURCE).read_text(encoding="utf8")
 code=re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
 assert "Entry: 0x00287270," in s and "Input x86 body SHA-256:" in s
 assert "ABI_UNVERIFIED" in s and "0x0028728E" in s
 assert "stack0x" not in code
 assert not re.search(r"\b(?:puVar1|local_14)\b",code)
 assert "FUN_0023c430();" in code and "FUN_0010bc40();" in code
 print("PASS 0x00287270: dead C guest ESP pseudo-pointers removed, live calls intact")

def check_clang(root):
 cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
      "-Wno-implicit-function-declaration","-Wno-int-conversion",
      "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
      "-Wno-int-to-pointer-cast","-Wno-return-type",
      "-Wno-deprecated-non-prototype","-I",str(root/"include"),
      str(root/SOURCE)]
 p=subprocess.run(cmd,capture_output=True,text=True)
 assert p.returncode==0,p.stderr[:1800]
 print("PASS isolated Clang C11 for 0x00287270")

def check_xbe(path):
 data=path.read_bytes()
 assert hashlib.sha256(data).hexdigest()==SHA,"wrong original Xbox executable"
 for va,bytestr,label in SITES:
  expected=bytes.fromhex(bytestr)
  got=data[va-0x10000:va-0x10000+len(expected)]
  assert got==expected,f"0x{va:08X}: {label}: {got.hex()} != {bytestr}"
  print(f"PASS original 0x{va:08X}: {label}")
 print(f"PASS {len(SITES)} original Xbox opcode windows")

def main():
 parser=argparse.ArgumentParser()
 parser.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
 parser.add_argument("--xbe",type=Path)
 parser.add_argument("--clang",action="store_true")
 a=parser.parse_args()
 check_source(a.root)
 if a.clang:check_clang(a.root)
 if a.xbe:check_xbe(a.xbe)
 else:print("NOTE original XBE not stored in CI; native SEH ABI not verified")

if __name__=="__main__":
 main()
