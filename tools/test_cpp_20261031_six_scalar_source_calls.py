#!/usr/bin/env python3
"""Six source-only C++17 declarations; NOT evidence of original Xbox ABI or 1:1 behavior."""
from __future__ import annotations
import hashlib
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
NOTICE = "/* Source-matched C++17 declaration only; Xbox guest ABI_UNVERIFIED. */\n"
CASES = (
    ("src/platform/online_xonline/0x0033c404.cpp", "src/platform/online_xonline/0x0033bbd6.cpp", "extern void FUN_0033bbd6(int param_1);", "3c854955cceb93294be3758cc3c9c56d482c9b0427098af83d024b05d21b71f0", "E946F3CB7AEBCC654DFDA3AB192E226DFAB713BF308EAC7CF62382CF924276B8"),
    ("src/platform/online_xonline/0x0033c44a.cpp", "src/platform/online_xonline/0x0033bc06.cpp", "extern void FUN_0033bc06(uint param_1);", "002cbbca5f6fadad43deed436431d6d97a94485ceb309287ec572b5f8fad59fe", "2F9CD71B7FEFD81AD28E513F0B7CDD1BC75581CAD2AD91A1C6E39D0629DDCCDA"),
    ("src/platform/online_xonline/0x0033ca1c.cpp", "src/platform/online_xonline/0x0033bfe2.cpp", "extern uint FUN_0033bfe2(int param_1);", "57de8ed764ea945abafd255a7c1cb3717b8887710128342de0d08520190702b6", "123E3C531CDBB1CEEF45676151CC1787C39C3EC0E9D8DDA5B7BC417DA9509E3B"),
    ("src/main_unclassified/band_002e/0x002e3560.cpp", "src/platform/network_xnet/0x00345df1.cpp", "extern ushort FUN_00345df1(ushort param_1);", "65ed7039bf8a466e894c50ebb2d8d151361e2a176fdc5125a9b139088a74ce43", "02D495DD3F396C5D36671A1223DA8501CA60A1FFF72E94795024BC622954436A"),
    ("src/main_unclassified/band_002e/0x002e3590.cpp", "src/platform/network_xnet/0x00345df1.cpp", "extern ushort FUN_00345df1(ushort param_1);", "7b269dc89298e1a56f5af3282d6f0efab70507fc7f1dfc669d8ba2346dd2d44c", "7248F49D20770CC9122D9F02F2518741B223A6542FBD6737A53C03A823A86160"),
    ("src/main_unclassified/band_002e/0x002eae7c.cpp", "src/main_unclassified/band_002e/0x002ee49d.cpp", "extern uint FUN_002ee49d(uint param_1);", "c8ccc716ff0a636559bf8bcfc1cca339a548ec74d2395471416db37bff434fde", "4ADDBDB4C21599EE3C45D87C74F068512F5E4245A6AF19E2272EBCC87FF4DBFA"),
)

class SixSourceOnlyDeclarations(unittest.TestCase):
    def test_preimage_and_callee_source(self):
        for caller, callee, declaration, before, body in CASES:
            with self.subTest(caller=caller):
                source = (ROOT / caller).read_text(encoding="utf-8")
                decl = NOTICE + declaration + "\n"
                self.assertEqual(source.count(decl), 1)
                self.assertEqual(hashlib.sha256(source.replace(decl, "", 1).encode()).hexdigest(), before)
                self.assertIn("Input x86 body SHA-256: " + body, source)
                self.assertIn("Entry: " + Path(caller).stem, source)
                callee_source = (ROOT / callee).read_text(encoding="utf-8")
                self.assertIn(declaration.removeprefix("extern ").removesuffix(";"), callee_source)

    @unittest.skipUnless(CLANG, "clang++ is required")
    def test_o0_o2_and_negative_controls(self):
        for caller, _, declaration, _, _ in CASES:
            source = (ROOT / caller).read_text(encoding="utf-8")
            decl = NOTICE + declaration + "\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    cmd = [CLANG, "-std=c++17", opt, "-x", "c++", "-fsyntax-only", "-ferror-limit=3", "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(cmd, input=source, capture_output=True, text=True, timeout=40)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    for broken in (source.replace(decl, "", 1), source.replace(declaration, declaration.replace("(", "(int extra, ", 1), 1)):
                        bad = subprocess.run(cmd, input=broken, capture_output=True, text=True, timeout=40)
                        self.assertNotEqual(bad.returncode, 0)

if __name__ == "__main__":
    unittest.main()
