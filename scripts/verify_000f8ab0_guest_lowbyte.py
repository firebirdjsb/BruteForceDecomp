#!/usr/bin/env python3
"""Check original 0x000F8AB0 guest DWORD low-byte write, not a native ABI proof.

Without --xbe CI verifies C11 source and host bit behavior only. The original
retail Xbox image must be supplied locally for complete body/opcode checks.
"""
import argparse
import hashlib
import re
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

IMAGE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "3341c812b4741fd954976ca4f6e63e44231729abc695a63f6da1415f681d82c8"
BODY_SIZE = 1281
SOURCE = Path("src/main_unclassified/band_000f/0x000f8ab0.c")
SITES = {
    0x000F8AB0:"55",0x000F8AB1:"8bec",0x000F8AB3:"83e4f8",
    0x000F8AB6:"81ec2c0c0000",0x000F8ACD:"c644241301",
    0x000F8E01:"3d40ad92e2",0x000F8E06:"7413",
    0x000F8E08:"3d147d2cfe",0x000F8E0D:"740c",
    0x000F8E0F:"3d3fe2b9fd",0x000F8E14:"c644241400",
    0x000F8E19:"7505",0x000F8E1B:"c644241401",
    0x000F8E20:"8b442414",0x000F8E24:"8b11",
    0x000F8E26:"50",0x000F8E27:"ff9244020000",
    0x000F8E2D:"8b4324",0x000F8FA4:"8a442413",
    0x000F8FAE:"c20400",
    0x000F8F40:"a1589b4600",0x000F8F45:"8974242c",
    0x000F8F49:"89742430",0x000F8F4D:"89742434",
    0x000F8F51:"c74424284af945f7",0x000F8F59:"8b4808",
    0x000F8F5C:"8b11",0x000F8F5E:"8d442424",
    0x000F8F62:"50",0x000F8F63:"ff5220",
    0x000F8F66:"8b0d589b4600",0x000F8F6C:"8b4908",
    0x000F8F6F:"8d442418",0x000F8F73:"c74424181d3ea7e5",
    0x000F8F7B:"8b11",0x000F8F7D:"50",
    0x000F8F7E:"ff928c000000",0x000F8F84:"8a442413"
}
MASK = "local_c2c = local_c2c & 0xffffff00"
PATCH = "local_c2c = (local_c2c & UINT32_C(0xffffff00)) | UINT32_C(1);"
CALL = "(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x244))(local_c2c);"
FLAGS = ("-std=c11","-fsyntax-only","-Wno-implicit-function-declaration",
         "-Wno-int-conversion","-Wno-incompatible-pointer-types",
         "-Wno-pointer-to-int-cast","-Wno-int-to-pointer-cast",
         "-Wno-return-type","-Wno-deprecated-non-prototype")

def code_only(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)

def verify_source(s):
    if "Entry: 0x000f8ab0," not in s or BODY_SHA.upper() not in s or "ABI_UNVERIFIED" not in s:
        raise ValueError("Original body provenance/ABI caution removed")
    c = code_only(s)
    for token in (MASK, PATCH, CALL, "uint local_c2c;",
                  "(local_c2c = local_c2c & 0xffffff00, iVar2 == -0x2461dc1))"):
        if c.count(token)!=1:
            raise ValueError("Wrong guest storage contract: "+token)
    if not c.index(MASK)<c.index(PATCH)<c.index(CALL):
        raise ValueError("Guest DWORD write-and-forward order changed")
    if re.search(r"local_c2c\._\d+_\d+_",c):
        raise ValueError("Unresolved Ghidra scalar subpiece")
    if c.count("local_c2c = (local_c2c & UINT32_C(")!=1:
        raise ValueError("Unexpected duplicate guest low-byte operation")
    # A second write between the verified byte store and virtual forwarding
    # would silently destroy the original post-branch guest DWORD.
    after_patch = c[c.index(PATCH)+len(PATCH):c.index(CALL)]
    if re.search(r"\blocal_c2c\s*=(?!=)", after_patch):
        raise ValueError("Unexpected write between guest byte update and virtual call")
    # The separately verified original XBE stack word at ESP+0x18 is
    # initialized immediately before its address goes to vtable +0x8C.
    for token in ("uint32_t guest_label_word;", "guest_label_word = UINT32_C(0xe5a73e1d);",
                  "(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&guest_label_word);", "auStack_c28[1] = 0xf745f94a;"):
        if c.count(token)!=1:
            raise ValueError("Wrong original guest label address/value contract: "+token)
    if not (c.index("auStack_c28[1] = 0xf745f94a;") <
            c.index("guest_label_word = UINT32_C(0xe5a73e1d);") <
            c.index("(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&guest_label_word);")):
        raise ValueError("Guest label DWORD write-and-forward order changed")
    if c.count("guest_label_word = ")!=1 or "&stack0xfffff3c8" in c:
        raise ValueError("Invented label slot rewrite or unresolved original alias")

