#!/usr/bin/env python3
"""Verify five original-XBE guest frame, call input and schema repairs.

Source contracts and focused C11 checks work in CI without the private XBE.
Run with --xbe /path/to/default.xbe to verify original x86 opcode bytes.
This does NOT certify native host/guest ABI, Xbox FS:0, COM methods or
runtime behavior; especially the unresolved indirect-call register inputs.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = (
    (0x001bc4e0, "558bec6aff68708e300064a1", "SEH setup"),
    (0x001bc4fe, "8965f0", "save guest ESP"),
    (0x002fe4e7, "8965f4", "save guest ESP in SEH descriptor"),
    (0x002fe4ea, "896df8", "save guest EBP in SEH descriptor"),
    (0x002fe4f6, "8d45d8", "address guest FS:0 registration"),
    (0x001ed8fa, "c7442410ec6b3900", "original local guest vtable word"),
    (0x001ed957, "8d442414", "point at same local guest vtable record"),
    (0x001ed95b, "50ff921c020000", "pass guest record to virtual method"),
    (0x002578c0, "83ec1056578b7c24", "allocate schema locals"),
    (0x002578cd, "8d4c2414", "schema tag output at entry ESP-4"),
    (0x002578d6, "817c24147e06070e", "test tag at entry ESP-4"),
    (0x00257904, "53558d4424145057", "flags output after additional saved registers"),
    (0x0025790f, "8a44241433eda810", "test flags low byte bit 4"),
    (0x0025798d, "8b442414f6c401", "test flags bit 8"),
    (0x0021abe0, "81ec880000008b8b", "resource guest local frame"),
    (0x0021ad55, "57895c2420", "store original guest EBX owner"),
    (0x0021ad5a, "884c2424", "store resource low flag byte"),
    (0x0021ad67, "8d44241c", "pass pointer to two-word resource descriptor"),
    (0x0021ad6b, "508bc7e8dde0f5ff", "pass descriptor and original EAX to helper"),
    (0x00178e52, "8b6c240c568bf08b4500", "callee reads descriptor's first DWORD"),
    (0x00178eb8, "8a4d048a4714d0e9", "callee reads descriptor's flag byte"),
)
REPAIRS = (
    ("001bc4e0", ("XBE 0x001BC4FE",), ("local_14", "stack0xffffff68")),
    ("002fe4a6", ("XBE 0x002FE4E7", "0x002FE4EA"), ("local_c", "local_10", "stack0xfffffffc", "stack0xffffffc4")),
    ("001ed8b0", ("0x001ED957", "))(local_24,iVar4);"), ("stack0xffffffd4",)),
    ("002578c0", ("uint32_t schema_tag;", "uint32_t schema_flags;",
                  "memcpy(&schema_tag, local_4, sizeof(schema_tag));",
                  "))(param_1,&schema_flags);",
                  "(schema_flags & UINT32_C(0x10))",
                  "(schema_flags & UINT32_C(0x100))"), ("stack0xffffffec", "((uint)puStack_1c &")),
    ("0021abe0", ("uint32_t guest_request_words[2];",
                  "guest_request_words[0] = (uint32_t)(uintptr_t)unaff_EBX;",
                  "FUN_00178e50((int *)guest_request_words);"), ("stack0xffffff88",)),
)

def uncomment(src):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", src, flags=re.S)

def source_checks(root):
    for addr, required, forbidden in REPAIRS:
        path = root / f"src/main_unclassified/band_{addr[:4]}/0x{addr}.c"
        source = path.read_text(encoding="utf-8")
        active = uncomment(source)
        assert f"Entry: 0x{addr}," in source, addr
        assert "Input x86 body SHA-256:" in source, addr
        assert "ABI_UNVERIFIED" in source, addr
        for item in required:
            assert item in source, f"0x{addr}: missing verified contract {item}"
        for item in forbidden:
            assert item not in active, f"0x{addr}: synthetic alias remains {item}"
        print(f"PASS 0x{addr}: source and instruction-contract anchors")
    print("PASS: all five source checks; no host ABI equivalence implied")

def clang_checks(root):
    # Two of the cases may expose OTHER pre-existing compiler errors;
    # the full Clang sweep checks all 13,694 files including those cases.
    for addr in ("001bc4e0", "001ed8b0"):
        p = root / f"src/main_unclassified/band_{addr[:4]}/0x{addr}.c"
        args = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
                "-Wno-implicit-function-declaration", "-Wno-int-conversion",
                "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
                "-Wno-int-to-pointer-cast", "-Wno-return-type",
                "-Wno-deprecated-non-prototype", "-I", str(root/"include"), str(p)]
        result = subprocess.run(args, text=True, capture_output=True)
        assert result.returncode == 0, f"Clang 0x{addr}: {result.stderr[:1500]}"
        print(f"PASS isolated Clang C11 0x{addr}")

def xbe_checks(path):
    data = path.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    assert digest == XBE_SHA256, f"wrong original XBE hash {digest}"
    for va, expected_hex, description in SITES:
        expected = bytes.fromhex(expected_hex)
        actual = data[va-0x10000:va-0x10000+len(expected)]
        assert actual == expected, f"0x{va:08X} {description}: found {actual.hex()}"
        print(f"PASS XBE 0x{va:08X}: {description}")
    print(f"PASS: {len(SITES)} instruction checks against original Xbox binary")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--clang", action="store_true")
    args = parser.parse_args()
    source_checks(args.root)
    if args.clang:
        clang_checks(args.root)
    if args.xbe:
        xbe_checks(args.xbe)
    else:
        print("NOTE: original copyrighted executable omitted from CI")
    print("PASS: no claim of linked, playable or native platform equivalence")

if __name__ == "__main__":
    main()
