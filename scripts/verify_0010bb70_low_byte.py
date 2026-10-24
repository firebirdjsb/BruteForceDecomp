#!/usr/bin/env python3
"""Verify the 0x0010BB70 low-byte store and its original x86 call boundaries.

This is a focused operand/Clang check, NOT full Xbox ABI or runtime verification.
"""
from __future__ import annotations

import argparse
import hashlib
import shutil
import struct
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CHECKS = {
    0x0010BB83: "8d44240c",       # LEA EAX,[ESP+0x0C]
    0x0010BB88: "8d4c2410",       # LEA ECX,[ESP+0x10] after first PUSH
    0x0010BB8D: "e8aeec1300",     # CALL 0x0024A840
    0x0010BB92: "88442414",       # MOV BYTE [ESP+0x14],AL
    0x0010BB96: "8b542414",       # MOV EDX,DWORD [ESP+0x14]
    0x0010BB9A: "52",             # PUSH EDX
    0x0010BB9B: "56",             # PUSH ESI
    0x0010BB9C: "53",             # PUSH EBX
    0x0010BB9D: "8bc7",           # MOV EAX,EDI
    0x0010BB9F: "e88cbaf7ff",     # CALL 0x00087630
    0x0010BBC9: "c20400",         # RET 4
    0x0024A840: "518a44240359c3", # PUSH ECX; MOV AL,[ESP+3]; POP ECX; RET
}
CALLS = {0x0010BB8D: 0x0024A840, 0x0010BB9F: 0x00087630}
SOURCE = "src/main_unclassified/band_0010/0x0010bb70.c"
REQUIRED = (
    "Input x86 body SHA-256: 5F28497663216A096BD5FB27543595E3C6DAA80E081296C4063F10C410E277BC",
    "((uint8_t *)&local_4)[0] = (uint8_t)uVar2;",
    "FUN_00087630(uVar1,in_EAX + 0x10,local_4);",
    "Upper 24 bits are NOT initialized here;",
)
FORBIDDEN = ("local_4._1_3_", "local_4 = 0;", "local_4 = (undefined4)uVar2;")
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", required=True, type=Path)
    parser.add_argument("--root", required=True, type=Path)
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        parser.error("Original XBE SHA-256 mismatch")
    for va, hexdump in CHECKS.items():
        expected = bytes.fromhex(hexdump)
        actual = data[va - 0x10000:va - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"Original instruction mismatch at 0x{va:08X}: {actual.hex()}")
    for site, target in CALLS.items():
        displacement = struct.unpack_from("<i", data, site - 0x10000 + 1)[0]
        actual = (site + 5 + displacement) & 0xFFFFFFFF
        if actual != target:
            raise SystemExit(f"CALL 0x{site:08X} target mismatch: 0x{actual:08X}")
    source_path = args.root / SOURCE
    source = source_path.read_text()
    for token in REQUIRED:
        if token not in source:
            raise SystemExit(f"Missing source invariant: {token}")
    for token in FORBIDDEN:
        if token in source:
            raise SystemExit(f"Unsafe source regression: {token}")
    clang = shutil.which("clang")
    if clang is None:
        raise SystemExit("Clang is required for focused C11 syntax check")
    result = subprocess.run(
        [clang, *FLAGS, "-I", str(args.root / "include"), str(source_path)],
        text=True, capture_output=True, check=False,
    )
    if result.returncode:
        raise SystemExit(result.stderr)
    print("PASS: 12 original x86 instruction fingerprints, 2 direct calls, "
          "source invariants, focused Clang C11 syntax")
    print("LIMITATION: guest stack high bytes, callee ECX ABI and full 1:1 "
          "behavior remain unverified")

if __name__ == "__main__":
    main()
