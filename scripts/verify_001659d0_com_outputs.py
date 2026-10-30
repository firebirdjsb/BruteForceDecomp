#!/usr/bin/env python3
"""Original-XBE anchored 0x001659D0 dual COM output and lifetime checks.

Runs source and isolated C11 checks in CI. --xbe checks the private pinned
original executable, without publishing copyrighted binary data. Native
COM ABI and 32-bit guest address relocation remain NOT verified.
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

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0016/0x001659d0.c"
WINDOWS = (
    (0x00165a48, "a108994600", "open factory global"),
    (0x00165a4d, "8d542410", "address factory output local_124"),
    (0x00165a51, "52", "push factory output"),
    (0x00165a52, "6800000080", "push original access flags"),
    (0x00165a57, "8d54243c", "address filename buffer"),
    (0x00165a6b, "ff510c", "call factory vtable+0x0c"),
    (0x00165a76, "8d442414", "address enum-interface local_120"),
    (0x00165a7a, "50", "push enum-interface slot"),
    (0x00165a7b, "e800e20300", "call original enum constructor"),
    (0x00165a80, "8b742418", "reload enum interface in ESI"),
    (0x00165a84, "83c404", "restore constructor argument stack"),
    (0x00165a8b, "8b7c2410", "reload factory interface in EDI"),
    (0x00165b03, "85f6", "check enum interface for release"),
    (0x00165b0d, "8b442410", "reload factory interface for release"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_source(root):
    s = (root / SOURCE).read_text(encoding="utf8")
    ac = active(s)
    assert "Entry: 0x001659d0," in s
    assert "Input x86 body SHA-256:" in s
    assert "ABI_UNVERIFIED" in s
    assert "0x00165A76" in s and "0x00165A4D" in s
    assert "FUN_001a3c80(&local_120)" in ac
    assert "unaff_ESI = (int *)(uintptr_t)local_120;" in ac
    assert "unaff_EDI = (int *)(uintptr_t)local_124;" in ac
    assert "stack0xfffffed0" not in ac
    assert "(**(code **)(*unaff_ESI + 8))(unaff_ESI);" in ac
    assert "(**(code **)(*unaff_EDI + 8))(unaff_EDI);" in ac
    print("PASS 0x001659d0: factory and enum outputs preserved through release")

def check_clang(root):
    cmd = ["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
           "-Wno-implicit-function-declaration","-Wno-int-conversion",
           "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
           "-Wno-int-to-pointer-cast","-Wno-return-type",
           "-Wno-deprecated-non-prototype","-I",str(root/"include"),
           str(root/SOURCE)]
    r=subprocess.run(cmd,capture_output=True,text=True)
    assert r.returncode == 0,r.stderr[:1800]
    print("PASS 0x001659d0: isolated host Clang C11 syntax")

def check_xbe(path):
    b=path.read_bytes()
    assert hashlib.sha256(b).hexdigest()==XBE_SHA256,"original XBE mismatch"
    for va,h,name in WINDOWS:
        expected=bytes.fromhex(h)
        actual=b[va-0x10000:va-0x10000+len(expected)]
        assert actual==expected,f"{va:#x} ({name}): {actual.hex()} != {h}"
        print(f"PASS original 0x{va:08X}: {name}")
    print(f"PASS: {len(WINDOWS)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    check_source(a.root)
    if a.clang:check_clang(a.root)
    if a.xbe:check_xbe(a.xbe)
    else:print("NOTE: original XBE is private; binary checks are local")

if __name__=="__main__":
    main()
