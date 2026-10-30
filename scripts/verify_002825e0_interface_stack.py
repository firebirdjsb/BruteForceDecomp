#!/usr/bin/env python3
"""Check the original 0x002825E0 stack-word alias, without claiming native ABI.

CI (without --xbe) verifies the source contract and isolated Clang C11.
Locally, --xbe additionally checks the exact user-supplied retail executable,
the entire 147-byte function body, and nine original x86 instruction windows.
Vtable signatures, type-tag output, guest pointers and runtime are unverified.
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
import re
import shutil
import struct
import subprocess
from pathlib import Path

ENTRY = 0x002825E0
BODY_SHA = "13226FD556B34C92CE248EE1A43F64A3CEB1E606D9919250B7062309B1F1C8B9"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = {
    0x002825E8: "8d542404",         # LEA [ESP+4]: local interface output S-4
    0x002825EE: "c744240c00000000", # initialize local output S-4
    0x002825F9: "8b442404",         # reload local output after first call
    0x002825FF: "8d542410",         # address incoming S+8 tag slot
    0x00282608: "8b442410",         # read incoming S+8 tag slot
    0x00282629: "8d742410",         # address incoming S+4 GUID scratch
    0x00282632: "c74424189e383e1d", # store GUID in S+4
    0x0028265E: "8b442404",         # reload local output for release
    0x00282667: "8b10",             # dereference reloaded vtable
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=10",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def check_text(source: str) -> None:
    required = (
        f"Entry: 0x{ENTRY:08x},",
        f"Input x86 body SHA-256: {BODY_SHA}",
        "ABI_UNVERIFIED",
        "param_1 = 0x1d3e389e;",
        "(**(code **)(*piVar1 + 0x70))(piVar1,piVar3,&param_1,piVar2);",
        "if (piStack_c != (int *)0x0)",
        "(**(code **)(*piStack_c + 8))(piStack_c);",
    )
    for marker in required:
        if marker not in source:
            raise ValueError(f"0x{ENTRY:08x}: source contract missing {marker}")
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for old in ("register0x00000010", "piVar4",
                "piStack_c = (int *)0x1d3e389e;",
                "(&piStack_c,piVar2)"):
        if old in body:
            raise ValueError(f"0x{ENTRY:08x}: incorrect alias returned: {old}")
    if body.count("param_1 = 0x1d3e389e;") != 1:
        raise ValueError("GUID scratch store count changed")


def verify_source(root: Path) -> None:
    path = root / "src/main_unclassified/band_0028/0x002825e0.c"
    check_text(path.read_text(encoding="utf-8"))
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang is required")
    run = subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(path)],
                         capture_output=True, text=True, timeout=60)
    if run.returncode:
        raise ValueError(f"Clang C11 failure: {run.stderr[:1200]}")


def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    if data[:4] != b"XBEH" or hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("Retail XBE SHA256 or header mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if not 0 < count < 128:
        raise ValueError("Invalid section count")
    sections = []
    for i in range(count):
        off = table - base + i * 0x38
        if not 0 <= off <= len(data) - 20:
            raise ValueError("Invalid section table")
        _, va, vsize, raw, rsize = struct.unpack_from("<IIIII", data, off)
        sections.append((va, min(vsize, rsize), raw))

    def read(va: int, size: int) -> bytes:
        for start, span, raw in sections:
            if start <= va and va + size <= start + span:
                return data[raw + va - start:raw + va - start + size]
        raise ValueError(f"Unmapped XBE VA 0x{va:08x}")

    if hashlib.sha256(read(ENTRY, 147)).hexdigest().upper() != BODY_SHA:
        raise ValueError("Original 147-byte body hash mismatch")
    for va, encoded in SITES.items():
        expected = bytes.fromhex(encoded)
        if read(va, len(expected)) != expected:
            raise ValueError(f"Original instruction mismatch 0x{va:08x}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    verify_source(args.root.resolve())
    if args.xbe:
        verify_xbe(args.xbe)
    print("PASS: 0x002825E0 source identity, stack alias, Clang C11; original XBE " +
          ("verified" if args.xbe else "not supplied") +
          ". Xbox ABI, external APIs, native linkage and runtime remain unverified.")


if __name__ == "__main__":
    main()
