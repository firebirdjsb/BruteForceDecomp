#!/usr/bin/env python3
"""Verify original 0x002B3650 guest XYZ float32 scratch and output slots.

Exact XBE opcodes plus source/Clang syntax, not whole-function equivalence.
The original vtable call ABI, stack ownership and guest pointer addresses
remain ABI_UNVERIFIED for a native reimplementation.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess
XBE="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY="0268A60214FF02566ABDADAE73F0B64B159843AFB68AC27308F49D66E02B00A2"
SOURCE="src/main_unclassified/band_002b/0x002b3650.c"
OPS={
 0x002B3650:"81ecb8000000",
 0x002B36CD:"8d442438",
 0x002B374D:"8d44242c",
 0x002B3752:"8d442414",
 0x002B3757:"8d442440",
 0x002B375C:"ff5208",
 0x002B37C2:"d9442410",
 0x002B37D0:"d954241c",
 0x002B37D4:"d9542420",
 0x002B37D8:"d95c2424",
 0x002B37EE:"d9442420",
 0x002B37F5:"d9442424",
 0x002B37FC:"d944241c",
}
def guest(data,a,n):
    assert data[:4]==b"XBEH"
    base=int.from_bytes(data[0x104:0x108],"little")
    count=int.from_bytes(data[0x11c:0x120],"little")
    table=int.from_bytes(data[0x120:0x124],"little")-base
    for i in range(count):
        k=table+56*i
        va=int.from_bytes(data[k+4:k+8],"little")
        offset=int.from_bytes(data[k+12:k+16],"little")
        size=int.from_bytes(data[k+16:k+20],"little")
        if va<=a and a+n<=va+size:
            st=offset+a-va
            return data[st:st+n]
    raise AssertionError(hex(a))
def main(root,xbe):
    src=(root/SOURCE).read_text()
    assert f"Input x86 body SHA-256: {BODY}" in src
    for token in ("float local_a8;","local_a8 = 0.0f;","local_a8 = fStack_b0;","fVar2 = local_a8 * fVar3 * fStack_b8;","(auStack_94,&local_90,&local_a0)"):
        assert token in src,token
    assert "stack0xffffff44" not in src
    assert "local_a8 = (int *)" not in src
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)],check=True)
    if xbe:
        data=xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest()==XBE
        for address,op in OPS.items():
            assert guest(data,address,len(op)//2)==bytes.fromhex(op),hex(address)
    print("PASS: 0x002B3650 original XYZ m32fp and local output alias; C11 syntax")
    print("Original XBE fingerprints checked" if xbe else "Source-only CI; private XBE not present")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    main(a.root,a.xbe)
