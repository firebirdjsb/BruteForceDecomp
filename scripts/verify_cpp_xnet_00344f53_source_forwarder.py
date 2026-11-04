#!/usr/bin/env python3
"""Source-only declaration regression gate for XNet 0x00344F53.

This verifies a conservative C++17 source declaration, NOT Xbox ABI or
1:1 gameplay. Original retail XBE bytes are not consumed by this script.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import subprocess
import tempfile

CALLER = "00344f53"
CALLEE = "0034c7e5"
SOURCE_PREIMAGE_SHA256 = "e7db0f2a496a30d78aacbf824c64f4b4089013456a2dc484ef9cd94558adcd71"
BODY_DIGEST_LABEL = "D6B97D1DB2DA6F7BB0BAD3A760F00B4186FFB16C4DE287E70DA0EF2F25F0EA8C"
DECLARATION = (
    "/* Source-matched declaration from original-address callee draft.\n"
    " * ABI_UNVERIFIED: not an original Xbox calling-convention assertion. */\n"
    "extern void FUN_0034c7e5(undefined4 param_1, undefined4 param_2);\n"
)


def verify(root: Path, clang: str) -> None:
    caller_path = root / "src/platform/network_xnet/0x00344f53.cpp"
    callee_path = root / "src/platform/network_xnet/0x0034c7e5.cpp"
    include = root / "include"
    source = caller_path.read_text(encoding="utf-8")
    callee = callee_path.read_text(encoding="utf-8")
    assert source.count(DECLARATION) == 1, "declaration missing or duplicated"
    original = source.replace(DECLARATION, "", 1)
    assert hashlib.sha256(original.encode("utf-8")).hexdigest() == SOURCE_PREIMAGE_SHA256, (
        "caller preimage changed: review before accepting this gate"
    )
    assert f"Input x86 body SHA-256: {BODY_DIGEST_LABEL}" in source
    assert "Entry: 0x00344f53" in source and "ABI_UNVERIFIED" in source
    assert re.search(r"\bvoid\s+FUN_0034c7e5\s*\(\s*undefined4\s+param_1\s*,\s*undefined4\s+param_2\s*\)", callee), (
        "callee draft signature changed"
    )
    assert source.count("FUN_0034c7e5(param_1,param_2);") == 1
    assert source.count("return uVar1;") == 1
    for opt in ("-O0", "-O2"):
        cmd = [clang, "-std=c++17", "-fsyntax-only", opt, "-I", str(include), str(caller_path)]
        positive = subprocess.run(cmd, text=True, capture_output=True, check=False)
        assert positive.returncode == 0, f"{opt} positive failed: {positive.stderr}"
        with tempfile.TemporaryDirectory() as tmp:
            negative_path = Path(tmp) / "0x00344f53.cpp"
            negative_path.write_text(original, encoding="utf-8")
            negative = subprocess.run(
                [clang, "-std=c++17", "-fsyntax-only", opt, "-I", str(include), str(negative_path)],
                text=True, capture_output=True, check=False,
            )
            assert negative.returncode != 0 and "undeclared identifier 'FUN_0034c7e5'" in negative.stderr, (
                f"{opt} negative control did not fail as expected: {negative.stderr}"
            )
    print("PASS 0x00344f53 -> 0x0034c7e5: source identity, O0/O2, two negative controls")
    print("ABI_UNVERIFIED: no original-XBE instruction-level evidence asserted")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parent.parent)
    parser.add_argument("--clang", default="clang++")
    args = parser.parse_args()
    verify(args.root, args.clang)


if __name__ == "__main__":
    main()
