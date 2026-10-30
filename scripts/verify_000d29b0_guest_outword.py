#!/usr/bin/env python3
"""Verify 0x000d29b0 guest first-argument out-slot, not host ABI equivalence."""
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
BODY_HASHES = {
    (0x000D29B0, 0x000D2A58): "073a4a2e9e3ebe0131000b38c3a9c59d6362c7983af7499c7b5f3468d33f4501",
    (0x002463A0, 0x002463EB): "e04927cd5883b795b0d495555a87ec4e43ecdb2b4deea2f40afd874ff0c7cd1f",
}
SIGNATURES = {
    0x000D29B0: "5356",             # push EBX; push ESI
    0x000D29B7: "578bf8",           # push EDI; preserve incoming EAX
    0x000D29D6: "3bd7",             # compare count with incoming EAX (EDI)
    0x000D2A34: "518bc48918",       # store end pointer in pushed scratch word
    0x000D2A3C: "518bd4",           # second pushed scratch word
    0x000D2A45: "8902",             # store begin pointer
    0x000D2A47: "8d542418",         # LEA EDX,[ESP+18h] = entry ESP+4
    0x000D2A4B: "5251",             # push out address and object
    0x000D2A4D: "e84e391700",       # call 0x002463a0
    0x000D2A55: "c21800",           # ret 24
    0x002463DC: "8b4c2418",         # load out address
    0x002463E3: "8901",             # write one DWORD to out address
    0x002463E8: "c21000",           # ret 16
}
REQUIRED = (
    "void FUN_000d29b0(undefined4 guest_out_word)",
    "FUN_002463a0(in_ECX,&guest_out_word,",
    "uint in_EAX;",
    "int in_ECX;",
    "RET 18h",
    "073A4A2E9E3EBE0131000B38C3A9C59D6362C7983AF7499C7B5F3468D33F4501",
)

def verify_source(source: str) -> None:
    for fragment in REQUIRED:
        if fragment not in source:
            raise ValueError(f"missing source contract: {fragment}")
    if "&stack0x00000004" in source:
        raise ValueError("unresolved guest-stack address")
    if source.count("&guest_out_word") != 1:
        raise ValueError("guest out-slot address must be forwarded once")

def mapped_reader(xbe: bytes):
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("original retail XBE SHA-256 mismatch")
    if xbe[:4] != b"XBEH":
        raise ValueError("XBE header magic mismatch")
    base = int.from_bytes(xbe[0x104:0x108], "little")
    section_va = int.from_bytes(xbe[0x120:0x124], "little")
    count = int.from_bytes(xbe[0x11c:0x120], "little")
    sections = []
    for index in range(count):
        offset = section_va - base + index * 0x38
        if offset < 0 or offset + 0x38 > len(xbe):
            raise ValueError("invalid XBE section header")
        va = int.from_bytes(xbe[offset+4:offset+8], "little")
        virtual_size = int.from_bytes(xbe[offset+8:offset+12], "little")
        raw = int.from_bytes(xbe[offset+12:offset+16], "little")
        raw_size = int.from_bytes(xbe[offset+16:offset+20], "little")
        sections.append((va, virtual_size, raw, raw_size))
    def read(va: int, size: int) -> bytes:
        for start, virtual_size, raw, raw_size in sections:
            if start <= va and va + size <= start + min(virtual_size, raw_size):
                if raw + va - start + size > len(xbe):
                    raise ValueError("XBE section exceeds file")
                return xbe[raw+va-start:raw+va-start+size]
        raise ValueError(f"original VA {va:#x} not mapped")
    return read

def verify_xbe(xbe: bytes) -> None:
    read = mapped_reader(xbe)
    for (start, end), expected in BODY_HASHES.items():
        if hashlib.sha256(read(start, end-start)).hexdigest() != expected:
            raise ValueError(f"original body hash mismatch at {start:#x}")
    for va, opcode in SIGNATURES.items():
        if read(va, len(bytes.fromhex(opcode))) != bytes.fromhex(opcode):
            raise ValueError(f"original instruction mismatch at {va:#x}")
    displacement = int.from_bytes(read(0x000D2A4E, 4), "little", signed=True)
    if 0x000D2A52 + displacement != 0x002463A0:
        raise ValueError("direct-call destination mismatch")
    # Three saved registers and two scratch pushes: current ESP = entry ESP-20.
    if -3*4 - 2*4 + read(0x000D2A4A, 1)[0] != 4:
        raise ValueError("incoming guest slot calculation mismatch")

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="private original retail XBE; never commit")
    args = ap.parse_args()
    root = args.root.resolve()
    path = root/"src/main_unclassified/band_000d/0x000d29b0.c"
    source = path.read_text(encoding="utf-8")
    verify_source(source)
    for bad in (
        source.replace("&guest_out_word,", "guest_out_word,", 1),
        source.replace("undefined4 guest_out_word", "undefined4 guest_other_word", 1),
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
    flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=3",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype"]
    subprocess.run([clang, *flags, "-I", str(root/"include"), str(path)], check=True)
    if args.xbe:
        xbe = args.xbe.read_bytes()
        verify_xbe(xbe)
        corrupted = bytearray(xbe)
        corrupted[0x1000] ^= 1
        try:
            verify_xbe(bytes(corrupted))
        except ValueError:
            pass
        else:
            raise SystemExit("XBE mutation unexpectedly passed")
        print("0x000d29b0: 13 x86 signatures, 2 body hashes, call edge and C11 PASS")
    else:
        print("0x000d29b0: source contract and focused C11 PASS (no XBE in CI)")

if __name__ == "__main__":
    main()