def negative_sources(s):
    mutations=[
       (PATCH,PATCH.replace("0xffffff00","0xffff0000")),
       (PATCH,PATCH.replace("0xffffff00","0x00000000")),
       (PATCH,PATCH.replace("UINT32_C(1)","UINT32_C(0)")),
       (PATCH,PATCH.replace("UINT32_C(1)","UINT32_C(2)")),
       (PATCH,PATCH.replace("UINT32_C(1)","UINT32_C(0x100)")),
       (PATCH,"local_c2c = 1;"),
       (PATCH,"local_c2c = (uint8_t)local_c2c | 1;"),
       (PATCH,"local_c2c = (local_c2c & 0xffff0000) | 1;"),
       (MASK,MASK.replace("0xffffff00","0xffff0000")),
       (CALL,CALL.replace("(local_c2c)","(local_c2c & 255)")),
       (PATCH,PATCH+"\n      local_c2c = 0;"),
       ("uint local_c2c;","unsigned short local_c2c;"),
       ("guest_label_word = UINT32_C(0xe5a73e1d);",
        "guest_label_word = UINT32_C(0xe5a73e1e);"),
       ("guest_label_word = UINT32_C(0xe5a73e1d);",
        "guest_label_word = UINT32_C(0);"),
       ("uint32_t guest_label_word;","uint16_t guest_label_word;"),
       ("uint32_t guest_label_word;","uint64_t guest_label_word;"),
       ("(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&guest_label_word);",
        "(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20))(&guest_label_word);"),
       ("(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&guest_label_word);",
        "(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(guest_label_word);"),
       ("(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&guest_label_word);",
        "(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(auStack_c28);"),
       ("(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&guest_label_word);",
        "guest_label_word = 0;\n        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&guest_label_word);"),
    ]
    for a,b in mutations:
        wrong=s.replace(a,b,1)
        if wrong==s:raise ValueError("No-op negative mutation")
        try:verify_source(wrong)
        except ValueError:pass
        else:raise ValueError("Wrong guest lane mutation unexpectedly passed")
    return len(mutations)

def xbe_reader(data):
    if data[:4]!=b"XBEH":raise ValueError("Invalid XBE header")
    base=struct.unpack_from("<I",data,0x104)[0]
    n,table=struct.unpack_from("<II",data,0x11c)
    off=table-base
    if not 0<n<128 or off<0 or off+n*56>len(data):
        raise ValueError("Invalid XBE section map")
    sections=[struct.unpack_from("<IIIII",data,off+56*i) for i in range(n)]
    def locate(va,size):
        for _,v,virtual_size,raw,raw_size in sections:
            if v<=va and va+size<=v+min(virtual_size,raw_size):
                p=raw+va-v
                if p+size<=len(data):return p
        raise ValueError("Unmapped original guest VA "+hex(va))
    return lambda a,n:data[locate(a,n):locate(a,n)+n],locate

def verify_xbe(data):
    if hashlib.sha256(data).hexdigest()!=IMAGE_SHA:
        raise ValueError("Incorrect original XBE SHA-256")
    read,locate=xbe_reader(data)
    if hashlib.sha256(read(0x000F8AB0,BODY_SIZE)).hexdigest()!=BODY_SHA:
        raise ValueError("Original function body differs")
    for addr,opcode in SITES.items():
        if read(addr,len(opcode)//2)!=bytes.fromhex(opcode):
            raise ValueError("Original x86 instruction mismatch "+hex(addr))
    mutated=bytearray(data)
    mutated[locate(0x000F8E1B,1)]^=1
    mutated_read,_=xbe_reader(mutated)
    if mutated_read(0x000F8E1B,5)==bytes.fromhex(SITES[0x000F8E1B]):
        raise ValueError("XBE opcode mutation was not detected")
    return len(SITES)

def check_clang(root,clang):
    for opt in ("-O0","-O2"):
        command=[clang,*FLAGS,opt,"-I",str(root/"include"),str(root/SOURCE)]
        p=subprocess.run(command,capture_output=True,text=True,timeout=60)
        if p.returncode:
            raise ValueError("Full function fails Clang "+opt+": "+p.stderr[-1200:])
    model=r'''#include <stdint.h>
#include <assert.h>
int main(void) {
  for (uint32_t i=0;i<65536;i++) {
    uint32_t word=(i<<16)|((i*37u)&0xffffu);
    uint32_t zero=word&UINT32_C(0xffffff00);
    uint32_t one=(zero&UINT32_C(0xffffff00))|UINT32_C(1);
    assert((one&UINT32_C(0xffffff00))==(word&UINT32_C(0xffffff00)));
    assert((one&255u)==1u);
    assert((zero&255u)==0u);
  }
  return 0;
}'''
    with tempfile.TemporaryDirectory() as tmp:
        file=Path(tmp)/"guest_lane.c";file.write_text(model)
        for opt in ("-O0","-O2"):
            binary=Path(tmp)/("test_"+opt[1:])
            p=subprocess.run([clang,"-std=c11","-Wall","-Wextra","-Werror",
                              "-pedantic-errors",opt,str(file),"-o",str(binary)],
                             capture_output=True,text=True,timeout=60)
            if p.returncode:raise ValueError("Host model build failed: "+p.stderr[-700:])
            subprocess.run([str(binary)],check=True,timeout=30)

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe",type=Path)
    args=ap.parse_args()
    root=args.root.resolve()
    source=(root/SOURCE).read_text()
    verify_source(source)
    negative=negative_sources(source)
    clang=shutil.which("clang")
    if not clang:raise RuntimeError("Host Clang required")
    check_clang(root,clang)
    opcodes=verify_xbe(args.xbe.read_bytes()) if args.xbe else 0
    print(f"PASS 0x000F8AB0: 2 original guest stack DWORD contracts, {negative} source negative controls, Clang O0/O2, {opcodes} XBE instruction sites; XBE provided={bool(args.xbe)}; native ABI UNVERIFIED")
if __name__=="__main__":main()
