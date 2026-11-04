#!/usr/bin/env python3
"""Guard the Bink scalar-declaration repair; original Xbox ABI is not tested."""
from __future__ import annotations

import hashlib
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CALLER = ROOT / "src/video_bink/bink/0x00357470.cpp"
CALLEE = ROOT / "src/video_bink/bink/0x00356f00.cpp"
PRE_SOURCE_BLOB = "b039549d21bd68a4749d046b8697e8086399faf2"
BODY_SHA = "4177CBEC51BD38BC2E5DC7E2CFDE6DA53C3F93FDE2897658BB7DFACD3CE5E642"
DECL = ("/* Source-only 32-bit scalar declaration; Xbox ABI_UNVERIFIED. */\n"
        "extern void FUN_00356f00(uint param_1);\n")
CLANGXX = shutil.which("clang++")


def blob_hash(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\0" + data).hexdigest()


class BinkScalarCleanup(unittest.TestCase):
    def test_preserves_complete_original_caller_source(self):
        source = CALLER.read_text(encoding="utf-8")
        self.assertEqual(source.count(DECL), 1)
        self.assertEqual(source.count("FUN_00356f00("), 2)
        self.assertEqual(blob_hash(source.replace(DECL, "", 1).encode("utf-8")),
                         PRE_SOURCE_BLOB)
        self.assertIn("Input x86 body SHA-256: " + BODY_SHA, source)
        self.assertIn("Entry: 0x00357470", source)
        self.assertIn("void FUN_00356f00(uint param_1)", CALLEE.read_text(encoding="utf-8"))
        self.assertIn("ABI_UNVERIFIED", source)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_cpp17_o0_o2_and_missing_declaration_negative_controls(self):
        source = CALLER.read_text(encoding="utf-8")
        for opt in ("-O0", "-O2"):
            with self.subTest(opt=opt):
                cmd = [CLANGXX, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                       "-I", str(ROOT / "include"), "-"]
                good = subprocess.run(cmd, input=source, text=True, capture_output=True,
                                      check=False, timeout=40)
                self.assertEqual(good.returncode, 0, good.stderr)
                bad = subprocess.run(cmd, input=source.replace(DECL, "", 1), text=True,
                                     capture_output=True, check=False, timeout=40)
                self.assertNotEqual(bad.returncode, 0)
                self.assertIn("FUN_00356f00", bad.stderr)


if __name__ == "__main__":
    unittest.main()
