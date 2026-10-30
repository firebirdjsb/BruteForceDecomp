#!/usr/bin/env python3
"""Check the observed 0x001ED5D0 stack DWORD; no complete Xbox ABI claim."""
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
BODY_SHA256 = "1b1ab8cd635f2b15331704370f58cdfa7ab4ccd7186ae6cf6b44afac62590fe7"
ENTRY = 0x001ED5D0
END = 0x001ED6E8
REQUIRED = (
    "Entry: 0x001ed5d0",
    "1B1AB8CD635F2B15331704370F58CDFA7AB4CCD7186AE6CF6B44AFAC62590FE7",
    "undefined4 guest_event_word;",
    "guest_event_word = UINT32_C(0xedf960de);",
    "(&guest_event_word,*(undefined4 *)(iVar1 + 0x66c))",
)

def verify_source(source: str) -> None:
    for fragment in REQUIRED:
        if fragment not in source:
            raise ValueError(f"missing source evidence: {fragment}")
    if "stack0xfffffff8" in source:
        raise ValueError("unresolved original guest-stack word")
    if source.count("&guest_event_word") != 1:
        raise ValueError("event word must have exactly one address use")

def read_xbe_va(xbe: bytes, va: int, size: int) -> bytes:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("XBE SHA-256 mismatch")
    if xbe[:4] != b"XBEH":
        raise ValueError("invalid XBE header")
    base = int.from_bytes(xbe[0x104:0x108], "little")
    sections_va = int.from_bytes(xbe[0x120:0x124], "little")
    count = int.from_bytes(xbe[0x11c:0x120], "little")
    for index in range(count):
        offset = sections_va - base + index * 0x38
        if offset < 0 or offset + 0x38 > len(xbe):
            raise ValueError("invalid XBE section table")
        start = int.from_bytes(xbe[offset+4:offset+8], "little")
        vsize = int.from_bytes(xbe[offset+8:offset+12], "little")
        raw = int.from_bytes(xbe[offset+12:offset+16], "little")
        rsize = int.from_bytes(xbe[offset+16:offset+20], "little")
        if start <= va and va + size <= start + min(vsize, rsize):
            if raw + va - start + size > len(xbe):
                raise ValueError("section exceeds file")
            return xbe[raw + va - start:raw + va - start + size]
    raise ValueError("XBE address is not mapped")

def verify_xbe(xbe: bytes) -> None:
    body = read_xbe_va(xbe, ENTRY, END - ENTRY)
    if hashlib.sha256(body).hexdigest() != BODY_SHA256:
        raise ValueError("original function-body SHA-256 mismatch")
    signatures = {
        0x001ED5D0: "5153555657",              # PUSH ECX; save EBX/EBP/ESI/EDI
        0x001ED657: "c7442414de60f9ed",      # MOV [ESP+14h], 0xEDF960DE
        0x001ED665: "8d44241850",            # LEA EAX,[ESP+18h]; PUSH EAX
    }
    for va, opcode in signatures.items():
        if read_xbe_va(xbe, va, len(bytes.fromhex(opcode))) != bytes.fromhex(opcode):
            raise ValueError(f"original x86 instruction mismatch at {va:#x}")
    # Before the store: PUSH ECX + four saved registers + PUSH EDI.
    # Before LEA: an additional PUSH EAX; both address entry ESP-4.
    if -(6 * 4) + 0x14 != -4 or -(7 * 4) + 0x18 != -4:
        raise ValueError("stack-slot calculation mismatch")

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="private original XBE; never commit")
    args = ap.parse_args()
    root = args.root.resolve()
    source_path = root / "src/main_unclassified/band_001e/0x001ed5d0.c"
    source = source_path.read_text(encoding="utf-8")
    verify_source(source)
    for bad in (
        source.replace("&guest_event_word", "guest_event_word", 1),
        source.replace("UINT32_C(0xedf960de)", "UINT32_C(0)", 1),
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
    subprocess.run([clang, *flags, "-I", str(root / "include"), str(source_path)], check=True)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes())
        print("0x001ED5D0: source, C11, XBE body hash and three x86 signatures PASS")
    else:
        print("0x001ED5D0: source and focused Clang C11 PASS (XBE not in CI)")

if __name__ == "__main__":
    main()
