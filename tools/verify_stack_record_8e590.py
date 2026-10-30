#!/usr/bin/env python3
"""Check 0x0008e590's XBE-backed ten-DWORD stack record.

CI verifies source/Clang without the copyrighted executable. --xbe checks
the user-owned retail XBE and selected instruction bytes. Neither establishes
the implicit EAX callee ABI, whole-body provenance hash, or native behavior.
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

ENTRY = 0x0008e590
LABEL = "018E41B1F52F47D53FD6456ED2DDDB1D4AD4AB7681BE791595600E9F056E1CB6"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = {
    0x0008e590: "83ec285355568b7424388b5e30",
    0x0008e5d0: "8d44240c508d4628",
    0x0008e5d8: ("897c2410896c2414896c2418896c241c896c2420"
                 "896c2424c744242800000000896c242c896c2434896c2430"),
    0x0008e604: "e8d7050000",
    0x0008e60f: "5e5d5b83c428c20400",
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def check_source(source):
    if (f"Entry: 0x{ENTRY:08x}," not in source or
            f"Input x86 body SHA-256: {LABEL}" not in source or
            "ABI_UNVERIFIED" not in source):
        raise ValueError("Original provenance or ABI caveat changed")
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    if not re.search(r"\bundefined4\s+local_28\s*\[\s*10\s*\]\s*=\s*"
                     r"\{\s*\(undefined4\)\s*unaff_EDI\s*\}\s*;", body):
        raise ValueError("Ten-DWORD record / initial EDI word changed")
    if body.count("FUN_0008ebe0(local_28);") != 1:
        raise ValueError("Record must be passed from its first word")
    if re.search(r"\bstack0x[0-9a-fA-F]+\b", body):
        raise ValueError("Unresolved Ghidra stack reference")


def check_xbe(path):
    data = path.read_bytes()
    if data[:4] != b"XBEH" or hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("Original XBE identity mismatch")
    base, = struct.unpack_from("<I", data, 0x104)
    count, table_va = struct.unpack_from("<II", data, 0x11c)
    table = table_va - base
    if not 0 < count < 128 or table < 0 or table + count * 56 > len(data):
        raise ValueError("Invalid XBE section table")
    sections = [struct.unpack_from("<IIIII", data, table + i * 56)
                for i in range(count)]

    def read(va, length):
        for _, start, vsize, off, rsize in sections:
            if start <= va and va + length <= start + min(vsize, rsize):
                offset = off + va - start
                if offset + length > len(data):
                    raise ValueError("Section exceeds XBE file")
                return data[offset:offset + length]
        raise ValueError(f"Unmapped XBE address: {va:#x}")

    for va, encoded in SITES.items():
        if read(va, len(encoded) // 2) != bytes.fromhex(encoded):
            raise ValueError(f"Original instruction mismatch at {va:#x}")
    displacement, = struct.unpack("<i", read(0x0008e605, 4))
    if 0x0008e609 + displacement != 0x0008ebe0:
        raise ValueError("Original near-call target changed")


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    root = args.root.resolve()
    source_path = root / "src/main_unclassified/band_0008/0x0008e590.c"
    source = source_path.read_text(encoding="utf-8")
    check_source(source)
    for old, new in [("local_28[10]", "local_28[9]"),
                     ("FUN_0008ebe0(local_28)", "FUN_0008ebe0(local_28 + 1)")]:
        altered = source.replace(old, new)
        if altered == source:
            raise ValueError("Negative test failed to mutate source")
        try:
            check_source(altered)
        except ValueError:
            pass
        else:
            raise ValueError("Negative regression was accepted")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    result = subprocess.run([clang, *FLAGS, "-I", str(root / "include"),
                             str(source_path)], capture_output=True, text=True, timeout=60)
    if result.returncode:
        raise ValueError(f"Clang C11 failure:\n{result.stderr[:2000]}")
    if args.xbe:
        check_xbe(args.xbe)
    print("PASS: 0x0008e590 source identity, ten-DWORD record, negative "
          "tests, Clang C11; original XBE " +
          ("verified" if args.xbe else "not supplied") +
          ". Implicit EAX ABI and runtime equivalence unverified.")


if __name__ == "__main__":
    main()
