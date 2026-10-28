#!/usr/bin/env python3
"""Check XBE-authenticated 0x0011C810 FCHS lanes, concrete vtable/ret4.

Source-only CI cannot read the private XBE. Pass --xbe with the pinned binary
for original instruction fingerprint and concrete-vtable authentication.
Whole-game ABI, x87 status and NaN/fault parity are NOT proved here.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
METHOD_SHA = "76fa58db21575d08e0cb43636a07deb374229d553cff0aab4f8ee845c63882d1"
CALLER_SHA = "a97770d13e1a1c3bc02e893ef9fad35032c102c9b4fd0c175e0ac596459ee255"
# Only precise original single-instruction windows, never a guessed C signature.
WINDOWS = {
  0x00110DAC:"c7 80 b4 01 00 00 e8 db 39 00", # base subobject vptr install
  0x00110DED:"c7 80 b4 01 00 00 e8 dc 39 00", # concrete subobject vptr install
  0x00111E69:"c7 85 b4 01 00 00 e8 dc 39 00", # concrete vptr restore
  0x0011C82F:"ff 50 30",                       # first +0x30 virtual call
  0x0011C8AB:"ff 52 30",                       # second +0x30 virtual call
  0x0011C8B5:"8b 46 6c",                       # object pointer from argument+0x6c
  0x0011C8B8:"d9 40 34",                       # original first FLD object+0x34
  0x0011C8C2:"d9 40 14",                       # original second FLD object+0x28 (EAX+=0x14)
  0x0011C8CD:"d9 40 08",                       # original third FLD object+0x1c
  0x0011C8D4:"89 54 24 14",                    # scratch original +0x34
  0x0011C8DE:"89 4c 24 10",                    # scratch original +0x28
  0x0011C8DC:"d9 e0",                          # FCHS +0x34
  0x0011C8EE:"d9 e0",                          # FCHS +0x28
  0x0011C8F0:"89 4c 24 30",                    # S+0x30 = neg object+0x34
  0x0011C8F4:"d9 5c 24 08",                    # FSTP negated object+0x28 to scratch
  0x0011C8F8:"8b 44 24 08",                    # move neg +0x28 from scratch
  0x0011C8FE:"89 44 24 2c",                    # S+0x2c = neg object+0x28
  0x0011C8FC:"d9 e0",                          # FCHS +0x1c
  0x0011C902:"d9 5c 24 28",                    # S+0x28 = neg object+0x1c
  0x0011C906:"8d 4c 24 28",                    # dot vector input
  0x0011C90A:"8d 44 24 0c",                    # dot output
  0x0011C90E:"8d 54 24 38",                    # dot matrix
  0x0010FBF0:"83 ec 10",                       # concrete virtual target entry
  0x0010FC4B:"8b 44 24 14",                    # method reads stack output pointer
  0x0010FC51:"d9 18",                          # output lane0 FSTP
  0x0010FC57:"89 51 04",                       # output lane1 zero
  0x0010FC62:"89 48 08",                       # output lane2 FCHS
  0x0010FC65:"8b 44 24 14",                    # method EAX=original output pointer
  0x0010FC69:"83 c4 10",                       # restore local stack
  0x0010FC6C:"c2 04 00",                       # RET 4
  0x002BF0A0:"33 c0 c3",                       # base virtual is XOR EAX,EAX; RET
}

def guest(blob:bytes, addr:int, size:int) -> bytes:
    if blob[:4]!=b"XBEH": raise ValueError("Invalid XBE magic")
    base=int.from_bytes(blob[0x104:0x108],"little")
    count=int.from_bytes(blob[0x11c:0x120],"little")
    table=int.from_bytes(blob[0x120:0x124],"little")-base
    for i in range(count):
        o=table+i*56
        virt=int.from_bytes(blob[o+4:o+8],"little")
        raw=int.from_bytes(blob[o+12:o+16],"little")
        n=int.from_bytes(blob[o+16:o+20],"little")
        if addr>=virt and addr+size<=virt+n:
            if raw+addr-virt+size>len(blob):raise ValueError("Truncated XBE backing")
            return blob[raw+addr-virt:raw+addr-virt+size]
    raise ValueError(f"Guest address not backed by original bytes: 0x{addr:08X}")

def check_original(path:Path)->None:
    blob=path.read_bytes()
    if hashlib.sha256(blob).hexdigest()!=XBE_SHA:
        raise ValueError("Original XBE SHA-256 differs from pinned user binary")
    for addr,size,expected in [(0x0011C810,647,CALLER_SHA),(0x0010FBF0,127,METHOD_SHA)]:
        got=hashlib.sha256(guest(blob,addr,size)).hexdigest()
        if got!=expected:raise ValueError(f"Original 0x{addr:08x} body digest mismatch")
    for addr,expected in WINDOWS.items():
        signature=bytes.fromhex(expected)
        if guest(blob,addr,len(signature))!=signature:
            raise ValueError(f"Original instruction-window mismatch at 0x{addr:08X}")
    addresses={0x0039DBE8:0x002BF0A0,0x0039DCE8:0x0010FBF0}
    for vtable,method in addresses.items():
        actual=int.from_bytes(guest(blob,vtable+0x30,4),"little")
        if actual!=method:raise ValueError(f"Original vtable+0x30 mismatch at 0x{vtable:08X}")
    print("PASS pinned original XBE, authentic 0x0011C810/0x0010FBF0 bodies,")
    print("     original vector FCHS lane order, concrete/base vtable+0x30 methods and RET 4")

def main()->None:
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--clang",default=shutil.which("clang"))
    p.add_argument("--xbe",type=Path)
    p.add_argument("--sanitize",action="store_true")
    a=p.parse_args()
    if not a.clang:p.error("Clang required")
    if a.xbe:check_original(a.xbe)
    else: print("NOTE: XBE is not in public CI; original bytes NOT freshly authenticated here")
    root=a.root.resolve()
    flags=["-std=c11","-Wall","-Wextra","-Werror","-pedantic","-I",str(root/"include")]
    syntax=root/"tests/test_0011c810_original_vector_lanes_syntax.c"
    for target in ("i686-pc-windows-msvc","x86_64-pc-windows-msvc"):
        subprocess.run([a.clang,*flags,"-target",target,"-fsyntax-only",str(syntax)],check=True)
    paths=[
        "tests/test_0011c810_original_vector_lanes.c",
        "tests/support/bf_0011c810_guest_producer_bridge.c",
        "src/main_unclassified/band_0001/0x0001d0c0.c",
        "src/main_unclassified/band_0012/0x0012b2a0.c",
    ]
    # Original helper Ghidra draft's source warnings have not been changed.
    allowed_original=["-Wno-parentheses","-Wno-literal-range","-Wno-strict-prototypes"]
    with tempfile.TemporaryDirectory(prefix="bf_0011c810_xbe_lanes_") as tmp:
        for opt in ("-O0","-O2"):
            exe=Path(tmp)/("test"+opt)
            subprocess.run([a.clang,*flags,*allowed_original,opt,"-msse",
                            *(str(root/x) for x in paths),"-lm","-o",str(exe)],check=True)
            subprocess.run([str(exe)],check=True)
        if a.sanitize:
            exe=Path(tmp)/"san"
            subprocess.run([a.clang,*flags,*allowed_original,"-O1","-g",
                            "-fsanitize=address,undefined","-fno-omit-frame-pointer","-msse",
                            *(str(root/x) for x in paths),"-lm","-o",str(exe)],check=True)
            subprocess.run([str(exe)],check=True)
    print("PASS original-supported guest vector layout and actual two C helper source links")
    print("NOTE: executable virtual dispatch, Xbox x87 and NaN/fault parity remain separately unverified")

if __name__=="__main__":main()
