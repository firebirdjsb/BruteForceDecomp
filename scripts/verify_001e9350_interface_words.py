#!/usr/bin/env python3
"""Verify bounded file+parser output-word layout at Xbox entry 0x001E9350.

The user's original XBE is private; --xbe PATH authenticates full SHA256 and
verifies instruction bytes, in addition to CI source/isolated C11 checks.
The original vtable releases and implicit ECX input of FUN_0023A790 are
still NOT represented correctly by this draft. Passing does not certify ABI,
linkage, runtime functionality, or ownership/lifetime equivalence.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_001e/0x001e9350.c"
SITES = (
    (0x001e9488, "895c2410", "initialise file interface word0"),
    (0x001e948c, "895c2414", "initialise parser interface word1"),
    (0x001e949d, "8d742410", "LEA file output at stable ESP+0x10"),
    (0x001e94a1, "56", "pass file output pointer"),
    (0x001e94a2, "6800000080", "file open access flags"),
    (0x001e94a9, "ff520c", "factory file open vtable call"),
    (0x001e94b0, "8d442414", "LEA independent parser output at ESP+0x14"),
    (0x001e94b4, "50", "push parser output"),
    (0x001e94b5, "e8269bfbff", "call FUN_001A2FE0"),
    (0x001e94ba, "8b742418", "reload parser word after stack push"),
    (0x001e94c5, "8b7c2410", "reload file word"),
    (0x001e94e7, "8b4c2414", "forward parser guest word to 0x001E98C0"),
    (0x001e9502, "e8b9030000", "call original 0x001E98C0"),
    (0x001e950e, "8b16", "load parser interface vtable before release"),
    (0x001e9511, "ff5208", "release parser via vtable+8"),
    (0x001e9514, "8b442410", "reload file interface word"),
    (0x001e951f, "ff5108", "release file via vtable+8"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def source_check(root):
    text=(root/SOURCE).read_text(encoding="utf8")
    s=active(text)
    assert "Entry: 0x001e9350," in text
    assert "Input x86 body SHA-256:" in text and "ABI_UNVERIFIED" in text
    for expected in (
        "uint32_t guest_interfaces[2];",
        '_Static_assert(sizeof(guest_interfaces)==8,"two guest output DWORDs");',
        "guest_interfaces[0] = 0;",
        "guest_interfaces[1] = 0;",
        "(DAT_00469908,ppppuVar6,0x80000000,&guest_interfaces[0]);",
        "FUN_001a2fe0(&guest_interfaces[1])",
        "guest_interfaces[1]);",
    ):
        assert expected in s, f"missing guest source contract: {expected}"
    assert "stack0xfffffeb4" not in s and "stack0xfffffeb8" not in s
    assert "not yet reconstructed" in text
    print("PASS 0x001E9350: distinct consecutive 32-bit file/parser outputs")
    print("NOTE: COM release, guest stack ABI and implicit ECX remain unverified")

def clang_check(root):
    args=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype","-I",str(root/"include"),
        str(root/SOURCE)]
    r=subprocess.run(args,capture_output=True,text=True)
    assert r.returncode==0,r.stderr[:1800]
    print("PASS 0x001E9350: isolated C11 syntax")

def xbe_check(path):
    raw=path.read_bytes()
    assert hashlib.sha256(raw).hexdigest()==XBE_HASH,"original Xbox XBE hash mismatch"
    for va,hexb,title in SITES:
        want=bytes.fromhex(hexb)
        got=raw[va-0x10000:va-0x10000+len(want)]
        assert got==want, f"{va:#010x} {title}: actual {got.hex()}, expected {hexb}"
        print(f"PASS original {va:#010x}: {title}")
    print(f"PASS {len(SITES)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    args=p.parse_args()
    source_check(args.root)
    if args.clang: clang_check(args.root)
    if args.xbe: xbe_check(args.xbe)
    else: print("NOTE: original XBE is private; byte checks are local-only")

if __name__=="__main__":
    main()
