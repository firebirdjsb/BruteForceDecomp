#!/usr/bin/env python3
"""Verify the bounded 0x0011C810 36-byte guest frame copy, not a game ABI."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODIES={0x0011C810:(647,"a97770d13e1a1c3bc02e893ef9fad35032c102c9b4fd0c175e0ac596459ee255"),
        0x0001D0C0:(594,"799425f204b00db36dec83019e43890e71d10113dc10721cba8e72efe0caa969a4"),
        0x0012B2A0:(93,"c5bd3de3abd46f47ca74fcbb49e2399087b322b7e4bc54dada22c6ff89eed1e")}


def guest(xbe,addr,size):
    if xbe[:4]!=b"XBEH":raise ValueError("Not XBE")
    base=int.from_bytes(xbe[0x104:0x108],"little")
    count=int.from_bytes(xbe[0x11c:0x120],"little")
    table=int.from_bytes(xbe[0x120:0x124],"little")-base
    for i in range(count):
        o=table+i*56
        virtual=int.from_bytes(xbe[o+4:o+8],"little")
        raw=int.from_bytes(xbe[o+12:o+16],"little")
        size_raw=int.from_bytes(xbe[o+16:o+20],"little")
        if virtual<=addr and addr+size<=virtual+size_raw:
            return xbe[raw+addr-virtual:raw+addr-virtual+size]
    raise ValueError(f"Unbacked XBE guest address 0x{addr:08x}")


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--clang",default=shutil.which("clang"))
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    if not a.clang:p.error("Clang required")
    if a.xbe:
        raw=a.xbe.read_bytes()
        if hashlib.sha256(raw).hexdigest()!=XBE_SHA:p.error("Wrong XBE hash")
        for addr,(n,digest) in BODIES.items():
            if hashlib.sha256(guest(raw,addr,n)).hexdigest()!=digest:
                p.error(f"Original XBE body mismatch 0x{addr:08x}")
        print("PASS original XBE and three producer/caller/consumer body hashes")
    root=a.root.resolve()
    flags=["-std=c11","-Wall","-Wextra","-Werror","-pedantic","-I",str(root/"include")]
    source=root/"tests/test_0011c810_matrix_frame.c"
    syntax=root/"tests/test_0011c810_matrix_frame_syntax.c"
    with tempfile.TemporaryDirectory(prefix="bf_0011c810_matrix_") as temp:
        for target in ("i686-pc-windows-msvc","x86_64-pc-windows-msvc"):
            subprocess.run([a.clang,*flags,"-target",target,"-fsyntax-only",str(syntax)],check=True)
        for optimization in ("-O0","-O2"):
            exe=Path(temp)/optimization[1:]
            subprocess.run([a.clang,*flags,optimization,str(source),"-o",str(exe)],check=True)
            subprocess.run([str(exe)],check=True)
    print("NOTE: source producer, indirect return and downstream x87 interface unverified")
    if not a.xbe:print("NOTE: original XBE was not reauthenticated in this run")


if __name__=="__main__":main()
