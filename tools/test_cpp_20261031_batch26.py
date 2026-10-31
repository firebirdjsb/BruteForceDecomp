#!/usr/bin/env python3
"""Gate 26 source-matched declarations. This does NOT verify Xbox guest ABI."""
from __future__ import annotations

import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
PREFIX = "/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */\n"
CASES = (
    ("0017a800", "0017a410", "void FUN_0017a410(void)"),
    ("001e7f50", "001e7b30", "void FUN_001e7b30(void)"),
    ("001e7fb0", "001e7d10", "void FUN_001e7d10(void)"),
    ("001e7fe0", "001e7df0", "void FUN_001e7df0(void)"),
    ("001e98c0", "001e98f0", "void FUN_001e98f0(int param_1,int param_2,int param_3,int original_stack_arg4)"),
    ("001eddd0", "002e7070", "undefined4 FUN_002e7070(char param_1)"),
    ("001ff4c0", "001fb110", "void FUN_001fb110(int param_1,int param_2)"),
    ("002184c0", "00218e40", "void FUN_00218e40(int param_1)"),
    ("00270e70", "00271540", "void FUN_00271540(int param_1,int param_2)"),
    ("00270f10", "00271540", "void FUN_00271540(int param_1,int param_2)"),
    ("0027a600", "0027a650", "void FUN_0027a650(void)"),
    ("00289b00", "0028a460", "void FUN_0028a460(void)"),
    ("002219e0", "0015b140", "void FUN_0015b140(int param_1)"),
    ("0022d800", "00159430", "void FUN_00159430(void)"),
    ("0022f170", "0021c8c0", "void FUN_0021c8c0(undefined4 param_1)"),
    ("002948b0", "00294b90", "int FUN_00294b90(undefined4 param_1,int param_2)"),
    ("00295530", "00294b90", "int FUN_00294b90(undefined4 param_1,int param_2)"),
    ("002a6850", "002a6630", "void FUN_002a6630(int *param_1)"),
    ("002aace0", "001376b0", "void FUN_001376b0(void)"),
    ("0023fe50", "00241710", "void FUN_00241710(byte param_1)"),
    ("002439d0", "00243040", "void FUN_00243040(int param_1)"),
    ("0024ff90", "000b2a50", "void FUN_000b2a50(void)"),
    ("00251060", "00251280", "void FUN_00251280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)"),
    ("002511b0", "00251370", "void FUN_00251370(int param_1,int param_2,undefined4 param_3,undefined4 param_4)"),
    ("00258e00", "00258b20", "void FUN_00258b20(int param_1,int param_2)"),
    ("00259570", "0012aba0", "void FUN_0012aba0(void)"),
)


def source(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


class SourceMatchedBatch26(unittest.TestCase):
    def test_declarations_match_existing_callee_drafts_without_body_rewrite(self):
        self.assertEqual(len(CASES), 26)
        self.assertEqual(len({a for a, _, _ in CASES}), 26)
        for caller, callee, signature in CASES:
            with self.subTest(caller=caller, callee=callee):
                text = source(caller).read_text(encoding="utf-8")
                original = PREFIX + "extern " + signature + ";\n"
                self.assertEqual(text.count(original), 1)
                self.assertIn(f"Entry: 0x{caller}", text)
                self.assertRegex(text, r"Input x86 body SHA-256: [0-9A-F]{64}")
                self.assertIn("ABI_UNVERIFIED", text)
                draft = source(callee).read_text(encoding="utf-8")
                self.assertIn(f"Entry: 0x{callee}", draft)
                norm = lambda s: re.sub(r"\\s+", "", s)
                self.assertIn(norm(signature), norm(draft))
                self.assertIn(f"FUN_{callee}(", text.replace(original, "", 1))

    @unittest.skipUnless(CLANGXX, "Requires installed clang++")
    def test_all_26_callers_strict_cpp17_syntax(self):
        for caller, _, _ in CASES:
            with self.subTest(caller=caller):
                cmd = [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                       "-I", str(ROOT / "include"), str(source(caller))]
                p = subprocess.run(cmd, capture_output=True, text=True,
                                   check=False, timeout=60)
                self.assertEqual(p.returncode, 0, p.stderr)

    @unittest.skipUnless(CLANGXX, "Requires installed clang++")
    def test_wrong_arity_negative_control_is_rejected(self):
        code = "extern void FUN_00271540(int,int); void caller(){FUN_00271540(1);}"
        p = subprocess.run([CLANGXX, "-std=c++17", "-x", "c++",
                            "-fsyntax-only", "-"], input=code,
                           capture_output=True, text=True, check=False)
        self.assertNotEqual(p.returncode, 0, p.stderr)


if __name__ == "__main__":
    unittest.main()
