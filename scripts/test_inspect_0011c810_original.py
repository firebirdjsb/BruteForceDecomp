#!/usr/bin/env python3
"""Synthetic-only tests for the pinned-XBE disassembly review tool.

These tests do not substitute a fake XBE for the original user's binary.
"""
from __future__ import annotations

from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parent))
from inspect_0011c810_original import ENTRY, SIZE, parse_lines, render_windows, disassemble


class OriginalInspectionTests(unittest.TestCase):
    def test_byte_decode_and_window_boundaries(self):
        lines = """fake.bin: file format binary
        11c810: 55                      push ebp
        11c811: 89 e5                   mov ebp,esp
        11c82a: 50                      push eax
        11c893: ff 50 30                call DWORD PTR [eax+0x30]
        11c905: 90                      nop
        11c906: 8b 4c 24 28             mov ecx,DWORD PTR [esp+0x28]
        11c950: c3                      ret
        """
        parsed = parse_lines(lines)
        self.assertEqual([x[0] for x in parsed],
                         [ENTRY, ENTRY+1, 0x11c82a, 0x11c893, 0x11c905,
                          0x11c906, 0x11c950])
        self.assertEqual(parsed[3][1], bytes.fromhex("ff 50 30"))
        text = render_windows(parsed)
        self.assertIn("0x0011C893 ff 50 30", text)
        self.assertIn("0x0011C906 8b 4c 24 28", text)
        self.assertNotIn("0x0011C950 c3", text)

    def test_gnu_objdump_synthetic_raw(self):
        binary = shutil.which("objdump")
        if not binary:
            self.skipTest("GNU objdump not available")
        # Raw local fixture is not a Brute Force original machine-code body.
        instructions = disassemble(b"\x55\x89\xe5\xc3", binary)
        self.assertEqual(instructions[0][:2], (ENTRY, b"\x55"))
        self.assertEqual(instructions[-1][:2], (ENTRY+3, b"\xc3"))

    def test_refuse_unpinned_xbe(self):
        with tempfile.TemporaryDirectory(prefix="bf_bad_xbe_") as tmp:
            raw = Path(tmp) / "bad.xbe"
            raw.write_bytes(b"XBEH" + b"\x00"*300)
            p = subprocess.run([sys.executable,
                                str(Path(__file__).resolve().parent / "inspect_0011c810_original.py"),
                                "--xbe", str(raw)], text=True, capture_output=True)
            self.assertNotEqual(p.returncode, 0)
            self.assertIn("SHA-256 mismatch", p.stderr)

    def test_windows_are_bounded_by_original_body(self):
        from inspect_0011c810_original import WINDOWS
        for _, lo, hi in WINDOWS:
            self.assertGreaterEqual(lo, ENTRY)
            self.assertLessEqual(hi, ENTRY + SIZE)
            self.assertLess(lo, hi)


if __name__ == "__main__":
    unittest.main()
