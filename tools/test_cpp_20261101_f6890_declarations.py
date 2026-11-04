#!/usr/bin/env python3
"""Strict source-identity/C++17 regression; NOT Xbox ABI or behavior verification."""
from __future__ import annotations
import hashlib
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src/main_unclassified/band_000f/0x000f6890.cpp"
ORIGINAL_SHA = "4b7ca35de28a78c96635f142e4d1f23e364e7d8123a985cb5761433ea74f7b62"
BODY_SHA = "1993716E6519BE146F9F99FDB6F84E67025563DAF222D7A9AA556F90A2A571E7"
DECLARATIONS = (
    "/* Source-matched C++17 declarations only; original implicit EAX/EDX/ESI\n"
    " * register contracts and indirect virtual dispatch remain ABI_UNVERIFIED. */\n"
    "extern void FUN_0010c7d0(void);\n"
    "extern undefined4 FUN_000f6850(void);\n"
)

def main() -> int:
    source = SOURCE.read_text(encoding="utf-8")
    assert source.count(DECLARATIONS) == 1, "missing or duplicated declarations"
    assert "Entry: 0x000f6890" in source
    assert f"Input x86 body SHA-256: {BODY_SHA}" in source
    assert hashlib.sha256(source.replace(DECLARATIONS, "", 1).encode()).hexdigest() == ORIGINAL_SHA, (
        "original draft changed beyond declaration-only insertion"
    )
    for opt in ("0", "2"):
        cmd = ["clang++", "-std=c++17", "-fsyntax-only", f"-O{opt}",
               "-I", str(ROOT / "include"), str(SOURCE)]
        result = subprocess.run(cmd, text=True, capture_output=True)
        assert result.returncode == 0, f"Clang++17 O{opt}: {result.stderr[:1800]}"
    for symbol in ("FUN_0010c7d0", "FUN_000f6850"):
        declaration = next(line for line in DECLARATIONS.splitlines(True)
                           if line.startswith("extern ") and symbol in line)
        negative = source.replace(declaration, "", 1)
        cmd = ["clang++", "-std=c++17", "-fsyntax-only", "-x", "c++", "-",
               "-I", str(ROOT / "include")]
        result = subprocess.run(cmd, input=negative, text=True, capture_output=True)
        assert result.returncode != 0 and symbol in result.stderr, (
            f"missing-declaration negative control failed: {symbol}"
        )
    print("PASS: original source digest restored, O0/O2 strict C++17, two negative controls")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
