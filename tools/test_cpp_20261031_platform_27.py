#!/usr/bin/env python3
"""Platform source-only call declaration tests; guest Xbox ABI remains unverified."""
from __future__ import annotations

import re
import shutil
import subprocess
import unittest
from pathlib import Path

from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
NOTICE = "/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */"
CASES = (
    ("00330e05", "0033ea20", "void FUN_0033ea20(int param_1)"),
    ("0033542b", "0033d39c", "void FUN_0033d39c(int param_1,undefined4 param_2)"),
    ("00335527", "0033d39c", "void FUN_0033d39c(int param_1,undefined4 param_2)"),
    ("00336802", "0033633a", "undefined4 FUN_0033633a(uint param_1,uint param_2)"),
    ("003368d0", "0033633a", "undefined4 FUN_0033633a(uint param_1,uint param_2)"),
    ("00336922", "0033633a", "undefined4 FUN_0033633a(uint param_1,uint param_2)"),
    ("00370950", "003711f0", "void FUN_003711f0(void)"),
    ("00370970", "003711f0", "void FUN_003711f0(void)"),
    ("00374779", "003797cb", "void FUN_003797cb(uint param_1,uint param_2,int param_3)"),
    ("00379515", "003793b5", "void FUN_003793b5(void)"),
    ("0037954e", "003795d3", "void FUN_003795d3(uint param_1)"),
    ("0037fe22", "003807b0", "undefined4 FUN_003807b0(void)"),
    ("0037ffe5", "0037ff13", "void FUN_0037ff13(undefined4 param_1,int param_2)"),
    ("00380fb1", "00383904", "undefined4 FUN_00383904(int param_1,int param_2)"),
    ("00382637", "003824fa", "void FUN_003824fa(undefined4 param_1)"),
    ("0038264a", "003825b6", "void FUN_003825b6(void)"),
    ("00383816", "00380eda", "void FUN_00380eda(int param_1)"),
    ("00384b13", "00384afd", "int FUN_00384afd(void)"),
    ("00384b8a", "00384b13", "void FUN_00384b13(byte param_1)"),
    ("00384d66", "00384b13", "void FUN_00384b13(byte param_1)"),
    ("003860ee", "00385df0", "void FUN_00385df0(uint param_1)"),
    ("003861db", "003860ee", "void FUN_003860ee(void)"),
    ("00348044", "00347ae8", "void FUN_00347ae8(int param_1)"),
    ("00348dc9", "00348065", "void FUN_00348065(int *param_1)"),
    ("0034a8e6", "0034a806", "byte * FUN_0034a806(void)"),
    ("0034a953", "0034a806", "byte * FUN_0034a806(void)"),
    ("00351173", "00350db4", "void FUN_00350db4(char param_1,int param_2)"),
)


def source(address: str) -> Path:
    return source_path(ROOT, "0x" + address)


class SourceMatchedPlatform27(unittest.TestCase):
    def test_27_original_address_and_callee_declarations(self):
        self.assertEqual(len(CASES), 27)
        self.assertEqual(len({caller for caller, _, _ in CASES}), 27)
        for caller, callee, signature in CASES:
            with self.subTest(caller=caller, callee=callee):
                caller_source = source(caller).read_text(encoding="utf-8")
                declaration = NOTICE + "\nextern " + signature + ";\n"
                self.assertEqual(caller_source.count(declaration), 1)
                self.assertIn(f"Entry: 0x{caller}", caller_source)
                self.assertRegex(caller_source, r"Input x86 body SHA-256: [0-9A-F]{64}")
                self.assertIn("ABI_UNVERIFIED", caller_source)
                callee_source = source(callee).read_text(encoding="utf-8")
                self.assertIn(f"Entry: 0x{callee}", callee_source)
                canonical = lambda s: re.sub(r"\s+", "", s)
                self.assertIn(canonical(signature), canonical(callee_source))
                self.assertIn(f"FUN_{callee}(", caller_source.replace(declaration, "", 1))

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_all_27_compile_as_independent_cpp17_drafts(self):
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
    def test_invalid_pointer_to_int_argument_stays_rejected(self):
        bad = "extern void FUN_0033ea20(int); void caller(int *p){FUN_0033ea20(p);}\n"
        result = subprocess.run(
            [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only", "-"],
            input=bad, capture_output=True, text=True, check=False,
        )
        self.assertNotEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
