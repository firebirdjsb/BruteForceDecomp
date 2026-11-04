#!/usr/bin/env python3
"""Source-only strict C++17 checks for two GPU/x87 caller drafts.

The corresponding original Xbox x87 and 32-bit register interfaces are NOT
established by a host compiler pass; original gameplay remains ABI_UNVERIFIED.
"""
from __future__ import annotations

import hashlib
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
DECL = (
    "/* Source-only callee-draft declaration; x87/guest ABI_UNVERIFIED. */\n"
    "extern float10 FUN_003758d0(float param_1);\n"
)
CASES = (
    ("00375940", "58a29b5de501ec5033ce6c38a63720e481d727f7def4dfbeba3281ef9f6f0623",
     "D045256A2F5BF519CEDB7711D8C77F77D5C795358D5983432FE39E5BCB149417"),
    ("00375980", "0f524e3ebc5435e17ddc60c9f5c7137e33b385b67fb867573a3b4b47ec3f895e",
     "D24B5EF6282993AE8D8C4EC1E9197D9340946DA480C28E25ED2C2341283079A0"),
)


class SourceOnlyX87Callers(unittest.TestCase):
    def test_original_function_body_and_source_only_declaration(self):
        other = (ROOT / "src/platform/graphics_d3d/0x003758d0.cpp").read_text(encoding="utf-8")
        self.assertIn("float10 FUN_003758d0(float param_1)", other)
        for addr, original_source_sha, original_body_sha in CASES:
            with self.subTest(addr=addr):
                src = (ROOT / f"src/platform/graphics_d3d/0x{addr}.cpp").read_text(encoding="utf-8")
                self.assertEqual(src.count(DECL), 1)
                self.assertEqual(
                    hashlib.sha256(src.replace(DECL, "", 1).encode("utf-8")).hexdigest(),
                    original_source_sha,
                )
                self.assertIn(f"Entry: 0x{addr}", src)
                self.assertIn("Input x86 body SHA-256: " + original_body_sha, src)
                self.assertEqual(src.count("FUN_003758d0("), 2)  # declaration and caller
                self.assertIn("ABI_UNVERIFIED", src)
    
    @unittest.skipUnless(CLANG, "requires clang++")
    def test_cpp17_o0_o2_and_removed_declaration_negative_controls(self):
        for addr, _, _ in CASES:
            src = (ROOT / f"src/platform/graphics_d3d/0x{addr}.cpp").read_text(encoding="utf-8")
            for opt in ("-O0", "-O2"):
                with self.subTest(addr=addr, optimization=opt):
                    cmd = [CLANG, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                           "-I", str(ROOT / "include"), "-"]
                    p = subprocess.run(cmd, input=src, text=True, capture_output=True,
                                       check=False, timeout=40)
                    self.assertEqual(p.returncode, 0, p.stderr)
                    b = subprocess.run(cmd, input=src.replace(DECL, "", 1), text=True,
                                       capture_output=True, check=False, timeout=40)
                    self.assertNotEqual(b.returncode, 0)
                    self.assertIn("FUN_003758d0", b.stderr)


if __name__ == "__main__":
    unittest.main()
