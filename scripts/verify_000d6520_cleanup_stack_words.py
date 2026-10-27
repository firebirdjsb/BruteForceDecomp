#!/usr/bin/env python3
"""0x000D6520 saved guest incoming arg and stack-local output verification.

Original x86 prologue allocates 0x2c bytes and saves four registers; final
indirect-to-direct cleanup call uses first local and original input DWORD.
No linked native Xbox ABI is established by this source/syntax test.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

SOURCE = "src/main_unclassified/band_000d/0x000d6520.c"
BODY_HASH = "ED1A2B8FD661AD8C470036BBF1B009D6B49A5026EEB24D3A48FCD4FCE0C2CB94"
XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x000D6520: "83ec2c",       # SUB ESP, 2C
    0x000D6523: "5355",         # PUSH EBX / PUSH EBP
    0x000D6525: "8b6c2438",     # MOV EBP, [ESP+38] original incoming DWORD
    0x000D652F: "5657",         # PUSH ESI / PUSH EDI
    0x000D6934: "8b442418",     # MOV EAX,[ESP+18] next branch
    0x000D693F: "8b4c2440",     # MOV ECX,[ESP+40] original caller DWORD
    0x000D6943: "51",           # PUSH ECX
    0x000D6944: "8d542414",     # LEA EDX,[ESP+14] local -2C
    0x000D6948: "52",           # PUSH EDX
    0x000D6949: "8bfb8bf0",     # MOV EDI,EBX; MOV ESI,EAX
    0x000D694D: "e87ef9f9ff",   # CALL original FUN_000762D0
}

def read_va(data,va,n):
    if data[:4] != b"XBEH":
        raise AssertionError("bad XBE signature")
    base=int.from_bytes(data[0x104:0x108],"little")
    count=int.from_bytes(data[0x11c:0x120],"little")
    table=int.from_bytes(data[0x120:0x124],"little")-base
    for i in range(count):
        off=table+56*i
        start=int.from_bytes(data[off+4:off+8],"little")
        file_off=int.from_bytes(data[off+12:off+16],"little")
        file_length=int.from_bytes(data[off+16:off+20],"little")
        if start<=va and va+n<=start+file_length:
            k=file_off+va-start
            return data[k:k+n]
    raise AssertionError(f"unmapped original guest VA {va:#x}")

def check(root,xbe):
    src=(root/SOURCE).read_text(encoding="utf-8")
    assert f"Input x86 body SHA-256: {BODY_HASH}" in src
    assert "Entry: 0x000d6520" in src
    assert "undefined1 auStack_2c [4];" in src
    assert "uVar4 = param_1;" in src
    assert "FUN_000762d0(auStack_2c,uVar4);" in src
    assert "FUN_000762d0(&stack0xffffffc8,uStack_8);" not in src
    cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type",
         "-Wno-deprecated-non-prototype",
         "-I",str(root/"include"),str(root/SOURCE)]
    subprocess.run(cmd,check=True)
    if xbe:
        binary=xbe.read_bytes()
        assert hashlib.sha256(binary).hexdigest()==XBE_HASH
        for address,seq in OPCODES.items():
            assert read_va(binary,address,len(seq)//2)==bytes.fromhex(seq),hex(address)
    print("PASS 0x000D6520 original guest local + incoming DWORD, isolated C11")
    print("Original x86 instruction bytes checked" if xbe else "XBE not present in public CI")
    print("Native guest-address translation and indirect-call ABI remain unverified")

if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
