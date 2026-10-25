#!/usr/bin/env python3
"""Verify the 0x000F0480 output-word alias without inventing the virtual ABI.

Source-only CI checks C11 syntax and source invariants. With --xbe, verify the
user-owned retail XBE SHA-256, complete 438-byte original function body and
twelve exact x86 fingerprints. Never upload the executable to GitHub.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

ENTRY = 0x000F0480
BODY_SIZE = 438
BODY_SHA256 = "3704B151F1D75ED35BBDD856C356786F509DD0ACD96F2940BC2D118E0020D40B"
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x000F0480: "83 ec 10",              # local frame: 0x10 bytes
    0x000F0488: "55",                    # save EBP
    0x000F0489: "56",                    # save ESI
    0x000F048D: "57",                    # save EDI
    0x000F0521: "c7 44 24 10 00 00 00 00",  # initialize local output DWORD
    0x000F0540: "8d 54 24 10",           # address same DWORD
    0x000F056C: "8d 44 24 18",           # separate adjacent guest slot after push
    0x000F0597: "8d 44 24 10",           # address same DWORD
    0x000F05AB: "8d 54 24 0c 52",        # LEA/PUSH after frame setup
    0x000F05B0: "8b 54 24 18 52",        # distinct first call argument
    0x000F05B5: "ff 90 58 01 00 00",     # indirect virtual call, signature unknown
    0x000F062F: "5f 5e 5d 83 c4 10 c3",  # restore saved registers and local frame
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def check_source(root: Path) -> None:
    path = root / "src/main_unclassified/band_000f/0x000f0480.c"
    source = path.read_text(encoding="utf-8")
    for token in (
        f"Input x86 body SHA-256: {BODY_SHA256}",
        "Entry: 0x000f0480,",
        "ABI_UNVERIFIED",
        "0x000F05AB",
    ):
        if token not in source:
            raise ValueError(f"Missing original provenance: {token}")
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for token in (
        "undefined4 uStack_10;",
        "FUN_000f03a0(&uStack_10)",
        "(iStack_c,&uStack_10);",
    ):
        if token not in code:
            raise ValueError(f"Guest output DWORD alias changed: {token}")
    if re.search(r"\bstack0x[0-9a-fA-F]+\b", code):
        raise ValueError("Unresolved Ghidra guest stack symbol reintroduced")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang is required for focused C11 syntax")
    result = subprocess.run(
        [clang, *FLAGS, "-I", str(root / "include"), str(path)],
        capture_output=True, text=True, timeout=60, check=False,
    )
    if result.returncode:
        raise ValueError(f"Focused C11 syntax failed:\n{result.stderr[-2400:]}")


def check_xbe(path: Path) -> None:
    data = path.read_bytes()
    if data[:4] != b"XBEH" or hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("Original user-owned XBE SHA-256 or header mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if not 0 < count < 128:
        raise ValueError("Invalid XBE section count")
    sections = []
    for index in range(count):
        off = table - base + index * 0x38
        if not 0 <= off <= len(data) - 20:
            raise ValueError("Invalid XBE section header")
        _, va, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, off)
        sections.append((va, min(virtual_size, raw_size), raw))

    def read(va: int, size: int) -> bytes:
        for start, length, raw in sections:
            if start <= va and va + size <= start + length:
                return data[raw + va - start:raw + va - start + size]
        raise ValueError(f"Unmapped original XBE VA {va:#x}")

    if hashlib.sha256(read(ENTRY, BODY_SIZE)).hexdigest().upper() != BODY_SHA256:
        raise ValueError("Original 0x000F0480 438-byte body hash mismatch")
    for va, encoded in OPCODES.items():
        expected = bytes.fromhex(encoded)
        if read(va, len(expected)) != expected:
            raise ValueError(f"Original x86 instruction mismatch at {va:#x}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="User-owned original XBE; never committed")
    args = parser.parse_args()
    check_source(args.root.resolve())
    if args.xbe:
        check_xbe(args.xbe)
    print("PASS FUN_000F0480: Clang C11 and shared output-word source invariants;"
          f" original XBE {'verified' if args.xbe else 'not available in CI'}.")
    print("Full Xbox register ABI, indirect callee signature, native linkage,"
          " and runtime behavior remain unverified.")


if __name__ == "__main__":
    main()
