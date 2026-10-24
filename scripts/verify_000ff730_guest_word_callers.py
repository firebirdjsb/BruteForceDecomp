#!/usr/bin/env python3
"""Pin six entry ESP+4 DWORD addresses and the 0x000ff730 EAX return.

Source-only CI checks do not establish guest/host ABI, native linking or 1:1
runtime behavior. Original executable bytes are required for x86 verification.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# (entry, end, LEA address, LEA opcode, CALL address, original body SHA-256)
CASES = (
    (0x000BA410, 0x000BA456, 0x000BA42D, "8d442410", 0x000BA435,
     "e9c6077914699e9859d8d81771b7ff8b6420578451ad1d425f64d6b2cdd3d685"),
    (0x000CDAE0, 0x000CDB10, 0x000CDAE8, "8d44240c", 0x000CDAF0,
     "e52fd1cab95e65b191b664cd31a8196738e8cfb6a072ad0dee7b8bac02592cd4"),
    (0x000DFB40, 0x000DFB7D, 0x000DFB54, "8d442410", 0x000DFB5C,
     "0fec6c64aee972e32c65bb0c987ba20d121793af92741a5a242bbf030af62b71"),
    (0x000DFB80, 0x000DFBBD, 0x000DFB94, "8d442410", 0x000DFB9C,
     "dd89653d046fd62c213bce146f9a133e53e65b1dc5d2666d3c56eba6f0050be4"),
    (0x000E42F0, 0x000E434B, 0x000E4306, "8d442410", 0x000E430E,
     "4f2f7865b0caf6dcc0a25b9da6ad1698b8b475cf9a81a2ec5521bfe523f642c5"),
    (0x000E4350, 0x000E43AB, 0x000E4366, "8d442410", 0x000E436E,
     "568b786f2d5c282cc644f49e5b0adb0cf15e91e65713877971098491c1f65b73"),
)
CALLEE_SHA = "a7efb135b6b23f930db5c6ab5eb5937ea2372d6fa711ba4af6834f004d03753d"
CALLEE_TAIL_SHA = "6ed475d0302f022e8762373b1929bbef4c61a5f83f749e9246e7a0992e3cbe28"
CALLEE_OPCODES = (
    (0x000FF753, "e8c5a81e00"), # allocator returns EAX
    (0x000FF75B, "8945ec"),     # saved allocation address
    (0x000FF777, "8b4d14"),     # fourth stack argument is a pointer
    (0x000FF77A, "8b11"),       # read full guest DWORD
    (0x000FF77C, "895008"),     # write node+8
    (0x000FF796, "c21000"),     # callee pops four guest arguments
)
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def source_path(root, entry):
    return root / f"src/main_unclassified/band_{entry >> 16:04x}/0x{entry:08x}.c"

def source_check(root, overrides=None):
    overrides = overrides or {}
    for entry, *_ in CASES:
        src = overrides.get(entry, source_path(root, entry).read_text(encoding="utf-8"))
        for token in (f"void FUN_{entry:08x}(undefined4 guest_stack_word)",
                      "&guest_stack_word)", "ABI_UNVERIFIED"):
            if token not in src:
                raise ValueError(f"{entry:#x}: missing source token {token}")
        if "stack0x00000004" in src:
            raise ValueError(f"{entry:#x}: unresolved original stack reference")
    callee = overrides.get(0x000FF730, source_path(root, 0x000FF730).read_text(encoding="utf-8"))
    for token in ("undefined4 FUN_000ff730(", "puVar1[2] = *param_4;",
                  "return (undefined4)(uintptr_t)puVar1;",
                  "not a native host allocation ABI"):
        if token not in callee:
            raise ValueError(f"0x000ff730: missing source token {token}")

def xbe_check(data, identity=True):
    if identity and hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("unexpected original XBE SHA-256")
    def span(start, end):
        return data[start - 0x10000:end - 0x10000]
    for entry, end, lea, opcode, call, digest in CASES:
        if hashlib.sha256(span(entry, end)).hexdigest() != digest:
            raise ValueError(f"{entry:#x}: original function body mismatch")
        if span(lea, lea + 4) != bytes.fromhex(opcode):
            raise ValueError(f"{entry:#x}: guest argument address mismatch")
        if span(call, call + 1) != b"\xe8":
            raise ValueError(f"{call:#x}: expected near CALL")
        displacement = struct.unpack_from("<i", data, call - 0x10000 + 1)[0]
        if (call + 5 + displacement) & 0xffffffff != 0x000FF730:
            raise ValueError(f"{call:#x}: wrong call target")
    if hashlib.sha256(span(0x000FF730, 0x000FF799)).hexdigest() != CALLEE_SHA:
        raise ValueError("0x000ff730: original body mismatch")
    for va, opcode in CALLEE_OPCODES:
        if span(va, va + len(bytes.fromhex(opcode))) != bytes.fromhex(opcode):
            raise ValueError(f"{va:#x}: callee instruction mismatch")
    if hashlib.sha256(span(0x000FF753, 0x000FF799)).hexdigest() != CALLEE_TAIL_SHA:
        raise ValueError("0x000ff730: EAX allocation-to-return span mismatch")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    root = args.root.resolve()
    source_check(root)
    callee = source_path(root, 0x000FF730).read_text(encoding="utf-8")
    try:
        source_check(root, {0x000FF730: callee.replace(
            "return (undefined4)(uintptr_t)puVar1;", "return 0;")})
    except ValueError:
        pass
    else:
        raise ValueError("source negative control did not fail")
    if args.xbe:
        data = args.xbe.read_bytes()
        xbe_check(data)
        damaged = bytearray(data)
        damaged[0x000CDAE8 - 0x10000] ^= 1
        try:
            xbe_check(damaged, identity=False)
        except ValueError:
            pass
        else:
            raise ValueError("XBE negative control did not fail")
    clang = shutil.which("clang")
    if not clang:
        raise ValueError("clang is required")
    for entry in (*(row[0] for row in CASES), 0x000FF730):
        cmd = [clang, *FLAGS, "-I", str(root / "include"), str(source_path(root, entry))]
        result = subprocess.run(cmd, capture_output=True, text=True, check=False)
        if result.returncode:
            raise ValueError(f"{entry:#x}: C11 syntax failure: {result.stderr}")
    print("PASS: six caller DWORDs, six direct edges, callee EAX return, seven isolated C11 files")
    print("LIMITATION: implicit EAX/EBX ABI, guest memory mapping, native linking unverified")

if __name__ == "__main__":
    main()
