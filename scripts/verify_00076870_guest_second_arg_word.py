#!/usr/bin/env python3
"""Original-XBE and focused C11 regression for 0x00076870's guest output word.

Without --xbe, CI verifies source and Clang only. This does not validate
indirect-call ABI, host pointer representation, linking, or runtime behavior.
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
from pathlib import Path
import re
import shutil
import struct
import subprocess

ENTRY = 0x00076870
BODY_SIZE = 0x82
BODY_SHA256 = "622ac7ad2d276aa06bdeba754b08da89431ae718e6a2fa1a825c6937c5a6e189"
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = {
    0x00076877: "8d542400",              # LEA output pointer to saved local slot
    0x0007687D: "c744240800000000",      # Initialize first output slot
    0x0007688E: "8d54240c5250ff5120",  # LEA incoming argument word, pushes, indirect call
    0x00076897: "8b44240c3d87c67710",  # Load written word, compare first ID
    0x000768A2: "3dff6abded",          # Compare second ID
    0x000768EE: "59c20800",            # Original two-argument return
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def verify_source_text(source: str) -> None:
    if (f"Entry: 0x{ENTRY:08x}," not in source or
            f"Input x86 body SHA-256: {BODY_SHA256.upper()}" not in source or
            "ABI_UNVERIFIED" not in source):
        raise ValueError("0x00076870 provenance or uncertainty annotation changed")
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    expected = (
        "undefined4 guest_second_arg_word = (undefined4)(uintptr_t)param_2;",
        "(**(code **)(*param_2 + 0x20))(param_2,&guest_second_arg_word);",
        "if (guest_second_arg_word == UINT32_C(0x1077c687))",
        "if (guest_second_arg_word != UINT32_C(0xedbd6aff))",
    )
    if any(body.count(line) != 1 for line in expected):
        raise ValueError("0x00076870 guest DWORD output slot or comparison IDs changed")
    if re.search(r"\bstack0x[0-9a-fA-F]+\b", body):
        raise ValueError("0x00076870 unresolved synthetic stack symbol")


def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    if data[:4] != b"XBEH" or hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("wrong retail XBE header or SHA256")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if not 0 < count < 128:
        raise ValueError("invalid XBE section count")
    sections = []
    for i in range(count):
        offset = table - base + i * 0x38
        if offset < 0 or offset + 20 > len(data):
            raise ValueError("invalid XBE section table")
        _, va, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, offset)
        sections.append((va, min(virtual_size, raw_size), raw))

    def read(va: int, size: int) -> bytes:
        for start, length, raw in sections:
            if start <= va and va + size <= start + length:
                offset = raw + va - start
                if offset + size > len(data):
                    raise ValueError("XBE raw section outside file")
                return data[offset:offset + size]
        raise ValueError(f"unmapped XBE address {va:#010x}")

    if hashlib.sha256(read(ENTRY, BODY_SIZE)).hexdigest() != BODY_SHA256:
        raise ValueError("original 0x00076870 body hash mismatch")
    for va, encoded in SITES.items():
        expected = bytes.fromhex(encoded)
        if read(va, len(expected)) != expected:
            raise ValueError(f"original instruction mismatch at {va:#010x}")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    root = args.root.resolve()
    path = root / "src/main_unclassified/band_0007/0x00076870.c"
    source = path.read_text(encoding="utf-8")
    verify_source_text(source)
    # Negative regression: old Ghidra +4 identifier must be rejected.
    changed = source.replace("UINT32_C(0x1077c687)", "UINT32_C(0x1077c68b)")
    if changed == source:
        raise ValueError("negative test did not mutate the source")
    try:
        verify_source_text(changed)
    except ValueError:
        pass
    else:
        raise ValueError("negative regression accepted wrong identifier")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    check = subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(path)],
                           capture_output=True, text=True, timeout=60)
    if check.returncode:
        raise ValueError(f"0x00076870 Clang C11 failed: {check.stderr[:2000]}")
    if args.xbe:
        verify_xbe(args.xbe)
    print("PASS: 0x00076870 provenance, guest DWORD slot, exact IDs, negative "
          "regression and Clang C11; original XBE "
          f"{'verified' if args.xbe else 'not supplied'}. ABI unverified.")


if __name__ == "__main__":
    main()
