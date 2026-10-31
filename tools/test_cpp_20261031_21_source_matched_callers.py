#!/usr/bin/env python3
"""Declaration-only source regression. Xbox register ABI and behavior remain UNVERIFIED."""
import hashlib
import re
from pathlib import Path
import shutil
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
DS_NOTE = ("/* Source-matched draft declarations; original Xbox ECX and ABI_UNVERIFIED. */\n"
           "extern void FUN_003118f0(void);\nextern void FUN_00311923(void);\n")
MAIN_NOTE = ("/* Source-matched three-stack-word draft declaration; original Xbox ECX is ABI_UNVERIFIED. */\n"
             "extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);\n")
DS = (
    ("00315bfb", "382197bd2501646f484c221e29a5048c4e506190"),
    ("00315c8f", "58e08b6b6a6f7416fe3d77dd7895f8eff1f3cb97c"),
    ("00316110", "e082fc348d60b0c88ceab4fe37865977833ba89d"),
    ("00316147", "abf0a1bed4556d1f18e404af971f0f73fc2efdcd"),
    ("003175fd", "87d9c02b047c57428f5a5d665c41c269c82d5807"),
    ("00318072", "2553a59fe4ef2d7278071dfd8855e5ab0fa2e23a"),
    ("00318204", "48ff9cd907fab9156d4e1d1c358223a9d8fb9196"),
    ("00318da3", "e0931c68b664197cc0bbd5c9c2dcf16671355da3"),
    ("0031b8ca", "0d017c9a5e3ad38f05e699b1edb6d6be4b2545e0"),
    ("0031b901", "9a0e31e25efb64753fc4a341534f37c4c9b0b21e"),
    ("0031b938", "35bb5422de51f2aac1f1f67671600d56333f9f0b"),
    ("0031b993", "f1ace1236ebf631bb8fd68326a6fc5ed580a1e02"),
    ("0031c132", "392e7da07a301c87e53c814694ebbe8b52bff7d1"),
    ("0031c1f1", "47079b2e6f11c9584fcc6e049dbd09c2e33f1d50"),
)
MAIN = (
    ("001cfaa0", "d890b4fb2e450352cc4416f62fd9d04776902865"),
    ("00247ff0", "46664f57d57f600dc42ab96a2f07a66438fc4306"),
    ("002496b0", "ab8e752354e56e9a3ad4c484f87d7afa8bb25952"),
    ("00249740", "c93e0dfc0e6e0f606680d94638623c1b2426e743"),
    ("0024af50", "14753733dad520973956a1f04ec98ce65fa68cb2"),
    ("0024aff0", "f9a12d4db244edc02e84a9883e0234bb34361772"),
    ("0024bcf0", "13417f3b8faaf7da5487cb9a1da46ea4657a0621"),
)

def verify(addr, old_sha, note, text):
    if text.count(note) != 1 or f"Entry: 0x{addr}" not in text or "ABI_UNVERIFIED" not in text:
        raise ValueError("missing declaration or provenance: " + addr)
    if not re.search(r"Input x86 body SHA-256: [A-F0-9]{64}", text):
        raise ValueError("original body digest label missing: " + addr)
    before = text.replace(note, "", 1).encode("utf-8")
    actual = hashlib.sha1(b"blob " + str(len(before)).encode() + b"\0" + before).hexdigest()
    if actual != old_sha:
        raise ValueError("source body or declarations changed: " + addr)

class SourceMatched21(unittest.TestCase):
    def all_cases(self):
        for a,h in DS:
            yield a,h,DS_NOTE,ROOT / "src/platform/audio_dsound" / f"0x{a}.cpp"
        for a,h in MAIN:
            yield a,h,MAIN_NOTE,ROOT / "src/main_unclassified" / ("band_" + a[:4]) / f"0x{a}.cpp"

    def test_provenance(self):
        self.assertEqual(len(DS) + len(MAIN),21)
        for a,h,n,p in self.all_cases():
            with self.subTest(entry=a):
                verify(a,h,n,p.read_text(encoding="utf-8"))

    def test_strict_cpp17_o0_o2(self):
        exe=shutil.which("clang++")
        if not exe: self.skipTest("clang++ unavailable")
        for a,h,n,p in self.all_cases():
            for level in ("-O0","-O2"):
                with self.subTest(entry=a,opt=level):
                    cmd=[exe,"-std=c++17","-x","c++","-fsyntax-only","-ferror-limit=3",level,"-I",str(ROOT/"include"),str(p)]
                    run=subprocess.run(cmd,text=True,capture_output=True,timeout=60)
                    self.assertEqual(run.returncode,0,run.stderr)

    def test_negative_controls(self):
        a,h,n,p=next(self.all_cases())
        original=p.read_text(encoding="utf-8")
        for mutated in (original.replace("ABI_UNVERIFIED","ABI_VERIFIED"),
                        original.replace("Input x86 body SHA-256:","Input x86 body SHA-255:"),
                        original.replace("FUN_003118f0();","FUN_003118f0(0);")):
            with self.assertRaises(ValueError):
                verify(a,h,n,mutated)

if __name__ == "__main__":
    unittest.main()
