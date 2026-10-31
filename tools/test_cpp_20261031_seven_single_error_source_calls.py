#!/usr/bin/env python3
"""Seven exact-one-diagnostic source-only C++17 repairs; Xbox ABI_UNVERIFIED."""
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
    ("0033c53d", "0033bd35", "void FUN_0033bd35(void)", "d2e671bb1afe3ba7900b38800f47fef16e989be1", "e3abea9a108ec1865cda168065164ddf3362fa1d", "e2f84ed3630ce69e35b23dd68ebcaf1891efedd0fbf8d45a90df790fef9de445", "657BDA6D4FDA494E528E9EAFE7B6F70CA0AED1E50C2972992084C8AE0256FEC9"),
    ("0033d3df", "0033d057", "undefined4 FUN_0033d057(int param_1,undefined4 param_2)", "13f5a1bfab9e2a289588a9e7b43d0028291cec62", "a25f95f89e739b02787d9c19081a331d6e073be8", "63d9f94331642dcb0b85b190eee65e9d8c639ab11914490679e8275bccc0cfe3", "C7A370F0D0614DD058048DB5C07A721C92A0B576769388D307CFA5C2925D4C60"),
    ("0033e9f8", "002f6e31", "ushort * FUN_002f6e31(int param_1,uint param_2,uint param_3)", "644cadade4c59515fcb7b083fce47bd7c009fca8", "f63462188dbb0a3487f9320512b4f5dee24a080b", "ccedd8338063dbf5c49e33acebd950f560e37e1c261f46612ca25679cfda15af", "B4649BFF3B3898625A7DAD5A09D4A7DCF7F0788D8E51DC7D9DFB85133B41D4A4"),
    ("0033ea0c", "002f6e31", "ushort * FUN_002f6e31(int param_1,uint param_2,uint param_3)", "eb18e7c650f82d4cac65350a72ac9c148a636e88", "f63462188dbb0a3487f9320512b4f5dee24a080b", "ec891a829591c3b820c0bab5b23227024271f96a48385c6fc3cb2ce0470baa7f", "55AE299D10628E2FBA01B36DB18EE5817A648A07A3CDB79C3086D7AA6AB53D35"),
    ("002f77f9", "002f6e31", "ushort * FUN_002f6e31(int param_1,uint param_2,uint param_3)", "d988b70e4f105c27b51af3154643c23ad88eae6e", "f63462188dbb0a3487f9320512b4f5dee24a080b", "8039a76dff70db63bab328fc3f37238cd1635a25ec44289b1405286923c1a015", "77C0F10A971D18C3F31E2276F6E8824A2082D741CE32B2E3B946893F44584844"),
    ("002f7816", "002f75e8", "undefined1 FUN_002f75e8(int param_1,uint param_2,int param_3)", "6685100cd300dc52a33e609d80ab982449c91e2f", "cdcfb6bf1c21281da32b38306a75ad605e5450a7", "643cb9c8861f18dc3153a028bfaa8c16eeddaf8801b3bb53f2f45b155e199009", "DF6C6D3158AD46590B965143FE36425ED6AA5051BD40F044888A7DAEB6A4C98F"),
    ("002f81e8", "002f7a1b", "int FUN_002f7a1b(undefined4 param_1,int param_2)", "040d60f1b276bca903214c17e1c27d1ece0b20b0", "1447f113f786c7397e40f123e79dc498f3090dc2", "136a6a0272734930bcbd7c595713a796457f756927706bd590988099a6aaeaa5", "30A9A6DD0FF3B1EB3DF69B93EF8ACE0573F5AC978522F951E2CCF898DE2D3A1C"),
)


def source_path(entry: str) -> Path:
    addr = int(entry, 16)
    if 0x00330020 <= addr < 0x00344F20:
        return ROOT / "src" / "platform" / "online_xonline" / ("0x" + entry + ".cpp")
    return ROOT / "src" / "main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")


def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\0" + data).hexdigest()


class SevenSourceOnlySingleDiagnosticCalls(unittest.TestCase):
    def test_provenance_and_unchanged_original_bodies(self):
        self.assertEqual(len(CASES), 7)
        for caller, callee, signature, caller_blob, callee_blob, source_sha256, body_sha256 in CASES:
            with self.subTest(caller=caller):
                src = source_path(caller).read_text(encoding="utf-8")
                target = source_path(callee).read_text(encoding="utf-8")
                declaration = NOTE + "\nextern " + signature + ";\n"
                self.assertEqual(src.count(declaration), 1)
                self.assertEqual(src.count("FUN_" + callee + "("), 2)
                original = src.replace(declaration, "", 1).encode("utf-8")
                self.assertEqual(git_blob_sha(original), caller_blob)
                self.assertEqual(hashlib.sha256(original).hexdigest(), source_sha256)
                self.assertEqual(git_blob_sha(target.encode("utf-8")), callee_blob)
                self.assertIn(signature, target)
                self.assertIn("Entry: 0x" + caller, src)
                self.assertIn("Input x86 body SHA-256: " + body_sha256, src)
                self.assertIn("ABI_UNVERIFIED", src)

    def test_clang17_o0_o2_and_declaration_removal_negative(self):
        self.assertIsNotNone(CLANGXX, "clang++ is required for the C++17 gate")
        for caller, callee, signature, *_ in CASES:
            src = source_path(caller).read_text(encoding="utf-8")
            declaration = NOTE + "\nextern " + signature + ";\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    argv = [CLANGXX, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                            "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(argv, input=src, text=True, capture_output=True,
                                          timeout=60, check=False)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = subprocess.run(argv, input=src.replace(declaration, "", 1),
                                         text=True, capture_output=True, timeout=60, check=False)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn("FUN_" + callee, bad.stderr)


if __name__ == "__main__":
    unittest.main()
