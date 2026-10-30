#!/usr/bin/env python3
"""Check 43 C++17 caller declarations for Ghidra constructor 0x001FE080.

This is syntax/identification testing, NOT original Xbox register-state
reconstruction, ABI parity, native linkage, or behavioral verification.
"""
from __future__ import annotations
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = "001f89b0 001fbab0 001fbb50 001fbbd0 001fbcc0 001fbda0 001fbe20 001fbea0 001fbf30 001fbfb0 001fc060 001fc130 001fc1f0 001fc270 001fc300 001fc370 001fc410 001fc510 001fc610 001fc6e0 001fc770 001fc9d0 001fcb00 001fcbd0 001fcc60 001fce50 001fd050 001fd170 001fd270 001fd380 001fd430 001fd4c0 001fd560 001fd5e0 001fd7a0 001fd9e0 001fdaa0 001fdb70 001fdc10 001fdcb0 001fdd60 001fde20 00201ab0".split()
CLANG = shutil.which("clang++")


def source(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


class DispatchSourceProvenance(unittest.TestCase):
    def test_matching_constructor_draft(self):
        callee = source("001fe080").read_text(encoding="utf-8")
        self.assertIn("void FUN_001fe080(void)", callee)
        self.assertIn("unaff_ESI", callee)

    @unittest.skipUnless(CLANG, "Clang C++17 is required")
    def test_all_43_callers_parse(self):
        self.assertEqual(len(ADDRESSES), 43)
        self.assertEqual(len(set(ADDRESSES)), 43)
        for addr in ADDRESSES:
            with self.subTest(addr=addr):
                file = source(addr)
                src = file.read_text(encoding="utf-8")
                self.assertIn(f"Entry: 0x{addr}", src)
                self.assertIn("Input x86 body SHA-256:", src)
                self.assertIn("ABI_UNVERIFIED", src)
                self.assertIn("extern void FUN_001fe080(void);", src)
                self.assertIn("FUN_001fe080();", src)
                result = subprocess.run(
                    [CLANG, "-std=c++17", "-fsyntax-only", "-I",
                     str(ROOT / "include"), str(file)],
                    text=True, capture_output=True, check=False)
                self.assertEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
