#!/usr/bin/env python3
"""Conservative source-interface gates for decompiled Brute Force C++ drafts.

Tests below assert Ghidra source identities and host Clang C++17 syntax only.
Passing never establishes original Xbox register input contracts, 1:1
behavior, guest address translation, or reconstructed C++ class layouts.
"""
from __future__ import annotations
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")

CONSTRUCTOR_CALLERS = """
00188420 00188c30 001894c0 00189670 001897e0 00189a40 00189ed0
0018b370 0018bb90 0018c160 0018c330 0018c750 0018cb90 0018ce00
0018cf60 0018d3b0 0018d5c0 0018e240 0018e460 0018e570 0018e750
0018e940 0018f860 00192710 00197960 00199320 00199cd0 0019cee0
001a0350 001a04b0 001a0630 001a1840 001a23e0 001a2df0 001a2fe0
001a32b0 001a3c80 001a4870 001a4a70 001a4bd0 002408b0
""".split()

FOCUSED = {
    "00129530": (
        "void FUN_00129530(void)",
        "extern void FUN_00129530(void);",
        "00129410 00129430 00129450 00129470 001294a0 001294c0 00174e70",
    ),
    "00059a80": (
        "void FUN_00059a80(void)",
        "extern void FUN_00059a80(void);",
        "000eb560 000eb800 000ebf60 000ec770 000ecb10",
    ),
    "002ccf80": (
        "void FUN_002ccf80(void)",
        "extern void FUN_002ccf80(void);",
        "002b5a00 002bbd20 002bd6f0 002bda80 002bdd50 002bfae0 002c1080 002c8d80",
    ),
    "0017ee90": (
        "undefined4 FUN_0017ee90(void)",
        "extern undefined4 FUN_0017ee90(void);",
        "0017ef90 0017f0c0 0017f0f0 0017f300",
    ),
    "001d59e0": (
        "void FUN_001d59e0(void)",
        "extern void FUN_001d59e0(void);",
        "00154780 001d0d40 001dc7b0",
    ),
    "00294270": (
        "undefined4 FUN_00294270(undefined4 *param_1)",
        "extern undefined4 FUN_00294270(undefined4 *guest_word);",
        "00294230",
    ),
}


def path_for(addr: str) -> Path:
    return (ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" /
            f"0x{addr}.cpp")


def check_identity(src: str, addr: str) -> None:
    if f"Entry: 0x{addr}" not in src:
        raise AssertionError(f"Missing original entry: {addr}")
    if not re.search(r"Input x86 body SHA-256: [0-9A-F]{64}", src):
        raise AssertionError(f"Missing original-body digest: {addr}")
    if "ABI_UNVERIFIED" not in src:
        raise AssertionError(f"Unverified ABI disclaimer lost: {addr}")


class DeclarationBatchTests(unittest.TestCase):
    def test_41_zero_explicit_argument_constructor_calls(self):
        self.assertEqual(len(CONSTRUCTOR_CALLERS), 41)
        self.assertEqual(len(set(CONSTRUCTOR_CALLERS)), 41)
        callee = path_for("001e0ef0").read_text(encoding="utf-8")
        self.assertIn("void FUN_001e0ef0(void)", callee)
        self.assertIn("unaff_ESI", callee)
        for addr in CONSTRUCTOR_CALLERS:
            with self.subTest(addr=addr):
                src = path_for(addr).read_text(encoding="utf-8")
                check_identity(src, addr)
                self.assertIn("extern void FUN_001e0ef0(void);", src)
                self.assertIn("FUN_001e0ef0();", src)

    @unittest.skipUnless(CLANGXX, "Clang C++17 needed for focused syntax check")
    def test_28_single_error_caller_drafts_pass_clang(self):
        self.assertEqual(sum(len(g[2].split()) for g in FOCUSED.values()), 28)
        for callee, (source_sig, declaration, addresses) in FOCUSED.items():
            callee_src = path_for(callee).read_text(encoding="utf-8")
            self.assertIn(source_sig, callee_src)
            for addr in addresses.split():
                with self.subTest(callee=callee, addr=addr):
                    file = path_for(addr)
                    source = file.read_text(encoding="utf-8")
                    check_identity(source, addr)
                    self.assertIn(declaration, source)
                    self.assertIn(f"FUN_{callee}(", source)
                    r = subprocess.run(
                        [CLANGXX, "-std=c++17", "-fsyntax-only", "-I",
                         str(ROOT / "include"), str(file)],
                        text=True, capture_output=True, check=False)
                    self.assertEqual(r.returncode, 0, r.stderr)


if __name__ == "__main__":
    unittest.main()
