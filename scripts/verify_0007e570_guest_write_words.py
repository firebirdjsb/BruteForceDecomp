#!/usr/bin/env python3
"""Verify original Xbox 0x0007E570 WriteFile's disjoint stack arguments.

The XBE remains private. CI checks source and isolated Clang syntax, while
--xbe /path/default.xbe verifies all original instruction windows and hash.
These checks do NOT validate native filesystem semantics, guest memory
translation, or XAPI calling-convention equivalence.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
PATH = "src/main_unclassified/band_0007/0x0007e570.c"
SITES = (
    (0x0007e680, "8b5d10", "EBX contains original incoming DWORD param_3"),
    (0x0007e68a, "6a00", "push NULL overlapped argument"),
    (0x0007e68c, "8d542418", "LEA a separate bytes-written DWORD"),
    (0x0007e690, "52", "push bytes-written output address"),
    (0x0007e691, "6a08", "push original eight-byte input size"),
    (0x0007e693, "8d442428", "LEA pointer to two adjacent input DWORDs"),
    (0x0007e697, "50", "push data pointer"),
    (0x0007e698, "56", "push original file handle"),
    (0x0007e699, "895c2434", "first EBX DWORD at input +4"),
    (0x0007e69d, "895c2430", "second EBX DWORD at input +0"),
    (0x0007e6a1, "e8e74d2700", "invoke original WriteFile"),
)

def active_source(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_source(root):
    p = root / PATH
    source = p.read_text(encoding="utf8")
    active = active_source(source)
    assert "Entry: 0x0007e570," in source
    assert "Input x86 body SHA-256:" in source
    assert "ABI_UNVERIFIED" in source
    assert "0x0007E68A-0x0007E6A1" in source
    assert "uStack_76c = param_3;" in active
    assert "uint32_t guest_write_words[2] = {(uint32_t)param_3, (uint32_t)param_3};" in active
    assert "uint32_t guest_bytes_written;" in active
    assert "XAPILIB__WriteFile(iVar3,guest_write_words,8,&guest_bytes_written,0);" in active
    assert "stack0xfffff890" not in active and "stack0xfffff888" not in active
    print("PASS original dual-DWORD WriteFile input and independent output pointer")

def check_clang(root):
    cmd = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype", "-I", str(root / "include"),
        str(root / PATH)]
    r = subprocess.run(cmd, capture_output=True, text=True)
    assert r.returncode == 0, r.stderr[:2000]
    print("PASS isolated Clang C11 with full-inventory compiler flags")

def check_binary(path):
    b = path.read_bytes()
    assert hashlib.sha256(b).hexdigest() == XBE_SHA256, "wrong original XBE"
    for va, opcode, title in SITES:
        expected = bytes.fromhex(opcode)
        got = b[va-0x10000:va-0x10000+len(expected)]
        assert got == expected, f"{va:#010x}: {title}, {got.hex()} != {opcode}"
        print(f"PASS original 0x{va:08X}: {title}")
    print(f"PASS {len(SITES)} original XBE instruction windows")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--clang", action="store_true")
    args = parser.parse_args()
    check_source(args.root)
    if args.clang:
        check_clang(args.root)
    if args.xbe:
        check_binary(args.xbe)
    else:
        print("NOTE: private XBE absent; original byte checks are local only")

if __name__ == "__main__":
    main()
