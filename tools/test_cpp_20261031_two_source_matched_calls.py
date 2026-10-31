#!/usr/bin/env python3
"""Two isolated source-matched C++17 caller regressions; Xbox ABI is unverified."""
from __future__ import annotations

import hashlib
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
NOTICE = "/* Source-matched callee draft declaration only; original Xbox ABI_UNVERIFIED. */\n"
CASES = (
    (
        "src/main_unclassified/band_0030/0x00302460.cpp",
        "src/main_unclassified/band_0030/0x00302430.cpp",
        "extern void FUN_00302430(void);",
        "FUN_00302430();",
        "9089e9e05f57200f4c7525e89ccebc08238eff6fa43076dd63a5ab303daedb1d",
        "A322E23ED37436EFC0A98CD0575E9CB6B7B663517EA99082E2E92E7738412573",
    ),
    (
        "src/platform/audio_dsound/0x00315e78.cpp",
        "src/platform/audio_dsound/0x00317b5d.cpp",
        "extern void FUN_00317b5d(int param_1);",
        "FUN_00317b5d(1);",
        "c881d06947ac1a920bac501e835552000aebb649617795131480ca79fcf8dd24",
        "CE7BB445DC4885E9A50E01D3BAE2342FA309D4854C57895D51A4D4D451F3895D",
    ),
)


class TwoSourceMatchedCalls(unittest.TestCase):
    def test_exact_pre_edit_source_hash_and_callee_definition(self):
        for caller, callee, signature, call, before_sha, body_sha in CASES:
            with self.subTest(caller=caller):
                original = (ROOT / caller).read_bytes()
                src = original.decode("utf-8")
                decl = NOTICE + signature + "\n"
                self.assertEqual(src.count(decl), 1)
                self.assertEqual(src.count(call), 1)
                self.assertEqual(
                    hashlib.sha256(src.replace(decl, "", 1).encode("utf-8")).hexdigest(),
                    before_sha,
                )
                self.assertIn("Input x86 body SHA-256: " + body_sha, src)
                self.assertIn("Entry: " + Path(caller).stem, src)
                other = (ROOT / callee).read_text(encoding="utf-8")
                self.assertIn(signature.removeprefix("extern ").removesuffix(";"), other)
                self.assertIn("ABI_UNVERIFIED", src)

    @unittest.skipUnless(CLANG, "clang++ required; do not certify syntax without a compiler")
    def test_cpp17_o0_o2_and_missing_declaration_negative_controls(self):
        for caller, _, signature, _, _, _ in CASES:
            src = (ROOT / caller).read_text(encoding="utf-8")
            decl = NOTICE + signature + "\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    command = [CLANG, "-std=c++17", opt, "-x", "c++",
                               "-fsyntax-only", "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(command, input=src, text=True,
                                          capture_output=True, timeout=40, check=False)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = subprocess.run(command, input=src.replace(decl, "", 1),
                                         text=True, capture_output=True, timeout=40, check=False)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn(signature.split("(")[0].split()[-1], bad.stderr)


if __name__ == "__main__":
    unittest.main()
