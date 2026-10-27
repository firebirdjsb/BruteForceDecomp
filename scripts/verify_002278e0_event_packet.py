#!/usr/bin/env python3
"""Verify 0x002278E0 original five-DWORD event packet passed to 0x001FE3D0.

The 32-bit guest memory and EBP/ECX thiscall adapter are still
ABI_UNVERIFIED. The private XBE, if supplied with --xbe, is SHA-pinned
and checked at each relevant instruction, never included in the repo.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0022/0x002278e0.c"
SITES = (
    (0x002278e0, "81ecac000000", "original 0xAC-byte guest local frame"),
    (0x0022790e, "33c0", "zero EAX for original local initialize"),
    (0x00227910, "33f6", "zero ESI; later event word two"),
    (0x00227b15, "8b88f0010000", "load event argument from EBP-owned component"),
    (0x00227b1b, "51", "push component argument"),
    (0x00227b1c, "55", "push EBP receiver"),
    (0x00227b1d, "e84e110000", "prepare original event receiver"),
    (0x00227b22, "8d542418", "address event packet beginning"),
    (0x00227b26, "52", "push the packet address"),
    (0x00227b27, "8bcd", "set ECX to original EBP receiver"),
    (0x00227b29, "c744241cb43f3a00", "set packet word0 guest vtable"),
    (0x00227b31, "c744242cffffffff", "set packet word4 sentinel to -1"),
    (0x00227b39, "c744242006000000", "set packet word1 event type to 6"),
    (0x00227b41, "896c2428", "set packet word3 to original EBP receiver"),
    (0x00227b45, "89742424", "set packet word2 from zero ESI"),
    (0x00227b49, "e88268fdff", "invoke original FUN_001FE3D0"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_source(root):
    text=(root / SOURCE).read_text(encoding="utf8")
    src=active(text)
    assert "Entry: 0x002278e0," in text
    assert "Input x86 body SHA-256:" in text and "ABI_UNVERIFIED" in text
    for needle in (
        "uint32_t guest_event_record[5];",
        "_Static_assert(sizeof(guest_event_record)==20,",
        "guest_event_record[0] = UINT32_C(0x003a3fb4);",
        "guest_event_record[1] = 6;",
        "guest_event_record[2] = 0;",
        "guest_event_record[3] = (uint32_t)(uintptr_t)param_1;",
        "guest_event_record[4] = UINT32_C(0xffffffff);",
        "FUN_001fe3d0(guest_event_record);",
    ):
        assert needle in src, f"missing packet contract: {needle}"
    assert "stack0xffffff4c" not in src
    print("PASS 0x002278e0 original five-word event packet and argument address")

def check_clang(root):
    args=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
          "-Wno-implicit-function-declaration","-Wno-int-conversion",
          "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
          "-Wno-int-to-pointer-cast","-Wno-return-type",
          "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)]
    p=subprocess.run(args,capture_output=True,text=True)
    assert p.returncode==0,p.stderr[:1900]
    print("PASS isolated Clang C11 syntax")

def check_xbe(path):
    raw=path.read_bytes()
    assert hashlib.sha256(raw).hexdigest()==XBE_SHA256,"original Xbox XBE mismatch"
    for va,hexb,why in SITES:
        exp=bytes.fromhex(hexb)
        got=raw[va-0x10000:va-0x10000+len(exp)]
        assert exp==got,f"0x{va:08x}: {why}; found {got.hex()}, expected {hexb}"
        print(f"PASS original 0x{va:08X}: {why}")
    print(f"PASS: {len(SITES)} original XBE instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    check_source(a.root)
    if a.clang:check_clang(a.root)
    if a.xbe:check_xbe(a.xbe)
    else:print("NOTE: the private original XBE remains local-only")

if __name__=="__main__":
    main()
