#!/usr/bin/env python3
"""Check 0x0011C810 second virtual -> raw components -> output boundaries.

Does not claim original vector lane mapping, virtual method resolution, Xbox
x87/SSE/SEH parity or the whole original 0x0011C810 C implementation.
"""
from __future__ import annotations

import argparse
from pathlib import Path
import shutil
import subprocess
import sys

MATH_LIBRARIES = [] if sys.platform == "win32" else ["-lm"]
import tempfile

BODIES = {
    "src/main_unclassified/band_0011/0x0011c810.c":
        "A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255",
    "src/main_unclassified/band_0001/0x0001d0c0.c":
        "799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4",
    "src/main_unclassified/band_0012/0x0012b2a0.c":
        "C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E",
}


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--clang", default=shutil.which("clang"))
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--sanitize", action="store_true",
                    help="also run local ASan+UBSan O1; optional in CI")
    args = ap.parse_args()
    if not args.clang:
        ap.error("Clang required")
    root = args.root.resolve()
    for name, digest in BODIES.items():
        original = (root / name).read_text(encoding="utf8")
        if "Input x86 body SHA-256: " + digest not in original:
            ap.error("Missing original code provenance: " + name)
        if "ABI_UNVERIFIED" not in original:
            ap.error("Draft ABI status unexpectedly changed: " + name)
    caller = (root / "src/main_unclassified/band_0011/0x0011c810.c").read_text()
    if "FUN_0001d0c0();" not in caller or "FUN_0012b2a0();" not in caller:
        ap.error("Caller has changed; revalidate the standalone projection")
    if args.xbe:
        subprocess.run([sys.executable,
                        str(root / "scripts/verify_0011c810_matrix_frame.py"),
                        "--root", str(root), "--xbe", str(args.xbe),
                        "--clang", args.clang], check=True)
    flags = ["-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic",
             "-I", str(root / "include")]
    fixture = str(root / "tests/test_0011c810_second_vector_syntax.c")
    for target in ("i686-pc-windows-msvc", "x86_64-pc-windows-msvc"):
        subprocess.run([args.clang, *flags, "-target", target,
                        "-fsyntax-only", fixture], check=True)
    sources = [str(root / p) for p in (
        "tests/test_0011c810_second_vector.c",
        "tests/support/bf_0011c810_guest_producer_bridge.c",
        "src/main_unclassified/band_0001/0x0001d0c0.c",
        "src/main_unclassified/band_0012/0x0012b2a0.c",
    )]
    # These warnings predate the bridge in the two untouched Ghidra C drafts.
    known_original_draft_warnings = ["-Wno-parentheses", "-Wno-literal-range",
                                     "-Wno-strict-prototypes"]
    with tempfile.TemporaryDirectory(prefix="bf_0011c810_second_") as tmp:
        for opt in ("-O0", "-O2"):
            target = str(Path(tmp) / ("test_" + opt[1:]))
            subprocess.run([args.clang, *flags, *known_original_draft_warnings,
                            opt, *sources, *MATH_LIBRARIES, "-o", target], check=True)
            subprocess.run([target], check=True)
        if args.sanitize:
            target = str(Path(tmp) / "asan_ubsan")
            subprocess.run([args.clang, *flags, *known_original_draft_warnings,
                            "-O1", "-g", "-fsanitize=address,undefined",
                            "-fno-omit-frame-pointer", *sources, *MATH_LIBRARIES,
                            "-o", target], check=True)
            subprocess.run([target], check=True)
    print("PASS real host C producers via second virtual/guest component/output boundaries")
    print("NOTE original vector mapping, virtual +0x30 method and x87 ABI NOT verified")
    if not args.xbe:
        print("NOTE original XBE bytes not reauthenticated in this run")


if __name__ == "__main__":
    main()
