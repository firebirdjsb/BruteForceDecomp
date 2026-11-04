#!/usr/bin/env python3
"""Binary-free negative controls for 26 original retail callee entry windows."""
from __future__ import annotations

import importlib.util
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/verify_cpp_20261102_26_callee_prologues.py"
spec = importlib.util.spec_from_file_location("bf_callee_prologues", SCRIPT)
assert spec and spec.loader
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class CalleePrologueTests(unittest.TestCase):
    def test_exact_manifest_and_original_callee_identities(self):
        self.assertEqual(len(module.validate_manifest()), 26)
        self.assertEqual(len(module.PROLOGUES), 26)

    def test_each_window_has_mutation_negative_control(self):
        # The synthetic buffer is only the narrow public entry window.
        for va, encoded in module.PROLOGUES:
            with self.subTest(va=hex(va)):
                expected = bytes.fromhex(encoded)
                layout = [(va, va + len(expected), 0)]
                module.check_bytes(expected, layout, va, expected)
                changed = bytearray(expected)
                changed[len(changed) // 2] ^= 1
                with self.assertRaises(ValueError):
                    module.check_bytes(bytes(changed), layout, va, expected)

    def test_manifest_rejects_wrong_prologue_address(self):
        old = module.PROLOGUES
        try:
            mutated = list(old)
            va, encoded = mutated[0]
            mutated[0] = (va + 1, encoded)
            module.PROLOGUES = tuple(mutated)
            with self.assertRaises(ValueError):
                module.validate_manifest()
        finally:
            module.PROLOGUES = old

    def test_manifest_rejects_wrong_prologue_bytes(self):
        old = module.PROLOGUES
        try:
            mutated = list(old)
            va, encoded = mutated[0]
            mutated[0] = (va, ("00" if encoded[:2] != "00" else "ff") + encoded[2:])
            module.PROLOGUES = tuple(mutated)
            with self.assertRaises(ValueError):
                module.validate_manifest()
        finally:
            module.PROLOGUES = old

    def test_reject_unbacked_guest_address(self):
        with self.assertRaises(ValueError):
            module.raw_offset([(0x1000, 0x1010, 0)], 0x100f, 2)

    def test_reject_mutated_body_manifest(self):
        original = module.BODY_MANIFEST.read_bytes()
        import tempfile
        with tempfile.TemporaryDirectory() as tmp:
            p = Path(tmp) / "body.csv"
            mutated = bytearray(original)
            mutated[-2] ^= 1
            p.write_bytes(mutated)
            with self.assertRaises(ValueError):
                module.validate_manifest(p)


if __name__ == "__main__":
    unittest.main()
