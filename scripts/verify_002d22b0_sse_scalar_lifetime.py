#!/usr/bin/env python3
"""Original 0x002D22B0 SSE float scalar after local pointer lifetime.

The source check asserts the original 32-bit scalar and runs Clang C11.
Optional --xbe verifies exact instruction sequences against the user's
hash-pinned original XBE without committing copyrighted binaries.
Cross-function ABI, floating-point rounding and native guest memory
remain ABI_UNVERIFIED.
"""
import argparse
import hashlib
import subprocess
from pathlib import Path

SOURCE="src/main_unclassified/band_002d/0x002d22b0.c"
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA="85912904A8498B200AAA1B91623A5761EBE2D424E30795F1F61105B085549D97"
OPS={
    0x002D2489:"f30f1000",       # MOVSS XMM0,[EAX]
    0x002D248D:"0f164004",       # MOVHPS XMM0,[EAX+4]
    0x002D2491:"0f59c0",         # MULPS XMM0,XMM0
    0x002D2494:"0fc6c880",       # SHUFPS XMM1,XMM0,0x80
    0x002D2498:"0f58c8",         # ADDPS XMM1,XMM0
    0x002D249B:"0fc6c903",       # SHUFPS XMM1,XMM1,3
    0x002D249F:"f30f58c8",       # ADDSS XMM1,XMM0
    0x002D24A3:"f30f114c2454",   # MOVSS [ESP+54],XMM1
    0x002D24A9:"d9442454",       # FLD m32fp of the same word
    0x002D24AD:"d81ddc503a00",   # FCOMP m32fp original threshold
}
def original_va(b,address,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    count=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(count):
        off=table+i*56
        va=int.from_bytes(b[off+4:off+8],"little")
        raw=int.from_bytes(b[off+12:off+16],"little")
        size=int.from_bytes(b[off+16:off+20],"little")
        if va<=address and address+n<=va+size:
            k=raw+address-va
            return b[k:k+n]
    raise AssertionError(hex(address))
def verify(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf-8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in s
    assert "Entry: 0x002d22b0" in s
    for marker in (
        "float *local_88;",
        "float guest_squared_length;",
        "guest_squared_length = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;",
        "if (guest_squared_length <= 1e-12f)",
        "SQRT(guest_squared_length)"
    ):
        assert marker in s,marker
    assert "local_88 = (float *)(fVar2" not in s
    assert "(float)local_88" not in s
    subprocess.run([
        "clang","-std=c11","-fsyntax-only","-ferror-limit=0",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype","-I",str(root/"include"),
        str(root/SOURCE),
    ],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA,"Wrong original XBE"
        for address,op in OPS.items():
            assert original_va(b,address,len(op)//2)==bytes.fromhex(op),hex(address)
    print("PASS: 0x002D22B0 original SSE scalar and pointer lifetime; isolated Clang C11")
    print("XBE fingerprints checked" if xbe else "Private XBE intentionally not included")
    print("NOTE full original SSE upper lanes and linked guest ABI remain unverified")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    verify(a.root,a.xbe)
