#!/usr/bin/env python3
"""C++ parser check: no implicit functions or unchecked body provenance."""
import shutil
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from sweep_cpp_compat import check_one


@unittest.skipUnless(shutil.which("clang++"), "clang++ required")
class CppCompatibilityTests(unittest.TestCase):
    DIGEST = "A1" * 32

    def test_valid_cpp_source_compiles(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            path = root / "0x00012000.cpp"
            path.write_text(f"/* Input x86 body SHA-256: {self.DIGEST} */\nint f(void) {{ return 3; }}\n")
            result = check_one("clang++", root, path, path.stem, self.DIGEST)
            self.assertEqual(result["status"], "pass", result)

    def test_undeclared_function_is_caught(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            path = root / "0x00012000.cpp"
            path.write_text(f"/* Input x86 body SHA-256: {self.DIGEST} */\nint f(void) {{ return UNKNOWN_CALL(); }}\n")
            result = check_one("clang++", root, path, path.stem, self.DIGEST)
            self.assertEqual(result["status"], "fail", result)
            self.assertIn("UNKNOWN_CALL", result["diagnostic"])

    def test_digest_mismatch_skips_compiler(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            path = root / "0x00012000.cpp"
            path.write_text(f"/* Input x86 body SHA-256: {self.DIGEST} */\nint f(void) {{ return 1; }}\n")
            result = check_one("clang++", root, path, path.stem, "B2" * 32)
            self.assertEqual(result["status"], "provenance_error")


if __name__ == "__main__":
    unittest.main()
