#!/usr/bin/env python3
"""Public, binary-free negative controls for the 40 retail-XBE E8 evidence rows."""
from __future__ import annotations

import importlib.util
import struct
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/verify_cpp_20261102_40_xbe_edges.py"
spec = importlib.util.spec_from_file_location("bf_forty_original_edges", SCRIPT)
assert spec is not None and spec.loader is not None
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class OriginalEdgeManifestTests(unittest.TestCase):
    def test_40_unique_direct_calls(self):
        self.assertEqual(len(module.CALL_EDGES), 40)
        self.assertEqual(len({site for _, site, _ in module.CALL_EDGES}), 40)
        self.assertGreaterEqual(len(module.RET_WINDOWS), 20)
        self.assertEqual(len({site for site, _ in module.RET_WINDOWS}),
                         len(module.RET_WINDOWS))

    def test_every_e8_displacement_has_negative_control(self):
        for caller, site, target in module.CALL_EDGES:
            with self.subTest(site=hex(site)):
                self.assertLessEqual(caller, site)
                encoded = b"\xe8" + struct.pack("<i", target - (site + 5))
                self.assertEqual(encoded[0], 0xE8)
                displacement, = struct.unpack_from("<i", encoded, 1)
                self.assertEqual(site + 5 + displacement, target)
                corrupt = bytearray(encoded)
                corrupt[1] ^= 1
                wrong, = struct.unpack_from("<i", corrupt, 1)
                self.assertNotEqual(site + 5 + wrong, target)

    def test_terminal_ret_windows_are_bounded(self):
        for site, opcode in module.RET_WINDOWS:
            with self.subTest(site=hex(site)):
                self.assertIn(opcode, (b"\xc3", b"\xc2\x04\x00"))
                self.assertGreaterEqual(site, 0x00012000)


if __name__ == "__main__":
    unittest.main()
