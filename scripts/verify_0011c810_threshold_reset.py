#!/usr/bin/env python3
"""Authenticates the original 0x0011C810 x87 reset threshold, tests C11 path.

Public CI has no original private XBE. With --xbe it checks the original 647
body and precise threshold/reset/return opcodes, not full runtime equivalence.
"""
from __future__ import annotations
import argparse
from pathlib import Path
import shutil
import subprocess
import tempfile
from verify_0011c810_xbe_vector_lanes import check_original,guest

WINDOWS={
 0x0011C917:"d9 44 24 14", # FLD third dot result S+0x14
 0x0011C91B:"d9 e1",       # FABS
 0x0011C91D:"d9 44 24 0c", # FLD first dot result S+0x0c
 0x0011C921:"d8 0d b0 51 3a 00", # FMUL original constant at 0x3A51B0 = 8.f
 0x0011C927:"d9 e1",       # FABS
 0x0011C929:"d9 c9",       # FXCH
 0x0011C92B:"d9 c9",       # FXCH
 0x0011C92D:"de d9",       # FCOMPP
 0x0011C92F:"df e0",       # FNSTSW AX
 0x0011C931:"f6 c4 05",    # TEST AH,5
 0x0011C934:"7a 67",       # JP skip reset (non-strict, unordered)
 0x0011C936:"c7 44 24 18 00 00 80 3f", # scratch +1.f
 0x0011C93E:"c7 44 24 08 00 00 80 3f", # scratch +1.f
 0x0011C946:"c7 44 24 04 00 00 00 00", # scratch +0.f
 0x0011C94E:"f3 0f 10 44 24 18", # MOVSS
 0x0011C954:"f3 0f 5f 44 24 04", # MAXSS
 0x0011C95A:"f3 0f 5d 44 24 08", # MINSS
 0x0011C960:"f3 0f 11 44 24 34", # scratch output (not external)
 0x0011C966:"8b 94 24 90 00 00 00", # original caller argument
 0x0011C96D:"c7 82 b0 07 00 00 00 00 80 3f", # [arg+0x7b0] =1.f
 0x0011C97E:"33 c0", # XOR EAX,EAX
 0x0011C980:"89 81 b4 07 00 00", # [arg+0x7b4] =0
 0x0011C98D:"89 82 b8 07 00 00", # [arg+0x7b8] =0
 0x0011C993:"5e", # POP ESI
 0x0011C994:"81 c4 88 00 00 00", # undo stack locals
 0x0011C99A:"c2 04 00", # RET 4
}

def check_windows(read):
    for address,hexdump in WINDOWS.items():
        expected=bytes.fromhex(hexdump)
        if read(address,len(expected))!=expected:
            raise ValueError(f"Original reset instruction mismatch 0x{address:08X}")

def check_xbe(path:Path):
    check_original(path)
    blob=path.read_bytes()
    if guest(blob,0x003A51B0,4)!=bytes.fromhex("00 00 00 41"):
        raise ValueError("Original reset threshold constant is not exactly 8.0f")
    check_windows(lambda address,size:guest(blob,address,size))
    print("PASS authentic original 0x0011C810 x87 FCOMPP / strict reset and three guest writes")

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--clang",default=shutil.which("clang"))
    p.add_argument("--xbe",type=Path)
    p.add_argument("--sanitize",action="store_true")
    a=p.parse_args()
    if not a.clang:p.error("Clang is required")
    if a.xbe:check_xbe(a.xbe)
    else:print("NOTE: original pinned XBE not accessible in public CI; no fresh binary check")
    root=a.root.resolve()
    source=(root/"src/main_unclassified/band_0011/0x0011c810.c").read_text()
    if ("Input x86 body SHA-256: A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255" not in source or
        "ABI_UNVERIFIED" not in source):
        p.error("Original caller source body identity/status changed; reassess isolation")
    flags=["-std=c11","-Wall","-Wextra","-Werror","-pedantic","-I",str(root/"include")]
    syntax=root/"tests/test_0011c810_threshold_syntax.c"
    for target in ("i686-pc-windows-msvc","x86_64-pc-windows-msvc"):
        subprocess.run([a.clang,*flags,"-target",target,"-fsyntax-only",str(syntax)],check=True)
    sources=[str(root/x) for x in ("tests/test_0011c810_threshold_reset.c",
                                     "tests/x86_0011c810_threshold_reference.S")]
    with tempfile.TemporaryDirectory(prefix="bf_0011c810_reset_") as temp:
        for opt in ("-O0","-O2"):
            executable=Path(temp)/(opt[1:])
            subprocess.run([a.clang,*flags,opt,*sources,"-o",str(executable)],check=True)
            subprocess.run([str(executable)],check=True)
        if a.sanitize:
            executable=Path(temp)/"sanitizer"
            subprocess.run([a.clang,*flags,"-O1","-g","-fsanitize=address,undefined",
                            "-fno-omit-frame-pointer",*sources,"-o",str(executable)],check=True)
            subprocess.run([str(executable)],check=True)
    print("PASS 0x0011C810 finite-F32 strict threshold / original reset guest writes")
    print("LIMITS: unverified NaN x87 status, guest CPU state, Xbox SEH and later branches")
if __name__=="__main__":main()
