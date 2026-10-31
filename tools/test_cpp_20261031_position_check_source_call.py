#!/usr/bin/env python3
"""Original-body-preserving, source-only C++17 regression for 0x000E0B20.

Do not mistake the callee's Ghidra draft prototype for an Xbox ABI contract.
"""
from __future__ import annotations

import hashlib
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CALLER = ROOT / "src/main_unclassified/band_000e/0x000e0b20.cpp"
CALLEE = ROOT / "src/main_unclassified/band_002f/0x002f254a.cpp"
HEADER = ROOT / "include"
NOTICE = "/* Source-matched callee draft declaration only; original Xbox ABI_UNVERIFIED. */\n"
DECL = NOTICE + "extern void FUN_002f254a(void);\n"
ORIGINAL_SHA = "0663dc86058aa049f6f6398869089c42c10af0e2d283da762a52e847d92cc577"
BODY_SHA = "107857E3EDD8242F0C56BFE62A5034AE4A6C822D32B240BD6DD31E4CD6A77985"
CLANG = shutil.which("clang++")


class SourceMatchedPositionCheck(unittest.TestCase):
    def test_source_provenance_and_call_arguments(self):
        src = CALLER.read_text(encoding="utf-8")
        other = CALLEE.read_text(encoding="utf-8")
        self.assertEqual(src.count(DECL), 1)
        self.assertIn("void FUN_002f254a(void)", other)
        self.assertRegex(other, r"\bvoid FUN_002f254a\(void\)\s*\{")
        self.assertEqual(src.count("FUN_002f254a();"), 1)
        self.assertIn("Entry: 0x000e0b20", src)
        self.assertIn("Input x86 body SHA-256: " + BODY_SHA, src)
        self.assertEqual(hashlib.sha256(src.replace(DECL, "", 1).encode("utf-8")).hexdigest(),
                         ORIGINAL_SHA)
        self.assertIn("ABI_UNVERIFIED", src)

    @unittest.skipUnless(CLANG, "clang++ is required to certify C++ syntax")
    def test_strict_cpp17_and_missing_declaration_negative_control(self):
        source = CALLER.read_text(encoding="utf-8")
        for opt in ("-O0", "-O2"):
            with self.subTest(opt=opt):
                command = [CLANG, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                           "-I", str(HEADER), "-"]
                good = subprocess.run(command, input=source, text=True,
                                      capture_output=True, check=False, timeout=40)
                self.assertEqual(good.returncode, 0, good.stderr)
                bad = subprocess.run(command, input=source.replace(DECL, "", 1),
                                     text=True, capture_output=True, check=False, timeout=40)
                self.assertNotEqual(bad.returncode, 0)
                self.assertIn("FUN_002f254a", bad.stderr)


if __name__ == "__main__":
    unittest.main()
