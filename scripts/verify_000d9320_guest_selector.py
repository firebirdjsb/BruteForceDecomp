#!/usr/bin/env python3
"""Original-XBE and C11 regression for 0xD9320 raw DWORD jump selector.

The XBE stays private/local. CI verifies source and a focused C11 model only;
this does not certify the function's other ABI paths or gameplay behavior.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

ENTRY = 0x000D9320
LENGTH = 1080
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "36c15bc91e6b8b9c82823263231912ab8c13fa41f834deafb441a9d3ef2880d1"
SOURCE = "src/main_unclassified/band_000d/0x000d9320.c"
FIXTURE = "tests/test_000d9320_guest_selector.c"
WINDOWS = (
    (0xD9591,"8b6c2410"),       # EBP = original guest integer selector
    (0xD95F4,"b903000000"),     # ECX = 3
    (0xD9611,"8d45ff"),         # EAX = EBP - 1
    (0xD9614,"3bc1"),           # unsigned EAX compared with 3
    (0xD9616,"0f8787000000"),   # JA default
    (0xD961C,"ff248558970d00"),# JMP DWORD PTR [EAX*4+0xD9758]
    (0xD9623,"c705287d3f000000a041"),
    (0xD9643,"c705287d3f0000007041"),
    (0xD9663,"c705287d3f0000002041"),
    (0xD9683,"c705287d3f000000a040"),
)
TARGETS = (0xD9623,0xD9643,0xD9663,0xD9683)
MARKERS = (
    "Input x86 body SHA-256: 36C15BC91E6B8B9C82823263231912AB8C13FA41F834DEAFB441A9D3EF2880D1",
    "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
    "static uint32_t bf_d9320_raw_word(float value)",
    "_Static_assert(sizeof bits == sizeof value",
    "memcpy(&bits, &value, sizeof bits);",
    "switch(bf_d9320_raw_word(fVar11))",
    "case 1:", "case 2:", "case 3:", "case 4:",
)

def source_checks(root):
    src=(root/SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        if marker not in src:
            raise RuntimeError("source invariant missing: "+marker)
    for invalid in ("switch(fVar11)","case 1.4013e-45:","case 5.60519e-45:"):
        if invalid in src:
            raise RuntimeError("Ghidra float switch returned: "+invalid)
    for original,replacement in (
        ("memcpy(&bits, &value, sizeof bits);", "bits = (uint32_t)value;"),
        ("switch(bf_d9320_raw_word(fVar11))", "switch((int)fVar11)"),
        ("case 4:", "case 5:"),
    ):
        if original not in src:
            raise RuntimeError("negative-control anchor absent: "+original)
        mutated=src.replace(original,replacement,1)
        if all(marker in mutated for marker in MARKERS):
            raise RuntimeError("negative control escaped: "+original)

def clang_checks(root):
    clang=shutil.which("clang")
    if not clang:raise RuntimeError("clang required")
    flags=["-std=c11","-fsyntax-only","-ferror-limit=6",
           "-Wno-implicit-function-declaration","-Wno-int-conversion",
           "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
           "-Wno-int-to-pointer-cast","-Wno-return-type",
           "-Wno-deprecated-non-prototype"]
    syntax=subprocess.run([clang,*flags,"-I",str(root/"include"),str(root/SOURCE)],
                          text=True,capture_output=True)
    if syntax.returncode:
        raise RuntimeError("isolated C11 failed:\n"+syntax.stderr)
    with tempfile.TemporaryDirectory(prefix="bf_d9320_") as tmp:
        for opt in ("-O0","-O2"):
            exe=Path(tmp)/opt[1:]
            build=subprocess.run([clang,"-std=c11","-Wall","-Wextra","-Werror",
                "-pedantic-errors",opt,str(root/FIXTURE),"-o",str(exe)],
                text=True,capture_output=True)
            if build.returncode:
                raise RuntimeError("fixture build failed:\n"+build.stderr)
            test=subprocess.run([str(exe)],text=True,capture_output=True)
            if test.returncode:
                raise RuntimeError("fixture failed:\n"+test.stderr)

def xbe_checks(path):
    data=path.read_bytes()
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        raise RuntimeError("original XBE digest mismatch")
    start=ENTRY-0x10000
    if hashlib.sha256(data[start:start+LENGTH]).hexdigest()!=BODY_SHA:
        raise RuntimeError("original body digest mismatch")
    for va,hex_bytes in WINDOWS:
        expected=bytes.fromhex(hex_bytes);offset=va-0x10000
        if data[offset:offset+len(expected)]!=expected:
            raise RuntimeError(f"original opcode mismatch at 0x{va:08x}")
    table=struct.unpack_from("<4I",data,0xD9758-0x10000)
    if table!=TARGETS:
        raise RuntimeError("original switch table target mismatch")
    print(f"PASS: original XBE, 1080-byte body, {len(WINDOWS)} opcode windows, 4 jump targets")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    source_checks(a.root)
    clang_checks(a.root)
    if a.xbe:xbe_checks(a.xbe)
    else:print("XBE unavailable: source-only C11 verification")
    print("PASS: source invariants, 3 negative controls, isolated Clang C11, O0/O2")
    print("UNVERIFIED: other guest stack/ABI paths and native game behavior")

if __name__=="__main__":main()
