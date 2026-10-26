#!/usr/bin/env python3
"""Fail-closed provenance regression for eleven dead Ghidra guest-ESP aliases.

Each entry's original instruction saves ESP to [EBP-0x10] in an Xbox SEH
prologue. The synthetic &stack0x... pointer in the C draft had no reads.
This is NOT a native SEH implementation or a proof of runtime equivalence.

Run: python3 scripts/verify_dead_guest_esp_aliases.py --root .
Optional original XBE: --xbe path/to/default.xbe
"""
import argparse
import hashlib
import re
from pathlib import Path

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Function address, removed synthetic Ghidra identifier suffix, original x86 saved-ESP instruction.
CASES = (
    ("00085cf0", "ffffff84", 0x00085d0e),
    ("0008ee10", "ffffff80", 0x0008ee2e),
    ("001b5fd0", "ffffff88", 0x001b5fee),
    ("001b7380", "ffffff8c", 0x001b739e),
    ("001b76b0", "ffffff88", 0x001b76ce),
    ("001c9110", "ffffff88", 0x001c912e),
    ("000d2a60", "ffffff90", 0x000d2a7e),
    ("00218790", "ffffff90", 0x002187ae),
    ("001c54b0", "ffffff80", 0x001c54ce),
    ("001b9a10", "ffffff74", 0x001b9a2e),
    ("001c6cc0", "ffffff3c", 0x001c6ce1),
)

def strip_comments(source):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)

def check_source(root):
    assert len(CASES) == 11
    for entry, suffix, instruction in CASES:
        path = root / f"src/main_unclassified/band_{entry[:4]}/0x{entry}.c"
        source = path.read_text(encoding="utf-8")
        active = strip_comments(source)
        assert f"Entry: 0x{entry}," in source, entry
        assert "Input x86 body SHA-256:" in source, entry
        assert "ABI_UNVERIFIED" in source, entry
        assert f"XBE 0x{instruction:08X}" in source, entry
        assert f"stack0x{suffix}" in source, entry
        assert f"stack0x{suffix}" not in active, entry
        assert not re.search(r"\blocal_14\b", active), entry
        assert "= *unaff_FS_OFFSET;" in active, entry
        assert "*unaff_FS_OFFSET = &" in active, entry
        assert "*unaff_FS_OFFSET =" in active, entry
        print(f"PASS 0x{entry}: dead guest-ESP C alias absent; SEH source retained")
    print("PASS: all eleven source-only checks, no Xbox ABI equivalence implied")

def check_xbe(path):
    raw = path.read_bytes()
    actual = hashlib.sha256(raw).hexdigest()
    assert actual == EXPECTED_XBE_SHA256, f"wrong XBE hash: {actual}"
    for entry, suffix, instruction in CASES:
        offset = instruction - 0x10000
        assert raw[offset:offset + 3] == bytes.fromhex("8965f0"), (
            f"0x{entry}: saved guest ESP instruction mismatch")
        # All eleven functions must begin with the original SEH frame prologue.
        va = int(entry, 16)
        assert raw[va-0x10000:va-0x10000+5] == bytes.fromhex("558bec6aff"), entry
        print(f"PASS 0x{instruction:08x}: MOV [EBP-0x10],ESP")
    print("PASS: all eleven original x86 guest saved-ESP instructions")

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    args = p.parse_args()
    check_source(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("NOTE: private original XBE absent; CI source-only check")

if __name__ == "__main__":
    main()
