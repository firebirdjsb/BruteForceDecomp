#!/usr/bin/env python3
"""Verify 0x002DAB40 indexed guest32 pointer field is a DWORD, not float.

Original x86 instruction fingerprints and isolated host C11 only.
No claim that guest pointers are translated or that whole function is 1:1.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess
XBE_HASH="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY="EAA66FF96285E980394C9698651FED17CA3C514A9BB91EB238B37D4CEF0369B2"
SOURCE="src/main_unclassified/band_002d/0x002dab40.c"
OPS={
 0x002DABA7:"8b4e34",
 0x002DABAA:"8b1c81",
 0x002DAC30:"8b4e34",
 0x002DAC33:"8b1481",
 0x002DAD01:"8b5634",
 0x002DAE06:"8b4634",
}
def guest(b,a,n):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    count=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(count):
        off=table+56*i
        va=int.from_bytes(b[off+4:off+8],"little")
        o=int.from_bytes(b[off+12:off+16],"little")
        m=int.from_bytes(b[off+16:off+20],"little")
        if va<=a and a+n<=va+m:
            st=o+a-va
            return b[st:st+n]
    raise AssertionError(hex(a))
def main(root,xbe):
    s=(root/SOURCE).read_text()
    assert f"Input x86 body SHA-256: {BODY}" in s
    assert "uint32_t guest_index_address;" in s
    assert "memcpy(&guest_index_address, &in_EAX[0xd], sizeof(guest_index_address));" in s
    assert "piVar5 = (int *)(uintptr_t)guest_index_address;" in s
    assert "(int *)in_EAX[0xd]" not in s
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_HASH
        for a,opcode in OPS.items():
            assert guest(b,a,len(opcode)//2)==bytes.fromhex(opcode),hex(a)
    print("PASS 0x002DAB40 original guest32 index-address and isolated Clang C11")
    print("Original XBE opcodes checked" if xbe else "Original XBE not provided in CI")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args();main(a.root,a.xbe)
