#!/usr/bin/env python3
"""Evidence-limited 0x000D6B30 guest32 callback word repair.

Original instruction bytes prove guest incoming stack DWORD overwrite prior
to indirect virtual call. Source C11 storage is a scoped syntax candidate,
not a verified Xbox guest address or host callback ABI.
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

SOURCE="src/main_unclassified/band_000d/0x000d6b30.c"
BODY_SHA="29F7CD7DD762EE049F13407E9477D24A4144ABAD0AB1B13F8EA19A5FDFB7B740"
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FINGERPRINTS={
    0x000D6B30:"5355",               # push EBX, EBP
    0x000D6B32:"8b6c240c",           # load initial incoming argument
    0x000D6B36:"5657",               # push ESI, EDI (no local allocation)
    0x000D7306:"a108334400",         # load original interface
    0x000D730B:"8d4c2414",           # LEA ECX,[ESP+14] -> initial argument slot
    0x000D730F:"5153",               # push ECX, push EBX
    0x000D7311:"c744241c55e75d03",   # write full DWORD 0x035DE755
    0x000D731B:"50",                 # push interface object
    0x000D731C:"ff5230",             # virtual call [EDX+30]
}

def read_guest_va(data,address,size):
    assert data[:4]==b"XBEH"
    base=int.from_bytes(data[0x104:0x108],"little")
    count=int.from_bytes(data[0x11c:0x120],"little")
    table=int.from_bytes(data[0x120:0x124],"little")-base
    for i in range(count):
        o=table+56*i
        va=int.from_bytes(data[o+4:o+8],"little")
        raw=int.from_bytes(data[o+12:o+16],"little")
        length=int.from_bytes(data[o+16:o+20],"little")
        if va<=address and address+size<=va+length:
            start=raw+address-va
            return data[start:start+size]
    raise AssertionError(f"unmapped guest VA {address:#x}")

def check(root,xbe):
    src=(root/SOURCE).read_text(encoding="utf8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in src
    assert "Entry: 0x000d6b30" in src
    assert "uint32_t guest_callback_key;" in src
    assert "guest_callback_key = UINT32_C(0x035de755);" in src
    assert "(DAT_00443308,0,&guest_callback_key);" in src
    assert "&stack0x00000000" not in src
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype",
        "-I",str(root/"include"),str(root/SOURCE)],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA, "wrong retail XBE"
        for va,seq in FINGERPRINTS.items():
            assert read_guest_va(b,va,len(seq)//2)==bytes.fromhex(seq),hex(va)
    print("PASS 0x000D6B30 original guest argument DWORD, isolated Clang C11")
    print("XBE verified" if xbe else "XBE omitted in public CI")
    print("Original indirect dispatch and linked native guest stack ABI remain unverified")

if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
