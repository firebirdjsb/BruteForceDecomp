#!/usr/bin/env python3
"""Fail-closed source/Clang and optional original-XBE control-word verification.

Original 0x0017F700 uses one 0x104-byte path buffer and a disjoint
four-DWORD I/O control region. Its two outputs and a 32-bit guest
receiver originate at exact x86 stack offsets. Native guest-memory,
resource lifetime, return status and Xbox COM/XAPI ABIs remain unverified.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0017/0x0017f700.c"
WINDOWS = (
    (0x0017f705, "81ec14010000", "allocate original guest locals"),
    (0x0017f729, "6804010000", "path buffer length 0x104"),
    (0x0017f72e, "8d4c2420", "address file path S-0x104"),
    (0x0017f74b, "8d542434", "pass same file path buffer to opener"),
    (0x0017f78d, "8d442420", "ReadFile output at S-0x108"),
    (0x0017f7b7, "8b8c2428010000", "load first incoming sound owner"),
    (0x0017f7be, "8b81d8000000", "read sound owner offset +0xD8"),
    (0x0017f7c4, "8d542418", "DownloadEffects word 2 output"),
    (0x0017f7c9, "8d4c2414", "DownloadEffects word 0 output"),
    (0x0017f7d1, "c744242400000000", "zero word 0"),
    (0x0017f7d9, "c744242801000000", "set word 1 to 1"),
    (0x0017f822, "c20400", "callee cleans single input DWORD"),
)

def src_active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_source(root):
    s = (root / SOURCE).read_text(encoding="utf8")
    active = src_active(s)
    assert "Entry: 0x0017f700," in s
    assert "Input x86 body SHA-256:" in s
    assert "ABI_UNVERIFIED" in s
    for needle in (
        "void FUN_0017f700(uint32_t sound_owner)",
        "uint32_t guest_io_words[4];",
        "undefined1 local_104[0x104];",
        "(DAT_004432f8,s_sounds_dsstdfx_bin_0040c50c,local_104,0x104);",
        "FUN_002f2b3f(local_104,0x80000000,0,0,3,0,0);",
        "XAPILIB__ReadFile(iVar1,uVar3,uVar2,&guest_io_words[3],0);",
        "guest_io_words[0] = 0;",
        "guest_io_words[1] = 1;",
        "uVar3,uVar2,&guest_io_words[0],&guest_io_words[2]);",
        "(uint32_t)sound_owner + UINT32_C(0xd8)",
    ):
        assert needle in active, f"0x17f700 contract missing: {needle}"
    assert "stack0xfffffee8" not in active and "stack0xfffffee4" not in active
    assert "iStack_c" not in active
    print("PASS 0x0017F700: 0x104 path, four control words, two distinct outputs")

def check_clang(root):
    cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type",
         "-Wno-deprecated-non-prototype","-I",str(root/"include"),
         str(root/SOURCE)]
    r=subprocess.run(cmd,capture_output=True,text=True)
    assert r.returncode==0, f"isolated C11 failed: {r.stderr[:1800]}"
    print("PASS 0x0017F700: isolated Clang C11 syntax")

def check_xbe(path):
    data=path.read_bytes()
    assert hashlib.sha256(data).hexdigest()==XBE_SHA256, "original XBE SHA256 mismatch"
    for va,expected_hex,why in WINDOWS:
        expect=bytes.fromhex(expected_hex)
        got=data[va-0x10000:va-0x10000+len(expect)]
        assert got==expect, f"{va:#x}: {why}, actual {got.hex()}"
        print(f"PASS XBE 0x{va:08X}: {why}")
    print(f"PASS: {len(WINDOWS)} original x86 byte windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    check_source(a.root)
    if a.clang:check_clang(a.root)
    if a.xbe:check_xbe(a.xbe)
    else:print("NOTE: no private XBE in CI. Source/Clang is not behavioral proof.")

if __name__=="__main__":
    main()
