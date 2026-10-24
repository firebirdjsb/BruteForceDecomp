#!/usr/bin/env python3
"""Fail closed if the two evidence-backed stack repairs regress.

Run from repository root: python tools/check_verified_stack_repairs.py
This checks source provenance and the specific synthetic-symbol repair.
It does not certify native runtime equivalence or replace the C11 sweep.
"""
from pathlib import Path
import re

CASES = (
    ("src/main_unclassified/band_0001/0x0001c630.c",
     "0x0001c630", "E184BE2C9E9EFB13C45DDB09CC2DF4046DBB43C4149269FAF390F473E548F64A",
     "stack0xffffff94", "EBP-0x68"),
    ("src/main_unclassified/band_0001/0x0001c980.c",
     "0x0001c980", "E710F94CC4E230DD1324C747FDD89B0B7A0C65F4B6DB7A12F2074D82EE1AF463",
     "stack0xffffff68", "EBP-0x94"),
)

def main():
    root = Path(__file__).resolve().parents[1]
    for name, entry, body_hash, symbol, saved_esp in CASES:
        source = (root / name).read_text(encoding="utf-8")
        assert f"Entry: {entry}," in source, name
        assert f"Input x86 body SHA-256: {body_hash}" in source, name
        assert "ABI_UNVERIFIED" in source, name
        assert f"original ESP = {saved_esp}" in source, name
        # The symbol may occur only as explanatory text in a comment.
        without_comments = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
        assert symbol not in without_comments, name
        assert "local_14" not in without_comments, name
        assert "local_10 = *unaff_FS_OFFSET;" in source, name
        assert "*unaff_FS_OFFSET = local_10;" in source, name
        print(f"PASS {entry}: provenance and stack-reference repair retained")
    print("PASS source regression; runtime/ABI and full Clang sweep not certified")

if __name__ == "__main__":
    main()
