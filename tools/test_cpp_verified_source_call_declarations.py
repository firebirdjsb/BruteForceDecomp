#!/usr/bin/env python3
"""Bounded declaration and syntax checks; not Brute Force x86 ABI proof."""
from __future__ import annotations
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
THREE_EAX_UNUSED = "000794c0 0008e230 0008e3e0".split()
BA5B0 = """000adbc0 000b2230 000b2af0 000b4010 000b4df0 000b6cc0
000b9e80 000b9eb0 000b9f40 000bb2e0 000bb360 000bb4d0
000bbcb0 000bc470 000c2f80 000c3550 000c37a0 000c3a50
000c3d10 000c4550 000c48c0 000c67b0 000c7660""".split()
BYTE_HELPER = """001f8c90 001ff560 00200080 00200400 002014a0
00201e80 00202af0 00202d60 00202f40 00203550 002051a0
00206cb0 002077b0 00208a70 00209f40""".split()
SCALAR_DEFERRED = "001ff870 00207d80 0020a400 0020ada0".split()


def source(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


def raw(addr: str) -> str:
    return source(addr).read_text(encoding="utf-8")


class OriginalAddressSourceDeclarations(unittest.TestCase):
    def test_original_callee_types_retained(self):
        self.assertIn("int * FUN_001e97c0(void)", raw("001e97c0"))
        self.assertIn("undefined4 * FUN_000ba5b0(undefined4 *param_1)", raw("000ba5b0"))
        self.assertIn("char FUN_001fedb0(undefined4 param_1,int *param_2,byte *param_3)", raw("001fedb0"))

    def test_eax_discarding_callers_and_provenance(self):
        for addr in THREE_EAX_UNUSED:
            with self.subTest(addr=addr):
                s = raw(addr)
                self.assertIn("extern int * FUN_001e97c0(void);", s)
                self.assertIn("FUN_001e97c0();", s)
                self.assertIn("ABI_UNVERIFIED", s)
                self.assertIn("Input x86 body SHA-256:", s)

    @unittest.skipUnless(shutil.which("clang++"), "clang++ required")
    def test_three_focused_callers_parse_cpp17(self):
        compiler = shutil.which("clang++")
        for addr in THREE_EAX_UNUSED:
            with self.subTest(addr=addr):
                r = subprocess.run(
                    [compiler, "-std=c++17", "-fsyntax-only", "-I",
                     str(ROOT / "include"), str(source(addr))],
                    capture_output=True, text=True)
                self.assertEqual(r.returncode, 0, r.stderr)

    def test_23_object_constructor_callers(self):
        self.assertEqual(len(BA5B0), 23)
        for addr in BA5B0:
            with self.subTest(addr=addr):
                s = raw(addr)
                self.assertIn("extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);", s)
                self.assertEqual(s.count("FUN_000ba5b0("), 2)
                self.assertIn("ABI_UNVERIFIED", s)
                self.assertIn("Input x86 body SHA-256:", s)

    def test_15_byte_buffer_aliases(self):
        self.assertEqual(len(BYTE_HELPER), 15)
        for addr in BYTE_HELPER:
            with self.subTest(addr=addr):
                s = raw(addr)
                self.assertIn("extern char FUN_001fedb0(undefined4 flag, int *key, byte *data);", s)
                if addr != "00203550":
                    self.assertIn(
                        "FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3))",
                        s)
                else:
                    self.assertIn("FUN_001fedb0(param_1,param_2,param_3)", s)
                self.assertIn("ABI_UNVERIFIED", s)

    def test_unproved_scalar_guest_words_not_recast(self):
        for addr in SCALAR_DEFERRED:
            with self.subTest(addr=addr):
                s = raw(addr)
                self.assertNotIn("reinterpret_cast<byte *>(param_3)", s)


if __name__ == "__main__":
    unittest.main()
