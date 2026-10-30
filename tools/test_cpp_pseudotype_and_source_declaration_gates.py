#!/usr/bin/env python3
"""Source-identity and declaration regression gates; NOT Xbox ABI certification.

The historical Ghidra definitions are unchanged; these tests lock
source-level declarations and original body provenance while full C++17
syntax inventory separately measures how many drafts actually compile.
"""
from __future__ import annotations
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TYPE_FIXES = """
00012140 00012680 00012b40 00016030 00017b60 00018150
00018230 00018510 0001a420 0001adf0 0001afe0 0001b4b0
0001b650 0001b7a0 0001b910 0001ba10 0001ba60 0001bb30
0001bd90
""".split()
BYTE_QUERY = """
000efa70 000f2010 000f2330 000f42d0 000f6e80 000f6ed0
000f8080 000f9470 000f94c0 00106eb0 001ec340 001ec370
001ec480 001ec4d0 001ec5d0 001ed0a0 001ed100 001ed8b0
001edb30 001efa30 001eff70 001f0010
""".split()
CONSTRUCTORS = """
000eb470 000eb630 000eb6e0 000eb730 000eb860 000eb910
000eb9d0 000ebd10 000ebdc0 000ebf30 000ec050 000ec180
000ec2d0 000ec460 000ec5a0 000ec6e0 000ec910 000ec9d0
000ec9f0 000eca80 000ecb50
""".split()


def source(addr: str) -> str:
    path = ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"
    return path.read_text(encoding="utf-8")


class ConservativeSourceDeclarationTests(unittest.TestCase):
    def test_original_entry_and_body_provenance_retained(self):
        entries = TYPE_FIXES + BYTE_QUERY + CONSTRUCTORS
        self.assertEqual(len(entries), 62)
        self.assertEqual(len(set(entries)), 62)
        for addr in entries:
            with self.subTest(addr=addr):
                s = source(addr)
                self.assertRegex(s, r"(?i)\b0x" + addr + r"\b")
                self.assertRegex(
                    s, r"(?:Input x86 body SHA-256|Ghidra function-body SHA-256): [0-9A-F]{64}")

    def test_only_source_type_aliases_added_to_historical_drafts(self):
        for addr in TYPE_FIXES:
            with self.subTest(addr=addr):
                s = source(addr)
                self.assertIn('#include "bf_external_symbols.h"', s)
                self.assertIn('#include "bf_ghidra_types.h"', s)
                self.assertIn("original 32-bit x86 ABI is not established", s)

    def test_byte_query_callee_and_callsite_draft_declarations(self):
        callee = source("002e5880")
        self.assertIn("undefined1 FUN_002e5880(void)", callee)
        self.assertIn("in_ECX + 0x34", callee)
        for addr in BYTE_QUERY:
            with self.subTest(addr=addr):
                s = source(addr)
                self.assertIn("extern undefined1 FUN_002e5880(void);", s)
                self.assertIn("FUN_002e5880()", s)
                self.assertIn("ABI_UNVERIFIED", s)

    def test_constructor_callee_and_source_declarations(self):
        callee = source("00059b60")
        self.assertIn("void FUN_00059b60(void)", callee)
        self.assertIn("unaff_ESI", callee)
        for addr in CONSTRUCTORS:
            with self.subTest(addr=addr):
                s = source(addr)
                self.assertIn("extern void FUN_00059b60(void);", s)
                self.assertIn("FUN_00059b60()", s)
                self.assertIn("ABI_UNVERIFIED", s)

    def test_exact_second_stage_query_source_signatures(self):
        callee = source("002e5bf0")
        self.assertIn("undefined4 FUN_002e5bf0(int param_1)", callee)
        for addr in """000efa70 000f2010 000f2330 000f42d0
            000f6e80 000f6ed0 000f8080 000f9470 000f94c0
            00106eb0 001ec340""".split():
            with self.subTest(addr=addr):
                s = source(addr)
                self.assertIn("extern undefined4 FUN_002e5bf0(int guest_index);", s)
                self.assertIn("FUN_002e5bf0(0)", s)
                self.assertIn("ABI_UNVERIFIED", s)
        self.assertIn("uint FUN_00106600(void)", source("00106600"))
        for addr in "000f9470 000f94c0 00106eb0".split():
            with self.subTest(addr=addr):
                s = source(addr)
                self.assertIn("extern uint FUN_00106600(void);", s)
                self.assertIn("FUN_00106600()", s)

    def test_focused_clang_cpp17_after_two_source_declarations(self):
        # These minimal functions had only the two or three undeclared
        # symbols shown in the prior exact-tree audit; other unrelated
        # sources must not be claimed as passing.
        import shutil
        import subprocess
        compiler = shutil.which("clang++")
        if compiler is None:
            self.skipTest("clang++ not installed")
        for addr in "000efa70 000f6e80 001ec340 00106eb0".split():
            with self.subTest(addr=addr):
                file = ROOT / "src/main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"
                result = subprocess.run(
                    [compiler, "-std=c++17", "-fsyntax-only",
                     "-I", str(ROOT / "include"), str(file)],
                    capture_output=True, text=True, check=False)
                self.assertEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
