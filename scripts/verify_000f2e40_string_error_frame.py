#!/usr/bin/env python3
"""Verify original Xbox 0x000F2E40 32-byte stack packet without guessed storage.

Source/Clang CI checks do NOT establish original Xbox guest stack calling
conventions, dynamic callback arguments, heap ownership or native host ABI.
Optional --xbe authenticates the private original XBE then verifies instruction
windows for inline string output and three error-code values.
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
SRC="src/main_unclassified/band_000f/0x000f2e40.c"
SITES=(
    (0x000f2e45,"83ec20","32-byte original guest local frame"),
    (0x000f2e48,"53","save EBX"),
    (0x000f2e49,"55","save EBP"),
    (0x000f2e4e,"56","save ESI"),
    (0x000f2e52,"57","save EDI"),
    (0x000f2f31,"8d4c2414","string output at frame B+4"),
    (0x000f2f35,"51","push original string output address"),
    (0x000f2f36,"c744243007000000","set small-string capacity seven"),
    (0x000f2f3e,"8944242c","initialize string size DWORD"),
    (0x000f2f42,"668944241c","write only inline string low WORD"),
    (0x000f2f47,"e8b49b0100","invoke original 0x0010CB00 string helper"),
    (0x000f2f5c,"3974242c","compare capacity with eight"),
    (0x000f2f60,"8b4c2418","load long-string guest pointer"),
    (0x000f2f66,"8d4c2418","compute inline-string address"),
    (0x000f2f6c,"e84ffeffff","invoke original 0x000F2DC0"),
    (0x000f2f9d,"89742410","write first error word at B+0"),
    (0x000f2fa6,"8d442410","address same error word"),
    (0x000f2fab,"ff922c020000","vtable+0x22C with error word"),
    (0x000f2fc4,"c744241053be02ed","error code for branch 1"),
    (0x000f2fe1,"c7442410f48740f0","error code for branch 2"),
    (0x000f2ffe,"c744241002a6ca14","error code for branch 3"),
    (0x000f300a,"8d4c2414","reuse B+0 error after PUSH"),
    (0x000f3013,"ff5208","invoke virtual error reporter"),
    (0x000f3025,"8d542410","address same B+0 for final report"),
    (0x000f302a,"ff902c020000","second vtable+0x22C report"),
)

def strip_comments(text):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",text,flags=re.S)

def check_source(root):
    src=(root/SRC).read_text(encoding="utf8")
    s=strip_comments(src)
    assert "Entry: 0x000f2e40," in src and "Input x86 body SHA-256:" in src
    assert "ABI_UNVERIFIED" in src
    for needle in (
        "uint32_t guest_stack_words[8];",
        '_Static_assert(sizeof(guest_stack_words)==0x20,',
        "guest_stack_words[7] = 7;",
        "guest_stack_words[6] = 0;",
        "memcpy((uint8_t *)guest_stack_words + 8,",
        "FUN_0010cb00((uint8_t *)guest_stack_words + 4);",
        "guest_stack_words[7] < 8",
        "(void *)&guest_stack_words[2]",
        "(void *)(uintptr_t)guest_stack_words[2]",
        "FUN_000f2dc0(uVar2,guest_string);",
        "guest_stack_words[0] = UINT32_C(0xfd890279);",
        "guest_stack_words[0] = UINT32_C(0xed02be53);",
        "guest_stack_words[0] = UINT32_C(0xf04087f4);",
        "guest_stack_words[0] = UINT32_C(0x14caa602);",
        "(&guest_stack_words[0]);",
    ):
        assert needle in s,f"missing original guest storage contract: {needle}"
    assert "stack0xffffff" not in s
    print("PASS 0x000F2E40: one 32-byte frame, SSO branch, four observed error values")

def check_clang(root):
    cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type",
         "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SRC)]
    r=subprocess.run(cmd,capture_output=True,text=True)
    assert r.returncode==0,r.stderr[:2000]
    print("PASS isolated host Clang C11 for 0x000F2E40")

def check_xbe(path):
    data=path.read_bytes()
    assert hashlib.sha256(data).hexdigest()==XBE_HASH,"wrong original private XBE"
    for va,hexbytes,reason in SITES:
        expected=bytes.fromhex(hexbytes)
        actual=data[va-0x10000:va-0x10000+len(expected)]
        assert actual==expected,f"0x{va:08X} {reason}: {actual.hex()} != {hexbytes}"
        print(f"PASS XBE 0x{va:08X}: {reason}")
    print(f"PASS {len(SITES)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    check_source(a.root)
    if a.clang:check_clang(a.root)
    if a.xbe:check_xbe(a.xbe)
    else:print("NOTE: private XBE instruction checks are local-only")

if __name__=="__main__":
    main()
