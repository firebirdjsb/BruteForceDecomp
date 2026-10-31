#!/usr/bin/env python3
"""Five draft-only DirectSound declaration checks. Does NOT certify Xbox ABI."""
from __future__ import annotations

import hashlib
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
NOTICE = "/* C++17 source-matched declaration only; original Xbox ABI_UNVERIFIED. */"
CASES = (
    ("00318786", "00317e2d", "void FUN_00317e2d(void)", "88a7e7eb1548d4735dc6168c161279458c054d4d", "D70B41B7C3AEDDB6646E9EB9CFEB92D1DB3D496AFBCA0F9DCF38933DF422A4E6"),
    ("003193ba", "00316300", "void FUN_00316300(int param_1)", "876396bf44a99e20fb621f3431489f8f51c2ab64", "74C5ED9F446B5D4AC7987A4218B869E4DB5A7AFADC2CC1CEA7BC23A43932E7CB"),
    ("0031987c", "00319589", "int FUN_00319589(void)", "7e72eb97930ce8dbc5eb8ac5fe7d11308829a41f", "19570A2AF28625B601F1488A30FA9A02D310268B724FA75B328E8066FD5DA4CD"),
    ("0031c0fd", "0031c06c", "undefined4 FUN_0031c06c(void)", "648390755a51b9302716b27e19f658f5a83ed020", "11988D4F45100F86BBD579CBE5143DBC97386956073EEA0615C7FC1B6217066D"),
    ("0031c7bf", "0031c741", "void FUN_0031c741(void)", "7a43351118db6ab7742a92c5b47683d668dc6593", "7345F904F049745850728B95C303B396E5DFC2452492080DD1117E60630CEFCD"),
)

def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\0" + data).hexdigest()

class SourceOnlyDSoundFive(unittest.TestCase):
    def test_decl_is_exact_draft_match_and_original_body_preserved(self):
        self.assertEqual(len(CASES), 5)
        for caller, callee, signature, before_blob, body_sha in CASES:
            with self.subTest(caller=caller):
                p = ROOT / "src/platform/audio_dsound" / ("0x" + caller + ".cpp")
                original = p.read_text(encoding="utf-8")
                decl = NOTICE + "\nextern " + signature + ";\n"
                self.assertEqual(original.count(decl), 1)
                before = original.replace(decl, "", 1).encode("utf-8")
                self.assertEqual(git_blob_sha(before), before_blob)
                self.assertIn("Entry: 0x" + caller, original)
                self.assertIn("Input x86 body SHA-256: " + body_sha, original)
                self.assertIn("ABI_UNVERIFIED", original)
                other = (ROOT / "src/platform/audio_dsound" / ("0x" + callee + ".cpp")).read_text(encoding="utf-8")
                self.assertIn(signature, other)
                self.assertEqual(original.count("FUN_" + callee + "("), 2)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_cpp17_o0_o2_and_missing_declaration_negative_controls(self):
        for caller, callee, signature, _, _ in CASES:
            source = (ROOT / "src/platform/audio_dsound" / ("0x" + caller + ".cpp")).read_text(encoding="utf-8")
            decl = NOTICE + "\nextern " + signature + ";\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    cmd = [CLANGXX, "-std=c++17", opt, "-fsyntax-only",
                           "-x", "c++", "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(cmd, input=source, text=True, capture_output=True,
                                          timeout=40, check=False)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = subprocess.run(cmd, input=source.replace(decl, "", 1),
                                         text=True, capture_output=True, timeout=40, check=False)
                    self.assertNotEqual(bad.returncode, 0, "negative control unexpectedly compiled")
                    self.assertIn("FUN_" + callee, bad.stderr)

if __name__ == "__main__":
    unittest.main()
