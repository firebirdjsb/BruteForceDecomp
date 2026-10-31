#!/usr/bin/env python3
"""Source-matched C++17 declarations only; original Xbox guest ABI is UNVERIFIED.

The five callee signatures are current Ghidra draft signatures, not verified
x86 prototypes. This gate checks exact source identities and host syntax only.
"""
from __future__ import annotations

import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
# Source-only return spelling -> (original-address callee, caller addresses).
MATCHED = {
    "0017c270": ("void", ("0017d5b0", "0017d7c0")),
    "001713d0": ("void", ("00171510", "001715e0")),
    "00100d10": ("void", ("000f9270", "00106530")),
    "00064490": ("void", ("000fc150", "00173560")),
    "0005c0a0": ("uint", ("00112770", "00125210")),
}


def source(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


class SourceOnlyCallerGates(unittest.TestCase):
    def test_original_identity_and_source_only_declarations(self):
        self.assertEqual(sum(len(v[1]) for v in MATCHED.values()), 10)
        all_callers = [c for _, (_, callers) in MATCHED.items() for c in callers]
        self.assertEqual(len(set(all_callers)), 10)
        for callee, (ret, callers) in MATCHED.items():
            callee_text = source(callee).read_text(encoding="utf-8")
            self.assertIn(f"{ret} FUN_{callee}(void)", callee_text)
            self.assertIn(f"Entry: 0x{callee}", callee_text)
            self.assertRegex(callee_text, r"Input x86 body SHA-256: [0-9A-F]{64}")
            for caller in callers:
                with self.subTest(caller=caller, callee=callee):
                    text = source(caller).read_text(encoding="utf-8")
                    self.assertIn(f"Entry: 0x{caller}", text)
                    self.assertRegex(text, r"Input x86 body SHA-256: [0-9A-F]{64}")
                    self.assertIn("ABI_UNVERIFIED", text)
                    self.assertIn(f"FUN_{callee}();", text)
                    self.assertEqual(text.count(f"extern {ret} FUN_{callee}(void);"), 1)
                    self.assertIn("source-matched declaration only", text)
                    self.assertNotIn("X86_OBJECT_ABI_REVIEWED", text)

    @unittest.skipUnless(CLANGXX, "Clang++17 is required")
    def test_all_ten_original_callers_pass_isolated_strict_cpp17(self):
        for callee, (_, callers) in MATCHED.items():
            for caller in callers:
                with self.subTest(caller=caller, callee=callee):
                    proc = subprocess.run(
                        [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                         "-ferror-limit=3", "-I", str(ROOT / "include"),
                         str(source(caller))],
                        capture_output=True, text=True, timeout=60, check=False,
                    )
                    self.assertEqual(proc.returncode, 0, proc.stderr)

    @unittest.skipUnless(CLANGXX, "Clang++17 is required")
    def test_wrong_arity_negative_control_is_rejected(self):
        positive = "extern void FUN_0017c270(void); void caller(){ FUN_0017c270(); }\n"
        negative = positive.replace("(void);", "(int);", 1)
        for text, expected in ((positive, 0), (negative, 1)):
            with self.subTest(expected=expected):
                proc = subprocess.run(
                    [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only", "-"],
                    input=text, capture_output=True, text=True, check=False,
                )
                self.assertEqual(proc.returncode == 0, expected == 0, proc.stderr)


if __name__ == "__main__":
    unittest.main()
