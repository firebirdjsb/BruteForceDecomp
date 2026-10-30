#!/usr/bin/env python3
"""Strict source-only C++17 verification for reviewed 43 caller declarations.

The signatures are copied from the current original-address Ghidra callee
drafts. This verifies syntax and type compatibility ONLY. The Xbox entry
registers, 32-bit guest memory and true calling conventions remain unverified.
These must not be promoted to behavioral parity by passing this test.
"""
from __future__ import annotations

import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
GROUPS = {
    "00160e40": (
        "void FUN_00160e40(uint *param_1)",
        "extern void FUN_00160e40(uint *guest_word);",
        "001619f0 00161b10 00161bb0 00161c50 00161cf0 "
        "00161d90 00161e30 00161ed0 00161f70 00162010 "
        "001620b0 00162150 001621f0",
    ),
    "0010bc40": (
        "void FUN_0010bc40(void)",
        "extern void FUN_0010bc40(void);",
        "001cec60 001cf6d0 001d0560 001d12b0 001d6530 "
        "001d9250 001e0c40 00249160 0024aa50 00287630 0028e320",
    ),
    "001fedb0": (
        "char FUN_001fedb0(undefined4 param_1,int *param_2,byte *param_3)",
        "extern char FUN_001fedb0(undefined4 mode, int *key, byte *value);",
        "002012c0 00204e40 00207f20 00208650 0020b900",
    ),
    "0001f4f0": (
        "void FUN_0001f4f0(int param_1,uint param_2,uint param_3)",
        "extern void FUN_0001f4f0(int guest_string, uint start, uint count);",
        "001ca9e0 001d2f10 001e2a80 001e30f0 0023bd70 "
        "002494e0 0024ad60 0024bc50 0024c750",
    ),
    "00087940": (
        "int FUN_00087940(int param_1,uint param_2,uint param_3)",
        "extern int FUN_00087940(int guest_string, uint start, uint count);",
        "0010cb00 001ceab0 001d6370 001d63a0 001dcc70",
    ),
}


def source_for(addr: str) -> Path:
    return (ROOT / "src/main_unclassified" / f"band_{addr[:4]}" /
            f"0x{addr}.cpp")


@unittest.skipUnless(CLANGXX, "Clang C++17 compiler needed")
class ConservativeCallerDeclarations(unittest.TestCase):
    def test_source_only_matching_declarations(self):
        checked = 0
        seen: set[str] = set()
        for callee, (draft, declaration, entries) in GROUPS.items():
            callee_source = source_for(callee).read_text(encoding="utf-8")
            self.assertIn(draft, callee_source, "callee draft changed: " + callee)
            for entry in entries.split():
                with self.subTest(callee=callee, entry=entry):
                    self.assertNotIn(entry, seen, "duplicate test function")
                    seen.add(entry)
                    src = source_for(entry).read_text(encoding="utf-8")
                    self.assertIn(declaration, src)
                    self.assertIn("ABI_UNVERIFIED", src)
                    self.assertRegex(src, r"Input x86 body SHA-256: [0-9A-F]{64}")
                    self.assertRegex(src, r"\b" + f"FUN_{callee}" + r"\s*\(")
                    result = subprocess.run(
                        [CLANGXX, "-std=c++17", "-fsyntax-only", "-I",
                         str(ROOT / "include"), str(source_for(entry))],
                        capture_output=True, text=True)
                    self.assertEqual(result.returncode, 0, result.stderr)
                    checked += 1
        self.assertEqual(checked, 43)


if __name__ == "__main__":
    unittest.main()
