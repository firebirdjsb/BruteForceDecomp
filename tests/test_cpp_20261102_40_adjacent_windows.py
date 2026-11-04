#!/usr/bin/env python3
"""Binary-free controls for 40 E8-adjacent and 21 focused original instruction windows."""
from __future__ import annotations
import importlib.util
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / 'scripts/verify_cpp_20261102_40_adjacent_windows.py'
spec = importlib.util.spec_from_file_location('bf_40_adjacent_windows', SCRIPT)
assert spec and spec.loader
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)

class AdjacentWindowsTests(unittest.TestCase):
    def test_manifest_exact_edge_set(self):
        self.assertEqual(module.validate_manifest(), 40)
        self.assertEqual(len(module.FOCUSED), 21)

    def test_all_101_windows_have_mutation_negative_controls(self):
        windows = [(pre, left) for _, pre, left, _, _ in module.CONTEXT]
        windows += [(post, right) for _, _, _, post, right in module.CONTEXT]
        windows += list(module.FOCUSED)
        self.assertEqual(len(windows), 101)
        # Each isolated synthetic window must pass the actual byte verifier,
        # and its one-byte mutation must be rejected. No commercial code shipped.
        class StubEdges:
            @staticmethod
            def file_offset(layout, va, size):
                return 0
        for va, encoded in windows:
            with self.subTest(va=hex(va)):
                expected = bytes.fromhex(encoded)
                module.check_window(expected, None, va, encoded, StubEdges())
                image = bytearray(expected)
                image[0] ^= 1
                with self.assertRaises(ValueError):
                    module.check_window(bytes(image), None, va, encoded, StubEdges())

    def test_focused_copy_and_return_bytes(self):
        focused = dict(module.FOCUSED)
        self.assertEqual(focused[0x001ed145], 'b989000000')
        self.assertEqual(focused[0x001ed14a], 'f3a5')
        self.assertEqual(focused[0x001ed14e], 'b001')
        self.assertEqual(focused[0x001ed151], 'c20400')
        self.assertEqual(focused[0x001ed158], 'c20400')
        self.assertEqual(focused[0x001d10c1], '8bc3')
        self.assertEqual(focused[0x001d2dd6], 'c20400')

    def test_manifest_rejects_drifted_predecessor(self):
        old = module.CONTEXT
        try:
            corrupted = list(old)
            first = list(corrupted[0]);first[1] += 1;corrupted[0] = tuple(first)
            module.CONTEXT = tuple(corrupted)
            with self.assertRaises(ValueError):module.validate_manifest()
        finally:module.CONTEXT = old

    def test_check_window_rejects_changed_bytes(self):
        class StubEdges:
            @staticmethod
            def file_offset(layout, va, size):return 0
        expected = '8bc3'
        module.check_window(bytes.fromhex(expected), None, 0x001d10c1, expected, StubEdges())
        with self.assertRaises(ValueError):
            module.check_window(bytes.fromhex('8bc2'), None, 0x001d10c1, expected, StubEdges())

if __name__ == '__main__':unittest.main()
