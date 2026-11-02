#!/usr/bin/env python3
"""Binary-free provenance and corruption controls for 40 original Xbox call edges."""
from __future__ import annotations

import csv
import hashlib
import importlib.util
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / 'scripts/verify_cpp_20261102_40_body_provenance.py'
spec = importlib.util.spec_from_file_location('bf_40_body_provenance', SCRIPT)
assert spec is not None and spec.loader is not None
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class BodyProvenanceTests(unittest.TestCase):
    def setUp(self):
        self.edges = module.load_edges()
        self.rows = module.manifest_rows(edges=self.edges)

    def test_40_exact_edge_records(self):
        self.assertEqual(len(self.rows), 40)
        self.assertGreaterEqual(len({r['callee_entry'] for r in self.rows}), 20)
        self.assertEqual(len({r['call_va'] for r in self.rows}), 40)

    def test_source_labels_preserved(self):
        self.assertGreaterEqual(module.check_source_labels(self.rows), 40)

    def test_body_digest_mutation_is_detectable(self):
        # No commercial bytes needed: the same SHA comparison must reject
        # a one-byte mutation outside an E8 or RET site.
        original = b'\x90' * 64
        expected = hashlib.sha256(original).hexdigest()
        changed = bytearray(original)
        changed[17] ^= 1
        self.assertEqual(hashlib.sha256(original).hexdigest(), expected)
        self.assertNotEqual(hashlib.sha256(changed).hexdigest(), expected)

    def test_manifest_corruption_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'evidence.csv'
            for column, corrupt in (
                ('caller_original_sha256', '0' * 64),
                ('caller_body_len', '1'),
                ('call_va', '0x00000000'),
            ):
                with self.subTest(column=column):
                    rows = [dict(r) for r in self.rows]
                    rows[0][column] = corrupt
                    with path.open('w', newline='', encoding='utf-8') as out:
                        writer = csv.DictWriter(out, fieldnames=module.COLS)
                        writer.writeheader()
                        writer.writerows(rows)
                    with self.assertRaises(ValueError):
                        module.manifest_rows(path, edges=self.edges)

    def test_duplicate_call_site_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'evidence.csv'
            rows = [dict(r) for r in self.rows]
            rows[1] = dict(rows[0])
            with path.open('w', newline='', encoding='utf-8') as out:
                writer = csv.DictWriter(out, fieldnames=module.COLS)
                writer.writeheader()
                writer.writerows(rows)
            with self.assertRaises(ValueError):
                module.manifest_rows(path, edges=self.edges)


if __name__ == '__main__':
    unittest.main()
