#!/usr/bin/env python3
"""Strict C++17 checks for 19 source-matched direct call declarations.

Original Xbox guest ABI and runtime parity remain explicitly unverified.
"""
from __future__ import annotations
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
NOTICE = "/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */"
CASES = (
    ("00121070", "void FUN_0014a610(void)"),
    ("00121920", "int FUN_00121ac0(void)"),
    ("001242a0", "uint FUN_0005c0a0(void)"),
    ("001244d0", "float10 FUN_00233b90(void)"),
    ("00125a80", "void FUN_000c5ca0(void)"),
    ("00126ef0", "void FUN_0023d9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)"),
    ("0012afd0", "void FUN_001d46c0(void)"),
    ("00132600", "void FUN_00132b50(void)"),
    ("00137c00", "void FUN_0001c630(int param_1,uint param_2)"),
    ("00139350", "undefined4 * FUN_000c9760(int param_1,int param_2)"),
    ("0013dce0", "void FUN_00223160(undefined4 param_1,undefined4 param_2)"),
    ("001491a0", "void FUN_00145e90(int param_1)"),
    ("0014a5a0", "int FUN_0014ab50(void)"),
    ("0014c060", "int FUN_0014bfe0(int param_1)"),
    ("0014c970", "void FUN_0014bc10(void)"),
    ("0014ca70", "uint FUN_00149e10(void)"),
    ("0014dae0", "undefined4 FUN_0014bfa0(void)"),
    ("0014db20", "undefined4 FUN_0014bfa0(void)"),
    ("00151170", "uint FUN_00168950(void)"),
)


def source(address: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{address[:4]}" / f"0x{address}.cpp"


class MainSourceMatched19(unittest.TestCase):
    def test_19_original_address_declarations_match_callee_drafts(self):
        self.assertEqual(len(CASES), 19)
        self.assertEqual(len({caller for caller, _ in CASES}), 19)
        for caller, sig in CASES:
            with self.subTest(caller=caller):
                src = source(caller).read_text(encoding="utf-8")
                decl = NOTICE + "\nextern " + sig + ";\n"
                self.assertEqual(src.count(decl), 1)
                self.assertIn(f"Entry: 0x{caller}", src)
                self.assertRegex(src, r"Input x86 body SHA-256: [0-9A-F]{64}")
                self.assertIn("ABI_UNVERIFIED", src)
                match = re.search(r"FUN_([0-9a-f]{8})\(", sig)
                self.assertIsNotNone(match)
                callee = match.group(1)
                other = source(callee).read_text(encoding="utf-8")
                canon = lambda s: re.sub(r"\s+", "", s)
                self.assertIn(canon(sig), canon(other))
                self.assertIn(f"FUN_{callee}(", src.replace(decl, "", 1))

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_all_19_compile_in_isolation_cpp17(self):
        for caller, _ in CASES:
            with self.subTest(caller=caller):
                result = subprocess.run(
                    [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                     "-ferror-limit=3", "-I", str(ROOT / "include"),
                     str(source(caller))],
                    capture_output=True, text=True, timeout=60, check=False)
                self.assertEqual(result.returncode, 0, result.stderr)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_incorrect_arity_is_rejected(self):
        bad = "extern int FUN_00121ac0(void); void caller(){FUN_00121ac0(1);}\n"
        result = subprocess.run([CLANGXX, "-std=c++17", "-x", "c++",
                                 "-fsyntax-only", "-"], input=bad,
                                capture_output=True, text=True, check=False)
        self.assertNotEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
