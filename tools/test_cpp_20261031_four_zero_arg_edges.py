#!/usr/bin/env python3
"""Four exact source-matched call declarations: C++17 and partial host symbol gate.

These are Ghidra draft interfaces only, not proof of Xbox calling conventions,
guest register inputs, guest memory, native-PC linkage or 1:1 runtime semantics.
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
NOTE = "/* Source-matched callee draft; original Xbox register/stack ABI_UNVERIFIED. */\n"
CASES = (
    ("000d6490", "00087dd0", "undefined4 *FUN_00087dd0(void)",
     "a75cedb7b833df48ce01e1ea6eb0083131c1b208",
     "445c16cedfd66d5a9de724cb2144b4e51bf7b261",
     "08681C6878BB17D650511E7914922E67C0ED0118083FD181561E0F358AFCDE75"),
    ("000efdf0", "00102000", "undefined4 FUN_00102000(void)",
     "9bb11864ee4561ca01afcb0ce943075ba5d5162d",
     "de8c2b27ec760abbfad88e9919541c5450e5d20c",
     "19EC933135B3828E0FF8310B33D636CF7C601E209F056556EE6A1FFD9B752872"),
    ("000f6c60", "000f6b70", "int FUN_000f6b70(void)",
     "b6631096521c27083402319c3b0cfe312917825c",
     "e0942eea6655f328e2588d65503a3d23102f1ff9",
     "D0A2FDE62D08047F9E94041DC4218B63B1DE1FFC103690F1E0AE74780D06C197"),
    ("000f6cc0", "000f6b70", "int FUN_000f6b70(void)",
     "55ebaf5c071f45f819c55e3fe6948557ee420975",
     "e0942eea6655f328e2588d65503a3d23102f1ff9",
     "64D6F0CAD8E7ABA2C55144237E06BD990F317A9EE45F52FA0E10F4E2887B1DEE"),
)


def path(entry: str) -> Path:
    return ROOT / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")


def git_blob_sha(text: str) -> str:
    raw = text.encode("utf-8")
    return hashlib.sha1(b"blob " + str(len(raw)).encode() + b"\0" + raw).hexdigest()


class FourDraftOnlyCallEdges(unittest.TestCase):
    def test_original_bodies_and_exact_callee_drafts(self):
        for caller, callee, signature, caller_blob, callee_blob, body_digest in CASES:
            with self.subTest(caller=caller):
                src = path(caller).read_text(encoding="utf-8")
                target = path(callee).read_text(encoding="utf-8")
                inserted = NOTE + "extern " + signature + ";\n"
                self.assertEqual(src.count(inserted), 1)
                self.assertIn("FUN_" + callee + "(", src)
                self.assertEqual(git_blob_sha(src.replace(inserted, "", 1)), caller_blob)
                self.assertEqual(git_blob_sha(target), callee_blob)
                self.assertIn(signature.replace(" *FUN_", " * FUN_"), target)
                self.assertIn("Entry: 0x" + caller, src)
                self.assertIn("Input x86 body SHA-256: " + body_digest, src)
                self.assertIn("ABI_UNVERIFIED", src)

    def test_provenance_mutations_are_rejected(self):
        for caller, callee, signature, caller_blob, *_ in CASES:
            src = path(caller).read_text(encoding="utf-8")
            inserted = NOTE + "extern " + signature + ";\n"
            original = src.replace(inserted, "", 1)
            self.assertEqual(git_blob_sha(original), caller_blob)
            for label, changed in (
                ("body", original.replace("FUN_" + callee + "(",
                                          "FUN_deadbeef(", 1)),
                ("digest", original.replace("Input x86 body SHA-256:",
                                            "Input x86 body SHA-255:", 1)),
                ("abi", original.replace("ABI_UNVERIFIED", "ABI_VERIFIED", 1)),
            ):
                with self.subTest(caller=caller, mutation=label):
                    self.assertNotEqual(original, changed)
                    self.assertNotEqual(git_blob_sha(changed), caller_blob)

    @unittest.skipUnless(CLANGXX, "clang++ required for strict checks")
    def test_cpp17_o0_o2_and_missing_declaration_controls(self):
        for caller, callee, signature, *_ in CASES:
            src = path(caller).read_text(encoding="utf-8")
            inserted = NOTE + "extern " + signature + ";\n"
            for opt in ("-O0", "-O2"):
                cmd = [CLANGXX, "-std=c++17", opt, "-fsyntax-only",
                       "-I", str(ROOT / "include"), "-x", "c++", "-"]
                with self.subTest(caller=caller, opt=opt):
                    good = subprocess.run(cmd, input=src, text=True, capture_output=True, timeout=60)
                    # This batch fixes the *direct* callee declaration only.
                    # The original draft's indirect virtual calls still have
                    # unsupported arities. Do not claim a syntax pass here.
                    self.assertNotEqual(good.returncode, 0)
                    self.assertIn("too many arguments to function call", good.stderr)
                    self.assertNotIn("undeclared identifier 'FUN_" + callee + "'", good.stderr)
                    bad = subprocess.run(cmd, input=src.replace(inserted, "", 1),
                                         text=True, capture_output=True, timeout=60)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn("FUN_" + callee, bad.stderr)

    @unittest.skip("callers have unverified indirect-call signatures; host linkage not established")
    @unittest.skipUnless(CLANGXX and shutil.which("nm"), "host linker unavailable")
    def test_shared_callee_relocatable_symbol_link_only(self):
        """Only 0x000F6B70's host symbol edge; no guest ABI/runtime claim."""
        sources = [path("000f6b70"), path("000f6c60"), path("000f6cc0")]
        with tempfile.TemporaryDirectory() as tmp:
            objpaths = []
            for i, source in enumerate(sources):
                obj = Path(tmp) / ("source" + str(i) + ".o")
                result = subprocess.run(
                    [CLANGXX, "-std=c++17", "-O0", "-I", str(ROOT / "include"),
                     "-c", str(source), "-o", str(obj)],
                    text=True, capture_output=True, timeout=90)
                self.assertEqual(result.returncode, 0, result.stderr)
                objpaths.append(str(obj))
            merged = Path(tmp) / "partial.o"
            result = subprocess.run([CLANGXX, "-r", *objpaths, "-o", str(merged)],
                                    text=True, capture_output=True, timeout=90)
            self.assertEqual(result.returncode, 0, result.stderr)
            nm = subprocess.run([shutil.which("nm"), "-C", str(merged)],
                                text=True, capture_output=True, timeout=30)
            self.assertEqual(nm.returncode, 0, nm.stderr)
            symbol = "FUN_000f6b70()"
            defs = [line for line in nm.stdout.splitlines() if symbol in line and " T " in line]
            unresolved = [line for line in nm.stdout.splitlines() if symbol in line and " U " in line]
            self.assertEqual(len(defs), 1, nm.stdout)
            self.assertFalse(unresolved, nm.stdout)


if __name__ == "__main__":
    unittest.main()
