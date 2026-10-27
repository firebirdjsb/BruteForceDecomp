#!/usr/bin/env python3
"""Original Xbox 0x00150290 single initialized query DWORD at two call sites.

The two LEA instructions address one common guest DWORD at entry ESP-0x28.
This supports local storage repair, NOT register, call ABI or host equivalence.
The original XBE must be passed via --xbe for byte and whole-file validation.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0015/0x00150290.c"
SITES = (
    (0x00150290, "83ec28", "original 0x28-byte local allocation"),
    (0x00150293, "53", "EBX saved"),
    (0x00150294, "55", "EBP saved"),
    (0x00150300, "c74424087c8ae1f4", "initialize exact guest query DWORD at entry ESP-0x28"),
    (0x00150389, "50", "first pushed argument moves stack one word"),
    (0x00150390, "8d54240c", "first call LEA same query DWORD at ESP+0x0C"),
    (0x00150394, "52", "first call pushes query DWORD address"),
    (0x0015039c, "e89fce0e00", "first call original FUN_0023D240"),
    (0x001503c1, "52", "second pushed argument moves stack one word"),
    (0x001503c2, "8d44240c", "second call LEA same query DWORD at ESP+0x0C"),
    (0x001503c6, "50", "second call pushes query DWORD address"),
    (0x001503d4, "e867ce0e00", "second call original FUN_0023D240"),
    (0x001503b1, "c20c00", "one of two return branches pops three input DWORDs"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_source(root):
    text = (root / SOURCE).read_text(encoding="utf8")
    src = active(text)
    assert "Entry: 0x00150290," in text
    assert "Input x86 body SHA-256:" in text and "ABI_UNVERIFIED" in text
    assert "uint32_t guest_query_word = UINT32_C(0xf4e18a7c);" in src
    assert src.count("&guest_query_word") == 2
    assert "stack0xffffffd4" not in src
    assert "0x00150390" in text and "0x001503C2" in text
    print("PASS original source aliases both calls to same initialized guest DWORD")

def check_clang(root):
    cmd = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
           "-Wno-implicit-function-declaration", "-Wno-int-conversion",
           "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
           "-Wno-int-to-pointer-cast", "-Wno-return-type",
           "-Wno-deprecated-non-prototype", "-I", str(root / "include"), str(root / SOURCE)]
    r = subprocess.run(cmd, capture_output=True, text=True)
    assert r.returncode == 0, r.stderr[:1800]
    print("PASS isolated Clang C11 syntax")

def check_xbe(path):
    data = path.read_bytes()
    assert hashlib.sha256(data).hexdigest() == XBE_SHA256, "wrong original Xbox XBE"
    for va, code, label in SITES:
        expected=bytes.fromhex(code)
        actual=data[va-0x10000:va-0x10000+len(expected)]
        assert actual == expected, f"{va:#010x}: {label}, {actual.hex()} != {code}"
        print(f"PASS original {va:#010x}: {label}")
    print(f"PASS {len(SITES)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    check_source(a.root)
    if a.clang: check_clang(a.root)
    if a.xbe: check_xbe(a.xbe)
    else: print("NOTE: private original XBE is not included in CI")

if __name__=="__main__":
    main()
