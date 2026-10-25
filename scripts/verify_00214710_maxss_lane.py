#!/usr/bin/env python3
"""Check the 0x00214710 scalar SSE C11 repair without asserting native equivalence.

CI runs source-only. With --xbe, require the user's exact original Xbox image
and verify the MOVSS/MAXSS/MOVSS instruction bytes. This repairs SSE MAXSS
operand selection, not the full guest ABI, surrounding x87, or native linking.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "1D852145832029395D6CC00854DC8323360F994254DC92D8760D29C4871ED690"
ENTRY = "0x00214710"
OPCODES = {
    0x00214923: "f30f10442458",       # MOVSS XMM0, [ESP+0x58]
    0x00214929: "f30f5f442414",       # MAXSS XMM0, [ESP+0x14]
    0x0021492F: "f30f11842480000000", # MOVSS [ESP+0x80], XMM0
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=10",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def check_source_text(source: str) -> None:
    if f"Entry: {ENTRY}," not in source or f"Input x86 body SHA-256: {BODY_SHA256}" not in source:
        raise ValueError("original function identity/body digest annotation changed")
    if "ABI_UNVERIFIED" not in source or "#include <xmmintrin.h>" not in source:
        raise ValueError("original uncertainty or SSE header missing")
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    if code.count("auVar11 = _mm_max_ss(_mm_set_ss(fStack_a4), _mm_set_ss(fStack_a8));") != 1:
        raise ValueError("original MOVSS/MAXSS operand order changed")
    if code.count("fStack_84 = _mm_cvtss_f32(auVar11);") != 1:
        raise ValueError("original MOVSS scalar output changed")
    if "ZEXT416((uint)fStack_84)" in code or "if (fStack_a4 <= fStack_a8)" in code:
        raise ValueError("decompiler's incorrect numeric cast or scalar NaN selection returned")


def check_xbe(path: Path) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256 or data[:4] != b"XBEH":
        raise ValueError("XBE differs from original SHA-256")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, section_va = struct.unpack_from("<II", data, 0x11C)
    if not 0 < count < 128:
        raise ValueError("invalid XBE section count")
    for va, hex_bytes in OPCODES.items():
        expected = bytes.fromhex(hex_bytes)
        found = None
        for i in range(count):
            hdr = section_va - base + i * 0x38
            if not 0 <= hdr <= len(data) - 20:
                raise ValueError("invalid XBE section header")
            _, mem, vsize, raw, rsize = struct.unpack_from("<IIIII", data, hdr)
            if mem <= va and va + len(expected) <= mem + min(vsize, rsize):
                off = raw + va - mem
                found = data[off:off + len(expected)]
                break
        if found != expected:
            raise ValueError(f"original x86 SSE instruction mismatch at {va:#010x}")
    print("PASS: original XBE SHA-256 and 3 exact SSE instruction encodings")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    root = args.root.resolve()
    source = root / "src/main_unclassified/band_0021/0x00214710.c"
    source_text = source.read_text(encoding="utf-8")
    check_source_text(source_text)
    # Negative regression: the old scalar <= approximation must be rejected.
    try:
        check_source_text(source_text.replace(
            "auVar11 = _mm_max_ss(_mm_set_ss(fStack_a4), _mm_set_ss(fStack_a8));",
            "auVar11 = _mm_set_ss(fStack_a4 <= fStack_a8 ? fStack_a8 : fStack_a4);",
        ))
    except ValueError:
        pass
    else:
        raise ValueError("negative regression failed to detect old conversion")
    clang = shutil.which("clang")
    if clang is None:
        raise ValueError("Clang required for focused C11 check")
    result = subprocess.run(
        [clang, *FLAGS, "-I", str(root / "include"), str(source)],
        capture_output=True, text=True, timeout=60,
    )
    if result.returncode:
        raise ValueError("isolated Clang C11 failure:\n" + result.stderr[-3000:])
    if args.xbe:
        check_xbe(args.xbe)
    print("PASS: 0x00214710 provenance, exact MAXSS operand order, negative regression, isolated Clang C11")
    print("NOTE: Xbox calling convention, guest memory, surrounding x87 behavior, and native linking unverified")


if __name__ == "__main__":
    main()
