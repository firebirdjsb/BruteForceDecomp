#!/usr/bin/env python3
"""Syntax-only regression for two x86 SEH guest-stack draft repairs.

This test deliberately needs NO Xbox XBE and does not validate native ABI,
guest pointer semantics, SEH behavior, or function equivalence.
"""
from __future__ import annotations

import re
import shutil
import subprocess
from pathlib import Path

from sweep_c11 import FLAGS

ROOT = Path(__file__).resolve().parents[1]
FUNCTIONS = {
    "0x0001c630": (
        "E184BE2C9E9EFB13C45DDB09CC2DF4046DBB43C4149269FAF390F473E548F64A",
        "stack0xffffff94",
    ),
    "0x0001c980": (
        "E710F94CC4E230DD1324C747FDD89B0B7A0C65F4B6DB7A12F2074D82EE1AF463",
        "stack0xffffff68",
    ),
}


def main() -> int:
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang is required")
    for entry, (body_digest, old_stack_symbol) in FUNCTIONS.items():
        path = ROOT / "src" / "main_unclassified" / "band_0001" / f"{entry}.c"
        source = path.read_text(encoding="utf-8")
        if f"Input x86 body SHA-256: {body_digest}" not in source:
            raise SystemExit(f"{entry}: original body digest annotation changed")
        if f"Entry: {entry}," not in source:
            raise SystemExit(f"{entry}: entry identity annotation changed")
        if "ABI_UNVERIFIED" not in source:
            raise SystemExit(f"{entry}: missing ABI uncertainty annotation")
        # Keep the synthetic name in an explanatory comment, not in C code.
        without_comments = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
        if re.search(r"\bstack0x[0-9a-fA-F]+\b", without_comments):
            raise SystemExit(f"{entry}: synthetic guest stack name remains in C")
        if old_stack_symbol not in source:
            raise SystemExit(f"{entry}: missing provenance explanation")
        result = subprocess.run(
            [clang, *FLAGS, "-I", str(ROOT / "include"), str(path)],
            capture_output=True, text=True, timeout=60, check=False,
        )
        if result.returncode:
            raise SystemExit(
                f"{entry}: Clang C11 syntax regression:\n{result.stderr[-4000:]}"
            )
        print(f"{entry}: PASS host Clang C11 syntax only; Xbox ABI unverified")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
