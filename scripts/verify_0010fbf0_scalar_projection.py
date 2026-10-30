#!/usr/bin/env python3
"""XBE-authenticated scoped 0x0010FBF0 x87/SSE -> C11 guest result projection.

The original XBE is optional in public CI. Exact original method opcodes and
hash are authenticated only when --xbe is explicitly provided. The host x87
reference is NOT 32-bit Xbox CALL/RET or floating-point status equivalence.
"""
from __future__ import annotations

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
import sys
import os
from verify_0011c810_xbe_vector_lanes import check_original, guest

METHOD_SHA="76fa58db21575d08e0cb43636a07deb374229d553cff0aab4f8ee845c63882d1"
METHOD=0x0010FBF0
# Exact windows from authenticated original 127-byte method body. The complete
# body is hash-checked first; windows establish which math a C model may claim.
SCALAR_WINDOWS={
 0x0010FBF0:"83 ec 10",                 # stack locals
 0x0010FBF7:"d9 81 10 04 00 00",        # FLD receiver+0x410
 0x0010FBFD:"d9 81 28 04 00 00",        # FLD receiver+0x428
 0x0010FC03:"d9 c0",                    # FLD ST0
 0x0010FC05:"d8 c9",                    # FMUL ST0, ST1
 0x0010FC07:"d9 c2",                    # FLD ST2
 0x0010FC09:"d8 cb",                    # FMUL ST0, ST3
 0x0010FC0B:"de c1",                    # FADDP
 0x0010FC0D:"d9 5c 24 08",              # FSTP F32 scratch
 0x0010FC11:"dd d8",                    # POP x87
 0x0010FC13:"dd d8",                    # POP x87
 0x0010FC15:"f3 0f 52 44 24 08",        # RSQRTSS from F32 scratch
 0x0010FC1B:"f3 0f 11 44 24 04",        # MOVSS scratch
 0x0010FC25:"d9 44 24 04",              # FLD rsqrt scratch
 0x0010FC29:"d8 88 28 04 00 00",        # FMUL receiver+0x428
 0x0010FC2F:"c7 44 24 08 00 00 00 00", # zero scratch
 0x0010FC3B:"d9 e0",                    # FCHS
 0x0010FC3D:"d9 5c 24 0c",              # FSTP F32 z
 0x0010FC41:"d9 44 24 04",              # FLD rsqrt scratch
 0x0010FC45:"d8 88 10 04 00 00",        # FMUL receiver+0x410
 0x0010FC4F:"d9 e0",                    # FCHS
 0x0010FC51:"d9 18",                    # FSTP [output+0]
 0x0010FC57:"89 51 04",                 # MOV zero into [output+4]
 0x0010FC62:"89 48 08",                 # MOV z into [output+8]
 0x0010FC65:"8b 44 24 14",              # EAX = output pointer
 0x0010FC69:"83 c4 10",                 # local stack release
 0x0010FC6C:"c2 04 00",                 # callee pops one pushed DWORD
}

def verify_windows(read):
    for address,source in SCALAR_WINDOWS.items():
        original=bytes.fromhex(source)
        if read(address,len(original))!=original:
            raise ValueError(f"0x0010FBF0 original instruction mismatch at 0x{address:08X}")

def check_private_xbe(path:Path):
    check_original(path)
    blob=path.read_bytes()
    if hashlib.sha256(guest(blob,METHOD,127)).hexdigest()!=METHOD_SHA:
        raise ValueError("XBE 0x0010FBF0 127-byte digest mismatch")
    verify_windows(lambda addr,n:guest(blob,addr,n))
    print("PASS original XBE 0x0010FBF0 x87/SSE scalar arithmetic and output instruction windows")

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--clang",default=shutil.which("clang"))
    p.add_argument("--xbe",type=Path)
    p.add_argument("--sanitize",action="store_true")
    a=p.parse_args()
    if not a.clang:p.error("Clang is required")
    if a.xbe:check_private_xbe(a.xbe)
    else:print("NOTE: private original XBE unavailable in public CI; pinned instruction digest not rechecked")
    root=a.root.resolve()
    matrix=(root/"src/main_unclassified/band_0001/0x0001d0c0.c").read_text()
    consumer=(root/"src/main_unclassified/band_0012/0x0012b2a0.c").read_text()
    caller=(root/"src/main_unclassified/band_0011/0x0011c810.c").read_text()
    for data,source in ((matrix,"799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4"),
                        (consumer,"C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E"),
                        (caller,"A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255")):
        if "Input x86 body SHA-256: "+source not in data or "ABI_UNVERIFIED" not in data:
            p.error("Original game draft or original source-body digest changed; revalidate")
    flags=["-std=c11","-Wall","-Wextra","-Werror","-pedantic","-I",str(root/"include")]
    syntax=root/"tests/test_0010fbf0_scalar_syntax.c"
    for target in ("i686-pc-windows-msvc","x86_64-pc-windows-msvc"):
        subprocess.run([a.clang,*flags,"-target",target,"-fsyntax-only",str(syntax)],check=True)
    sources=[str(root/f) for f in (
        "tests/test_0010fbf0_scalar_projection.c",
        "tests/x86_0010fbf0_reference.S",
        "tests/support/bf_0011c810_guest_producer_bridge.c",
        "src/main_unclassified/band_0001/0x0001d0c0.c",
        "src/main_unclassified/band_0012/0x0012b2a0.c")]
    draft_warnings=["-Wno-parentheses","-Wno-literal-range","-Wno-strict-prototypes"]
    math_libraries=[] if sys.platform=="win32" else ["-lm"]
    with tempfile.TemporaryDirectory(prefix="bf_0010fbf0_scalar_") as tmp:
        for opt in ("-O0","-O2"):
            executable=Path(tmp)/(opt[1:])
            subprocess.run([a.clang,*flags,*draft_warnings,opt,*sources,*math_libraries,"-o",str(executable)],check=True)
            subprocess.run([str(executable)],check=True)
        if a.sanitize:
            executable=Path(tmp)/"sanitizer"
            subprocess.run([a.clang,*flags,*draft_warnings,"-O1","-g","-fsanitize=address,undefined",
                            "-fno-omit-frame-pointer",*sources,*math_libraries,"-o",str(executable)],check=True)
            subprocess.run([str(executable)],env={**os.environ,"UBSAN_OPTIONS":"halt_on_error=1",
                "ASAN_OPTIONS":"detect_leaks=1"},check=True)
    print("PASS scoped scalar tests; runner reports numeric-oracle availability or explicit unsupported-host rejection")
    print("LIMITS: finite normal domain, no exact Xbox FPU/MXCSR/SEH or original whole caller parity")
if __name__=="__main__":main()
