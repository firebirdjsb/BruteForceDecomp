#!/usr/bin/env python3
"""Strict source-only C++17 checks; XBE guest ABI remains unverified."""
from __future__ import annotations

import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
COMMENT = "/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */"
CASES = (
    ("001a74c0", "001ab690", "void FUN_001ab690(void)"),
    ("001a74e0", "001ab700", "void FUN_001ab700(void)"),
    ("001a7c70", "001ac8a0", "void FUN_001ac8a0(void)"),
    ("001a7c90", "001ac920", "void FUN_001ac920(void)"),
    ("001a7ef0", "001ace50", "void FUN_001ace50(void)"),
    ("001a7f70", "00242480", "void FUN_00242480(void)"),
    ("001a80b0", "001acfe0", "void FUN_001acfe0(void)"),
    ("001a80d0", "001ad030", "void FUN_001ad030(void)"),
    ("001a2fd0", "001a94d0", "void FUN_001a94d0(void)"),
    ("001a5170", "001a6de0", "void FUN_001a6de0(void)"),
    ("001a8580", "001e0ea0", "void FUN_001e0ea0(void)"),
    ("001a93f0", "001b04e0", "void FUN_001b04e0(void)"),
    ("001a9ba0", "001a9d70", "void FUN_001a9d70(void)"),
    ("001ca390", "001ca540", "void FUN_001ca540(int param_1)"),
    ("00178ae0", "00178a40", "void FUN_00178a40(void)"),
    ("00179ba0", "00179c00", "void FUN_00179c00(void)"),
    ("0019b280", "00069dd0", "void FUN_00069dd0(byte param_1)"),
    ("00202030", "00039510", "void FUN_00039510(void)"),
    ("00205fb0", "001fb020", "int * FUN_001fb020(void)"),
    ("00261660", "00288a70", "undefined4 FUN_00288a70(void)"),
    ("00263840", "00263c70", "void FUN_00263c70(void)"),
    ("002654a0", "00265440", "undefined4 FUN_00265440(void)"),
    ("00265900", "00265910", "void FUN_00265910(void)"),
    ("002659e0", "00265a00", "undefined4 FUN_00265a00(void)"),
    ("002940b0", "0028ae10", "void FUN_0028ae10(void)"),
    ("002940e0", "0028ae10", "void FUN_0028ae10(void)"),
    ("0029b8f0", "0029ba30", "void FUN_0029ba30(void)"),
)


def source(address: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{address[:4]}" / f"0x{address}.cpp"


class SourceOnlyFollowup27(unittest.TestCase):
    def test_27_distinct_source_drafts_and_callee_declarations(self):
        self.assertEqual(len(CASES), 27)
        self.assertEqual(len({a for a, _, _ in CASES}), 27)
        for caller, callee, signature in CASES:
            with self.subTest(caller=caller, callee=callee):
                text = source(caller).read_text(encoding="utf-8")
                decl = COMMENT + "\nextern " + signature + ";\n"
                self.assertEqual(text.count(decl), 1)
                self.assertIn(f"Entry: 0x{caller}", text)
                self.assertRegex(text, r"Input x86 body SHA-256: [0-9A-F]{64}")
                self.assertIn("ABI_UNVERIFIED", text)
                draft = source(callee).read_text(encoding="utf-8")
                self.assertIn(f"Entry: 0x{callee}", draft)
                normalize = lambda s: re.sub(r"\s+", "", s)
                self.assertIn(normalize(signature), normalize(draft))
                self.assertIn(f"FUN_{callee}(", text.replace(decl, "", 1))

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_27_caller_drafts_compile_with_strict_cpp17(self):
        for caller, _, _ in CASES:
            with self.subTest(caller=caller):
                result = subprocess.run(
                    [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                     "-ferror-limit=3", "-I", str(ROOT / "include"),
                     str(source(caller))],
                    capture_output=True, text=True, timeout=60, check=False,
                )
                self.assertEqual(result.returncode, 0, result.stderr)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_negative_control_rejects_missing_callee_argument(self):
        wrong = "extern void FUN_001ca540(int); void caller(){FUN_001ca540();}\n"
        result = subprocess.run(
            [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only", "-"],
            input=wrong, capture_output=True, text=True, check=False,
        )
        self.assertNotEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
