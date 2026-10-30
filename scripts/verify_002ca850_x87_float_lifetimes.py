#!/usr/bin/env python3
"""Evidence-backed 0x002CA850 original scalar F32 and pointer lifetimes.

The original retail XBE writes 3xF32 normalized difference vectors,
then separate x87 FSTP m32fp components for transformed vectors and
cross products. Ghidra falsely assigns float math to pointer slots later
used for traversal. This verifies source/isolated C11 and XBE opcodes if
the private hash-pinned XBE is explicitly supplied.
It does not establish host pointer ABI, x87 rounding or full behavior.
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

SOURCE="src/main_unclassified/band_002c/0x002ca850.c"
BODY_SHA="1BB7A9C9653E63E2BE680B7627D15F89B99C8CEBE8B7E11A68A8C0BA3B98EDA7"
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS={
0x002CA97E:"f30f1008",
0x002CA982:"0f164804",
0x002CA992:"0f5cca",
0x002CA99C:"f30f1108",
0x002CA9A0:"0f174804",
0x002CA9B6:"8b442414",
0x002CA9D5:"f30f1108",
0x002CA9D9:"0f174804",
0x002CAABD:"d95c2428",
0x002CAADA:"d95c242c",
0x002CAB09:"d99c2494000000",
0x002CAB1A:"d99c2498000000",
}
def xbe_va(b,a,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    count=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(count):
        o=table+i*56
        va=int.from_bytes(b[o+4:o+8],"little")
        off=int.from_bytes(b[o+12:o+16],"little")
        size=int.from_bytes(b[o+16:o+20],"little")
        if va<=a and a+n<=va+size:
            p=off+a-va
            return b[p:p+n]
    raise AssertionError(hex(a))
def verify(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf8")
    assert "Input x86 body SHA-256: "+BODY_SHA in s
    assert "Entry: 0x002ca850" in s
    for t in (
        "float *local_c68 [4];",
        "float guest_transform_x;",
        "float guest_transform_y;",
        "float guest_cross_x;",
        "float guest_cross_y;",
        "guest_transform_x = local_c34",
        "guest_transform_y = *(float *)(iVar12 + 0x28)",
        "guest_cross_x = guest_transform_y * fVar15",
        "guest_cross_y = fVar16 * fVar14 - fVar15 * guest_transform_x;",
        "bVar13 = -(guest_cross_x *",
        "local_c68[0] = &local_c14;",
        "local_bfc = param_5;",
        "local_bf8 = param_5;"
    ):
        assert t in s,t
    for bad in (
        "local_c68[0] = (float *)(",
        "local_c68[1] = (float *)(",
        "(float)local_c68[1]",
        "(float)local_c68[0]",
        "local_bfc = (int *)(",
        "local_bf8 = (int *)(",
    ):
        assert bad not in s,bad
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype","-I",str(root/"include"),
        str(root/SOURCE)],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA,"Wrong original Xbox executable"
        for a,op in OPS.items():
            assert xbe_va(b,a,len(op)//2)==bytes.fromhex(op),hex(a)
    print("PASS: 0x002CA850 float vector and x87 cross-product scratch; isolated Clang C11")
    print("Original XBE fingerprints verified" if xbe else "Private original XBE excluded from public CI")
    print("ABI_UNVERIFIED: guest pointer translation, indirect callee and full x87 semantics")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    verify(a.root,a.xbe)
