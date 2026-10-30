#!/usr/bin/env python3
"""Verify evidence-backed original 0x002B7C70 callback args and postcall output.

The two indirect calls both push original guest32 interface parameters
and the float3 normal. The second call's forgotten fifth argument and
post-callback output target are reconstructed from the pinned original
instruction sequence. Clang verifies source syntax, NOT guest calling
conventions, physical pointer mapping, or exact x87/SSE rounding.
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

SOURCE = "src/main_unclassified/band_002b/0x002b7c70.c"
BODY_SHA = "81F20322253DBCE378FB59D729A7B523C1D6592ADE695DEA434714F266DBA40D"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS = {
  0x002B7C70: "8b4c2408",     # Original input second argument
  0x002B7C74: "8b442404",     # Original input first argument
  0x002B7DEC: "8d442420",     # First branch stack float3
  0x002B7DF1: "e8aae7ffff",   # Normalize float3
  0x002B7DFE: "8b4844",       # Callback vtable from param_1+0x44
  0x002B7E04: "8b4048",       # Guest32 arg from param_1+0x48
  0x002B7E09: "8d742420",     # First callback vector argument
  0x002B7E19: "ff12",         # First indirect call [EDX]
  0x002B81A9: "d9449450",     # F32 indexed scratch read; not pointer
  0x002B81F2: "51",           # Second callback float3 argument
  0x002B81F7: "e8a4e3ffff",   # Normalize second float3
  0x002B8200: "8b4844",       # Callback vtable second branch
  0x002B8203: "8b4048",       # Raw guest32 callback argument
  0x002B8208: "8d742420",     # Address of float3
  0x002B821C: "ff12",         # Second indirect call [EDX]
  0x002B821E: "8b442464",     # RELOAD original input param_1
  0x002B8222: "8b484c",       # Read param_1+0x4c float32
  0x002B8259: "0f59d3",       # MULPS
  0x002B825C: "0f58ca",       # ADDPS
  0x002B8263: "f30f1108",     # Output F32 x
  0x002B8267: "0f174804",     # Output F32 y/z
  0x002B826B: "d9442410",     # Original saved fraction F32
  0x002B8274: "d9584c",       # Store F32 at first input +0x4c
}
def read_original(b,a,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    count=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(count):
        o=table+56*i
        va=int.from_bytes(b[o+4:o+8],"little")
        off=int.from_bytes(b[o+12:o+16],"little")
        size=int.from_bytes(b[o+16:o+20],"little")
        if va <= a and a+n <= va+size:
            p=off+a-va
            return b[p:p+n]
    raise AssertionError(f"Unmapped guest VA {a:#x}")
def verify(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in s
    assert "Entry: 0x002b7c70" in s
    for token in (
        "static uint32_t bf_2b7c70_guest_word(",
        "float local_10 [4];",
        "bf_2b7c70_guest_word(&param_1[0x11])",
        "bf_2b7c70_guest_word(&param_1[0x12])",
        "fVar13 * fVar15,&local_40);",
        "if (local_10[iVar9] <= 0.0f) break;",
        "param_1[8] = *param_1 + param_1[0xc] * fVar15;",
        "param_1[9] = param_1[1] + param_1[0xd] * fVar15;",
        "param_1[10] = param_1[2] + param_1[0xe] * fVar15;",
        "param_1[0x13] = fVar13;",
    ):
        assert token in s,token
    for bad in ("(float)local_10[iVar9]", "local_10[0][0x13]","local_10[0][8]", "(float)pfVar3;", "*(code *)**(undefined4 **)param_1[0x11]"):
        assert bad not in s,bad
    subprocess.run([
        "clang","-std=c11","-fsyntax-only","-ferror-limit=0",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype",
        "-I",str(root/"include"),str(root/SOURCE),
    ],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA,"Wrong original XBE"
        for a,op in OPS.items():
            assert read_original(b,a,len(op)//2)==bytes.fromhex(op),hex(a)
    print("PASS 0x002B7C70 guest float3 callbacks and postcall position, isolated Clang C11")
    print("Original XBE bytes verified" if xbe else "Private XBE omitted from public CI")
    print("ABI_UNVERIFIED: guest addresses, indirect callee identity, SSE rounding and linking")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    verify(a.root,a.xbe)
