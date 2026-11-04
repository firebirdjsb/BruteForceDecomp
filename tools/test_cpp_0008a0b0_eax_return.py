#!/usr/bin/env python3
"""Bounded original-EAX constructor return gate; not a full guest ABI test."""
from __future__ import annotations
import hashlib
import os
from pathlib import Path
import shutil
import struct
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE = ROOT / "src/main_unclassified/band_0008/0x0008a0b0.cpp"
CALLER = ROOT / "src/main_unclassified/band_0008/0x000884b0.cpp"

def raw_bytes(data: bytes, address: int, n: int) -> bytes:
    base = struct.unpack_from("<I", data, 0x104)[0]
    sec = struct.unpack_from("<I", data, 0x120)[0] - base
    for i in range(struct.unpack_from("<I", data, 0x11c)[0]):
        _, va, mem, raw, size = struct.unpack_from("<IIIII", data, sec + i*0x38)
        if va <= address and address+n <= va+min(mem, size):
            return data[raw+address-va:raw+address-va+n]
    raise AssertionError("XBE VA missing: " + hex(address))

class TestOriginalEaxConstructor(unittest.TestCase):
    def test_source_return_contract_and_provenance(self):
        callee = CALLEE.read_text(encoding="utf-8")
        caller = CALLER.read_text(encoding="utf-8")
        self.assertIn("Input x86 body SHA-256: 7D19FFF6AB6DCD8934AAF6693CD778056CA4C720CB26C17A0FFFC76495C39336", callee)
        self.assertIn("undefined4 * FUN_0008a0b0(void)", callee)
        self.assertIn("return in_EAX;", callee)
        self.assertIn("extern undefined4 * FUN_0008a0b0(void);", caller)
        self.assertIn("extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);", caller)
        self.assertIn("ABI_UNVERIFIED", callee)
        self.assertIn("ABI_UNVERIFIED", caller)

    @unittest.skipUnless(shutil.which("clang++"), "Clang++17 required")
    def test_isolated_constructor_and_caller_syntax(self):
        for path in (CALLEE, CALLER):
            with self.subTest(file=path.name):
                r = subprocess.run(
                    ["clang++", "-std=c++17", "-fsyntax-only", "-ferror-limit=3",
                     "-I", str(ROOT / "include"), str(path)],
                    text=True, capture_output=True, timeout=60)
                self.assertEqual(r.returncode, 0, r.stderr[-2800:])

    def test_authenticated_xbe_eax_remains_live_across_constructor(self):
        path = os.environ.get("BF_ORIGINAL_XBE")
        if not path:
            self.skipTest("Original XBE not committed to CI")
        data = Path(path).read_bytes()
        self.assertEqual(hashlib.sha256(data).hexdigest(), SHA)
        self.assertEqual(raw_bytes(data, 0x0008A12B, 2), bytes.fromhex("5ec3")) # POP ESI; RET
        self.assertEqual(raw_bytes(data, 0x00088500, 5), bytes.fromhex("e8ab1b0000"))
        self.assertEqual(raw_bytes(data, 0x00088505, 2), bytes.fromhex("8bf0")) # MOV ESI,EAX
        call_va = 0x00088500
        call = raw_bytes(data, call_va, 5)
        self.assertEqual(call_va+5+struct.unpack_from("<i", call, 1)[0], 0x0008A0B0)
        self.assertNotEqual(call_va+5+struct.unpack_from("<i", call, 1)[0], 0x0008A0B1)

if __name__ == "__main__":
    unittest.main()
