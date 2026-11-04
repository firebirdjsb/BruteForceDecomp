#!/usr/bin/env python3
"""Three source-matched declarations; Xbox ABI and x87 behavior unverified."""
import hashlib
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DECL = ("/* Source-matched Ghidra draft declaration only; original Xbox x87/ABI_UNVERIFIED. */\n"
        "extern int FUN_00319a67(float param_1);\n")
CASES = {
    "00314c9d": ("FF0389864BC3ECA37FFB2CF6412894C11A4A3C3A4CE16D22ED8FE70D7D7EE1E2", "87c3e8a49c841770ab383be21d4b1a570f0060795b6d38df749e54f4dc57cd64"),
    "00314cd4": ("27722B8900610938CD51B23B1C10FC2E16CE8EE6B817D1915AA34C85BEF691E7", "85ca2ed42f3b56aa895328b3e5c1808d0a1dae8d46ff4e27433a5ec22d882f0d"),
    "00314d1b": ("F904FD1D75BB1FB3D3FF987B7BAC815B447FFE549964346F0F9E5AD484F6B3A6", "685b2b49f01c9ffa622717bfcc82bf222234bb9b89a7aedba168b164e039d813"),
}


def clang(code, opt):
    return subprocess.run([shutil.which("clang++"), "-std=c++17", "-x", "c++", opt,
                           "-fsyntax-only", "-ferror-limit=3", "-I", str(ROOT / "include"), "-"],
                          input=code, text=True, capture_output=True, timeout=30)


class SourceOnlyCallers(unittest.TestCase):
    def test_original_bodies_and_callee_draft_signature(self):
        callee = (ROOT / "src/platform/audio_dsound/0x00319a67.cpp").read_text()
        self.assertIn("Input x86 body SHA-256: AE4A39F1F86EA5A10DC0F01AD19C2EDE2C9DDF1AED58B048C690BC9F8FDEBF83", callee)
        self.assertRegex(callee, r"\bint\s+FUN_00319a67\s*\(float param_1\)")
        for addr, (body_sha, old_sha) in CASES.items():
            src = (ROOT / "src/platform/audio_dsound" / f"0x{addr}.cpp").read_text()
            self.assertIn(f"Entry: 0x{addr}", src)
            self.assertIn("Input x86 body SHA-256: " + body_sha, src)
            self.assertEqual(src.count(DECL), 1)
            self.assertEqual(len(re.findall(r"\bFUN_00319a67\s*\(", src)), 2)
            self.assertEqual(hashlib.sha256(src.replace(DECL, "", 1).encode()).hexdigest(), old_sha)

    @unittest.skipUnless(shutil.which("clang++"), "clang++ required")
    def test_o0_o2_and_negative_controls(self):
        for addr in CASES:
            src = (ROOT / "src/platform/audio_dsound" / f"0x{addr}.cpp").read_text()
            for opt in ("-O0", "-O2"):
                self.assertEqual(clang(src, opt).returncode, 0)
            negative = clang(src.replace(DECL, "", 1), "-O0")
            self.assertNotEqual(negative.returncode, 0)
            self.assertIn("FUN_00319a67", negative.stderr)
        self.assertNotEqual(clang("extern int FUN_00319a67(float); void f(){FUN_00319a67();}", "-O0").returncode, 0)


if __name__ == "__main__":
    unittest.main()
