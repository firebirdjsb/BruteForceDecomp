#!/usr/bin/env python3
"""Source-only C++17 gate for four 0x00238110 callers (Xbox ABI unverified)."""
from __future__ import annotations

import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
DECL = "/* Source-matched prototype only; Xbox guest ABI_UNVERIFIED. */\nextern void FUN_00238110(void);\n"
CASES = {
    "0030df10": "5EF68D70B1517FAB2661EE6141C7D36B40C8145CAA20A2075EE3BBFD49F91640",
    "003117c0": "2A95DE693BFD1533EA5FD9C73B0BC00C52E7E1D31E6E04176A7424FF6DE848CD",
    "003117d0": "2B356013B35F5B7700CBEF78FD8B70E564DDC7F65984517774E089DDCDE0C091",
    "003117e0": "90D04E8B410F6B79C537F036B3628CA17A4A8595186100600937F734EB8546BE",
}


def source(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


class SourceMatched00238110(unittest.TestCase):
    def test_exact_declaration_and_original_identity(self):
        callee = source("00238110").read_text(encoding="utf-8")
        self.assertIn("Entry: 0x00238110", callee)
        self.assertRegex(callee, r"\bvoid\s+FUN_00238110\s*\(\s*void\s*\)\s*\{")
        for caller, digest in CASES.items():
            with self.subTest(caller=caller):
                content = source(caller).read_text(encoding="utf-8")
                self.assertIn(f"Entry: 0x{caller}", content)
                self.assertIn(f"Input x86 body SHA-256: {digest}", content)
                self.assertEqual(content.count(DECL), 1)
                self.assertEqual(content.replace(DECL, "").count("FUN_00238110();"), 1)

    @unittest.skipUnless(CLANGXX, "requires clang++")
    def test_four_canonical_sources_parse_cpp17(self):
        for caller in CASES:
            with self.subTest(caller=caller):
                p = subprocess.run(
                    [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                     "-ferror-limit=3", "-I", str(ROOT / "include"),
                     str(source(caller))],
                    capture_output=True, text=True, timeout=60, check=False,
                )
                self.assertEqual(p.returncode, 0, p.stderr)

    @unittest.skipUnless(CLANGXX, "requires clang++")
    def test_wrong_argument_is_rejected(self):
        p = subprocess.run(
            [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only", "-"],
            input="extern void FUN_00238110(void); void bad() { FUN_00238110(1); }\n",
            capture_output=True, text=True, check=False,
        )
        self.assertNotEqual(p.returncode, 0)


if __name__ == "__main__":
    unittest.main()
