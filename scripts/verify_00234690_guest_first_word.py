#!/usr/bin/env python3
"""Check original guest first-DWORD loads in 0x00234690, source, and Clang.

The private pinned XBE is accepted with --xbe only. No guest ESI binding,
virtual-call target verification, or native-runtime equivalence is claimed.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "d29c4e5d80baee4e1daead31160f2216c5fc2fd0aa609ddddf81502e496e244f"
START = 0x00234690
SIZE = 320
SITES = {
    0x00234690:"8b06",
    0x00234694:"53",
    0x00234695:"57",
    0x00234696:"8b7c2410",
    0x002346ab:"8d542410",
    0x002346b0:"c744241400000000",
    0x002346e0:"3b44240c",
    0x002346e6:"8b17",
    0x002346eb:"ff523c",
    0x00234714:"8b4c240c",
    0x0023471a:"51",
    0x0023471c:"ff503c",
    0x00234744:"8d442410",
    0x00234749:"57",
    0x0023474a:"ff521c",
    0x00234771:"3b44240c",
    0x00234777:"8b07",
    0x0023477c:"ff503c",
    0x002347a8:"8b4c240c",
    0x002347ae:"5153ff503c",
    0x002347cd:"c20800",
}
FLAGS = ("-std=c11","-fsyntax-only","-ferror-limit=3",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type",
         "-Wno-deprecated-non-prototype")

def check_source(src):
    if "Entry: 0x00234690," not in src or "Input x86 body SHA-256: "+BODY_SHA.upper() not in src:
        raise ValueError("Function provenance changed")
    if "ABI_UNVERIFIED" not in src:
        raise ValueError("Unverified guest ABI disclaimer missing")
    body=re.sub(r"/\*.*?\*/|//[^\n]*","",src,flags=re.S)
    expected=(
        "if ((uint32_t)iVar6 == (uint32_t)param_1) {",
        "(**(code **)(*piVar4 + 0x3c))(piVar4,param_1);",
        "if ((uint32_t)(uintptr_t)puVar7 == (uint32_t)param_1) {",
        "(**(code **)(*piVar1 + 0x3c))(piVar1,param_1);",
    )
    for piece in expected:
        if body.count(piece)!=1:
            raise ValueError("Missing original incoming-word use: "+piece)
    if "stack0xfffffff8" in body or "iVar6 == param_2" in body or "(piVar4,param_2)" in body:
        raise ValueError("Incorrect Ghidra stack alias or second argument")

def mapped_reader(data):
    if data[:4]!=b"XBEH":
        raise ValueError("Not XBE format")
    base,=struct.unpack_from("<I",data,0x104)
    count,tableva=struct.unpack_from("<II",data,0x11c)
    tab=tableva-base
    if not 0<count<128 or not 0<=tab<=len(data)-count*56:
        raise ValueError("Invalid section table")
    sections=[struct.unpack_from("<IIIII",data,tab+i*56) for i in range(count)]
    def loc(va,n):
        for _,start,vsize,raw,rsize in sections:
            if start<=va and va+n<=start+min(vsize,rsize):
                offset=raw+va-start
                if offset+n<=len(data):
                    return offset
        raise ValueError("Unmapped original VA "+hex(va))
    def read(va,n):
        pos=loc(va,n)
        return data[pos:pos+n]
    return read,loc

def check_sites(read):
    for va,blob in SITES.items():
        if read(va,len(blob)//2)!=bytes.fromhex(blob):
            raise ValueError("Instruction mismatch "+hex(va))

def check_xbe(data):
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        raise ValueError("Pinned original XBE SHA mismatch")
    read,loc=mapped_reader(data)
    if hashlib.sha256(read(START,SIZE)).hexdigest()!=BODY_SHA:
        raise ValueError("Original complete function body changed")
    check_sites(read)
    changed=bytearray(data)
    changed[loc(0x002347a8,1)]^=1
    try:
        check_sites(mapped_reader(changed)[0])
    except ValueError:
        pass
    else:
        raise ValueError("Invalid XBE instruction mutation accepted")

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe",type=Path)
    args=parser.parse_args()
    root=args.root.resolve()
    src=root/"src/main_unclassified/band_0023/0x00234690.c"
    source=src.read_text()
    check_source(source)
    mutations=(
        ("iVar6 == (uint32_t)param_1","iVar6 == (uint32_t)param_2"),
        ("(piVar4,param_1);","(piVar4,param_2);"),
        ("(uintptr_t)puVar7 == (uint32_t)param_1","(uintptr_t)puVar7 == (uint32_t)param_2"),
        ("(piVar1,param_1);","(piVar1,param_2);"),
    )
    for old,new in mutations:
        altered=source.replace(old,new)
        if altered==source:
            raise ValueError("Missing mutation anchor "+old)
        try:
            check_source(altered)
        except ValueError:
            pass
        else:
            raise ValueError("Incorrect guest argument mutation accepted "+old)
    clang=shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    for opt in ("-O0","-O2"):
        cmd=[clang,*FLAGS,opt,"-I",str(root/"include"),str(src)]
        check=subprocess.run(cmd,capture_output=True,text=True,timeout=45)
        if check.returncode:
            raise ValueError("Clang "+opt+" failed: "+check.stderr[-2000:])
    if args.xbe:
        check_xbe(args.xbe.read_bytes())
    print("PASS 0x00234690: first guest DWORD in three original reads, 21 x86 sites,"
          " Clang -O0/-O2, mutation controls; XBE "+("verified" if args.xbe else "not supplied")+
          "; guest register/indirect ABI and runtime remain unverified")

if __name__=="__main__":
    main()
