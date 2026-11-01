#!/usr/bin/env python3
"""Two four-byte output slot caller repairs, limited to C++17 and host symbol resolution.

The retail XBE is not present in CI; original register/stack ABI, guest memory,
vtable semantics, cross-function behavior and native-PC playability remain unverified.
"""
from __future__ import annotations

import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
CALLEE = ROOT / "src/main_unclassified/band_000e/0x000e0350.cpp"
CALLEE_SHA256 = "6f92de717ad61cf189ede05c373e7908372e359e99354dce4456efd937f30f9f"
NOTE = "/* Source-matched four-byte output interface; original Xbox guest ABI remains ABI_UNVERIFIED. */\n"
DECL = "extern undefined4 *FUN_000e0350(int param_1,undefined4 *param_2,undefined4 guest_stack_word_3);\n"
SLOT = "undefined4 local_4; /* One guest DWORD; callee writes all four bytes. */"
CALL = "FUN_000e0350(*(int *)(unaff_ESI + 8),&local_4,unaff_ESI)"
CASES = (
    ("0014a170", "0814fdcf46cd27c74ff871c6c4a1941a4ca9aa29a425c4871090dfee701e0326",
     "D1BB50219D8E51B1B21BADD057A89E2C03DFB96C0617CD32FCA146B4E41574F9"),
    ("001562d0", "53a1cae6c2862b0a32e6f9a2dda94dac0af1ce196f2c5ddb512a20d5ab665a9b",
     "2E7FF950076DB49DB1D8DFA1EEDEBBE9354BE5285BD992249F4F6DF3C6E97442"),
)


def source_path(entry: str) -> Path:
    return ROOT / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")


def sha256(text: str) -> str:
    return hashlib.sha256(text.encode("utf-8")).hexdigest()


def restore_preimage(text: str) -> str:
    if text.count(NOTE + DECL) != 1 or text.count(SLOT) != 1 or text.count(CALL) != 1:
        raise ValueError("expected single approved output-slot repair")
    return (text.replace(NOTE + DECL, "", 1)
                .replace(SLOT, "undefined1 local_4 [4];", 1)
                .replace(CALL, CALL.replace("&local_4", "local_4"), 1))


class CallerDwordSourceGates(unittest.TestCase):
    def test_original_identity_and_callee_draft(self):
        callee = CALLEE.read_text(encoding="utf-8")
        self.assertEqual(sha256(callee), CALLEE_SHA256)
        self.assertIn("undefined4 * FUN_000e0350(int param_1,undefined4 *param_2,undefined4 guest_stack_word_3)", callee)
        self.assertIn("*param_2 = *(undefined4 *)", callee)
        self.assertIn("return param_2;", callee)
        for entry, original_source, xbe_body in CASES:
            with self.subTest(entry=entry):
                src = source_path(entry).read_text(encoding="utf-8")
                self.assertIn("Entry: 0x" + entry, src)
                self.assertIn("Input x86 body SHA-256: " + xbe_body, src)
                self.assertIn("ABI_UNVERIFIED", src)
                self.assertEqual(sha256(restore_preimage(src)), original_source)

    def test_source_mutation_controls(self):
        """A declaration-only pass cannot hide changes to original source or provenance."""
        for entry, expected_preimage, _ in CASES:
            src = source_path(entry).read_text(encoding="utf-8")
            for label, changed in (
                ("body", src.replace("*(undefined4 *)(unaff_ESI + 0x14) = *",
                                     "*(undefined4 *)(unaff_ESI + 0x18) = *", 1)),
                ("digest", src.replace("Input x86 body SHA-256:", "Input x86 body SHA-255:", 1)),
                ("abi", src.replace("ABI_UNVERIFIED", "ABI_VERIFIED", 1)),
            ):
                with self.subTest(entry=entry, mutation=label):
                    self.assertNotEqual(changed, src)
                    self.assertNotEqual(sha256(restore_preimage(changed)), expected_preimage)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_cpp17_o0_o2_and_mutation_negatives(self):
        for entry, *_ in CASES:
            src = source_path(entry).read_text(encoding="utf-8")
            for opt in ("-O0", "-O2"):
                with self.subTest(entry=entry, opt=opt):
                    cmd = [CLANGXX, "-std=c++17", opt, "-fsyntax-only",
                           "-I", str(ROOT / "include"), "-x", "c++", "-"]
                    good = subprocess.run(cmd, input=src, text=True, capture_output=True, timeout=60)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    for label, bad in (
                        ("undeclared", src.replace(NOTE + DECL, "", 1)),
                        ("wrong_slot", src.replace(SLOT, "undefined1 local_4 [4];", 1)),
                        ("wrong_signature", src.replace(DECL, "extern void FUN_000e0350(int,undefined4 *,undefined4);\n", 1)),
                    ):
                        result = subprocess.run(cmd, input=bad, text=True, capture_output=True, timeout=60)
                        self.assertNotEqual(result.returncode, 0, label + ": negative unexpectedly passed")

    @unittest.skipUnless(CLANGXX and shutil.which("nm"), "host C++ and nm required")
    def test_partial_host_symbol_link_only(self):
        """Check matching C++ symbols, NOT Xbox ABI, full linkage or game behavior."""
        with tempfile.TemporaryDirectory() as tmp:
            objects = []
            for i, src in enumerate((CALLEE, *(source_path(row[0]) for row in CASES))):
                obj = Path(tmp) / ("fn" + str(i) + ".o")
                cmd = [CLANGXX, "-std=c++17", "-O0", "-I", str(ROOT / "include"),
                       "-c", str(src), "-o", str(obj)]
                result = subprocess.run(cmd, text=True, capture_output=True, timeout=90)
                self.assertEqual(result.returncode, 0, result.stderr)
                objects.append(str(obj))
            linked = Path(tmp) / "partial.o"
            result = subprocess.run([CLANGXX, "-r", *objects, "-o", str(linked)],
                                    text=True, capture_output=True, timeout=90)
            self.assertEqual(result.returncode, 0, result.stderr)
            syms = subprocess.run([shutil.which("nm"), "-C", str(linked)],
                                  text=True, capture_output=True, timeout=30)
            self.assertEqual(syms.returncode, 0, syms.stderr)
            target = "FUN_000e0350("
            definitions = [line for line in syms.stdout.splitlines() if target in line and " T " in line]
            unresolved = [line for line in syms.stdout.splitlines() if target in line and " U " in line]
            self.assertEqual(len(definitions), 1, syms.stdout)
            self.assertFalse(unresolved, syms.stdout)


if __name__ == "__main__":
    unittest.main()
