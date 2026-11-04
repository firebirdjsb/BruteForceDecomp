#!/usr/bin/env python3
"""Source matched C++17 caller preflight; never implies Xbox 1:1 parity."""
from __future__ import annotations
import re
import shutil
import struct
import subprocess
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang++")
sys.path.insert(0, str(ROOT / "scripts"))
from verify_cpp_20261031_eleven_edges_xbe import BODIES, EDGES, target

CASES = (
    ("00228c10", "0021c380", "void FUN_0021c380(float param_1)"),
    ("0022f640", "00126f20", "void FUN_00126f20(int param_1,int param_2)"),
    ("002596e0", "00252c60", "void FUN_00252c60(void)"),
    ("002f19c9", "002f24b7", "void FUN_002f24b7(undefined4 param_1)"),
    ("002ee3e4", "002ee3a6", "void FUN_002ee3a6(uint param_1,int param_2)"),
    ("002f2fac", "002f2cca",
     "bool FUN_002f2cca(int param_1,undefined4 param_2,code *param_3,undefined4 param_4,undefined4 param_5,uint param_6)"),
    ("003118df", "003148cf", "undefined4 * FUN_003148cf(undefined4 param_1,uint param_2,int param_3)"),
    ("00314069", "00313e74", "int FUN_00313e74(uint param_1,undefined4 param_2,int param_3)"),
    ("003162ea", "00315e78", "void FUN_00315e78(uint param_1)"),
    ("003183ea", "003174e7", "void FUN_003174e7(void)"),
    ("00318408", "003183ea", "void FUN_003183ea(int param_1,int param_2)"),
)


def path(addr: str) -> Path:
    if int(addr, 16) >= 0x003118c0:
        return ROOT / "src/platform/audio_dsound" / f"0x{addr}.cpp"
    return ROOT / "src/main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


class OriginalCallEdgeSourceChecks(unittest.TestCase):
    def test_original_function_identity_and_source_definition(self):
        self.assertEqual(len(CASES), 11)
        self.assertEqual(len({caller for caller, _, _ in CASES}), 11)
        for caller, callee, sig in CASES:
            with self.subTest(caller=caller):
                a, b = path(caller).read_text(), path(callee).read_text()
                self.assertIn(f"Entry: 0x{caller}", a)
                self.assertIn(f"Entry: 0x{callee}", b)
                self.assertIn(f"Input x86 body SHA-256: {BODIES[int(caller, 16)][1]}", a)
                self.assertIn(f"Input x86 body SHA-256: {BODIES[int(callee, 16)][1]}", b)
                self.assertIn("ABI_UNVERIFIED", a)
                self.assertEqual(a.count("extern " + sig + ";"), 1)
                self.assertIn(f"FUN_{callee}(", a.replace("extern " + sig + ";", "", 1))
                strip = lambda s: re.sub(r"\s+", "", s)
                self.assertIn(strip(sig), strip(b))

    def test_x86_e8_fixture_and_negative_controls(self):
        self.assertEqual(len(EDGES), len(CASES))
        self.assertEqual(
            {(f"{c:08x}", f"{t:08x}") for c, _, t, _, _ in EDGES},
            {(c, t) for c, t, _ in CASES})
        for _, site, callee, _, _ in EDGES:
            with self.subTest(site=site):
                good = b"\xe8" + struct.pack("<i", callee - (site + 5))
                self.assertEqual(target(site, good), callee)
                with self.assertRaises(ValueError):
                    target(site, b"\xe9" + good[1:])
                self.assertNotEqual(target(site, good[:1] + bytes([good[1] ^ 1]) + good[2:]), callee)

    @unittest.skipUnless(CLANG, "clang++ required")
    def test_all_eleven_strict_cpp17_o0_o2(self):
        for caller, _, _ in CASES:
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    cp = subprocess.run(
                        [CLANG, "-std=c++17", "-x", "c++", opt, "-fsyntax-only",
                         "-ferror-limit=3", "-I", str(ROOT / "include"), str(path(caller))],
                        text=True, capture_output=True, timeout=60, check=False)
                    self.assertEqual(cp.returncode, 0, cp.stderr)

    @unittest.skipUnless(CLANG, "clang++ required")
    def test_wrong_argument_count_is_rejected(self):
        cp = subprocess.run(
            [CLANG, "-std=c++17", "-x", "c++", "-fsyntax-only", "-"],
            input="extern void FUN_00252c60(void); void f(){FUN_00252c60(42);}\n",
            capture_output=True, text=True, check=False)
        self.assertNotEqual(cp.returncode, 0)


if __name__ == "__main__":
    unittest.main()
