#!/usr/bin/env python3
"""Verify guest ESI local DWORD passed by address; host ABI remains unverified."""

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
import re
import shutil
import struct
import subprocess

SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY = "328B99EEE133AF33A6338B30DA31C9D74FEF7AFE40B504981E62519BC2C03CED"
OPCODES = ((0xB2660, "51"), (0xB2664, "57"), (0xB2684, "8d442404"),
           (0xB2688, "50"), (0xB2689, "89742408"),
           (0xE0867, "8b6c240c"), (0xE087B, "3b4500"))
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=4",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")

def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != SHA:
        raise ValueError("original XBE identity mismatch")
    def read(va, n):
        return data[va - 0x10000:va - 0x10000 + n]
    if hashlib.sha256(read(0xB2660, 0x41)).hexdigest().upper() != BODY:
        raise ValueError("original function body hash mismatch")
    for va, hexdump in OPCODES:
        expected = bytes.fromhex(hexdump)
        if read(va, len(expected)) != expected:
            raise ValueError(f"opcode mismatch at {va:#x}")
    call = read(0xB268D, 5)
    if call[0] != 0xE8 or 0xB2692 + struct.unpack("<i", call[1:])[0] != 0xE0860:
        raise ValueError("direct call destination mismatch")
    print("PASS: original body, 7 instruction signatures and callee target")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    path = args.root / "src/main_unclassified/band_000b/0x000b2660.c"
    source = path.read_text()
    if f"Input x86 body SHA-256: {BODY}" not in source or "Entry: 0x000b2660," not in source:
        raise ValueError("source identity/provenance mismatch")
    if "ABI_UNVERIFIED" not in source:
        raise ValueError("ABI uncertainty was dropped")
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for token in ("undefined4 guest_esi_word = (undefined4)(uintptr_t)unaff_ESI;",
                  "FUN_000e0860((int *)&guest_esi_word);"):
        if token not in code:
            raise ValueError("source guest word contract regressed: " + token)
    if "&stack0xfffffffc" in code:
        raise ValueError("unresolved stack address reintroduced")
    clang = shutil.which("clang")
    if not clang:
        parser.error("clang required")
    result = subprocess.run((clang, *FLAGS, "-I", str(args.root / "include"), str(path)),
                            capture_output=True, text=True, timeout=45)
    if result.returncode:
        raise ValueError("focused Clang C11 failed:\n" + result.stderr[-1500:])
    print("PASS: source invariants and isolated C11 syntax")
    if args.xbe:
        check_xbe(args.xbe.read_bytes())
    else:
        print("Source-only CI: no XBE machine-code check")
    print("Guest32 pointer translation, implicit registers, and runtime equivalence unverified")

if __name__ == "__main__":
    main()
