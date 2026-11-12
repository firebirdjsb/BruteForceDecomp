#!/usr/bin/env python3
"""Preserve historical lane checks across the exact reviewed initializer repair."""
import contextlib
import hashlib
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import verify_x86_c11_lane_contracts as gate

ROOT = Path(__file__).resolve().parents[1]
CONTRACT_SHA = '8c179362d7550614a6508e25c101ae8a915a1b610ad8d065ffa774af7ac45aa3'


class InitializerLaneOverlay(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.source = (ROOT / gate.INITIALIZER_SOURCE).read_text()
        cls.manifest = (ROOT / gate.INITIALIZER_MANIFEST).read_bytes()
        cls.before = gate.historical_lane_source(ROOT, gate.INITIALIZER_SOURCE, cls.source)

    def test_original_contracts_remain_exact(self):
        raw = json.dumps([gate.SOURCE_EXPECTATIONS, gate.FINGERPRINTS, gate.DIRECT_CALLS],
                         sort_keys=True, separators=(',', ':')).encode()
        self.assertEqual(hashlib.sha256(raw).hexdigest(), CONTRACT_SHA)

    def test_exact_current_and_historical_views(self):
        self.assertEqual(hashlib.sha256(self.source.encode()).hexdigest(), gate.INITIALIZER_AFTER_SHA)
        self.assertEqual(hashlib.sha256(self.before.encode()).hexdigest(), gate.INITIALIZER_BEFORE_SHA)
        self.assertEqual(gate.historical_lane_source(ROOT, gate.INITIALIZER_SOURCE, self.before), self.before)
        self.assertIn('_atexit((void (*)(void))(uintptr_t)0x0030de90U);', self.before)
        self.assertNotIn('_atexit(UINT32_C(0x0030de90));', self.before)
        self.assertEqual(gate.historical_lane_source(ROOT, 'unrelated.cpp', self.source), self.source)

    def test_changed_current_or_old_sources_are_rejected(self):
        case = next(c for c in json.loads(self.manifest)['cases'] if c['entry'] == '0x000388b0')
        mutations = [self.source + '\n', self.before + '\n',
                     self.source.replace('0x0030de90', '0x0030de91'),
                     self.source.replace('0x004a8848', '0x004a884c'),
                     self.source.replace('ABI_UNVERIFIED', 'ABI_VERIFIED')]
        mutations += [self.source.replace(e['after'], e['before'], 1) for e in case['replacements']]
        for source in mutations:
            with self.subTest(source_hash=hashlib.sha256(source.encode()).hexdigest()), self.assertRaises(ValueError):
                gate.historical_lane_source(ROOT, gate.INITIALIZER_SOURCE, source)

    def test_changed_manifest_and_pins_are_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            target = root / gate.INITIALIZER_MANIFEST
            target.parent.mkdir(parents=True)
            target.write_bytes(self.manifest)
            self.assertEqual(gate.historical_lane_source(root, gate.INITIALIZER_SOURCE, self.source), self.before)
            document = json.loads(self.manifest)
            document['original_xbe_reauthenticated'] = True
            for raw in (self.manifest + b'\n', json.dumps(document).encode(), b'{}'):
                target.write_bytes(raw)
                with self.assertRaises(ValueError):
                    gate.historical_lane_source(root, gate.INITIALIZER_SOURCE, self.source)
        for name in ('INITIALIZER_AFTER_SHA', 'INITIALIZER_BEFORE_SHA', 'INITIALIZER_BEFORE_BLOB'):
            with patch.object(gate, name, '0' * len(getattr(gate, name))), self.assertRaises(ValueError):
                gate.historical_lane_source(ROOT, gate.INITIALIZER_SOURCE, self.source)

    def test_entire_historical_gate_and_unrelated_negative(self):
        with contextlib.redirect_stdout(io.StringIO()):
            gate.check_sources(ROOT)
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            for name in gate.SOURCE_EXPECTATIONS:
                path = root / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text((ROOT / name).read_text())
            path = root / gate.INITIALIZER_MANIFEST
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(self.manifest)
            with contextlib.redirect_stdout(io.StringIO()):
                gate.check_sources(root)
                (root / gate.INITIALIZER_SOURCE).write_text(self.before)
                gate.check_sources(root)
            name = 'src/main_unclassified/band_0005/0x0005c5e0.cpp'
            path = root / name
            token = gate.SOURCE_EXPECTATIONS[name][0][0]
            self.assertIn(token, path.read_text())
            path.write_text(path.read_text().replace(token, '/* removed historical lane operation */', 1))
            with self.assertRaisesRegex(ValueError, '0005c5e0'):
                gate.check_sources(root)


if __name__ == '__main__':
    unittest.main()
