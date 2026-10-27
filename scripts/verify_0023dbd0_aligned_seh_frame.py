#!/usr/bin/env python3
"""Guard removal of dead, synthetic C pointers in the aligned guest SEH frame.

The original x86 is NOT represented by native C SEH; source-only checks
ensure no Ghidra host pointer guess was added. Optional --xbe checks the
user-supplied original executable's actual alignment and FS:0 prologue.
"""
import argparse
import hashlib
import re
from pathlib import Path

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0023/0x0023dbd0.c"
SITES = (
    (0x0023dbd0,"538bdc", "save original x86 entry stack pointer in EBX"),
    (0x0023dbd3,"83ec08", "allocate original prologue scratch"),
    (0x0023dbd6,"83e4f0", "align guest ESP to 16 bytes"),
    (0x0023dbdc,"55", "save guest EBP"),
    (0x0023dbe6,"6aff", "push guest exception state"),
    (0x0023dbe8,"68e07a3000", "push original guest SEH handler"),
    (0x0023dbed,"64a100000000", "read guest FS:0"),
    (0x0023dbf4,"64892500000000", "install guest FS:0 chain"),
    (0x0023dbfd,"81eca0000000", "allocate 0xA0 guest scratch bytes"),
    (0x0023dc03,"535657", "save guest EBX ESI EDI"),
    (0x0023dc06,"8965f0", "save guest ESP at EBP-0x10"),
)

def strip_comments(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)

def source_check(root):
    s=(root/SOURCE).read_text(encoding="utf-8")
    assert "Input x86 body SHA-256:" in s and "Entry: 0x0023dbd0," in s
    assert "ABI_UNVERIFIED" in s
    assert "XBE 0x0023DC06" in s
    assert "XBE 0x0023DBE8" in s
    a=strip_comments(s)
    for symbol in ("puStack_24", "local_20", "stack0xfffffffc", "stack0xffffff30", "puStack_18", "LAB_00307ae0"):
        assert re.search(r"\b"+symbol+r"\b",a) is None, symbol
    for symbol in ("*unaff_FS_OFFSET = &local_1c;", "*unaff_FS_OFFSET = local_1c;",
                   "local_40 = *(undefined4 *)(param_4 + 0x38);"):
        assert symbol in a, symbol
    print("PASS: dead synthetic stack aliases absent, guest SEH C scaffolding retained")

def xbe_check(path):
    b=path.read_bytes()
    assert hashlib.sha256(b).hexdigest()==EXPECTED_XBE_SHA256,"unexpected original XBE"
    for va,expected_hex,description in SITES:
        expected=bytes.fromhex(expected_hex)
        actual=b[va-0x10000:va-0x10000+len(expected)]
        assert actual==expected, f"0x{va:08x}: {description} {actual.hex()} != {expected_hex}"
        print(f"PASS 0x{va:08x}: {description}")
    print(f"PASS: {len(SITES)} original x86 instruction-byte checks")

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe",type=Path)
    args=ap.parse_args()
    source_check(args.root)
    if args.xbe:
        xbe_check(args.xbe)
    else:
        print("NOTE: private original XBE not shipped in CI")
    print("PASS: native guest memory mapping and SEH behavior not yet verified")

if __name__=="__main__":
    main()
