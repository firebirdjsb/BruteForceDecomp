#!/usr/bin/env python3
"""Twenty-six source-draft nullary edges: preserve original source and check C++17.

Syntax/host linkage is not evidence of original Xbox ABI or 1:1 runtime parity.
"""
from __future__ import annotations

import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
NOTE = "/* Callee-draft zero-argument edge only; original Xbox ABI_UNVERIFIED. */\n"
CASES = [["001e4810","001ca910","void","a939095e36278852bfebd1be975ddb9796497e70"],["001e8fd0","001e9000","undefined4","ead2489428d33307885bea79ff437a92ae5632e7"],["001f0cd0","001f1850","void","78cb730b979b1dacf08c99f1e7ab0b6a82465608"],["001f0ce0","001f19c0","void","6d7ffd5b9a4ba115de33d04b9cf24f7e769b4e4e"],["001fe370","001fe320","void","2b234bd93096f88307280ef25b67d9c9d3656b0f"],["001fe3d0","001fe320","void","0c70a5071fafc77920e62a8b459d28aa42e0cf5c"],["0024bc00","002481a0","void","a865fdeb10978526071c9be247d4e237edab3e68"],["0025e710","0025e640","void","5672afd1446b0d6f436a4b57dd5f3f30648f5cf5"],["00273740","00273790","void","a08f271e31cf8a8931a3a0c2c9603abd6391bbbc"],["0028a1d0","0028a4f0","void","b3659b82ebb42fad003ef17b772cecbbbdb642ae"],["002a28c0","00238300","void","70b5bc1549056ed0f3b7ba0326f3ca061fe1525f"],["002a8730","00238430","uint","3735dc26807c5e6e61caa4b1b2453b85094b7269"],["002b3280","002c0fc0","void","dde55574a89ce96c682afae05ff97dac4411e42d"],["002bbeb0","002bbf70","void","da2cc0ecc6cee932929043edd2e66f6646549746"],["002c01f0","002c0fc0","void","4daaadc4b096023bf29159a9f97b8fe858f2eace"],["002c44e0","002c41e0","void","f986c85e0d2af763bdc474d52f30865f5dd971de"],["002d62d0","002c9260","void","dbce4d7c7eb7eca1850ce3f863d9bdc5c82a1ecd"],["002db280","002dbb40","bool","c3e70517348447818a6beefad57d43e1679e52b9"],["002dd3f0","002c9260","void","7c065e3fd8a7689d2945221c32759e1be33e0948"],["002e2bb0","002e3f20","void","206789211a11111b409db4673c96b72e1c589219"],["002e4ef0","002e45a0","undefined4","2871632863942ddd4005ef417456114670de42db"],["002ff960","002ff790","int","737864478e7936499b6a78d28a43caf638d4a4ed"],["0030dec0","0003bd70","void","51d04e34f25706ca81b85497c226eb49d3cee30b"],["0030f800","000f3ed0","void","f45233260fcb80d48f975bc76edf50fec96e5cc7"],["0030f810","00105c50","void","a81e4f27b13fbda75159dd8079129bfd53f66bd9"],["00311780","00264f80","void","637c7c6df32bced30c06dd28d5fa3d13dd80794c"]]

def source(entry: str) -> Path:
    return ROOT / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")

def blob_sha(text: str) -> str:
    raw = text.encode("utf-8")
    return hashlib.sha1(b"blob " + str(len(raw)).encode() + b"\0" + raw).hexdigest()

class NullaryDraftEdges(unittest.TestCase):
    def test_provenance_and_source_draft_contracts(self):
        for caller, callee, return_type, original_blob in CASES:
            with self.subTest(caller=caller):
                text = source(caller).read_text(encoding="utf-8")
                declaration = NOTE + "extern " + return_type + " FUN_" + callee + "(void);\n"
                self.assertEqual(text.count(declaration), 1)
                original = text.replace(declaration, "", 1)
                self.assertEqual(blob_sha(original), original_blob)
                self.assertIn("Entry: 0x" + caller, original)
                self.assertIn("Input x86 body SHA-256:", original)
                self.assertIn("ABI_UNVERIFIED", original)
                self.assertIn("FUN_" + callee + "();", original)
                callee_src = source(callee).read_text(encoding="utf-8")
                pattern = r"(?m)^\s*" + re.escape(return_type) + r"\s+FUN_" + callee + r"\s*\(void\)"
                self.assertRegex(callee_src, pattern)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_cpp17_and_declaration_negative(self):
        for caller, callee, return_type, _ in CASES:
            text = source(caller).read_text(encoding="utf-8")
            declaration = NOTE + "extern " + return_type + " FUN_" + callee + "(void);\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, opt=opt):
                    cmd = [CLANGXX, "-std=c++17", opt, "-fsyntax-only",
                           "-I", str(ROOT / "include"), "-x", "c++", "-"]
                    good = subprocess.run(cmd, input=text, text=True, capture_output=True, timeout=45)
                    # Source-matched declaration is not a full-C++17 pass:
                    # record remaining diagnostics for the exact-tree sweep.
                    self.assertNotIn("undeclared identifier 'FUN_" + callee + "'", good.stderr)
                    self.assertNotIn("FUN_" + callee + " was not declared", good.stderr)
                    if good.returncode:
                        self.assertIn("error:", good.stderr)
                    bad = subprocess.run(cmd, input=text.replace(declaration, "", 1),
                                         text=True, capture_output=True, timeout=45)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn("FUN_" + callee, bad.stderr)

if __name__ == "__main__":
    unittest.main()
