#!/usr/bin/env python3
"""Verify the 0x00282360 indirect output uses the second guest argument slot.

The verified original LEA addresses the second incoming DWORD after the
function's 12-byte local allocation and two saved registers. This is
source/guest-frame evidence only, not a complete functional C11 or
native virtual-call ABI test: adjacent Ghidra globals/registers are still
unresolved in this function.
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
import re
import subprocess
from pathlib import Path

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY="6EBB1D7DD1A35F376BBDFED68F3B0DE5900F8EEA657BC4540665C312F5994531"
SOURCE="src/main_unclassified/band_0028/0x00282360.c"
OPS={
  0x00282360:"83ec0c",      # 12-byte stack allocation
  0x00282363:"8b442414",    # load incoming second argument
  0x00282369:"56",          # save ESI
  0x0028236A:"57",          # save EDI
  0x0028236B:"8d54240c",    # local output address
  0x0028237B:"897c2414",    # zero first output slot
  0x00282388:"8d54241c",    # second input DWORD address after saves
  0x0028238C:"52",          # push its address
  0x0028238D:"50",          # push interface pointer
  0x0028238E:"ff5120",      # virtual call at vtable +0x20
  0x00282391:"8b44241c",    # reload second argument after call
}
# New object-field opcodes retain first-argument base and exact DWORD widths.
FIELD_OPS={
  0x002824B1:"8b4c2418",        # first guest argument is object
  0x002824B5:"8b412c",          # load signed count at object+2c
  0x002824BD:"8d5001",          # add one without replacing original compare
  0x002824C0:"89512c",          # write count at object+2c
  0x002824C9:"89548130",        # store third-argument DWORD at object+index*4+30
  0x002824D2:"c744241005400080", # E_FAIL status word
  0x0028251A:"8b542418",        # first argument -> EDX
  0x0028251E:"8b421c",          # object+1c interface
  0x0028254A:"8d6b24",          # object+24 output address
  0x0028255B:"894500",          # object+24 write
  0x00282562:"895500",          # object+24 alternate write
  0x00282565:"8b431c",          # object+1c read
  0x002825AC:"8b4b18",          # object+18 read
  0x002825CE:"c21400",          # RET 20; other 3 guest words unmodeled
}
def guest(b,a,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    count=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(count):
        o=table+56*i
        va=int.from_bytes(b[o+4:o+8],"little")
        raw=int.from_bytes(b[o+12:o+16],"little")
        size=int.from_bytes(b[o+16:o+20],"little")
        if va<=a and a+n<=va+size:
            start=raw+a-va
            return b[start:start+n]
    raise AssertionError(hex(a))
def check(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf8")
    assert "Input x86 body SHA-256: "+BODY in s
    assert "Entry: 0x00282360" in s
    assert "(unaff_ESI,&param_2)" in s
    assert "&stack0x00000000" not in s
    assert "TODO/ABI_UNVERIFIED" in s
    # Exact original scalar fields, not invented absolute guest symbols.
    for fragment in ("*(int *)(param_1 + 0x2c)",
                     "*(undefined4 *)(param_1 + iVar1 + 0x30)",
                     "*(int **)(param_1 + 0x1c)",
                     "*(undefined4 *)(param_1 + 0x24)",
                     "*(undefined4 *)(param_1 + 0x18)"):
        assert fragment in s, fragment
    assert not re.search(r"\b(?:iRam|uRam|piRam)000000(?:18|1c|24|2c)\b", s)
    # Every diagnostic, not merely the first three: use the original
    # repository flags at both optimization levels (syntax-only C11).
    flags=["-std=c11","-fsyntax-only","-ferror-limit=0",
           "-Wno-implicit-function-declaration","-Wno-int-conversion",
           "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
           "-Wno-int-to-pointer-cast","-Wno-return-type",
           "-Wno-deprecated-non-prototype"]
    for opt in ("-O0","-O2"):
        subprocess.run(["clang",opt,*flags,"-I",str(root/"include"),str(root/SOURCE)],check=True)
    # Source-only syntax fixture proves that the revised address-of-argument
    # expression is well-formed C11, not the incomplete whole function.
    c="typedef unsigned int u32; void cb(void*,int**); void f(int* second,void* iface) { cb(iface,&second); }\n"
    subprocess.run(["clang","-std=c11","-x","c","-fsyntax-only","-"],
                   input=c,text=True,check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA,"Wrong original Xbox executable"
        assert hashlib.sha256(guest(b,0x00282360,0x271)).hexdigest()==BODY.lower(),"Body digest mismatch"
        for a,op in {**OPS,**FIELD_OPS}.items():
            assert guest(b,a,len(op)//2)==bytes.fromhex(op),hex(a)
    print("PASS 0x00282360 second guest stack argument address; isolated syntax fixture")
    print("PASS original source host Clang C11 at O0/O2; function ABI_UNVERIFIED")
    print("Original XBE instructions verified" if xbe else "No private XBE in public CI")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
