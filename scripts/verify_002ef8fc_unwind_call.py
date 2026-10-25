#!/usr/bin/env python3
"""Check 0x002EF8FC saved-EBP versus four pushed unwind-call arguments.

Source/Clang checks run in CI; --xbe verifies private original XBE bytes.
This does not validate the Xbox unwind API or a native host exception ABI.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

SOURCE = Path("src/main_unclassified/band_002e/0x002ef8fc.c")
BODY_HASH = "1F2312FFAC3C8C769BF909AE66EDCA1ADC1CE89656010FB2B10EC14C1DD123C2"
XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def verify_source(root: Path) -> None:
    content = (root / SOURCE).read_text(encoding="utf-8")
    if "Entry: 0x002ef8fc," not in content or f"Input x86 body SHA-256: {BODY_HASH}" not in content:
        raise ValueError("unwind function identity or original body hash changed")
    if "ABI_UNVERIFIED" not in content:
        raise ValueError("unwind ABI uncertainty annotation removed")
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", content, flags=re.S)
    if code.count("RtlUnwind(param_1,0x2ef914,0,0);") != 1:
        raise ValueError("original four x86 call arguments changed")
    if re.search(r"\bstack0x[0-9a-fA-F]+\b", code):
        raise ValueError("synthetic Ghidra stack argument remains")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("clang unavailable")
    result = subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(root / SOURCE)],
                            capture_output=True, text=True, timeout=60, check=False)
    if result.returncode:
        raise ValueError("isolated Clang C11 failed:\n" + result.stderr[-3000:])


def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_HASH or data[:4] != b"XBEH":
        raise ValueError("original XBE SHA-256/header mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if not 0 < count < 128:
        raise ValueError("invalid XBE section count")

    def read(va: int, size: int) -> bytes:
        for i in range(count):
            section = table - base + i * 0x38
            if section < 0 or section + 20 > len(data):
                raise ValueError("invalid XBE section header")
            _, start, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, section)
            if start <= va and va + size <= start + min(virtual_size, raw_size):
                offset = raw + va - start
                if offset + size > len(data):
                    raise ValueError("invalid XBE section raw extent")
                return data[offset:offset + size]
        raise ValueError(f"unmapped x86 address 0x{va:08x}")

    if hashlib.sha256(read(0x002EF8FC, 32)).hexdigest().upper() != BODY_HASH:
        raise ValueError("32-byte original x86 unwind body hash mismatch")
    observed = {
        0x002EF8FC: "55 8b ec",
        0x002EF8FF: "53 56 57",
        0x002EF902: "55",
        0x002EF903: "6a 00",
        0x002EF905: "6a 00",
        0x002EF907: "68 14 f9 2e 00",
        0x002EF90C: "ff 75 08",
        0x002EF90F: "e8 b2 e8 00 00",
        0x002EF914: "5d",
        0x002EF918: "8b e5 5d c3",
    }
    for va, encoded in observed.items():
        expected = bytes.fromhex(encoded)
        if read(va, len(expected)) != expected:
            raise ValueError(f"original x86 unwind instruction mismatch at 0x{va:08x}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    opts = parser.parse_args()
    verify_source(opts.root.resolve())
    if opts.xbe:
        verify_xbe(opts.xbe)
    print("PASS 0x002EF8FC: original four-argument call and focused Clang C11" +
          ("; original XBE body/opcodes verified" if opts.xbe else "; XBE not in CI") +
          "; Xbox unwind API and native exception behavior unverified")


if __name__ == "__main__":
    main()
