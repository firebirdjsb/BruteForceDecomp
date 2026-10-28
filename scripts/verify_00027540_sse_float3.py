#!/usr/bin/env python3
"""Verify 0x00027540 original SSE F32 vector and RSQRTSS output contracts.

Original XBE private check pins two scalar RSQRTSS sequences and the
3xF32 MOVSS/MOVHPS MULPS storage sequence. C11 source uses float32
bits from the original guest pair, not numeric uint32->float casts.
Compilation never establishes complete behavior, x87 control state,
guest memory or Xbox virtual-call ABI.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

SOURCE="src/main_unclassified/band_0002/0x00027540.c"
BODY_SHA="438F31BB01F3C29793524A5B2CE9A3771FB6FB699AB5A7CFD44E874D902830EB"
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES={
 0x000275f4:"f30f52442414", # RSQRTSS XMM0,[ESP+14]
 0x000275fa:"f30f11442418", # MOVSS [ESP+18],XMM0
 0x0002764b:"f30f1044241c", # MOVSS scalar F32 vector multiplier
 0x00027651:"0fc6c000",     # SHUFPS scalar broadcast
 0x00027659:"f30f1008",     # MOVSS original vector x
 0x0002765d:"0f164804",     # MOVHPS original vector y/z
 0x00027661:"0f59c1",       # MULPS vector
 0x00027668:"f30f1100",     # MOVSS output x
 0x0002766c:"0f174004",     # MOVHPS output y/z
 0x00027958:"f30f52442440", # RSQRTSS second normal
 0x0002795e:"f30f11442418", # MOVSS second reciprocal output
}
def at(b,a,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    count=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(count):
        off=table+56*i
        va=int.from_bytes(b[off+4:off+8],"little")
        raw=int.from_bytes(b[off+12:off+16],"little")
        size=int.from_bytes(b[off+16:off+20],"little")
        if va<=a and a+n<=va+size:
            pos=raw+a-va
            return b[pos:pos+n]
    raise AssertionError(hex(a))
def verify(root,xbe):
    s=(root/SOURCE).read_text()
    assert "Input x86 body SHA-256: "+BODY_SHA in s
    assert "Entry: 0x00027540" in s
    for required in (
        "#include <xmmintrin.h>",
        "float guest_rsqrt;",
        "float guest_scaled_xyz[3];",
        "guest_y_bits = (uint32_t)uStack_160;",
        "guest_z_bits = (uint32_t)(uStack_160 >> 32);",
        "memcpy(&guest_original_y,&guest_y_bits,sizeof(guest_original_y));",
        "memcpy(&guest_original_z,&guest_z_bits,sizeof(guest_original_z));",
        "memcpy(&uStack_198,&guest_scaled_xyz[1],sizeof(uStack_198));",
        "guest_scaled_xyz[0] = fStack_164 * 25.0f;",
        "guest_scaled_xyz[2] = guest_original_z * 25.0f;",
        "_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fStack_1a8)))",
    ):
        assert required in s,required
    assert "auVar12" not in s
    assert "in_XMM0" not in s
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype","-I",str(root/"include"),
        str(root/SOURCE)],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA
        for a,op in OPCODES.items():
            assert at(b,a,len(op)//2)==bytes.fromhex(op),hex(a)
    print("PASS original 0x00027540 scalar RSQRTSS and 3-lane SIMD C11 storage")
    print("Original XBE fingerprints checked" if xbe else "Private XBE not supplied in public CI")
    print("ABI_UNVERIFIED: guest address mapping, cross-function results, x87 control mode")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    args=p.parse_args()
    verify(args.root,args.xbe)
