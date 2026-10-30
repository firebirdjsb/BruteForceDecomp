#!/usr/bin/env python3
"""Test the recorded guest output-slot contract; optional XBE reauthentication."""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "42606ab29f564bc92f0122ffaa816c7872e1284f940d7e44eb260d28ad75a3cc"
OPS = {0x001ff12c: "e82ffaffff", 0x0020590f: "e84c92ffff",
       0x001ff144: "8b4708", 0x00205924: "8b4608"}


def guest(xbe, address, size):
    if xbe[:4] != b"XBEH":
        raise ValueError("Not an XBE")
    base = int.from_bytes(xbe[0x104:0x108], "little")
    count = int.from_bytes(xbe[0x11c:0x120], "little")
    table = int.from_bytes(xbe[0x120:0x124], "little") - base
    for i in range(count):
        off = table + 56*i
        va = int.from_bytes(xbe[off+4:off+8], "little")
        raw = int.from_bytes(xbe[off+12:off+16], "little")
        length = int.from_bytes(xbe[off+16:off+20], "little")
        if va <= address and address+size <= va+length:
            return xbe[raw+address-va:raw+address-va+size]
    raise ValueError(f"Unbacked original x86 address 0x{address:08x}")


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--clang", default=shutil.which("clang"))
    p.add_argument("--xbe", type=Path)
    a = p.parse_args()
    if not a.clang:
        p.error("Clang required")
    if a.xbe:
        xbe=a.xbe.read_bytes()
        if hashlib.sha256(xbe).hexdigest()!=XBE_SHA:
            p.error("Original XBE SHA mismatch")
        if hashlib.sha256(guest(xbe,0x001feb60,77)).hexdigest()!=BODY_SHA:
            p.error("Original helper body SHA mismatch")
        for addr,op in OPS.items():
            if guest(xbe,addr,len(op)//2)!=bytes.fromhex(op):
                p.error(f"Original CALL/MOV opcode differs at 0x{addr:08x}")
        print("PASS: private original XBE helper body and caller CALL/MOV instructions")
    root = a.root.resolve()
    includes = root / "include"
    source = root / "tests/test_001feb60_guest_output.c"
    syntax = root / "tests/test_001feb60_guest_output_syntax.c"
    flags = ["-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic", "-I", str(includes)]
    with tempfile.TemporaryDirectory(prefix="bf_1feb60_output_") as temp:
        for target in ("i686-pc-windows-msvc", "x86_64-pc-windows-msvc"):
            subprocess.run([a.clang,*flags,"-target",target,"-fsyntax-only",str(syntax)],check=True)
        for optimization in ("-O0", "-O2"):
            executable = Path(temp) / optimization[1:]
            subprocess.run([a.clang,*flags,optimization,str(source),"-o",str(executable)],check=True)
            subprocess.run([str(executable)],check=True)
    print("NOTE: no full caller, guest EFLAGS/exception parity or Xbox runtime verification")
    if not a.xbe:
        print("NOTE: original XBE instruction fingerprints not reauthenticated here")


if __name__ == "__main__":
    main()
