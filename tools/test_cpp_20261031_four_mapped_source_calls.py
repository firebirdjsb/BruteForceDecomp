#!/usr/bin/env python3
"""Strict source-only declaration regression tests; never Xbox ABI evidence."""
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
    ("main_unclassified/band_0028", "00281870", "00281560", "void FUN_00281560(void)", "c7f85eb87464ed4e0d02fea9c25df1db7af99ef1", "ee9aa06b0d1a4ad02b33f2084400b42f8f04b62f", "26D4096631383E574CCAE3FC6079553539BDB595BB449BC94E67FEA638916E63"),
    ("main_unclassified/band_0028", "002899d0", "00289e20", "undefined4 FUN_00289e20(void)", "209dec5cd065333aa611a06bdd6733d0f6d499a2", "240a83c27888727b27e548c6991d1a18789a0293", "365A33F8B8B6661500B572E7793F9492ABCD87A8748EF7F8B29F489559BF3B26"),
    ("main_unclassified/band_002b", "002bd4e0", "002be8b0", "void FUN_002be8b0(void)", "a201556289f8e20c615b84a2418c407d4e8dd572", "36177c5f6e68e371cb021a3f66f1bbbed5fcb2e1", "0398C2C32EC917C2BAB5225F5DF071FA25E44A564A11391C39669E33B1D22277"),
    ("platform/graphics_d3d", "00375b20", "00375940", "float10 FUN_00375940(float param_1)", "e83ad8595df65d0699cc78a2f4cd18cab80d7df8", "d2ad2a9604c125cc952e8f712747817ffb9f760d", "9FCAFBE6FE11122EA7F5CCF612456CA82EB6C7FCD612B17CFF39BF13126D99A6"),
)


def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()


class SourceMatchedOctober31Followup(unittest.TestCase):
    def test_original_preimages_callee_blobs_and_x86_digest_labels(self):
        self.assertEqual(len(CASES), 4)
        for folder, caller, callee, signature, before_blob, callee_blob, original_body in CASES:
            with self.subTest(caller=caller):
                caller_path = ROOT / "src" / folder / ("0x" + caller + ".cpp")
                callee_path = ROOT / "src" / folder / ("0x" + callee + ".cpp")
                source = caller_path.read_text(encoding="utf-8")
                target = callee_path.read_text(encoding="utf-8")
                addition = NOTICE + "\nextern " + signature + ";\n"
                self.assertEqual(source.count(addition), 1)
                self.assertEqual(source.count("FUN_" + callee + "("), 2)
                self.assertEqual(git_blob_sha(source.replace(addition, "", 1).encode()), before_blob)
                self.assertEqual(git_blob_sha(target.encode()), callee_blob)
                self.assertIn(signature, target)
                self.assertIn("Entry: 0x" + caller, source)
                self.assertIn("Input x86 body SHA-256: " + original_body, source)
                self.assertIn("ABI_UNVERIFIED", source)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_clang_cpp17_o0_o2_with_declaration_removal_negative(self):
        for folder, caller, callee, signature, *_ in CASES:
            source = (ROOT / "src" / folder / ("0x" + caller + ".cpp")).read_text(encoding="utf-8")
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
