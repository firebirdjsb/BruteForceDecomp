#!/usr/bin/env python3
"""Original 0x000AE7C0 shared three-DWORD vector through two helpers.

The guest x86 vector is raw DWORD stack storage. The C11 float-pointer
cast does not prove strict-aliasing, host memory, register or runtime
equivalence. This test pins exact original LEA and call argument layout.
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

XBE_HASH="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/main_unclassified/band_000a/0x000ae7c0.c"
SITES=(
    (0x000ae7c0,"83ec4c","allocate original 0x4c guest locals"),
    (0x000ae7c3,"55","save EBP"),
    (0x000ae7c8,"57","save EDI"),
    (0x000ae7ea,"53","save EBX"),
    (0x000ae7eb,"56","save ESI"),
    (0x000ae83c,"8d4c241c","original earlier 0x000B0940 vector output S-0x44"),
    (0x000ae841,"83c324","adjust original vector input"),
    (0x000ae871,"8d542420","re-use same vector S-0x44 in 0x000B0550"),
    (0x000ae884,"8d542418","re-use same vector S-0x44 in 0x000B0770"),
    (0x000ae888,"52","push shared guest vector address"),
    (0x000ae889,"57","push original EDI receiver"),
    (0x000ae892,"e8d91e0000","call original 0x000B0770"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)

def check_source(root):
    text=(root/SOURCE).read_text(encoding="utf8")
    s=active(text)
    assert "Entry: 0x000ae7c0," in text
    assert "Input x86 body SHA-256:" in text and "ABI_UNVERIFIED" in text
    assert "int aiStack_44 [3];" in s
    assert "FUN_000b0940(in_EAX,iVar6 + 0x24,aiStack_44)" in s
    assert "FUN_000b0770(in_EAX,(float *)aiStack_44)" in s
    assert "stack0xffffffac" not in s
    assert "0x000AE884 LEA" in text
    print("PASS 0x000AE7C0 existing three-DWORD vector shared by both helpers")

def check_clang(root):
    command=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
          "-Wno-implicit-function-declaration","-Wno-int-conversion",
          "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
          "-Wno-int-to-pointer-cast","-Wno-return-type",
          "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)]
    result=subprocess.run(command,capture_output=True,text=True)
    assert result.returncode==0,result.stderr[:1900]
    print("PASS isolated Clang C11")

def check_xbe(path):
    raw=path.read_bytes()
    assert hashlib.sha256(raw).hexdigest()==XBE_HASH,"wrong original Xbox XBE"
    for va,h,why in SITES:
        exp=bytes.fromhex(h)
        got=raw[va-0x10000:va-0x10000+len(exp)]
        assert got==exp,f"{va:#010x} {why}: {got.hex()} != {h}"
        print(f"PASS original {va:#010x}: {why}")
    print(f"PASS {len(SITES)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    check_source(a.root)
    if a.clang: check_clang(a.root)
    if a.xbe: check_xbe(a.xbe)
    else: print("NOTE: private original XBE checked locally only")

if __name__=="__main__":
    main()
