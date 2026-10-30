#!/usr/bin/env python3
"""Verify original 0x00233C20 incoming DWORD callback address contract.

The original guest x86 reads and passes the same first stack argument.
This check does not establish implicit ESI/EDI or host COM ABI.
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

XBE_SHA256="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC="src/main_unclassified/band_0023/0x00233c20.c"
SITES=(
 (0x00233c20,"8b4620","read original ESI owner+0x20"),
 (0x00233c23,"83ec6c","allocate guest 0x6C frame"),
 (0x00233c26,"53","save EBX: stable ESP = entry ESP-0x70"),
 (0x00233c80,"8b442474","read first caller-owned incoming DWORD"),
 (0x00233ce2,"8d4c2474","LEA address of that same incoming DWORD"),
 (0x00233ce6,"51","push the incoming-word address"),
 (0x00233cec,"6a01","push original true byte flag"),
 (0x00233d19,"ff12","invoke original callback vtable entry"),
 (0x00233d31,"c20400","RET 4: exactly one guest caller DWORD"),
)
def uncomment(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
def source_check(root):
    s=(root/SRC).read_text(encoding="utf8")
    src=uncomment(s)
    assert "Entry: 0x00233c20," in s
    assert "Input x86 body SHA-256:" in s and "ABI_UNVERIFIED" in s
    assert "undefined1 FUN_00233c20(uint32_t guest_input_word)" in src
    assert "(puVar1,&guest_input_word,1,&puStack_74,auStack_8);" in src
    assert "stack0xffffff90" not in src
    print("PASS source: caller-owned original guest input DWORD forwarded by address")
def clang_check(root):
    cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type",
         "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SRC)]
    r=subprocess.run(cmd,text=True,capture_output=True)
    assert r.returncode==0,r.stderr[:2000]
    print("PASS isolated Clang C11")
def xbe_check(path):
    b=path.read_bytes()
    assert hashlib.sha256(b).hexdigest()==XBE_SHA256,"wrong original XBE"
    for va,hexb,description in SITES:
        expected=bytes.fromhex(hexb)
        actual=b[va-0x10000:va-0x10000+len(expected)]
        assert actual==expected,f"0x{va:08X} {description}: {actual.hex()} != {hexb}"
    print(f"PASS {len(SITES)} original XBE byte windows")
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    source_check(a.root)
    if a.clang:clang_check(a.root)
    if a.xbe:xbe_check(a.xbe)
    else:print("NOTE original private XBE verification requires --xbe")
if __name__=="__main__":
    main()
