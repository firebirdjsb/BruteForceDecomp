#!/usr/bin/env python3
"""Negative controls: source-only declaration triage must not bless FP/guest-word conversions."""
from __future__ import annotations
from pathlib import Path
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from triage_cpp_draft_call_type_risks import run_clang


def main() -> None:
    with tempfile.TemporaryDirectory(prefix="bf-float-word-guard-") as temp:
        root = Path(temp)
        include = root / "include"
        include.mkdir()
        (include / "bf_ghidra_types.h").write_text(
            "#include <stdint.h>\ntypedef uint32_t undefined4;\n", encoding="utf-8")
        cases = (
            ("safe-word", "extern void FUN_00010090(undefined4);\n"
             "void FUN_00010080(void) { undefined4 x=1; FUN_00010090(x); }\n", True, ""),
            ("float-to-guest-word", "extern void FUN_00010060(undefined4);\n"
             "void FUN_00010040(void) { float f=1.25f; FUN_00010060(f); }\n",
             False, "float-conversion"),
            ("guest-word-to-float", "extern void FUN_00010070(float);\n"
             "void FUN_00010050(void) { undefined4 bits=0x3f800000u; FUN_00010070(bits); }\n",
             False, "implicit-int-float-conversion"),
        )
        for name, body, expected_ok, marker in cases:
            source = '#include "bf_ghidra_types.h"\n' + body
            for opt in ("-O0", "-O2"):
                ok, stderr = run_clang("clang++", include, root, source, opt)
                assert ok == expected_ok, f"{name} {opt}: {stderr}"
                if not expected_ok:
                    assert marker in stderr, f"{name} {opt}: {stderr}"
        print("PASS: C++17 O0/O2 positive control and both FP/guest-word conversion negatives")
        print("Source-only screening does not establish original Xbox ABI or behavior")


if __name__ == "__main__":
    main()
