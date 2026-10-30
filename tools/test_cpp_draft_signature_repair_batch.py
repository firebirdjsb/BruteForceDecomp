#!/usr/bin/env python3
"""Clang++17 syntax and exact Ghidra-draft signature regression gate.

A passing isolated syntax test is NOT proof of Xbox ABI, runtime memory
translation, C++ class reconstruction, or instruction-for-instruction 1:1.
"""
from __future__ import annotations
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
COMPILER = shutil.which("clang++")

GROUPS = {
    "00154420": ("void", "", "00154360 001543c0 00154510"),
    "00162290": ("void", "", "00162330 001624a0 001625a0"),
    "001fc7f0": ("void", "", "0020d5e0 0020d870 0020d970 0020dd20"),
    "001d26f0": ("void", "", "001d09d0 001d0a30 001d8920 001d89d0"),
    "001d1af0": ("void", "", "001cf230 001d6c40 001d6c70"),
    "001d4590": ("void", "", "001cf620 001cf650 001d7060"),
    "001c9990": ("void", "", "001d0640 001d0670 001d8500"),
    "001d1f40": ("void", "", "001d06d0 001d0700 001d8760"),
    "001d2af0": ("void", "int guest_object", "001d0c90 001d2950 001d8ce0 001d8d10"),
    "001d2330": ("void", "", "001d0840 001d0870 001d8690"),
    "001d2840": ("void", "", "001d0ac0 001d8a50 001d8a80"),
    "001d29d0": ("void", "", "001d0c30 001d8c60 001d8c90"),
    "001d5450": ("void", "", "001d0f30 001d8ee0 001dcb60"),
}


def source(addr: str) -> Path:
    return (ROOT / "src" / "main_unclassified" /
            f"band_{addr[:4]}" / f"0x{addr}.cpp")


class RecordedDeclarationBatch(unittest.TestCase):
    def test_42_callers_and_source_provenance(self):
        self.assertEqual(sum(len(x[2].split()) for x in GROUPS.values()), 42)
        for callee, (ret, arg, callers) in GROUPS.items():
            original = source(callee).read_text(encoding="utf-8")
            if arg:
                self.assertIn(f"{ret} FUN_{callee}(int param_1)", original)
            else:
                self.assertIn(f"{ret} FUN_{callee}(void)", original)
            for addr in callers.split():
                with self.subTest(callee=callee, caller=addr):
                    s = source(addr).read_text(encoding="utf-8")
                    self.assertIn(f"Entry: 0x{addr}", s)
                    self.assertRegex(s, r"Input x86 body SHA-256: [0-9A-F]{64}")
                    self.assertIn("ABI_UNVERIFIED", s)
                    signature = f"extern {ret} FUN_{callee}({arg or 'void'});"
                    self.assertIn(signature, s)
                    self.assertIn(f"FUN_{callee}(", s)

    @unittest.skipUnless(COMPILER, "clang++ required")
    def test_42_callers_parse_independently_with_cpp17(self):
        for _, (_, _, callers) in GROUPS.items():
            for addr in callers.split():
                with self.subTest(caller=addr):
                    r = subprocess.run(
                        [COMPILER, "-std=c++17", "-fsyntax-only",
                         "-I", str(ROOT / "include"), str(source(addr))],
                        capture_output=True, text=True, check=False)
                    self.assertEqual(r.returncode, 0, r.stderr)


if __name__ == "__main__":
    unittest.main()
