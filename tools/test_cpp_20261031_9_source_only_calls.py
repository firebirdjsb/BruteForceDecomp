#!/usr/bin/env python3
"""Source-preimage and C++17/partial-host-link regression; Xbox ABI_UNVERIFIED."""
from __future__ import annotations
import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
NOTE = "/* Source-matched C++17 declaration only; original Xbox ABI_UNVERIFIED. */\n"
CASES = [
  [
    "0016e830",
    "0016e880",
    "void FUN_0016e880(void)",
    "a12332c486a99cbce8359498a7501a975caeb40d",
    "5da77c2547cc21cc9ebb616657ba267ce9e65bd1"
  ],
  [
    "002dddc0",
    "00304ff0",
    "void FUN_00304ff0(void)",
    "b3b85818137372673b9c52b374927e630a0e475c",
    "30956bd62ab8f0704b6ea404f69c5acc677143b4"
  ],
  [
    "0014f7a0",
    "000ab260",
    "int FUN_000ab260(void)",
    "5e3d5ee46ccfc258964c202fb3c81e8b097cf7fa",
    "8f731f94dde8d313f6ba03770285d2d9e5e395cf"
  ],
  [
    "00374130",
    "00373ab0",
    "int FUN_00373ab0(void)",
    "ea16ee94c6c0c30fde59b638a15c99c87e2ae562",
    "194ef7ed0db4fc024104d60a812763429e64bb27"
  ],
  [
    "001241b0",
    "00222ac0",
    "void FUN_00222ac0(int param_1,int param_2)",
    "1cfc78685866494486b89da7fe65ab3d50940d32",
    "605725d970c94f908a6a179881ae7d963eab7f8a"
  ],
  [
    "001ea890",
    "0006a610",
    "undefined4 FUN_0006a610(int *param_1)",
    "a78991af3eabfd2b6ea0fca8073c7a384a789305",
    "18e9ef4c719097f496083ec35de503b58b037947"
  ],
  [
    "0027d970",
    "0027d3f0",
    "void FUN_0027d3f0(int param_1)",
    "1c74cf17b5db2c8895b80699e2e8a486cce0aeb5",
    "2f3f74ccc5a5ab383c03b564f0f0abf5d592b0bf"
  ],
  [
    "002b6ac0",
    "002b65a0",
    "undefined4 FUN_002b65a0(float *param_1)",
    "1afc4b2b6c5e5113d0a29f1bcdc91ab9ba394b53",
    "13253630d470df13ac0d2176f5123be33762273e"
  ],
  [
    "001e7c00",
    "001f2910",
    "void FUN_001f2910(float param_1)",
    "2ef5be85749464744f6fbd101a1f40a7381b1740",
    "252fe9f307b732b895aca75d4a839777af80c09d"
  ]
]

def source(address):
    if address in ("00374130", "00373ab0"):
        return ROOT / "src/platform/graphics_d3d" / ("0x" + address + ".cpp")
    return ROOT / "src/main_unclassified" / ("band_" + address[:4]) / ("0x" + address + ".cpp")

def git_blob_sha(text):
    data = text.encode("utf-8")
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()

def declaration(case):
    return NOTE + "extern " + case[2] + ";\n"

def verify(case, caller_text, callee_text):
    caller, callee, signature, preimage, callee_blob = case
    added = declaration(case)
    if caller_text.count(added) != 1:
        raise ValueError("missing source-only declaration " + caller)
    if f"Entry: 0x{caller}" not in caller_text or "ABI_UNVERIFIED" not in caller_text:
        raise ValueError("caller identity or uncertainty missing " + caller)
    if not re.search(r"Input x86 body SHA-256: [0-9A-F]{64}", caller_text):
        raise ValueError("caller original x86 digest label missing " + caller)
    if git_blob_sha(caller_text.replace(added, "", 1)) != preimage:
        raise ValueError("original caller statements changed " + caller)
    if git_blob_sha(callee_text) != callee_blob or f"Entry: 0x{callee}" not in callee_text:
        raise ValueError("callee source identity changed " + callee)
    if not re.search(r"Input x86 body SHA-256: [0-9A-F]{64}", callee_text):
        raise ValueError("callee original x86 digest label missing " + callee)
    compact = lambda value: re.sub(r"\s+", "", value)
    if compact(signature) not in compact(callee_text):
        raise ValueError("callee draft signature changed " + callee)
    if f"FUN_{callee}(" not in caller_text.replace(added, "", 1):
        raise ValueError("original caller expression missing " + caller)

