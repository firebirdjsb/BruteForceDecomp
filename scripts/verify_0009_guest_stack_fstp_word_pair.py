#!/usr/bin/env python3
"""Verify original shared x87 FSTP / guest DWORD call argument stack pattern.

Two pinned XBE functions each use the SAME [EBP+0x24] word for FSTP
m32fp then three MOV imm32/PUSH &word/CALL sequences. This verifies
raw source word lifetime, original opcode fingerprints (when supplied),
and isolated Clang C11. It does not prove host x87 control-word, implicit
register input or cross-function ABI.
"""
import argparse
import hashlib
import subprocess
from pathlib import Path

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES={
 "0x0009ac90":{
  "path":"src/main_unclassified/band_0009/0x0009ac90.c",
  "body":"6037B60B0A91053C40D7247028B0892D8840A603BA28B145695470B8BA7291BA",
  "ops":{
   0x0009B0A1:"d95d24",0x0009B104:"8d5524",
   0x0009B111:"c7452401000000",0x0009B120:"50",
   0x0009B12F:"c7452402030000",0x0009B140:"8d4d24",
   0x0009B14D:"c7452403030000"
  }
 },
 "0x0009e040":{
  "path":"src/main_unclassified/band_0009/0x0009e040.c",
  "body":"560BD2F6E074C49F385DB62AD6F38FE3D69DC4251A74F01B88C578C1EA3FFA2B",
  "ops":{
   0x0009E4A4:"d95d24",0x0009E502:"8d4d24",
   0x0009E50F:"c7452401000000",0x0009E520:"8d5524",
   0x0009E52D:"c7452402030000",0x0009E539:"8d4524",
   0x0009E54B:"c7452403030000"
  }
 }
}
def read_va(data,address,n):
    assert data[:4]==b"XBEH"
    base=int.from_bytes(data[0x104:0x108],"little")
    count=int.from_bytes(data[0x11c:0x120],"little")
    table=int.from_bytes(data[0x120:0x124],"little")-base
    for i in range(count):
        off=table+56*i
        va=int.from_bytes(data[off+4:off+8],"little")
        raw=int.from_bytes(data[off+12:off+16],"little")
        length=int.from_bytes(data[off+16:off+20],"little")
        if va<=address and address+n<=va+length:
            pos=raw+address-va
            return data[pos:pos+n]
    raise AssertionError(hex(address))
def verify(root,xbe):
    data=xbe.read_bytes() if xbe else None
    if data:assert hashlib.sha256(data).hexdigest()==XBE_SHA,"Wrong original executable"
    for entry,case in CASES.items():
        src=(root/case["path"]).read_text()
        assert f"Input x86 body SHA-256: {case['body']}" in src
        assert f"Entry: {entry}" in src
        for token in (
            "uint32_t guest_stack_word_24;",
            "float guest_shader_float_24;",
            "memcpy(&guest_stack_word_24,&guest_shader_float_24,sizeof(guest_stack_word_24));",
            "guest_stack_word_24 = 0x1;",
            "guest_stack_word_24 = 0x302;",
            "guest_stack_word_24 = 0x303;",
        ):
            assert token in src,(entry,token)
        assert src.count("FUN_0006a610(&guest_stack_word_24);")==3, entry
        assert "stack0x00000020" not in src
        assert "in_stack_00000020 = (int *)(*(float *)" not in src
        subprocess.run([
            "clang","-std=c11","-fsyntax-only","-ferror-limit=0",
            "-Wno-implicit-function-declaration","-Wno-int-conversion",
            "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
            "-Wno-int-to-pointer-cast","-Wno-return-type",
            "-Wno-deprecated-non-prototype",
            "-I",str(root/"include"),str(root/case["path"])
        ],check=True)
        if data:
            for address,op in case["ops"].items():
                assert read_va(data,address,len(op)//2)==bytes.fromhex(op),hex(address)
        print("PASS",entry,"original guest m32fp -> DWORD -> 3 address arguments; isolated C11")
    print("Private XBE verified" if data else "Original XBE intentionally omitted in public CI")
    print("ABI_UNVERIFIED: implicit register arguments, native pointer translation and runtime")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    verify(a.root,a.xbe)
