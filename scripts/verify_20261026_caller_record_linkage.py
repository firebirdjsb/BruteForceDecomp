#!/usr/bin/env python3
"""Verify three guest by-value record widths and the 0x2A2710->0x2A27B0 linkage.

Run from repo: python3 scripts/verify_20261026_caller_record_linkage.py
With user's original binary:
    python3 scripts/verify_20261026_caller_record_linkage.py --xbe original.xbe
The private XBE is never shipped; CI source and focused C11 checks are
not proof of Xbox runtime equivalence, native ABI compatibility, or linkage.
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
RECORDS = (
    ("001665c0", "0x520", "bf_guest_heap_record_520", "FUN_001662b0(param_3.word);"),
    ("001b44e0", "0x144", "bf_guest_sequence_record_144", "FUN_001c29e0(in_EAX,*(undefined4 *)(in_EAX + 8),in_ECX - iVar2,&guest_record);"),
    ("002a2710", "0x6c", "bf_guest_insert_frame_6c", "guest_frame.word + 9"),
)
SITES = (
    (0x001665c3, "8b6c2410", "first argument at entry ESP+4"),
    (0x001665cb, "8b44241c", "second argument at entry ESP+8"),
    (0x00166649, "8b942440050000", "incoming record trailing +0x51C DWORD"),
    (0x00166651, "81ec20050000", "allocate destination record of 0x520"),
    (0x00166657, "8d842444050000", "LEA incoming by-value 0x520 record"),
    (0x00166661, "e84afcffff", "call 0x1662B0 record copier"),
    (0x0016638e, "c20400", "record copier returns RET 4"),
    (0x001b4529, "8d442414", "LEA first incoming 0x144 record DWORD"),
    (0x001b459a, "8d742414", "source pointer to incoming record"),
    (0x001b459e, "c78424540100000f000000", "last record DWORD reset to 15"),
    (0x001b45a9, "c784245001000000000000", "word +0x13C reset to zero"),
    (0x001b45b4, "c684244001000000", "record byte +0x12C reset to zero"),
    (0x001b45c5, "c24401", "RET 0x144 guest aggregate width"),
    (0x002a271c, "8b542424", "read ninth guest incoming DWORD"),
    (0x002a2720, "8d4c2428", "LEA tenth guest incoming DWORD"),
    (0x002a2725, "8b4c2424", "read eighth after first PUSH"),
    (0x002a272a, "8b54240c", "read first after two PUSH"),
    (0x002a2730, "8d4c2418", "source ECX = address of second incoming DWORD"),
    (0x002a2734, "e877000000", "call 0x2A27B0"),
    (0x002a2764, "c26c00", "RET 0x6C: 27 guest DWORDs"),
    (0x002a27b3, "8b5108", "callee reads source ECX+8"),
    (0x002a27cd, "895008", "callee writes EAX+8"),
    (0x002a2804, "895020", "callee writes EAX+0x20"),
    (0x002a280b, "894824", "callee writes EAX+0x24"),
    (0x002a2817, "c21000", "callee RET 0x10"),
)

def active(source):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)

def test_sources(root):
    hdr = (root / "include/bf_guest_insert_frame_6c.h").read_text()
    assert "uint32_t word[27];" in hdr
    assert "sizeof(bf_guest_insert_frame_6c) == 0x6c" in hdr
    assert "uint32_t *FUN_002a27b0(" in hdr
    for addr, width, tag, text in RECORDS:
        p = root / f"src/main_unclassified/band_{addr[:4]}/0x{addr}.c"
        s = p.read_text()
        ac = active(s)
        assert f"Entry: 0x{addr}," in s
        assert "Input x86 body SHA-256:" in s
        assert "ABI_UNVERIFIED" in s
        assert tag in s
        assert text in ac
        assert "stack0x" not in ac, f"synthetic guest stack alias in 0x{addr}"
        if addr == "001665c0":
            assert "sizeof(bf_guest_heap_record_520) == 0x520" in s
            assert "uint32_t word[0x148];" in s
        if addr == "001b44e0":
            assert "sizeof(bf_guest_sequence_record_144) == 0x144" in s
            assert "uint32_t word[0x51];" in s
            assert "guest_record.word[0x4b]" in ac
            assert "guest_record.word[0x4f]" in ac
            assert "guest_record.word[0x50]" in ac
        print(f"PASS 0x{addr}: original by-value guest record {width}")
    p = root / "src/main_unclassified/band_002a/0x002a27b0.c"
    ac = active(p.read_text())
    assert '#include "bf_guest_insert_frame_6c.h"' in p.read_text()
    assert "uint32_t *FUN_002a27b0(" in ac
    assert "guest_result[2] = six_guest_words[0];" in ac
    assert "guest_result[7] = six_guest_words[5];" in ac
    assert "guest_result[0x11] = guest_word_0;" in ac
    assert "return guest_result;" in ac
    assert "in_EAX" not in ac and "in_ECX" not in ac
    print("PASS: matching helper declaration and explicit EAX/ECX source contract")

def test_clang(root):
    flags = [
        "clang", "-std=c11", "-fsyntax-only", "-Wno-implicit-function-declaration",
        "-Wno-int-conversion", "-Wno-incompatible-pointer-types",
        "-Wno-pointer-to-int-cast", "-Wno-int-to-pointer-cast",
        "-Wno-return-type", "-Wno-deprecated-non-prototype",
        "-I", str(root / "include"),
    ]
    for a in ["001665c0", "001b44e0", "002a2710", "002a27b0"]:
        p = root / f"src/main_unclassified/band_{a[:4]}/0x{a}.c"
        proc = subprocess.run(flags + [str(p)], capture_output=True, text=True)
        assert proc.returncode == 0, f"Clang {a}: {proc.stderr[:1500]}"
        print(f"PASS Clang C11 0x{a}: isolated syntax")

def test_xbe(path):
    b = path.read_bytes()
    assert hashlib.sha256(b).hexdigest() == XBE_SHA256, "unexpected original Xbox executable"
    for va, code, name in SITES:
        expected = bytes.fromhex(code)
        actual = b[va - 0x10000:va - 0x10000 + len(expected)]
        assert actual == expected, f"0x{va:08x} {name}: {actual.hex()} != {code}"
        print(f"PASS 0x{va:08X}: {name}")
    print(f"PASS: {len(SITES)} original XBE instruction sites match byte-for-byte")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--clang", action="store_true")
    args = parser.parse_args()
    test_sources(args.root)
    if args.clang:
        test_clang(args.root)
    if args.xbe:
        test_xbe(args.xbe)
    else:
        print("NOTE: private original XBE is not available in CI")
    print("PASS: contract checks are NOT native-port ABI equivalence")

if __name__ == "__main__":
    main()
