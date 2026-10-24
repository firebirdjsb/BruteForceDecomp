#!/usr/bin/env python3
"""Verify three XBE-backed incoming stack-word address repairs.

Without --xbe, CI checks original entry/body labels and isolated host C11
syntax only. With --xbe, validate the exact retail executable, all three
original function bodies and fifteen LEA/PUSH/call sites. Neither mode
establishes caller ABI, external APIs, native linkage or runtime equivalence.
"""
from __future__ import annotations

import argparse
import hashlib
import re
import shutil
import struct
import subprocess
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE = 0x0006A610
# Original function entry: (body length, original SHA256, LEA/PUSH sites).
SITES = {
    0x00099500: (742, "BF482A310A259F2E677D980C2449EDF526F62A0F6A0349478B1B239CC5E97C69",
                 ((0x0009965E, "8d4d2851"), (0x0009967C, "8d552852"), (0x00099695, "8d452850"))),
    0x000A8610: (1086, "3A704190336DB2AF4712D768E1FE44F0EA5193636FF244374877E72ACA7D374A",
                 ((0x000A897A, "8d452850"), (0x000A899D, "8d4d2851"), (0x000A89BB, "8d552852"))),
    0x000A8D00: (1024, "2ADE98F8EE4E8EC9B4E6A530E26F61BE21B65D0DDC10AFBE55E744388675BC72",
                 ((0x000A8DF5, "8d4d2851"), (0x000A8E13, "8d552852"), (0x000A8E2C, "8d452850"),
                  (0x000A8E4F, "8d4d2851"), (0x000A8FC9, "8d452850"), (0x000A8FEC, "8d4d2851"),
                  (0x000A900A, "8d552852"), (0x000A9055, "8d552852"), (0x000A906E, "8d452850"))),
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def original_reader(path: Path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256 or data[:4] != b"XBEH":
        raise ValueError("Retail XBE header or SHA256 mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if not 0 < count < 128:
        raise ValueError("Invalid XBE section count")
    sections = []
    for index in range(count):
        offset = table - base + index * 0x38
        if not 0 <= offset <= len(data) - 20:
            raise ValueError("Invalid XBE section table")
        _, va, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, offset)
        sections.append((va, min(virtual_size, raw_size), raw))

    def read(va: int, length: int) -> bytes:
        for start, size, raw in sections:
            if start <= va and va + length <= start + size:
                return data[raw + va - start:raw + va - start + length]
        raise ValueError(f"Unmapped XBE address 0x{va:08x}")
    return read


def verify_xbe(path: Path) -> None:
    read = original_reader(path)
    for entry, (length, digest, sites) in SITES.items():
        if hashlib.sha256(read(entry, length)).hexdigest().upper() != digest:
            raise ValueError(f"Original body hash mismatch 0x{entry:08x}")
        for va, encoded in sites:
            if read(va, 4) != bytes.fromhex(encoded):
                raise ValueError(f"Original LEA/PUSH mismatch 0x{va:08x}")
            # Check exactly one following direct near-call to the known
            # callee. This proves address forwarding, not a complete ABI.
            following = read(va + 4, 28)
            matches = 0
            for offset in range(len(following) - 4):
                if following[offset] != 0xE8:
                    continue
                call_va = va + 4 + offset
                displacement = struct.unpack_from("<i", following, offset + 1)[0]
                if (call_va + 5 + displacement) & 0xFFFFFFFF == CALLEE:
                    matches += 1
            if matches != 1:
                raise ValueError(f"Missing/ambiguous direct call after 0x{va:08x}")


def verify_source(root: Path) -> None:
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    for entry, (_, digest, sites) in SITES.items():
        path = root / "src" / "main_unclassified" / f"band_{entry >> 16:04x}" / f"0x{entry:08x}.c"
        source = path.read_text(encoding="utf-8")
        if (f"Entry: 0x{entry:08x}," not in source or
                f"Input x86 body SHA-256: {digest}" not in source or
                "ABI_UNVERIFIED" not in source):
            raise ValueError(f"Original provenance/status changed 0x{entry:08x}")
        if (source.count("FUN_0006a610(&in_stack_00000024);") != len(sites) or
                "&stack0x00000024" in source or
                not re.search(r"\bin_stack_00000024\s*;", source)):
            raise ValueError(f"Incoming stack-slot mapping changed 0x{entry:08x}")
        check = subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(path)],
                               capture_output=True, text=True, timeout=60)
        if check.returncode:
            raise ValueError(f"Clang C11 failed 0x{entry:08x}: {check.stderr[:1000]}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    verify_source(args.root.resolve())
    if args.xbe:
        verify_xbe(args.xbe)
    print(f"PASS: 3 original entries, 15 LEA/PUSH/call sites; Clang C11 passed; "
          f"retail XBE {'verified' if args.xbe else 'not supplied'}. "
          "ABI, native linkage and runtime behavior remain unverified.")


if __name__ == "__main__":
    main()
