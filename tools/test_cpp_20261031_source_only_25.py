#!/usr/bin/env python3
"""Validate source-aligned caller declarations, not original Xbox ABI."""
from __future__ import annotations

import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
COMMENT = "/* Source-matched prototype only; Xbox guest ABI_UNVERIFIED. */"
CASES = (
    ("00146370", "000782c0", "int FUN_000782c0(int param_1)"),
    ("00146c40", "0006ef00", "int FUN_0006ef00(void)"),
    ("00146d50", "00146cb0", "int FUN_00146cb0(void)"),
    ("00147e50", "000cdbc0", "int FUN_000cdbc0(int param_1)"),
    ("00149e60", "0014c0f0", "void FUN_0014c0f0(int param_1)"),
    ("0014a840", "0014a780", "undefined4 FUN_0014a780(char param_1)"),
    ("0014bee0", "00149d30", "bool FUN_00149d30(int *param_1,uint *param_2)"),
    ("002b98e0", "002d1b60", "void FUN_002d1b60(void)"),
    ("002be1c0", "002bcf80", "undefined4 FUN_002bcf80(void)"),
    ("002be9e0", "002be930", "void FUN_002be930(void)"),
    ("002bece0", "002bec40", "void FUN_002bec40(void)"),
    ("002beef0", "002b2b80", "uint FUN_002b2b80(void)"),
    ("002c0120", "002c0220", "void FUN_002c0220(int param_1,int param_2,int param_3)"),
    ("002ccdb0", "002d1b60", "void FUN_002d1b60(void)"),
    ("002d4e90", "002d4e50", "void FUN_002d4e50(int param_1)"),
    ("002d9e70", "002d9dd0", "void FUN_002d9dd0(void)"),
    ("002dc810", "002dc0b0", "void FUN_002dc0b0(float param_1)"),
    ("002e0840", "002e40d0", "ushort FUN_002e40d0(void)"),
    ("002e40c0", "002e3ff0", "void FUN_002e3ff0(char param_1)"),
    ("002e49c0", "002e4550", "undefined4 FUN_002e4550(undefined4 param_1)"),
    ("002e5630", "002e7b00", "undefined4 FUN_002e7b00(int param_1,int param_2)"),
    ("002e8ba0", "002e9fb0", "undefined4 FUN_002e9fb0(int param_1,int param_2,int param_3)"),
    ("00300dd0", "00300b60", "void FUN_00300b60(int param_1,int param_2)"),
    ("00311690", "00238ac0", "void FUN_00238ac0(void)"),
    ("003118a0", "002e9eb0", "void FUN_002e9eb0(void)"),
)


def source(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


class SourceOnlyBatch25(unittest.TestCase):
    def test_25_declarations_match_existing_callee_drafts(self):
        self.assertEqual(len(CASES), 25)
        self.assertEqual(len({addr for addr, _, _ in CASES}), 25)
        for caller, callee, signature in CASES:
            with self.subTest(caller=caller, callee=callee):
                text = source(caller).read_text(encoding="utf-8")
                declaration = COMMENT + "\nextern " + signature + ";\n"
                self.assertEqual(text.count(declaration), 1)
                self.assertIn(f"Entry: 0x{caller}", text)
                self.assertRegex(text, r"Input x86 body SHA-256: [0-9A-F]{64}")
                self.assertIn("ABI_UNVERIFIED", text)
                draft = source(callee).read_text(encoding="utf-8")
                self.assertIn(f"Entry: 0x{callee}", draft)
                canonical = lambda s: re.sub(r"\s+", "", s)
                self.assertIn(canonical(signature), canonical(draft))
                self.assertIn(f"FUN_{callee}(", text.replace(declaration, "", 1))

    @unittest.skipUnless(CLANGXX, "requires clang++")
    def test_25_callers_compile_in_isolation_cpp17(self):
        for caller, _, _ in CASES:
            with self.subTest(caller=caller):
                result = subprocess.run(
                    [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                     "-ferror-limit=3", "-I", str(ROOT / "include"),
                     str(source(caller))],
                    capture_output=True, text=True, timeout=60, check=False,
                )
                self.assertEqual(result.returncode, 0, result.stderr)

    @unittest.skipUnless(CLANGXX, "requires clang++")
    def test_incorrect_pointer_argument_rejected(self):
        invalid = "extern void callee(int); void caller(int *p) { callee(p); }\n"
        result = subprocess.run(
            [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only", "-"],
            input=invalid, capture_output=True, text=True, check=False,
        )
        self.assertNotEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
