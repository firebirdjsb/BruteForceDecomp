#!/usr/bin/env python3
"""Verify Bink5551 Ghidra CONCAT61 alpha masks equal MMX u16 lane expansion.

This checks bit-exact equivalence of the original decompiler expression;
the complete original Bink MMX state and Xbox runtime remain ABI_UNVERIFIED.
Optional --xbe pins the original executable and checks known MMX opcodes.
"""
import argparse
import hashlib
import random
import re
from pathlib import Path

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/video_bink/bink5551/0x0036a050.c"
SITES=(
 (0x0036adf0,"53","original MMX decoder prologue"),
 (0x0036ae30,"0f6e22","MOVD input 32 bits into MMX register"),
 (0x0036ae33,"0fefc0","zero MMX widening register"),
 (0x0036ae3e,"0f60e0","PUNPCKLBW four zero-extended 16-bit words"),
 (0x0036aee8,"0febca","combine packed output channels by POR"),
 (0x0036aef2,"0febcb","final packed lane POR"),
 (0x0036aefd,"0f7f4ff8","write packed 64-bit MMX output"),
 (0x0036af40,"0f6e22","second group MOVD input"),
 (0x0036af4e,"0f60e0","second group PUNPCKLBW"),
)
def reference_concat61(u):
    # The original nested CONCAT21/CONCAT41/CONCAT61 / int6 path:
    d=[(u>>(8*i))&255 for i in range(4)]
    return ((d[3]<<48)|(d[2]<<32)|(d[1]<<16)|d[0])<<8
def recovered_unpack(u):
    widened=sum(((u>>(8*i))&255)<<(16*i) for i in range(4))
    return (widened<<8)&((1<<64)-1)
def check(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf8")
    code=re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)
    assert "Entry: 0x0036a050," in s and "ABI_UNVERIFIED" in s
    assert code.count("bf_x86_unpack_u32_bytes_to_u16_lanes(uVar7) << 8")==2
    assert "CONCAT61((int6)" not in code
    assert "uVar7 = *DAT_004be778 & 0x80808080;" in code
    assert "uVar7 = *DAT_004be77c & 0x80808080;" in code
    for mask in range(16):
        u=sum(0x80<<(8*i) for i in range(4) if mask&(1<<i))
        assert reference_concat61(u)==recovered_unpack(u)
    rng=random.Random(0x36a050)
    for _ in range(10000):
        u=rng.getrandbits(32)
        assert reference_concat61(u)==recovered_unpack(u)
    print("PASS bit-exact old CONCAT61 vs expanded u16 alpha lanes, 10,016 cases")
    if xbe:
        raw=xbe.read_bytes()
        assert hashlib.sha256(raw).hexdigest()==SHA,"original XBE mismatch"
        for va,op,why in SITES:
            expected=bytes.fromhex(op)
            actual=raw[va-0x10000:va-0x10000+len(expected)]
            assert actual==expected,f"0x{va:08X} {why}: {actual.hex()} != {op}"
            print(f"PASS original 0x{va:08X}: {why}")
        print(f"PASS {len(SITES)} original instruction sites")
    else:
        print("NOTE opcode proof requires the private --xbe")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args();check(a.root,a.xbe)