def clang(path, opt="-O0", output=None):
    command = [shutil.which("clang++"), "-std=c++17", opt, "-I", str(ROOT / "include")]
    command += ["-fsyntax-only", str(path)] if output is None else ["-c", str(path), "-o", str(output)]
    return subprocess.run(command, capture_output=True, text=True, timeout=90)

class SourceProven9(unittest.TestCase):
    def test_source_preimages_and_callee_drafts(self):
        self.assertEqual(len(CASES), 9)
        self.assertEqual(len({case[0] for case in CASES}), 17)
        for case in CASES:
            with self.subTest(caller=case[0]):
                verify(case, source(case[0]).read_text(), source(case[1]).read_text())

    @unittest.skipUnless(shutil.which("clang++"), "requires Clang++")
    def test_cpp17_o0_o2(self):
        for case in CASES:
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=case[0], opt=opt):
                    result = clang(source(case[0]), opt)
                    self.assertEqual(result.returncode, 0, result.stderr)

    @unittest.skipUnless(shutil.which("clang++"), "requires Clang++")
    def test_declaration_removal_negative_controls(self):
        with tempfile.TemporaryDirectory() as tmp:
            for case in CASES:
                text = source(case[0]).read_text().replace(declaration(case), "", 1)
                bad = Path(tmp) / (case[0] + ".cpp")
                bad.write_text(text)
                with self.subTest(caller=case[0]):
                    self.assertNotEqual(clang(bad).returncode, 0)

    def test_provenance_negative_controls(self):
        case = CASES[0]
        text = source(case[0]).read_text()
        callee = source(case[1]).read_text()
        for changed in (text.replace("ABI_UNVERIFIED", "ABI_VERIFIED", 1),
                        text.replace("Input x86 body SHA-256:", "Input x86 body SHA-255:", 1),
                        text.replace("FUN_0016e880();", "FUN_0016e880(1);", 1)):
            with self.assertRaises(ValueError):
                verify(case, changed, callee)

    @unittest.skipUnless(shutil.which("clang++") and shutil.which("nm"), "requires host toolchain")
    def test_partial_host_symbol_linkage(self):
        # Relocatable symbol resolution, NOT original Xbox ABI or game behavior.
        families = (("0016e880", "0016e830"),
                    ("00304ff0", "002dddc0"),
                    ("00373ab0", "00374130"),
                    ("002b65a0", "002b6ac0"))
        with tempfile.TemporaryDirectory() as tmp:
            for family in families:
                with self.subTest(callee=family[0]):
                    objects = []
                    for addr in family:
                        obj = Path(tmp) / (addr + ".o")
                        result = clang(source(addr), output=obj)
                        self.assertEqual(result.returncode, 0, result.stderr)
                        objects.append(str(obj))
                    linked = Path(tmp) / (family[0] + "_partial.o")
                    result = subprocess.run([shutil.which("clang++"), "-r", *objects, "-o", str(linked)],
                                            capture_output=True, text=True, timeout=90)
                    self.assertEqual(result.returncode, 0, result.stderr)
                    result = subprocess.run([shutil.which("nm"), "-C", str(linked)],
                                            capture_output=True, text=True, timeout=30)
                    self.assertEqual(result.returncode, 0, result.stderr)
                    symbols = [line for line in result.stdout.splitlines() if "FUN_" + family[0] + "(" in line]
                    self.assertEqual(sum(" T " in line for line in symbols), 1, symbols)
                    self.assertFalse(any(" U " in line for line in symbols), symbols)

if __name__ == "__main__":
    unittest.main()
