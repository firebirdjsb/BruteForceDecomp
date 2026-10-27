#!/usr/bin/env python3
"""Verify 0x002B09D0 original Xbox output-pointer and vtable release chain.

Instruction-level source C11 repair only. Guest32 pointer translation and
native host interfaces require a separate ABI review.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA="11C296E891A781FE60F0F1C60D854F6C4276A7C0E032E62D2D5291CF045CE22C"
SOURCE="src/main_unclassified/band_002b/0x002b09d0.c"
OPS={
 0x002B09D0:"83ec08",
 0x002B0A8F:"8d4c2410",
 0x002B0A96:"c744241800000000",
 0x002B0AA1:"ff5024",
 0x002B0AA4:"8b442410",
 0x002B0ABD:"ff5214",
 0x002B0AC0:"8b442410",
 0x002B0AC9:"ff5234",
 0x002B0ACC:"8b442410",
 0x002B0AD0:"85c0",
 0x002B0AD2:"7406",
 0x002B0AD7:"ff5108",
}
def va_bytes(b,address,count):
    assert b[:4]==b"XBEH"
    base=int.from_bytes(b[0x104:0x108],"little")
    n=int.from_bytes(b[0x11c:0x120],"little")
    table=int.from_bytes(b[0x120:0x124],"little")-base
    for i in range(n):
        o=table+56*i
        va=int.from_bytes(b[o+4:o+8],"little")
        fo=int.from_bytes(b[o+12:o+16],"little")
        size=int.from_bytes(b[o+16:o+20],"little")
        if va<=address and address+count<=va+size:
            return b[fo+address-va:fo+address-va+count]
    raise AssertionError(hex(address))
def verify(root,xbe):
    s=(root/SOURCE).read_text()
    assert f"Input x86 body SHA-256: {BODY_SHA}" in s
    assert "Entry: 0x002b09d0" in s
    assert "auStack_8[0] = 0;" in s
    assert s.count("(int *)(uintptr_t)auStack_8[0]")>=2
    for token in ("*piVar4 + 0x14","*piVar4 + 0x34","*piVar4 + 8","if (piVar4 != (int *)0x0)"):
        assert token in s,token
    assert "stack0xfffffff0" not in s
    assert "pcRam3a831277" not in s
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)],check=True)
    if xbe:
        b=xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest()==XBE_SHA
        for addr,seq in OPS.items():
            assert va_bytes(b,addr,len(seq)//2)==bytes.fromhex(seq),hex(addr)
    print("PASS: 0x002B09D0 original x86 vtable +0x14/+0x34/+8, C11 syntax")
    print("XBE bytes verified" if xbe else "Private XBE not provided; source-only test")
    print("ABI_UNVERIFIED: original pointer remains guest32")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args();verify(a.root,a.xbe)
