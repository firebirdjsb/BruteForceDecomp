#!/usr/bin/env python3
"""Two signed-DWORD output callers and one callee interface: syntax, not 1:1."""
from __future__ import annotations

import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
BASE = ROOT / "src/main_unclassified/band_0010"
NOTE = "/* Signed DWORD output inferred from two XBE callers; implicit EAX ABI_UNVERIFIED. */\n"
DECL = NOTE + "extern void FUN_001013d0(int *param_1);\n"
CALLERS = {
    "00101510": ("ce0ef0868c9c2b429c66cd8a786ba9f2fc52c344",
                 "809866C26FFE6E3398215AF34FA0F34149B532F778BEDCFE5B205285D01BF110"),
    "00101590": ("1d09020f4a9d8b9f7962fd72e7432d05d1ac3406",
                 "EA23BACFBB5AE8E4B035DDC401867195202F6A2296455A23BCDAAC82584A31F8"),
}
CALLEE_BLOB = "3392bc5015d85ea1b972b6364a4b689c0239252d"
CALLEE_ORIGINAL = "C84AF7FCB0508E4C63BFD830E82E70FDCDDD6AB31E666940E8EFC7145D62A1C4"
OLD_SIGNATURE = "void FUN_001013d0(undefined4 *param_1)"
NEW_SIGNATURE = "void FUN_001013d0(int *param_1)"


def blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()


class SignedOutputContract(unittest.TestCase):
    def test_preimages_and_original_body_labels(self):
        for entry, (preimage, body_sha) in CALLERS.items():
            with self.subTest(entry=entry):
                src = (BASE / ("0x" + entry + ".cpp")).read_text()
                self.assertEqual(src.count(DECL), 1)
                self.assertEqual(blob_sha(src.replace(DECL, "", 1).encode()), preimage)
                self.assertIn("Entry: 0x" + entry, src)
                self.assertIn("Input x86 body SHA-256: " + body_sha, src)
                self.assertIn("FUN_001013d0(&local_10);", src)
                self.assertIn("int local_10;", src)
        callee = (BASE / "0x001013d0.cpp").read_text()
        self.assertEqual(callee.count(NEW_SIGNATURE), 1)
        self.assertEqual(blob_sha(callee.replace(NEW_SIGNATURE, OLD_SIGNATURE, 1).encode()), CALLEE_BLOB)
        self.assertIn("Input x86 body SHA-256: " + CALLEE_ORIGINAL, callee)
        for statement in ("*param_1 = uVar6;", "param_1[1] = local_c;",
                          "param_1[2] = uVar5;", "param_1[3] = local_4;"):
            self.assertIn(statement, callee)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_cpp17_o0_o2_and_missing_declaration_negatives(self):
        for entry in CALLERS:
            src = (BASE / ("0x" + entry + ".cpp")).read_text()
            for opt in ("-O0", "-O2"):
                with self.subTest(entry=entry, opt=opt):
                    cmd = [CLANGXX, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                           "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(cmd, input=src, text=True,
                                          capture_output=True, timeout=60)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = subprocess.run(cmd, input=src.replace(DECL, "", 1),
                                         text=True, capture_output=True, timeout=60)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn("FUN_001013d0", bad.stderr)
                    wrong = src.replace(DECL, NOTE +
                                        "extern void FUN_001013d0(undefined4 *param_1);\n", 1)
                    rejected = subprocess.run(cmd, input=wrong, text=True,
                                              capture_output=True, timeout=60)
                    self.assertNotEqual(rejected.returncode, 0)
                    self.assertIn("FUN_001013d0", rejected.stderr)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_partial_host_symbol_linkage_only(self):
        # A signature-matched shim tests C++ mangling, not the real callee body/ABI.
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            objects = []
            for entry in CALLERS:
                obj = root / (entry + ".o")
                cmd = [CLANGXX, "-std=c++17", "-O0", "-I", str(ROOT / "include"),
                       "-c", str(BASE / ("0x" + entry + ".cpp")), "-o", str(obj)]
                result = subprocess.run(cmd, capture_output=True, text=True, timeout=60)
                self.assertEqual(result.returncode, 0, result.stderr)
                objects.append(obj)
            shim = root / "shim.cpp"
            shim.write_text('#include "bf_ghidra_types.h"\nvoid FUN_001013d0(int *) {}\n')
            shim_obj = root / "shim.o"
            result = subprocess.run([CLANGXX, "-std=c++17", "-I", str(ROOT / "include"),
                                     "-c", str(shim), "-o", str(shim_obj)],
                                    capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stderr)
            combined = root / "combined.o"
            result = subprocess.run([CLANGXX, "-r", *(str(x) for x in objects),
                                     str(shim_obj), "-o", str(combined)],
                                    capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stderr)
            nm = subprocess.run(["nm", "-C", str(combined)], capture_output=True,
                                text=True, timeout=30)
            self.assertEqual(nm.returncode, 0, nm.stderr)
            self.assertIn("FUN_001013d0(int*)", nm.stdout)


if __name__ == "__main__":
    unittest.main()
