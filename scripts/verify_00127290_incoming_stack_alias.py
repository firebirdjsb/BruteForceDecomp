#!/usr/bin/env python3
"""Verify FUN_00127290's original incoming guest argument-word alias.

0x00127290: original SUB ESP,0x58 + pushes EBX,EBP,ESI,EDI.
0x00127BE6: writes original ESI back into incoming argument slot
             [ESP+0x6C] = entry ESP+4.
0x00127BFC: LEA [ESP+0x6C] and PUSH to FUN_000FF730.
The address is the first incoming argument *slot*, not its pointee.
The native host/guest stack representation and callee side effects
are not yet behaviorally verified.
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
import subprocess
from pathlib import Path
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA="2C6A17065DAFF5BF5577BB3B0CF183C6F146EA74F8EEFBA2059770C95BB7FF0F"
SOURCE="src/main_unclassified/band_0012/0x00127290.c"
OPS={
0x00127290:"83ec58",
0x00127293:"53",
0x00127294:"55",
0x001272A1:"56",
0x001272A2:"57",
0x00127BC5:"8b74246c",
0x00127BE6:"8974246c",
0x00127BFC:"8d4c246c",
0x00127C00:"51",
0x00127C04:"e8277bfdff",
0x00127C4C:"83c458"
}
def xbe_va(b,a,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    nsec=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(nsec):
        o=table+56*i
        va=int.from_bytes(b[o+4:o+8],"little")
        off=int.from_bytes(b[o+12:o+16],"little")
        size=int.from_bytes(b[o+16:o+20],"little")
        if va<=a and a+n<=va+size:
            pos=off+a-va
            return b[pos:pos+n]
    raise AssertionError(hex(a))
def verify(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in s
    assert "Entry: 0x00127290" in s
    assert "void FUN_00127290(int *param_1)" in s
    assert "FUN_000ff730" in s
    assert "                          &param_1);" in s
    assert "&stack0x00000000" not in s
    assert "TODO/ABI_UNVERIFIED" in s
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),
       str(root/SOURCE)],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA
        for a,op in OPS.items():
            assert xbe_va(b,a,len(op)//2)==bytes.fromhex(op),hex(a)
    print("PASS: 0x00127290 x86 stack-slot alias and isolated Clang C11")
    print("Original XBE bytes checked" if xbe else "Private original XBE not in public CI")
    print("NOTE: Native guest-pointer translation and callee ABI remain UNVERIFIED")
if __name__=="__main__":
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe",type=Path)
    v=ap.parse_args()
    verify(v.root,v.xbe)
