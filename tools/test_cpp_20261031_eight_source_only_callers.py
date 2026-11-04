#!/usr/bin/env python3
"""Source-only C++17 declaration regression; NOT original Xbox ABI evidence."""
import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
NOTE = "/* Source-matched draft declaration only; original Xbox ABI_UNVERIFIED. */\n"
# Caller, callee, source-matched Ghidra draft signature, original Git blob SHA.
CASES = (
    ("00161620", "00160050", "void FUN_00160050(void)", "3cdcd2dc942b260814ddb4fcde9ef20374e53eb2"),
    ("00161660", "00160180", "void FUN_00160180(void)", "15919f0057b9aaafd301f140f9357603c3044c80"),
    ("00161680", "00160220", "void FUN_00160220(void)", "49268b96f1a89f603717b9e67d64a0dcb05eb0fe"),
    ("00161720", "001604c0", "void FUN_001604c0(void)", "09de4f4a1d36c0eb52af41273757617586667424"),
    ("001dd290", "001e0dd0", "int FUN_001e0dd0(int param_1)", "74a44730725f9e9378e2ad69a18b6977bab3652b"),
    ("00289d40", "0028a460", "void FUN_0028a460(void)", "b86f5260ea32fa8392cc08e7bd3a2123e934a1c9"),
    ("002a8930", "002a5bd0", "void FUN_002a5bd0(int param_1)", "9e959f48595ab19ef731f8478d5eb40abe26f050"),
    ("002aa750", "002a5bd0", "void FUN_002a5bd0(int param_1)", "cc0681f666530eb9774fefdb08517dcd806081fb"),
)


def path(addr):
    return ROOT / "src/main_unclassified" / ("band_" + addr[:4]) / ("0x" + addr + ".cpp")


def verify(addr, callee, signature, old_sha, text):
    declaration = NOTE + "extern " + signature + ";\n"
    if text.count(declaration) != 1 or text.count("FUN_" + callee + "(") != 2:
        raise ValueError("declaration or call count changed: " + addr)
    if "Entry: 0x" + addr not in text or "ABI_UNVERIFIED" not in text:
        raise ValueError("identity or ABI warning lost: " + addr)
    if not re.search(r"Input x86 body SHA-256: [0-9A-F]{64}", text):
        raise ValueError("body provenance lost: " + addr)
    raw = text.replace(declaration, "", 1).encode("utf-8")
    digest = hashlib.sha1(b"blob " + str(len(raw)).encode() + b"\0" + raw).hexdigest()
    if digest != old_sha:
        raise ValueError("original draft bytes changed: " + addr)


class SourceOnlyEight(unittest.TestCase):
    def test_source_and_callee_draft(self):
        self.assertEqual(len(CASES), 8)
        for addr, callee, signature, old_sha in CASES:
            with self.subTest(addr=addr):
                verify(addr, callee, signature, old_sha, path(addr).read_text())
                callee_text = path(callee).read_text()
                self.assertIn("Entry: 0x" + callee, callee_text)
                compact = lambda s: re.sub(r"\s+", "", s)
                self.assertIn(compact(signature), compact(callee_text))

    def test_clang_cpp17_o0_o2(self):
        clang = shutil.which("clang++")
        if not clang:
            self.skipTest("clang++ unavailable")
        for addr, _, _, _ in CASES:
            for opt in ("-O0", "-O2"):
                with self.subTest(addr=addr, opt=opt):
                    p = subprocess.run([clang, "-std=c++17", "-x", "c++", "-fsyntax-only",
                                        "-ferror-limit=3", opt, "-I", str(ROOT / "include"),
                                        str(path(addr))], capture_output=True, text=True, timeout=60)
                    self.assertEqual(p.returncode, 0, p.stderr)

    def test_negative_controls(self):
        args = CASES[0]
        good = path(args[0]).read_text()
        for bad in (good.replace("ABI_UNVERIFIED", "ABI_VERIFIED"),
                    good.replace("FUN_00160050();", "FUN_00160050(0);"),
                    good.replace("extern void FUN_00160050(void);", "extern void FUN_00160050(int);"),
                    good.replace("Input x86 body SHA-256:", "Input x86 body SHA-255:")):
            with self.assertRaises(ValueError):
                verify(*args, bad)


if __name__ == "__main__":
    unittest.main()
