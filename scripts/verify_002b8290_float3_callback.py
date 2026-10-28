#!/usr/bin/env python3
"""Verify original 0x002B8290 float3, indirect call and post-callback dataflow.

Original XBE (optional, private) must match pinned full SHA-256 and
instruction bytes. Host Clang checks syntax only, not original SSE/x87
rounding, indirect callback behavior or guest32 pointer translation.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

SOURCE = "src/main_unclassified/band_002b/0x002b8290.c"
BODY_SHA = "8A6483192EA96E6080A955853B6C872C4C84220600D3A9B8009A59791B92EDB3"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS = {
  0x002B8290: "83ec28",       # Original 40-byte local stack allocation
  0x002B8295: "8b6c2434",     # First guest argument
  0x002B829A: "8b7c243c",     # Second guest argument
  0x002B8541: "f30f1100",     # MOVSS F32 [EAX],XMM0
  0x002B8545: "0f174004",     # MOVHPS two adjacent F32 components
  0x002B8549: "8d542428",     # LEA address of original float3 stack output
  0x002B854E: "e84de0ffff",   # CALL 0x002B65A0 normalization
  0x002B85C2: "8b4a44",       # Raw guest32 callback interface from [EDX+44]
  0x002B85C5: "8b5248",       # Raw guest32 callback parameter from [EDX+48]
  0x002B85C8: "8b01",         # Read vtable pointer
  0x002B85CA: "8d7c2428",     # Guest cross vector to indirect call
  0x002B85CE: "57",           # PUSH vector pointer
  0x002B85DB: "ff10",         # CALL DWORD PTR [EAX] (indirect, NOT identified)
  0x002B85DD: "8b44243c",     # Reload first *input* argument after callback
  0x002B85E1: "8b484c",       # Read original param_1+4C scalar
  0x002B85F6: "f30f105c241c",# MOVSS float scalar
  0x002B8618: "0f59d3",       # MULPS
  0x002B861B: "0f58ca",       # ADDPS
  0x002B8622: "f30f1108",     # Store position x from SSE low lane
  0x002B8626: "0f174804",     # Store y/z from SSE upper lanes
  0x002B862A: "d9442414",     # FLD original selected float distance
  0x002B8632: "d9584c",       # FSTP float distance to input+4C
}
def original_bytes(b,addr,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    count=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(count):
        o=table+i*56
        va=int.from_bytes(b[o+4:o+8],"little")
        off=int.from_bytes(b[o+12:o+16],"little")
        size=int.from_bytes(b[o+16:o+20],"little")
        if va <= addr and addr+n <= va+size:
            start=off+addr-va
            return b[start:start+n]
    raise AssertionError(f"Unmapped XBE guest address {addr:#x}")
def check(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in s
    assert "Entry: 0x002b8290" in s
    for token in (
        "float guest_cross[3];",
        "guest_cross[0] = fVar11 * fVar15 - fVar12 * fVar14;",
        "guest_cross[1] = fVar12 * fVar13 - fVar10 * fVar15;",
        "guest_cross[2] = fVar10 * fVar14 - fVar11 * fVar13;",
        "FUN_002b65a0(guest_cross);",
        "bf_2b8290_guest_word(&param_1[0x11])",
        "bf_2b8290_guest_word(&param_1[0x12])",
        "param_1[8] = *param_1 + param_1[0xc] * fVar13;",
        "param_1[9] = param_1[1] + param_1[0xd] * fVar13;",
        "param_1[10] = param_1[2] + param_1[0xe] * fVar13;",
        "param_1[0x13] = local_24;"
    ):
        assert token in s,token
    for bad in (
        "local_10 = (float *)", "local_10[0x13]", "(float)local_10",
        "*(code *)**(undefined4 **)param_1[0x11]",
        "local_10[8] ="
    ):
        assert bad not in s,bad
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
        for a,hex_bytes in OPS.items():
            assert original_bytes(b,a,len(hex_bytes)//2)==bytes.fromhex(hex_bytes), hex(a)
    print("PASS 0x002B8290 original float3/callback/postcall source and isolated C11")
    print("Original XBE bytes verified" if xbe else "Private XBE omitted from public CI")
    print("ABI_UNVERIFIED: indirect call type, guest32 native pointer translation and SSE rounding")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
