#!/usr/bin/env python3
"""Verify original 0x001E95E0 file/parser output pair and string handoff.

The original XBE is private. Optional --xbe performs SHA256 and instruction
checks. CI performs source/isolated Clang C11 tests. Missing implicit ECX
input for 0x0023A790, guest pointer translation and interface releases
are explicitly NOT verified by this repair; syntax does not prove runtime.
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
SRC = "src/main_unclassified/band_001e/0x001e95e0.c"
SITES = (
    (0x001e96c8, "895c2414", "initialize file interface word1"),
    (0x001e96cc, "895c2410", "initialize parser interface word0"),
    (0x001e96dd, "8d7c2414", "address file output DWORD"),
    (0x001e96e1, "57", "push file output address"),
    (0x001e96e2, "6800000080", "push original access flags"),
    (0x001e96e9, "ff520c", "open virtual file factory method"),
    (0x001e96f4, "8d442410", "address separate parser output DWORD"),
    (0x001e96f8, "50", "push parser output address"),
    (0x001e96f9, "e8e298fbff", "call original parser constructor"),
    (0x001e96fe, "8b6c2414", "load parser output after temporary push"),
    (0x001e9725, "8b7c2414", "reload file output"),
    (0x001e9738, "89742418", "save destination allocation guest pointer"),
    (0x001e9748, "8b4c2410", "pass parser interface to 0x001E98C0"),
    (0x001e975d, "e85e010000", "call string-table insertion helper"),
    (0x001e977e, "8b5500", "load parser vtable before release"),
    (0x001e9782, "ff5208", "release parser virtual method"),
    (0x001e9785, "8b442414", "load factory file output"),
    (0x001e9790, "ff5108", "release file virtual method"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)

def verify_source(root):
    text=(root/SRC).read_text(encoding="utf8")
    ac=active(text)
    assert "Entry: 0x001e95e0," in text
    assert "Input x86 body SHA-256:" in text
    assert "ABI_UNVERIFIED" in text
    for t in (
        "uint32_t guest_parser_and_file[2];",
        "_Static_assert(sizeof(guest_parser_and_file)==8,",
        "guest_parser_and_file[0] = 0;",
        "guest_parser_and_file[1] = 0;",
        "&guest_parser_and_file[1]);",
        "FUN_001a2fe0(&guest_parser_and_file[0])",
        "guest_parser_and_file[0]);",
    ):
        assert t in ac, f"missing guest output contract {t}"
    assert "stack0xfffffeb8" not in ac and "stack0xfffffeb4" not in ac
    assert "release vtable+8" in text
    print("PASS 0x001E95E0: reversed adjacent 32-bit file/parser outputs and parser handoff")

def verify_clang(root):
    argv=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
          "-Wno-implicit-function-declaration","-Wno-int-conversion",
          "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
          "-Wno-int-to-pointer-cast","-Wno-return-type",
          "-Wno-deprecated-non-prototype","-I",str(root/"include"),
          str(root/SRC)]
    p=subprocess.run(argv,capture_output=True,text=True)
    assert p.returncode==0,p.stderr[:1800]
    print("PASS isolated host Clang C11 for 0x001E95E0")

def verify_xbe(path):
    raw=path.read_bytes()
    assert hashlib.sha256(raw).hexdigest()==XBE_SHA256,"wrong original XBE"
    for va,code,why in SITES:
        wanted=bytes.fromhex(code)
        got=raw[va-0x10000:va-0x10000+len(wanted)]
        assert got==wanted, f"{va:#010x} {why}: found {got.hex()}, expected {code}"
        print(f"PASS original {va:#010x}: {why}")
    print(f"PASS {len(SITES)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    args=p.parse_args()
    verify_source(args.root)
    if args.clang:verify_clang(args.root)
    if args.xbe:verify_xbe(args.xbe)
    else:print("NOTE: private XBE unavailable in CI; original bytes checked locally")

if __name__=="__main__":
    main()
