#!/usr/bin/env python3
"""Original x86-backed float3 storage contracts in 0x002CC340.

Checks three distinct scalar x87 FSTP words and the corresponding SSE
3xfloat output, not Xbox vtable ABI or function equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY="B4FB45A79D862BBFE5AF20D85BF1718D19F3FBAD102FC277DF78DC33FA37A272"
SOURCE="src/main_unclassified/band_002c/0x002cc340.c"
OPS={
 0x002CC576:"0f5cca",       # SUBPS XMM1,XMM2
 0x002CC57D:"f30f1108",     # MOVSS first scalar
 0x002CC581:"0f174804",     # MOVHPS remaining adjacent two
 0x002CC585:"d9442424",     # FLD F32
 0x002CC59E:"d99c24a0000000",
 0x002CC5B7:"d99c24a4000000",
 0x002CC5D0:"d99c24a8000000",
}
def read_va(data,address,size):
    if data[:4]!=b"XBEH":raise AssertionError("not original XBE")
    base=int.from_bytes(data[0x104:0x108],"little")
    n=int.from_bytes(data[0x11c:0x120],"little")
    table=int.from_bytes(data[0x120:0x124],"little")-base
    for i in range(n):
        off=table+i*56
        va=int.from_bytes(data[off+4:off+8],"little")
        raw=int.from_bytes(data[off+12:off+16],"little")
        length=int.from_bytes(data[off+16:off+20],"little")
        if va<=address and address+size<=va+length:
            at=raw+address-va
            return data[at:at+size]
    raise AssertionError(hex(address))
def main(root,xbe):
    s=(root/SOURCE).read_text()
    assert f"Input x86 body SHA-256: {BODY}" in s
    for token in ("float local_b60 [3];","float guest_cross[3];",
     "local_b60[1] - *(float *)(param_4 + 0x44)",
     "local_b60[2] - *(float *)(param_4 + 0x48)",
     "guest_cross[0] = ","guest_cross[1] = ","guest_cross[2] = ",
     "FUN_002b73d0(param_5[2] + 0x10,guest_cross,local_b80)"):
        assert token in s,token
    assert "local_b60._4_8_" not in s
    cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)]
    subprocess.run(cmd,check=True)
    if xbe:
        data=xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest()==XBE_SHA,"wrong original game"
        for a,seq in OPS.items():
            assert read_va(data,a,len(seq)//2)==bytes.fromhex(seq),hex(a)
    print("PASS 0x002CC340 original float3 stack/RSSE lane source, isolated C11")
    print("XBE opcode fingerprints verified" if xbe else "Original XBE not in CI")
    print("Remaining indirect call ABI and guest pointers unverified")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    main(a.root,a.xbe)
