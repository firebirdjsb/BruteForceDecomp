#!/usr/bin/env python3
"""Check the source-only D3D 0x003747D7 -> 0x00379965 declaration.

This proves C++17 name/type checking only, not original Xbox ABI or behavior.
The retail XBE is not available to this public regression test.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import subprocess
import sys
import tempfile

CALLER = "003747d7"
CALLEE = "00379965"
PREIMAGE_SHA256 = "2a9f5174a91ca8d409a7c0a94a7fed17b7d167ec2800048e1b30a6adb580f548"
ORIGINAL_BODY_SHA256 = "D7C58CE589388D0D1426F88CA054BF549BF7D1C50ECFC6ACAC5916B43AC889E0"
CALLEE_BODY_SHA256 = "9E6D06EC5A4530B142C61D6584E3F88F7C76DF5592C257C99092828C6CBC5ACC"
DECLARATION = (
    "/* C++17 source-matched declaration only; Xbox ABI_UNVERIFIED.\n"
    " * Original direct CALL, register and RET contracts require retail XBE verification. */\n"
    "extern void FUN_00379965(undefined4 param_1, uint param_2);\n"
)


def check(root: Path, clang: str) -> None:
    directory = root / "src" / "platform" / "graphics_d3d"
    caller = directory / f"0x{CALLER}.cpp"
    callee = directory / f"0x{CALLEE}.cpp"
    source = caller.read_text(encoding="utf-8")
    callee_source = callee.read_text(encoding="utf-8")
    assert source.count(DECLARATION) == 1, "declaration missing or duplicated"
    assert f"Entry: 0x{CALLER}" in source and "ABI_UNVERIFIED" in source
    assert f"Input x86 body SHA-256: {ORIGINAL_BODY_SHA256}" in source
    assert f"Entry: 0x{CALLEE}" in callee_source
    assert f"Input x86 body SHA-256: {CALLEE_BODY_SHA256}" in callee_source
    assert re.search(r"\bvoid\s+FUN_00379965\s*\(undefined4\s+param_1\s*,\s*uint\s+param_2\s*\)", callee_source), "callee draft signature changed"
    original = source.replace(DECLARATION, "", 1)
    assert hashlib.sha256(original.encode("utf-8")).hexdigest() == PREIMAGE_SHA256, "caller preimage/body drift"
    assert source.count("FUN_00379965(*in_EAX,*(undefined2 *)((unsigned char *)in_EAX + 6));") == 1, "original call expression changed"
    include = root / "include"
    assert (include / "bf_ghidra_types.h").is_file(), "missing canonical header"
    for opt in ("-O0", "-O2"):
        run = subprocess.run([clang, "-std=c++17", "-fsyntax-only", opt, "-I", str(include), str(caller)], capture_output=True, text=True)
        assert run.returncode == 0, f"C++17 {opt} failed: {run.stderr}"
    with tempfile.TemporaryDirectory() as tmp:
        negative = Path(tmp) / f"0x{CALLER}.cpp"
        negative.write_text(original, encoding="utf-8")
        run = subprocess.run([clang, "-std=c++17", "-fsyntax-only", "-I", str(include), str(negative)], capture_output=True, text=True)
        assert run.returncode != 0 and "undeclared identifier 'FUN_00379965'" in run.stderr, "negative control did not reject missing declaration"
    print("PASS 0x003747d7: exact caller/callee source, C++17 O0/O2, declaration negative control")
    print("NOTE: Xbox ABI, register inputs, CALL/RET and runtime behavior remain UNVERIFIED")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--clang", default="clang++")
    args = parser.parse_args()
    try:
        check(args.root.resolve(), args.clang)
    except (AssertionError, OSError) as exc:
        print(f"FAIL: {exc}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
