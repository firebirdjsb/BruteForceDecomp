#!/usr/bin/env python3
"""Focused source/Clang check and optional user-owned XBE instruction evidence.

This does NOT prove the callee ABI, CFG, body hash, or native runtime behavior.
CI runs without the copyrighted XBE. Run locally with --xbe to check bytes.
"""

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

ENTRY = 0x0004F2E0
XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_LABEL = "D515056596C05847C17270AB7489EDAE7586712D37B293773843C076C941F735"
SOURCE = Path("src/main_unclassified/band_0004/0x0004f2e0.c")
EXPECTED = (
    "undefined4 local_38;",
    "FUN_001a23e0(&local_3c)",
    "FUN_0004fb70(&local_38)",
)
# Address, exact original instruction bytes. The prologue leaves ESP at
# entry ESP-0x50. LEA [ESP+0x14] selects -0x3c; LEA [ESP+0x18] selects -0x38.
INSTRUCTIONS = {
    0x0004F2E0: "83ec44535657",
    0x0004F434: "8d44241450e8a22f1500",
    0x0004F43E: "8b742418",
    0x0004F4A9: "8d4c241851e8bd060000",
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")

def source_check(root):
    source = (root / SOURCE).read_text(encoding="utf-8")
    assert "Entry: 0x0004f2e0," in source
    assert "Input x86 body SHA-256: " + BODY_LABEL in source
    assert "ABI_UNVERIFIED" in source
    stripped = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for item in EXPECTED:
        assert item in stripped, "missing source invariant: " + item
    for old in ("stack0xffffffb4", "stack0xffffffb8"):
        assert old not in stripped, "unresolved synthetic symbol: " + old
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("clang required for focused source check")
    result = subprocess.run([clang, *FLAGS, "-I", str(root / "include"),
                             str(root / SOURCE)], text=True, capture_output=True)
    if result.returncode:
        raise RuntimeError("focused Clang C11 failed:\n" + result.stderr)
    print("PASS: original source identity, distinct local slots, focused Clang C11")
    print("LIMIT: Xbox ABI and cross-function behavior remain unverified")

def xbe_check(path):
    raw = path.read_bytes()
    if hashlib.sha256(raw).hexdigest().upper() != XBE_SHA or raw[:4] != b"XBEH":
        raise ValueError("Original user-owned XBE SHA-256 mismatch")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11c)
    table = table_va - base
    if not 1 <= count <= 256 or table < 0 or table + 56*count > len(raw):
        raise ValueError("Invalid XBE section table")
    sections = [struct.unpack_from("<6I", raw, table + 56*i) for i in range(count)]
    for address, expected_hex in INSTRUCTIONS.items():
        expected = bytes.fromhex(expected_hex)
        for _flags, va, vsize, off, rsize, _name in sections:
            delta = address - va
            if 0 <= delta and delta + len(expected) <= min(vsize, rsize):
                actual = raw[off+delta:off+delta+len(expected)]
                if actual != expected:
                    raise ValueError(f"x86 instruction mismatch at 0x{address:08X}")
                break
        else:
            raise ValueError(f"x86 address not file-backed: 0x{address:08X}")
    print("PASS: original XBE identity and four selected instruction spans")
    print("LIMIT: selected instructions do not establish full body-hash equivalence")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, help="Repository root for source and Clang")
    parser.add_argument("--xbe", type=Path, help="Local user-owned original Xbox XBE")
    args = parser.parse_args()
    if args.root is None and args.xbe is None:
        parser.error("Supply --root and/or --xbe")
    if args.root is not None:
        source_check(args.root.resolve())
    if args.xbe is not None:
        xbe_check(args.xbe)
