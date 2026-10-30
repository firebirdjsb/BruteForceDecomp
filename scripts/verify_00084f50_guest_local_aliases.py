#!/usr/bin/env python3
"""Verify 0x00084f50's two adjacent original Xbox guest-stack arguments.

Source-only checks run in CI; --xbe checks the user-owned XBE locally.
Passing C11 syntax does not prove an indirect-call ABI or runtime behavior.
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

ENTRY = 0x00084F50
BODY_SHA = "132E5713F7D77DE906CB29BE5E0BCF56DB783CD9AE9603019EFD096F8F63B147"
XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
SOURCE = "src/main_unclassified/band_0008/0x00084f50.c"
SITES = {
    0x00084F50: "83ec1853",  # sub esp,24; push ebx
    0x00084F60: "5657",      # push esi; push edi
    0x00085013: "8d4c2410",  # lea ecx,[esp+0x10]
    0x0008501D: "51",        # push ecx before first call
    0x00085020: "c744241c00000000",
    0x00085028: "c744242000000000",
    0x00085030: "c744242400000000",
    0x00085038: "c74424184af945f7",
    0x00085047: "8d44240c",  # lea eax,[esp+0x0c]
    0x0008504D: "50",        # push eax before both branches
    0x00085050: "c74424101d3ea7e5",
    0x00085065: "c74424102f0428f2",
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def check_source(source):
    if (f"Entry: 0x{ENTRY:08x}," not in source or
            f"Input x86 body SHA-256: {BODY_SHA}" not in source or
            "ABI_UNVERIFIED" not in source):
        raise ValueError("Original function identity or ABI warning changed")
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    if not re.search(r"\bundefined4\s+guest_local_words\s*\[\s*6\s*\]\s*;", body):
        raise ValueError("Six original local DWORDs not represented")
    if body.count("(*piVar1 + 0x20))(&guest_local_words[1]);") != 1:
        raise ValueError("First call must use second local DWORD")
    if body.count("(*piVar1 + 0x8c))(&guest_local_words[0]);") != 2:
        raise ValueError("Both branches must use first local DWORD")
    if re.search(r"\bstack0x[0-9a-fA-F]+\b", body):
        raise ValueError("Unresolved guest stack label")


def read_guest(data, va, size):
    if data[:4] != b"XBEH":
        raise ValueError("Not an XBE")
    base, = struct.unpack_from("<I", data, 0x104)
    count, section_va = struct.unpack_from("<II", data, 0x11c)
    table = section_va - base
    if not 0 < count < 128 or table < 0 or table + count * 56 > len(data):
        raise ValueError("Invalid XBE section table")
    for i in range(count):
        _, start, vsize, offset, rsize = struct.unpack_from("<IIIII", data, table + i * 56)
        if start <= va and va + size <= start + min(vsize, rsize):
            offset += va - start
            if offset + size > len(data):
                raise ValueError("XBE section exceeds file")
            return data[offset:offset + size]
    raise ValueError(f"Unmapped XBE address {va:#x}")


def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError("Original XBE identity mismatch")
    if hashlib.sha256(read_guest(data, ENTRY, 0x13c)).hexdigest().upper() != BODY_SHA:
        raise ValueError("Original function body mismatch")
    for address, encoded in SITES.items():
        if read_guest(data, address, len(encoded) // 2) != bytes.fromhex(encoded):
            raise ValueError(f"Original instruction mismatch at {address:#x}")


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    root = args.root.resolve()
    source_path = root / SOURCE
    source = source_path.read_text(encoding="utf-8")
    check_source(source)
    for old, new in (
        ("guest_local_words[6]", "guest_local_words[5]"),
        ("(*piVar1 + 0x20))(&guest_local_words[1]);",
         "(*piVar1 + 0x20))(&guest_local_words[0]);"),
        ("(*piVar1 + 0x8c))(&guest_local_words[0]);",
         "(*piVar1 + 0x8c))();"),
    ):
        changed = source.replace(old, new)
        if changed == source:
            raise ValueError("Negative test did not modify source")
        try:
            check_source(changed)
        except ValueError:
            pass
        else:
            raise ValueError("Incorrect guest stack alias passed negative test")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    result = subprocess.run((clang, *FLAGS, "-I", str(root / "include"),
                             str(source_path)), capture_output=True, text=True, timeout=60)
    if result.returncode:
        raise ValueError(f"Clang C11 failure:\n{result.stderr[:2000]}")
    if args.xbe:
        check_xbe(args.xbe)
    print("PASS: 0x00084f50 adjacent guest stack aliases, both call paths, "
          "negative tests and Clang C11; XBE " +
          ("verified" if args.xbe else "not supplied") +
          ". Stack byte initialization and indirect-call ABI unverified.")


if __name__ == "__main__":
    main()
