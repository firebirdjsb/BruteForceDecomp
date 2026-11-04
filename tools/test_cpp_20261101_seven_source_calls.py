#!/usr/bin/env python3
"""Seven source-proven C++17 direct-call declarations; NOT original Xbox ABI proof."""
from __future__ import annotations
import hashlib
import shutil
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from source_layout import source_path

NOTE = "/* Source-matched callee drafts; implicit Xbox register/stack ABI_UNVERIFIED. */"
# Caller: audited original source SHA256, original x86 body SHA256, callee draft signatures.
CASES = {
  "000f47f0": [
    "a2f1e0fe0cedabc7c268dc867a716d9d4498195aa7c89c1165c692193a434a27",
    "B10CC87DED519AAB56FB7BCD6917123D8A10BAA26D12C16A4888DE0519BBC974",
    [
      "void FUN_00105840(void)",
      "undefined1 FUN_000efbb0(void)",
      "undefined4 FUN_000efb40(void)"
    ]
  ],
  "000f7920": [
    "a9005d1873df197883a5d2e3b5caa477939f3f3fa34e464eeb0b9b057b7d61ad",
    "3132DC2715D4E1756F00B31FA5F11293331E14736FE9BA96D2D2E969CE60DE10",
    [
      "undefined4 FUN_001020d0(void)",
      "undefined4 FUN_0008a460(void)",
      "void FUN_0010c7d0(void)"
    ]
  ],
  "000fdb40": [
    "f4ecc0dccabd1ff14fe691d34f98ba7080e5cbb74035aff5683881b840aef61a",
    "2006A5253D6C80C85615ECD0934475A6F17CDE434DA0D0D47EF320DFCD373BC5",
    [
      "void FUN_000fdba0(void)",
      "void FUN_0010bc40(void)"
    ]
  ],
  "0010a240": [
    "d1bb78a29df2fbb461d81b4c7cb90aa5ef6610f150fb639f4c5d4ccad9c227b9",
    "28F963FEB0492759B59A5C95A69F604DC6F7797F1C5523E3C6DBE35168070D1B",
    [
      "void FUN_0010a7d0(void)"
    ]
  ],
  "0010fe80": [
    "8ca217b2c959bd1fddaf1f64ab7c46d3100d81a0f48d7feb782b806169e58e74",
    "DF795C51D658EA6F9D07209B450C48FE8287FD46141322E153F4F1C8B48D63E1",
    [
      "undefined4 FUN_000ba140(void)"
    ]
  ],
  "001d1c60": [
    "34b87b3864f3ab1c7dffc5aac826645db4daf5dee2dec2c13e4c9e371964cdae",
    "7811F0BA74F863123EA24E07A6160C04894DF960226D3453239A09B6840C0594",
    [
      "void FUN_0010bc40(void)"
    ]
  ],
  "001e0710": [
    "5f932a7209633d66d116f9e8a1569db6371f1dbe950e3f2c41f46b57e6e6afb8",
    "4CA6E7CBF02C4DEBA9E5E6EA610782D91984EBD56323F3852A087E78F4D8C2D2",
    [
      "void FUN_001d3530(void)",
      "void FUN_0010bc40(void)"
    ]
  ]
}

def block(signatures):
    return NOTE + "\n" + "".join("extern " + s + ";\n" for s in signatures)

class SourceMatchedDirectCallBatch(unittest.TestCase):
    def test_identity_and_unchanged_original_source(self):
        self.assertEqual(len(CASES), 7)
        for entry, (original_sha, body_sha, signatures) in CASES.items():
            with self.subTest(entry=entry):
                source = source_path(ROOT, "0x" + entry).read_text(encoding="utf-8")
                addition = block(signatures)
                self.assertEqual(source.count(addition), 1)
                original = source.replace(addition, "", 1)
                self.assertEqual(hashlib.sha256(original.encode()).hexdigest(), original_sha)
                self.assertIn("Entry: 0x" + entry, source)
                self.assertIn("Input x86 body SHA-256: " + body_sha, source)
                self.assertIn("ABI_UNVERIFIED", source)
                for signature in signatures:
                    target = signature.split("FUN_")[1].split("(")[0]
                    callee = source_path(ROOT, "0x" + target).read_text(encoding="utf-8")
                    self.assertIn(signature, callee)

    def test_clang17_o0_o2_and_declaration_removal_negatives(self):
        clang = shutil.which("clang++")
        self.assertIsNotNone(clang, "strict Clang++17 required")
        for entry, (_, _, signatures) in CASES.items():
            source = source_path(ROOT, "0x" + entry).read_text(encoding="utf-8")
            for opt in ("-O0", "-O2"):
                with self.subTest(entry=entry, opt=opt):
                    argv = [clang, "-std=c++17", opt, "-fsyntax-only", "-x", "c++", "-I", str(ROOT / "include"), "-"]
                    good = subprocess.run(argv, input=source, text=True, capture_output=True, timeout=60)
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = subprocess.run(argv, input=source.replace(block(signatures), "", 1), text=True, capture_output=True, timeout=60)
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn("FUN_" + signatures[0].split("FUN_")[1].split("(")[0], bad.stderr)

    def test_partial_host_symbol_link_only(self):
        clang, nm = shutil.which("clang++"), shutil.which("nm")
        self.assertIsNotNone(clang)
        self.assertIsNotNone(nm)
        signatures = sorted({s for _, _, sigs in CASES.values() for s in sigs})
        with tempfile.TemporaryDirectory() as temp:
            tmp = Path(temp)
            objects = []
            for entry in CASES:
                obj = tmp / (entry + ".o")
                cmd = [clang, "-std=c++17", "-O0", "-c", "-I", str(ROOT / "include"), str(source_path(ROOT, "0x" + entry)), "-o", str(obj)]
                result = subprocess.run(cmd, capture_output=True, text=True, timeout=60)
                self.assertEqual(result.returncode, 0, result.stderr)
                objects.append(str(obj))
            # Synthetic symbols only; no runtime invocation, behavior or Xbox ABI claim.
            stub = tmp / "symbol_only.cpp"
            stub.write_text('#include "bf_ghidra_types.h"\n' + "".join(s + " { " + ("return {}; " if not s.startswith("void ") else "") + "}\n" for s in signatures), encoding="utf-8")
            stubobj = tmp / "symbol_only.o"
            result = subprocess.run([clang, "-std=c++17", "-c", "-I", str(ROOT / "include"), str(stub), "-o", str(stubobj)], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stderr)
            linked = tmp / "symbol_link.o"
            result = subprocess.run([clang, "-r", *objects, str(stubobj), "-o", str(linked)], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stderr)
            result = subprocess.run([nm, "-C", "-u", str(linked)], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stderr)
            for signature in signatures:
                self.assertNotIn("FUN_" + signature.split("FUN_")[1].split("(")[0] + "(", result.stdout)

if __name__ == "__main__":
    unittest.main()
