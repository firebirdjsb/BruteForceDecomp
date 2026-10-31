#!/usr/bin/env python3
"""Exact source-only C++17 declaration gates; not original Xbox ABI evidence."""
from __future__ import annotations

import hashlib
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
NOTICE = "/* Existing callee-draft interface only; original Xbox ABI_UNVERIFIED. */"
CASES = (
    ("001f", "001f2950", "001e8df0", "int FUN_001e8df0(float param_1)",
     "1bcb1a395303a9688404efb901a1a0754447f499",
     "c41c8ddd30bfbeef27fe9899de8fc989c60567c4",
     "5CBF50B883D11CA762839EC419B49B9E192CD070D9F61D9A78F6643A4226FDE6"),
    ("002c", "002c54f0", "002c5bc0", "float10 FUN_002c5bc0(float param_1)",
     "d86f943e9e4b93e81245d9259d3d0abecba4c3a9",
     "e500b1bb98c21a069d7c575e8df180960a5c0d19",
     "B154427F9085BABD1CABFDACEF1CEB33D4C3206F29EF18A35C2CEB2CA4AAA50E"),
)


def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\\0" + data).hexdigest()


class TwoSourceOnlyCallers(unittest.TestCase):
    def test_preimages_and_callee_draft_signatures(self):
        self.assertEqual(len(CASES), 2)
        for band, caller, callee, signature, before_blob, callee_blob, body in CASES:
            with self.subTest(caller=caller):
                caller_path = ROOT / "src" / "main_unclassified" / ("band_" + band) / ("0x" + caller + ".cpp")
                callee_path = ROOT / "src" / "main_unclassified" / ("band_" + callee[:4]) / ("0x" + callee + ".cpp")
                source = caller_path.read_text(encoding="utf-8")
                target = callee_path.read_text(encoding="utf-8")
                addition = NOTICE + "\nextern " + signature + ";\n"
                self.assertEqual(source.count(addition), 1)
                self.assertEqual(source.count("FUN_" + callee + "("), 2)
                self.assertEqual(git_blob_sha(source.replace(addition, "", 1).encode()), before_blob)
                self.assertEqual(git_blob_sha(target.encode()), callee_blob)
                self.assertIn(signature, target)
                self.assertIn("Entry: 0x" + caller, source)
                self.assertIn("Input x86 body SHA-256: " + body, source)
                self.assertIn("ABI_UNVERIFIED", source)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_clang_cpp17_o0_o2_and_missing_declaration_negative(self):
        for band, caller, callee, signature, *_ in CASES:
            source = (ROOT / "src" / "main_unclassified" / ("band_" + band) / ("0x" + caller + ".cpp")).read_text(encoding="utf-8")
            addition = NOTICE + "\nextern " + signature + ";\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    argv = [CLANGXX, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                            "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(argv, input=source, text=True,
                                          capture_output=True, timeout=60, check=False)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = subprocess.run(argv, input=source.replace(addition, "", 1),
                                         text=True, capture_output=True,
                                         timeout=60, check=False)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn("FUN_" + callee, bad.stderr)


if __name__ == "__main__":
    unittest.main()
