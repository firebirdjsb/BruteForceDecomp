#!/usr/bin/env python3
"""Verify original Xbox 0x002DD650 guest64 double storage and DWORD output aliases.

The XBE stays local. Source-only CI tests numeric f64 vs raw 2-DWORD storage
without claiming whole-function native ABI or gameplay equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

ENTRY=0x002DD650
LENGTH=630
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA="6496304a2073056abc0daF60f2cf8b13665ed7e9c78ec5494742219876841d3c".lower()
SOURCE="src/main_unclassified/band_002d/0x002dd650.c"
FIXTURE="tests/test_002dd650_guest_f64_words.c"
WINDOWS=(
    (0x2dd650, "8b442418"),
    (0x2dd654, "8b4c2404"),
    (0x2dd658, "83ec20"),
    (0x2dd66b, "8b542440"),
    (0x2dd67f, "d95c2418"),
    (0x2dd687, "d9442418"),
    (0x2dd6d5, "dd442458"),
    (0x2dd6dd, "d95c2414"),
    (0x2dd6e1, "dd442450"),
    (0x2dd702, "dd442420"),
    (0x2dd706, "d954241c"),
    (0x2dd733, "d95c241c"),
    (0x2dd737, "f30f2c44241c"),
    (0x2dd74f, "db44241c"),
    (0x2dd765, "dc442420"),
    (0x2dd769, "dd5c2428"),
    (0x2dd76d, "8b6c242c"),
    (0x2dd784, "55"),
    (0x2dd785, "50"),
    (0x2dd790, "e86b5dfdff"),
    (0x2dd7c8, "55"),
    (0x2dd7c9, "52"),
    (0x2dd7ca, "e8315dfdff"),
    (0x2dd7e3, "ff12"),
    (0x2dd824, "dd442428"),
    (0x2dd888, "e813fcffff"),
    (0x2dd88d, "dd442428"),
    (0x2dd8a2, "8b4c2428"),
    (0x2dd8aa, "8b44242c"),
    (0x2dd8af, "890a"),
    (0x2dd8b7, "894104"),
    (0x2dd8c3, "c22c00"),
)
MARKERS=(
    "Input x86 body SHA-256: 6496304A2073056ABC0DAF60F2CF8B13665ED7E9C78EC5494742219876841D3C",
    "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
    "static double bf_2dd650_f64_from_guest_words(uint32_t low, uint32_t high)",
    "uint64_t bits = (uint64_t)low | ((uint64_t)high << 32);",
    "memcpy(&value, &bits, sizeof value);",
    "memcpy(&bits, &value, sizeof bits);",
    "double local_8;",
    "double incoming_time = bf_2dd650_f64_from_guest_words(param_8, param_9);",
    "bf_2dd650_guest_words_from_f64(local_8, &local_8_low_word,",
    "uVar6 = local_8_high_word;",
    "FUN_002b3500(local_8_low_word,uVar6);",
    "FUN_002dd4a0(param_1,&local_8,param_2,",
    "*param_7 = local_8_low_word;",
    "param_7[1] = local_8_high_word;",
)
BAD=(
    "CONCAT44(param_9,param_8)",
    "local_8._4_4_",
    "(undefined4)local_8",
    "((ulonglong)dVar2 >> 0x20)",
)
def check_source(root):
    src=(root/SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        if marker not in src:raise RuntimeError("missing source invariant: "+marker)
    for marker in BAD:
        if marker in src:raise RuntimeError("invalid numeric double-to-word source reintroduced: "+marker)
    for initial,replacement in (
      ("double local_8;", "undefined8 local_8;"),
      ("memcpy(&bits, &value, sizeof bits);", "bits = (uint64_t)value;"),
      ("param_7[1] = local_8_high_word;", "param_7[1] = (uint32_t)local_8;"),
    ):
        if initial not in src:raise RuntimeError("negative control anchor missing")
        changed=src.replace(initial,replacement,1)
        if all(mark in changed for mark in MARKERS):
            raise RuntimeError("source regression negative control escaped: "+initial)

def check_clang(root):
    clang=shutil.which("clang")
    if not clang:raise RuntimeError("clang is required for full checked verification")
    flags=["-std=c11","-fsyntax-only","-ferror-limit=6",
           "-Wno-implicit-function-declaration","-Wno-int-conversion",
           "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
           "-Wno-int-to-pointer-cast","-Wno-return-type",
           "-Wno-deprecated-non-prototype"]
    outcome=subprocess.run([clang,*flags,"-I",str(root/"include"),str(root/SOURCE)],
                           text=True,capture_output=True)
    if outcome.returncode:raise RuntimeError("isolated C11 syntax failed:\n"+outcome.stderr)
    with tempfile.TemporaryDirectory(prefix="bf_2dd650_f64_") as tmp:
        for optimization in ("-O0","-O2"):
            binary=Path(tmp)/optimization[1:]
            build=subprocess.run([clang,"-std=c11","-Wall","-Wextra","-Werror",
                "-pedantic-errors",optimization,str(root/FIXTURE),"-o",str(binary)],
                capture_output=True,text=True)
            if build.returncode:raise RuntimeError("float64 fixture Clang failed:\n"+build.stderr)
            result=subprocess.run([str(binary)],capture_output=True,text=True)
            if result.returncode:raise RuntimeError("float64 fixture failed:\n"+result.stderr)

def verify_xbe(path):
    binary=path.read_bytes()
    if hashlib.sha256(binary).hexdigest()!=XBE_SHA:
        raise RuntimeError("original user XBE SHA-256 mismatch")
    o=ENTRY-0x10000
    if hashlib.sha256(binary[o:o+LENGTH]).hexdigest()!=BODY_SHA:
        raise RuntimeError("original 630-byte x86 body digest mismatch")
    for addr,hexdigits in WINDOWS:
        instruction=bytes.fromhex(hexdigits);offset=addr-0x10000
        if binary[offset:offset+len(instruction)]!=instruction:
            raise RuntimeError(f"original opcode mismatch at 0x{addr:08x}")
    for addr,target in ((0x2dd790,0x2b3500),(0x2dd7ca,0x2b3500),
                        (0x2dd888,0x2dd4a0)):
        offset=addr-0x10000
        disp=struct.unpack_from("<i",binary,offset+1)[0]
        if (addr+5+disp)&0xffffffff != target:
            raise RuntimeError(f"original direct call changed at 0x{addr:08x}")
    print(f"PASS: original XBE SHA/body digest, {len(WINDOWS)} opcodes and 3 direct calls")

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--root",type=Path,default=Path("."))
    parser.add_argument("--xbe",type=Path)
    args=parser.parse_args()
    check_source(args.root);check_clang(args.root)
    if args.xbe:verify_xbe(args.xbe)
    print("PASS: source invariants, 3 negative controls, isolated C11 and O0/O2 IEEE754 regression")
    print("UNVERIFIED: entire guest ABI, indirect callbacks, loop semantics, native host execution")

if __name__=="__main__":main()
