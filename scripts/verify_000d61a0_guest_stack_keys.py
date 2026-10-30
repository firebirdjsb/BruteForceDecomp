#!/usr/bin/env python3
"""Evidence-limited 0x000D61A0 guest stack key reconstruction.

The pinned XBE verifies two 32-bit guest key stores and the adjacent
address-taking, argument pushes and indirect calls. These are not verified
native callback prototypes or a complete x86 stack ABI reconstruction.
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
from pathlib import Path
import subprocess

SOURCE = "src/main_unclassified/band_000d/0x000d61a0.c"
XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_HASH = "B26180EF29604C2FAFE2E7EFF00F0FC85D9AF57B6BFAB771F25811343ED4E416"
BYTES = {
    0x000D6428: "578d442418",             # push edi; lea eax,[esp+0x18]
    0x000D642D: "c744241864b63900",       # MOV dword [esp+0x18],0x0039B664
    0x000D6437: "50ff521c",               # push eax; call [edx+0x1c]
    0x000D6444: "8d442414",               # lea eax,[esp+0x14]
    0x000D6448: "c7442414c773b91d",       # MOV dword [esp+0x14],0x1DB973C7
    0x000D6452: "50ff522c",               # push eax; call [edx+0x2c]
}
SOURCE_CONTRACT = (
    "uint32_t guest_call_key;",
    "guest_call_key = UINT32_C(0x0039b664);",
    "(&guest_call_key,iVar2);",
    "guest_call_key = UINT32_C(0x1db973c7);",
    "(&guest_call_key);",
)

def read_va(data, addr, size):
    if data[:4] != b"XBEH":
        raise AssertionError("not an Xbox executable")
    base = int.from_bytes(data[0x104:0x108], "little")
    section_count = int.from_bytes(data[0x11c:0x120], "little")
    sections = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(section_count):
        off = sections + i*56
        va = int.from_bytes(data[off+4:off+8], "little")
        raw_offset = int.from_bytes(data[off+12:off+16], "little")
        raw_size = int.from_bytes(data[off+16:off+20], "little")
        if va <= addr and addr+size <= va+raw_size:
            start = raw_offset + addr - va
            return data[start:start+size]
    raise AssertionError(f"unmapped guest VA {addr:#x}")

def check(root, xbe):
    s = (root/SOURCE).read_text(encoding="utf-8")
    assert f"Input x86 body SHA-256: {BODY_HASH}" in s
    assert "Entry: 0x000d61a0" in s
    for token in SOURCE_CONTRACT:
        assert token in s, token
    assert "stack0xfffffffc" not in s
    assert "stack0xfffffff4" not in s
    assert s.index("guest_call_key = UINT32_C(0x0039b664);") < s.index("guest_call_key = UINT32_C(0x1db973c7);")
    cmd = ["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
           "-Wno-implicit-function-declaration","-Wno-int-conversion",
           "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
           "-Wno-int-to-pointer-cast","-Wno-return-type",
           "-Wno-deprecated-non-prototype",
           "-I",str(root/"include"),str(root/SOURCE)]
    subprocess.run(cmd, check=True)
    if xbe:
        data=xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest()==XBE_HASH, "wrong XBE build"
        for addr, seq in BYTES.items():
            assert read_va(data,addr,len(seq)//2)==bytes.fromhex(seq), hex(addr)
    print("PASS 0x000D61A0: two original immediate guest DWORD key calls; isolated C11 syntax")
    print("Original XBE checked" if xbe else "Original XBE not present; source-only CI")
    print("ABI_UNVERIFIED: indirect targets, guest32->host pointers, callee stack cleanup")

if __name__ == "__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
