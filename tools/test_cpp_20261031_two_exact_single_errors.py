#!/usr/bin/env python3
"""Two exact single-diagnostic caller fixes; Xbox ABI/runtime still unverified."""
from __future__ import annotations

import hashlib
from pathlib import Path
import shutil
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
NOTE = "/* Source-matched callee draft only; original Xbox ABI_UNVERIFIED. */"
CASES = (
    (
        "platform/graphics_d3d", "00374e70", "00374130",
        "int FUN_00374130(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,\n"
        "                uint *param_7,uint *param_8)",
        "1f6f17890c7e792fada551c388440ce77520e6bb",
        "83359ebdd08c26768df2845d9743b70a382cfd73",
        "8A1B08A7CE4F53DDB65A773BA9EB17B0EDB4E04633A52A4E964AC57F6DA0CD96",
    ),
    (
        "platform/network_xnet", "003561a3", "00355bea",
        "void FUN_00355bea(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)",
        "268b033fcd2cc39f2adfcbddfbf1c275b71cba21",
        "56807b64bef86de6af3db975af628f367d3f5e25",
        "D40EDEC1EF8A792E5E38596F254F0A49E49F3CE4EDCED86DD7B678503E9F469A",
    ),
)


def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\0" + data).hexdigest()


class SourceOnlySingleDiagnosticEdges(unittest.TestCase):
    def test_source_identity_and_exact_callee_drafts(self):
        self.assertEqual(len(CASES), 2)
        for folder, caller, callee, signature, source_before, callee_blob, original_body in CASES:
            with self.subTest(caller=caller):
                src = (ROOT / "src" / folder / ("0x" + caller + ".cpp")).read_text()
                callee_text = (ROOT / "src" / folder / ("0x" + callee + ".cpp")).read_text()
                decl = NOTE + "\nextern " + signature + ";\n"
                self.assertEqual(src.count(decl), 1)
                self.assertEqual(src.count("FUN_" + callee + "("), 2)
                self.assertEqual(git_blob_sha(src.replace(decl, "", 1).encode()), source_before)
                self.assertEqual(git_blob_sha(callee_text.encode()), callee_blob)
                self.assertIn(signature, callee_text)
                self.assertIn("Entry: 0x" + caller, src)
                self.assertIn("Input x86 body SHA-256: " + original_body, src)
                self.assertIn("ABI_UNVERIFIED", src)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_clang17_o0_o2_with_missing_declaration_negatives(self):
        for folder, caller, callee, signature, *_ in CASES:
            src = (ROOT / "src" / folder / ("0x" + caller + ".cpp")).read_text()
            decl = NOTE + "\nextern " + signature + ";\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    argv = [CLANGXX, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                            "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(argv, input=src, text=True, capture_output=True,
                                          timeout=60, check=False)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = subprocess.run(argv, input=src.replace(decl, "", 1),
                                         text=True, capture_output=True, timeout=60, check=False)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn("FUN_" + callee, bad.stderr)


if __name__ == "__main__":
    unittest.main()
