#!/usr/bin/env python3
"""Verify the observed 0x0006A750 device guest DWORD and C11 storage only."""
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

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "4629c8a73a3401f41bc276fb11d69bffc39c80aab5c834533a2074f2f406627f"
REQUIRED = (
    "Entry: 0x0006a750",
    "4629C8A73A3401F41BC276FB11D69BFFC39C80AAB5C834533A2074F2F406627F",
    "extern uint32_t D3D8__D3D_g_pDevice;",
    "undefined4 device_stack_words[0x11];",
    "puVar4 = device_stack_words;",
    "(0,1,0,device_stack_words);",
)
def verify_source(source: str) -> None:
    for fragment in REQUIRED:
        if fragment not in source:
            raise ValueError(f"missing source evidence: {fragment}")
    if "stack0xffffffbc" in source:
        raise ValueError("unresolved guest stack storage")
    if source.count("extern uint32_t D3D8__D3D_g_pDevice;") != 1:
        raise ValueError("device guest word must be declared once")

def read_xbe_va(xbe: bytes, va: int, size: int) -> bytes:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("original XBE SHA-256 mismatch")
    if xbe[:4] != b"XBEH":
        raise ValueError("invalid XBE magic")
    base = int.from_bytes(xbe[0x104:0x108], "little")
    sections_va = int.from_bytes(xbe[0x120:0x124], "little")
    count = int.from_bytes(xbe[0x11c:0x120], "little")
    for i in range(count):
        o = sections_va - base + i * 0x38
        if o < 0 or o + 0x38 > len(xbe):
            raise ValueError("invalid XBE section table")
        start = int.from_bytes(xbe[o+4:o+8], "little")
        vsize = int.from_bytes(xbe[o+8:o+12], "little")
        raw = int.from_bytes(xbe[o+12:o+16], "little")
        rsize = int.from_bytes(xbe[o+16:o+20], "little")
        if start <= va and va + size <= start + min(vsize, rsize):
            if raw + va - start + size > len(xbe):
                raise ValueError("XBE raw section truncated")
            return xbe[raw+va-start:raw+va-start+size]
    raise ValueError("unmapped XBE address")

def verify_xbe(xbe: bytes) -> None:
    body = read_xbe_va(xbe, 0x0006A750, 0x191)
    if hashlib.sha256(body).hexdigest() != BODY_SHA256:
        raise ValueError("original function body hash mismatch")
    signatures = {
        0x0006A761: "b911000000",         # MOV ECX, 17
        0x0006A766: "8d7c2424f3ab",       # LEA EDI,[ESP+24h]; REP STOSD
        0x0006A82A: "8b1588dd3700",       # MOV EDX,[0x0037DD88]
        0x0006A898: "8b2d88dd3700",       # MOV EBP,[0x0037DD88]
    }
    for va, opcode in signatures.items():
        if read_xbe_va(xbe, va, len(bytes.fromhex(opcode))) != bytes.fromhex(opcode):
            raise ValueError(f"x86 instruction mismatch at {va:#x}")

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="private original XBE; never commit")
    args = ap.parse_args()
    root = args.root.resolve()
    path = root / "src/main_unclassified/band_0006/0x0006a750.c"
    source = path.read_text(encoding="utf-8")
    verify_source(source)
    for bad in (
        source.replace("extern uint32_t D3D8__D3D_g_pDevice;", "", 1),
        source.replace("device_stack_words[0x11]", "device_stack_words[0x10]", 1),
    ):
        try:
            verify_source(bad)
        except ValueError:
            pass
        else:
            raise SystemExit("source mutation unexpectedly passed")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang required")
    flags = [
        "-std=c11", "-fsyntax-only", "-ferror-limit=3",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype",
    ]
    subprocess.run([clang, *flags, "-I", str(root / "include"), str(path)], check=True)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes())
        print("0x0006A750: source, Clang C11, XBE body hash and four x86 signatures PASS")
    else:
        print("0x0006A750: source and focused Clang C11 PASS (XBE not in CI)")

if __name__ == "__main__":
    main()
