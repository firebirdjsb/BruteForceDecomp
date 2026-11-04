#!/usr/bin/env python3
"""XBE-authenticated 0x00160DA0 EAX/RET 8 evidence and bounded C++ caller tests.

Only direct call edges, observed register writes, guest stack cleanup and
host C++17 syntax are checked. Implicit guest ECX/EDX inputs, native linkage,
class layouts and 1:1 whole-function behavior remain ABI_UNVERIFIED.
"""
from __future__ import annotations
import hashlib
import os
from pathlib import Path
import shutil
import struct
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLS = {
    "00080f20": 0x00080F90,
    "000815b0": 0x0008168B,
    "0008b1f0": 0x0008B21A,
    "000da770": 0x000DA782,
    "000da800": 0x000DA80D,
    "000da8f0": 0x000DA95B,
    "00124af0": 0x00124BF1,
    "0012e9a0": 0x0012E9C4,
    "00146340": 0x0014635E,
    "0014ce40": 0x0014CE4B,
    "0014ce90": 0x0014CED9,
    "001575d0": 0x0015772D,
    "0015a6d0": 0x0015A710,
    "0015ac90": 0x0015ACAA,
    "0015b000": 0x0015B02C,
    "0020a0a0": 0x0020A0B4,
    "00219d00": 0x00219D4C,
    "00219e40": 0x00219E6C,
    "00223ce0": 0x00223D05,
    "0022ca20": 0x0022CAFB,
    "0022cea0": 0x0022CF0E,
    "0022d820": 0x0022D854,
    "0022fb50": 0x0022FB6F,
    "00232060": 0x00232098,
}
SIGNATURE = "uint32_t FUN_00160da0(uint32_t guest_stack_word0, uint32_t guest_stack_word1)"
DECLARATION = "extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);"

def source(addr: str) -> Path:
    return ROOT / "src/main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"

def read_xbe(data: bytes, va: int, count: int) -> bytes:
    base = struct.unpack_from("<I", data, 0x104)[0]
    n = struct.unpack_from("<I", data, 0x11c)[0]
    pos = struct.unpack_from("<I", data, 0x120)[0] - base
    for i in range(n):
        _, start, mem, off, stored = struct.unpack_from("<IIIII", data, pos + i * 0x38)
        if start <= va and va + count <= start + min(mem, stored):
            return data[off + va - start:off + va - start + count]
    raise AssertionError("Missing XBE VA " + hex(va))

class Test160DA0ReturnContract(unittest.TestCase):
    def test_decompiled_signatures_preserve_guest_inputs_and_provenance(self):
        callee = source("00160da0").read_text(encoding="utf-8")
        self.assertIn("Input x86 body SHA-256: 32008F6F0411B7EE34AF0C0BA05592E8FF86C48A02868B0A2F2A5DD6B5D8BBD0", callee)
        self.assertIn(SIGNATURE, callee)
        self.assertIn("int iVar3 = 0;", callee)
        self.assertEqual(callee.count("return (uint32_t)iVar3;"), 2)
        self.assertIn("ABI_UNVERIFIED", callee)
        for entry in CALLS:
            with self.subTest(entry=entry):
                s = source(entry).read_text(encoding="utf-8")
                self.assertIn("Entry: 0x" + entry, s)
                self.assertIn("Input x86 body SHA-256:", s)
                self.assertIn(DECLARATION, s)
                self.assertGreaterEqual(s.count("FUN_00160da0(0xffffffff,1)"), 1)

    @unittest.skipUnless(shutil.which("clang++"), "Clang++17 required")
    def test_two_new_single_error_callers_parse(self):
        for entry in ("0012e9a0", "00146340"):
            with self.subTest(entry=entry):
                cmd = ["clang++", "-std=c++17", "-fsyntax-only", "-I",
                       str(ROOT / "include"), str(source(entry))]
                p = subprocess.run(cmd, capture_output=True, text=True, timeout=60)
                self.assertEqual(p.returncode, 0, p.stderr[-2500:])

    def test_original_xbe_register_and_call_evidence(self):
        xbe = os.getenv("BF_ORIGINAL_XBE")
        if not xbe:
            self.skipTest("Original XBE not stored in CI")
        data = Path(xbe).read_bytes()
        self.assertEqual(hashlib.sha256(data).hexdigest(), HASH)
        for va, expected in (
            (0x00160DA8, "33c0"), # XOR EAX,EAX (initial EAX=0)
            (0x00160DCC, "33c0"), # XOR EAX,EAX (loop reset)
            (0x00160E1A, "8b4114"), # MOV EAX,[ECX+14]
            (0x00160E2F, "c20800"), # RET 8
        ):
            self.assertEqual(read_xbe(data, va, len(bytes.fromhex(expected))).hex(), expected)
        for entry, va in CALLS.items():
            with self.subTest(entry=entry):
                op = read_xbe(data, va, 5)
                self.assertEqual(op[0], 0xe8)
                target = (va + 5 + struct.unpack_from("<i", op, 1)[0]) & 0xffffffff
                self.assertEqual(target, 0x00160DA0)
        # Negative control: a wrong callee must fail the computed edge.
        va = CALLS["0012e9a0"]
        op = read_xbe(data, va, 5)
        self.assertNotEqual(va + 5 + struct.unpack_from("<i", op, 1)[0], 0x00160E40)

if __name__ == "__main__":
    unittest.main()
