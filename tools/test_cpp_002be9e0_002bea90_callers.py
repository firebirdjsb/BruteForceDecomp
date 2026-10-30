#!/usr/bin/env python3
"""C++17 and optional authenticated-XBE regression for six two-DWORD call edges.

Set BF_ORIGINAL_XBE to a local original retail XBE to check x86 CALL/RET
windows. CI has no original game binary: its checks certify source/syntax only.
Guest registers, native ABI, linkage and game behavior remain ABI_UNVERIFIED.
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
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Entry, direct CALL VA, callee, original body digest.
CASES = (
    ("002b5f80", 0x2B5F9D, 0x2BE9E0, "278805D3E220BC4A7FB2D55D105CB3BC82745B57F09F82E30FF7600913BBC3F9"),
    ("002b6020", 0x2B602B, 0x2BE9E0, "5FF61939F89CD4ABA9CA25BAA959A0D090064D0A4F39ED1AD432CD6A611D4CA5"),
    ("002b6080", 0x2B609B, 0x2BE9E0, "792BA86BD48C0C43FDF95D5042F0CDC1321343E0607333DDEFAB932CD0527CD9"),
    ("002b5fd0", 0x2B5FF0, 0x2BEA90, "674E286DEDAC6CDE3C6FCB86A1138BCBE95A127FAD57FF651D9C88D679CA5FC4"),
    ("002b6050", 0x2B605C, 0x2BEA90, "8011D2B9D60DD9B4894E89588D6DFB62592FEEFD934166167BFB31E80"),
    ("002b60c0", 0x2B60DC, 0x2BEA90, "02C3BAA7EF9FAA9387920E7FBFEFCF65B51A4ED316A2BD1999B4D5677A4DB0C5"),
)
DECL = {
    0x2BE9E0: "extern void FUN_002be9e0(uint param_1, uint param_2);",
    0x2BEA90: "extern uint FUN_002bea90(undefined4 param_1, uint param_2);",
}
CALLEE_SHA = {
    0x2BE9E0: "398AC1C28A4BBFC942273837770D7E4B3CB2426F0D2E18EEEC2CB98AC39B4DB1",
    0x2BEA90: "780836D3FD031749D9E9A1DB72BBDFD1BF364CA39C7BA903C1DF5344DC7F36EB",
}
# Two original PUSH operands, and (only for 0x2BE9E0) MOV ECX,EDI.
PUSH_WINDOWS = {
    0x2B5F9D: "52538bcf", 0x2B602B: "50538bcf", 0x2B609B: "50538bcf",
    0x2B5FF0: "5253", 0x2B605C: "5053", 0x2B60DC: "5053",
}


def read_xbe(data: bytes, va: int, size: int) -> bytes:
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11c)[0]
    table = struct.unpack_from("<I", data, 0x120)[0] - base
    if not (0 < count < 128 and 0 <= table < len(data)):
        raise AssertionError("invalid XBE section table")
    for index in range(count):
        _, start, memory_size, raw, stored = struct.unpack_from(
            "<IIIII", data, table + index * 0x38)
        if start <= va and va + size <= start + min(memory_size, stored):
            pos = raw + va - start
            if pos + size <= len(data):
                return data[pos:pos + size]
    raise AssertionError(f"XBE section missing {va:#x}")


def check_call(data: bytes, va: int, expected: int) -> None:
    op = read_xbe(data, va, 5)
    if op[0] != 0xE8:
        raise AssertionError(f"not direct CALL at {va:#x}")
    actual = (va + 5 + struct.unpack("<i", op[1:])[0]) & 0xffffffff
    if actual != expected:
        raise AssertionError(f"wrong CALL target {actual:#x} at {va:#x}")


class TestTwoDwordCallers(unittest.TestCase):
    def test_source_and_provenance(self):
        for entry, _, target, body_sha in CASES:
            with self.subTest(entry=entry):
                source = (ROOT / "src/main_unclassified/band_002b" /
                          f"0x{entry}.cpp").read_text(encoding="utf-8")
                self.assertIn(f"Entry: 0x{entry}", source)
                self.assertIn("Input x86 body SHA-256: " + body_sha, source)
                self.assertIn("ABI_UNVERIFIED", source)
                self.assertIn(DECL[target], source)
                self.assertEqual(source.count(f"  FUN_{target:08x}("), 1)
        for target, sha in CALLEE_SHA.items():
            source = (ROOT / "src/main_unclassified/band_002b" /
                      f"0x{target:08x}.cpp").read_text(encoding="utf-8")
            self.assertIn("Input x86 body SHA-256: " + sha, source)

    def test_isolated_clang_cpp17(self):
        compiler = shutil.which("clang++")
        if not compiler:
            self.skipTest("Clang++ unavailable")
        for entry, _, _, _ in CASES:
            with self.subTest(entry=entry):
                source = ROOT / "src/main_unclassified/band_002b" / f"0x{entry}.cpp"
                result = subprocess.run(
                    [compiler, "-std=c++17", "-x", "c++", "-fsyntax-only",
                     "-ferror-limit=3", "-I", str(ROOT / "include"), str(source)],
                    capture_output=True, text=True, timeout=60)
                self.assertEqual(result.returncode, 0, result.stderr[-2000:])

    def test_authenticated_xbe_call_edges(self):
        path = os.environ.get("BF_ORIGINAL_XBE")
        if not path:
            self.skipTest("Original XBE unavailable in CI: instruction evidence not claimed")
        data = Path(path).read_bytes()
        self.assertEqual(hashlib.sha256(data).hexdigest(), XBE_SHA)
        for entry, va, target, _ in CASES:
            with self.subTest(entry=entry):
                check_call(data, va, target)
                before = bytes.fromhex(PUSH_WINDOWS[va])
                self.assertEqual(read_xbe(data, va - len(before), len(before)), before)
        self.assertEqual(read_xbe(data, 0x2BEA80, 3), bytes.fromhex("c20800"))
        self.assertEqual(read_xbe(data, 0x2BEB7E, 3), bytes.fromhex("c20800"))
        with self.assertRaises(AssertionError):
            check_call(data, CASES[0][1], 0x2BEA90)
        mutated = bytearray(data)
        base = struct.unpack_from("<I", data, 0x104)[0]
        table = struct.unpack_from("<I", data, 0x120)[0] - base
        for index in range(struct.unpack_from("<I", data, 0x11c)[0]):
            _, start, memory_size, raw, stored = struct.unpack_from(
                "<IIIII", data, table + index * 0x38)
            if start <= CASES[0][1] < start + min(memory_size, stored):
                mutated[raw + CASES[0][1] - start] = 0x90
                break
        with self.assertRaises(AssertionError):
            check_call(bytes(mutated), CASES[0][1], CASES[0][2])


if __name__ == "__main__":
    unittest.main()
