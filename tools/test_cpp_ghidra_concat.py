#!/usr/bin/env python3
"""Test Ghidra integer byte-splice compatibility without claiming an Xbox ABI."""
from __future__ import annotations
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
CODE = r"""
#include "bf_ghidra_types.h"
#include <cassert>
int main() {
    assert(CONCAT31(0x00abcdefu, 0x123u) == 0xabcdef23u);
    assert(CONCAT31((int3)-1, 0x100u) == 0xffffff00u);
    assert(CONCAT31((uint3)0x123456u, (byte)1) == 0x12345601u);
    assert(CONCAT44(0x12345678u, 0x9abcdef0u) == UINT64_C(0x123456789abcdef0));
    assert(CONCAT11(0x1234u, 0x5678u) == 0x3478u);
    assert(CONCAT12(0xab, 0x12345) == 0xab2345u);
    assert(CONCAT13(0x1234u, 0x12345678u) == 0x34345678u);
    assert(CONCAT21(0x12345u, 0x678u) == 0x234578u);
    assert(CONCAT22(0x12345u, 0x67890u) == 0x23457890u);
    return 0;
}
"""


@unittest.skipUnless(CLANG, "clang++ required")
class GhidraConcatTests(unittest.TestCase):
    def test_integer_splice_widths_cpp17(self):
        with tempfile.TemporaryDirectory() as tmp:
            source = Path(tmp) / "concat.cpp"
            binary = Path(tmp) / "concat"
            source.write_text(CODE, encoding="utf-8")
            p = subprocess.run([CLANG, "-std=c++17", "-Werror",
                                "-I", str(ROOT / "include"), str(source),
                                "-o", str(binary)], capture_output=True, text=True)
            self.assertEqual(p.returncode, 0, p.stderr)
            p = subprocess.run([str(binary)], capture_output=True, text=True)
            self.assertEqual(p.returncode, 0, p.stderr)

    def test_three_original_address_cpp_drafts_parse(self):
        # These original-address drafts had CONCAT31 as their first C++ error.
        # Isolated parsing is not original x86 calling-convention verification.
        sources = ["0x00023110", "0x000241e0", "0x0002e2e0"]
        for entry in sources:
            with self.subTest(entry=entry):
                source = ROOT / "src" / "main_unclassified" / "band_0002" / (entry + ".cpp")
                p = subprocess.run([CLANG, "-std=c++17", "-fsyntax-only",
                                    "-I", str(ROOT / "include"), str(source)],
                                   capture_output=True, text=True)
                self.assertEqual(p.returncode, 0, p.stderr)

    def test_refuses_host_pointer_baking_in_guest_width(self):
        code = '#include "bf_ghidra_types.h"\nuint64_t x(int *p){return CONCAT44(p, 0x100);}\n'
        with tempfile.TemporaryDirectory() as tmp:
            source = Path(tmp) / "invalid.cpp"
            source.write_text(code, encoding="utf-8")
            p = subprocess.run([CLANG, "-std=c++17", "-fsyntax-only",
                                "-I", str(ROOT / "include"), str(source)],
                               capture_output=True, text=True)
            self.assertNotEqual(p.returncode, 0)
            self.assertIn("guest pointer and FP bits remain unverified", p.stderr)


if __name__ == "__main__":
    unittest.main()
