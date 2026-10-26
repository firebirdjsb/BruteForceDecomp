#!/usr/bin/env python3
"""Check 0x00052120 original x87 float stack slots and C11 source.

The recovered virtual-call/output-pointer ABI and native behavior remain
unverified.  Never equate a host pointer cast with FLD m32fp.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

SOURCE = "src/main_unclassified/band_0005/0x00052120.c"
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "a9bb04ff684df913b8d6f81e92e4d06b88773586b58567cf41746be7570bea45"
ENTRY = 0x00052120
BODY_LEN = 157
OPCODES = (
    (0x52120, "83ec28"),      # SUB ESP,0x28
    (0x52125, "8d4c2410"),    # LEA ECX,[ESP+0x10]
    (0x5212a, "8d542404"),    # LEA EDX,[ESP+4] after first push
    (0x52137, "8d4c241c"),    # LEA ECX,[ESP+0x1c] after stack adjustment
    (0x5213c, "8d542408"),    # LEA EDX,[ESP+8] after push
    (0x5214e, "d9442414"),    # FLD m32fp [ESP+0x14]
    (0x52157, "d9442400"),    # FLD m32fp [ESP+0]
    (0x5215f, "d864242c"),    # FSUB m32fp incoming arg
    (0x52176, "d9442420"),    # FLD m32fp [ESP+0x20]
    (0x5217d, "d9442404"),    # FLD m32fp [ESP+4]
    (0x521b0, "c20400"),      # RET 4
)
MARKERS = (
    "undefined1 local_28 [8];",
    "undefined1 local_18 [20];",
    "memcpy(&guest_first_y, local_18 + 4, sizeof guest_first_y);",
    "memcpy(&guest_first_x, local_28, sizeof guest_first_x);",
    "memcpy(&guest_second_y, local_18 + 16, sizeof guest_second_y);",
    "memcpy(&guest_second_x, local_28 + 4, sizeof guest_second_x);",
    "fVar2 = (fVar1 - guest_first_x) - param_1;",
    "fVar3 = guest_second_x + fStack_20 + param_1;",
    "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        if marker not in source:
            raise SystemExit("missing verified source invariant: " + marker)
    for invalid in ("(float)puStack_2c", "(float)unaff_EDI", "(float)&puStack_30"):
        if invalid in source:
            raise SystemExit("host pointer-to-float arithmetic returned: " + invalid)
    if args.xbe:
        binary = args.xbe.read_bytes()
        if hashlib.sha256(binary).hexdigest() != XBE_SHA256:
            raise SystemExit("Original XBE SHA-256 mismatch")
        offset = ENTRY - 0x10000
        if hashlib.sha256(binary[offset:offset + BODY_LEN]).hexdigest() != BODY_SHA256:
            raise SystemExit("Original function-body SHA-256 mismatch")
        for address, hexdigits in OPCODES:
            instruction = bytes.fromhex(hexdigits)
            start = address - 0x10000
            if binary[start:start + len(instruction)] != instruction:
                raise SystemExit(f"Original x86 instruction mismatch at 0x{address:08x}")
    clang = shutil.which("clang")
    if clang:
        flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=4",
                 "-Wno-implicit-function-declaration", "-Wno-int-conversion",
                 "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
                 "-Wno-int-to-pointer-cast", "-Wno-return-type",
                 "-Wno-deprecated-non-prototype"]
        cmd = [clang, *flags, "-I", str(args.root / "include"), str(args.root / SOURCE)]
        run = subprocess.run(cmd, text=True, capture_output=True)
        if run.returncode:
            raise SystemExit("Focused Clang failed:\n" + run.stderr)
    print(f"PASS: {len(OPCODES) if args.xbe else 0} authenticated opcode windows, source invariants, and available Clang C11")
    print("Virtual calls, output-buffer provenance, SSE/x87 runtime and entire ABI remain UNVERIFIED.")

if __name__ == "__main__":
    main()
