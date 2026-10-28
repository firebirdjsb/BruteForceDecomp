#!/usr/bin/env python3
"""Original 0x000718F0 x87 trigonometric and F32 radius-lane lifetimes.

Ghidra confused original 4-byte F32 values with pointer aliases for the
temporary sine, angular step, radius scales and collision-result buffer.
Check isolated Clang C11 and optional exact XBE instruction fingerprints.
This does NOT establish full x87 control-state, native address translation,
implicit register/stack contracts or runtime parity.
"""
import argparse
import hashlib
import struct
import subprocess
from pathlib import Path
SOURCE="src/main_unclassified/band_0007/0x000718f0.c"
BODY_SHA="CAE593E47823155D8211412EBE892D46F8807AF683369BAAF818B83CCC645587"
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS={
  0x000718F0:"81ec34030000",    # Original stack frame
  0x0007194B:"d9fb",           # FSINCOS into x87 st(0),st(1)
  0x00071951:"d918",           # FSTP m32fp: first sin/cos output
  0x00071957:"d918",           # FSTP m32fp: second sin/cos output
  0x00071980:"d9fb",           # FSINCOS second angular pair
  0x00071986:"d918",           # FSTP m32fp
  0x0007198C:"d918",           # FSTP m32fp
  0x000719F0:"d9442410",       # FLD F32 angular scratch
  0x000719F4:"d9fb",           # FSINCOS in inner loop
  0x000719FA:"d918",           # FSTP m32fp to pointer-selected 4-byte slot
  0x00071A00:"d918",           # FSTP m32fp to second scalar slot
  0x00071A19:"d95c2418",       # Scalar FSTP intermediate
  0x00071A32:"d918",           # Scalar FSTP rotated result
  0x00071A3C:"d95c2410",       # Original F32 angular increment
  0x00071AA1:"d95c2434",       # FSTP F32 radius scale
  0x00071AA5:"f30f104c2434",  # MOVSS scalar radius scale
  0x00071ABB:"0f59c1",         # MULPS float vector by scale
  0x00071AC2:"f30f1100",       # MOVSS float result to output
  0x00071AC6:"0f174004",       # MOVHPS float y/z output
  0x00071B98:"d80d28503a00",  # FMUL F32 quarter-step
  0x00071BA6:"d95c241c",      # FSTP F32 quarter-step
  0x00071BC4:"d864241c",      # FSUB quarter-step F32
  0x00071BF2:"d95c2438",      # FSTP later F32 scale
  0x00071C13:"f30f1100",      # Second-loop float MOVSS store
  0x00071C17:"0f174004",      # Second-loop upper-lane float store
}
def original_va(b,a,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    ct=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(ct):
        o=table+56*i
        va=int.from_bytes(b[o+4:o+8],"little")
        raw=int.from_bytes(b[o+12:o+16],"little")
        size=int.from_bytes(b[o+16:o+20],"little")
        if va<=a and a+n<=va+size:
            start=raw+a-va
            return b[start:start+n]
    raise AssertionError(f"Unmapped original guest address {a:#x}")
def check(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in s
    assert "Entry: 0x000718f0" in s
    for t in (
       "float guest_angle_step;","float guest_sin_component;",
       "float guest_radius_scale;","float guest_quarter_radius;",
       "guest_angle_step = bf_000718f0_float_bits(UINT32_C(0x3f060a92));",
       "local_2f8 = &guest_sin_component;",
       "*local_2f8 = (float)fVar13;",
       "*pfVar8 = -(guest_sin_component * fVar2);",
       "local_334 = local_334 + guest_angle_step;",
       "guest_radius_scale = param_6 * afStack_164[iVar11];",
       "guest_quarter_radius = param_6 * 0.25f;",
       "param_6 = param_6 - guest_quarter_radius;",
       "local_330 = *(float **)(DAT_004699b8 + 4);",
    ):
        assert t in s,t
    for bad in ("(float)local_330","(float)local_328","(float)local_310","(float)local_30c",
      "local_328 = (float *)0x3f060a92","*local_2f8 = (float *)(float)fVar13"):
        assert bad not in s,bad
    assert struct.unpack("<I",struct.pack("<f",0.5235987901687622))[0]==0x3f060a92
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
        assert hashlib.sha256(b).hexdigest()==XBE_SHA,"Wrong original game XBE"
        for a,op in OPS.items():
            assert original_va(b,a,len(op)//2)==bytes.fromhex(op),hex(a)
    print("PASS 0x000718F0 verified F32 scalar storage lifetimes, isolated Clang C11")
    print("Original XBE instruction bytes verified" if xbe else "Private original XBE omitted from public CI")
    print("ABI_UNVERIFIED: x87 rounding, guest pointer translation and broader function behavior")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
