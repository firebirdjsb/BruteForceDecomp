#!/usr/bin/env python3
"""Validate connected 0x0011C810 host projection and real producer source C.

This is not native Xbox register/stack ABI, x87 differential parity, or an
original indirect +0x30 target resolution. The optional private XBE is checked
against existing original body SHA-256 observations before running tests.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile
import sys

ROOT = Path(__file__).resolve().parents[1]
SOURCES = [
    "src/main_unclassified/band_0001/0x0001d0c0.c",
    "src/main_unclassified/band_0012/0x0012b2a0.c",
    "src/abi/bf_0011c810_guest_producer_bridge.c",
]
BODY_IDS = {
    "0x0001d0c0.c": "799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4",
    "0x0012b2a0.c": "C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E",
}


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--xbe", type=Path, default=None)
    ap.add_argument("--clang", default=shutil.which("clang"))
    args = ap.parse_args()
    root = args.root.resolve()
    if not args.clang:
        ap.error("clang required")
    if args.xbe:
        # Import the already-established private original-XBE/section digest
        # checking implementation; never place original bytes in public Git.
        from verify_0011c810_matrix_frame import BODIES, XBE_SHA, guest
        raw = args.xbe.read_bytes()
        if hashlib.sha256(raw).hexdigest() != XBE_SHA:
            ap.error("Original XBE SHA mismatch")
        for addr, (size, digest) in BODIES.items():
            if hashlib.sha256(guest(raw, addr, size)).hexdigest() != digest:
                ap.error(f"Original body digest mismatch 0x{addr:08x}")
        print("PASS private original XBE, all 3 body digests")
    else:
        print("NOTE private original XBE not available; original bytes NOT reauthenticated")
    for src in SOURCES[:2]:
        text = (root / src).read_text(encoding="utf8")
        assert f"Input x86 body SHA-256: {BODY_IDS[Path(src).name]}" in text
        assert "ABI_UNVERIFIED" in text
        assert "#include \"bf_0011c810_register_calls.h\"" in text
        assert "float *in_EAX;" not in text
        assert "float *in_ECX;" not in text
    header = (root / "include/bf_0011c810_register_calls.h").read_text()
    assert "void FUN_0001d0c0(const float *" in header
    assert "void FUN_0012b2a0(float *" in header
    flags = ["-std=c11", "-I", str(root / "include")]
    strict = ["-Wall", "-Wextra", "-Werror", "-pedantic"]
    syntax = root / "tests/test_0011c810_register_calls_syntax.c"
    for target in ("i686-pc-windows-msvc", "x86_64-pc-windows-msvc"):
        subprocess.run([args.clang, *flags, *strict, "-target", target,
                        "-fsyntax-only", str(syntax)], check=True)
    # Keep the existing original source's floating-constant comparison and
    # implicit grouping unchanged, without asserting these are x87-parity.
    prior_warnings = ["-Wno-parentheses", "-Wno-literal-range"]
    for src in SOURCES:
        subprocess.run([args.clang, *flags, "-fsyntax-only", str(root / src)], check=True)
    with tempfile.TemporaryDirectory(prefix="bf_0011c810_live_src_") as tmp:
        for opt in ("-O0", "-O2"):
            exe = Path(tmp) / ("link_" + opt[2:])
            subprocess.run([args.clang, *flags, *strict, *prior_warnings,
                            opt, "-msse", *(str(root / x) for x in SOURCES),
                            str(root / "tests/test_0011c810_guest_producer_bridge.c"),
                            "-lm", "-o", str(exe)], check=True)
            subprocess.run([str(exe)], check=True)
    print("PASS two real source functions linked into guest-address transfer at O0/O2")
    print("NOTE the original 0x0011C810 caller, virtual +0x30 return, x87 and MXCSR are UNVERIFIED")


if __name__ == "__main__":
    main()
