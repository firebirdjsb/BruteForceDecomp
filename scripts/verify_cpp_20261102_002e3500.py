#!/usr/bin/env python3
"""Exact-source C++17 preflight for 0x002E3500; NOT Xbox ABI verification."""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import re
import subprocess
import sys
import tempfile

CALLER_SHA = "7dd822c1d797ce48729bb3ef67644c2d72f212c063cbde14fb0039915cc7d477"
CALLEE_SHA = "048b344e441c6c56d1e72f71a75a259ec3054bce55f3c0c218de71cba0139e1f"
DECL = ("/* Source-matched C++17 declaration only; Xbox ABI_UNVERIFIED. */\n"
        "extern uint FUN_002e3490(undefined4 param_1,undefined4 param_2);\n")

def verify(root: Path, clang: str) -> None:
    base = root / "src/main_unclassified/band_002e"
    caller = base / "0x002e3500.cpp"
    callee = base / "0x002e3490.cpp"
    source = caller.read_text(encoding="utf-8")
    target = callee.read_text(encoding="utf-8")
    digest = lambda text: hashlib.sha256(text.encode("utf-8")).hexdigest()
    assert digest(target) == CALLEE_SHA and re.search(
        r"\buint\s+FUN_002e3490\s*\(\s*undefined4\s+param_1\s*,\s*undefined4\s+param_2\s*\)", target)
    assert "Entry: 0x002e3490" in target and "ABI_UNVERIFIED" in target
    assert source.count(DECL) == 1 and source.count("FUN_002e3490(") == 4
    original = source.replace(DECL, "", 1)
    assert digest(original) == CALLER_SHA and "Entry: 0x002e3500" in source
    assert "Input x86 body SHA-256: 9AF804EF142109FF00D558BED59856A7EA201D9138AA4C369724918E242DC343" in source
    include = root / "include"
    for opt in ("-O0", "-O2"):
        run = subprocess.run([clang, "-std=c++17", "-fsyntax-only", "-ferror-limit=0",
                              opt, "-I", str(include), str(caller)], capture_output=True, text=True)
        assert run.returncode == 0, f"{opt}: {run.stderr}"
    with tempfile.TemporaryDirectory() as temp:
        old = Path(temp) / caller.name
        old.write_text(original, encoding="utf-8")
        run = subprocess.run([clang, "-std=c++17", "-fsyntax-only", "-I", str(include), str(old)],
                             capture_output=True, text=True)
        assert run.returncode != 0 and "undeclared identifier 'FUN_002e3490'" in run.stderr
    print("PASS: exact 0x002E3500 preimage, source-matched callee, Clang++17 O0/O2 and negative control")
    print("Xbox CALL/ECX/stack/RET, native linkage and game behavior remain ABI_UNVERIFIED")

def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--clang", default="clang++")
    args = parser.parse_args()
    try:
        verify(args.root.resolve(), args.clang)
    except (AssertionError, OSError) as exc:
        print(f"FAIL: {exc}", file=sys.stderr)
        return 1
    return 0

if __name__ == "__main__":
    sys.exit(main())
