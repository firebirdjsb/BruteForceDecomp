#!/usr/bin/env python3
"""Exact source-only overlay controls; requires no private original image."""
import copy
import hashlib
import json
from pathlib import Path
import shutil
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from source_layout import source_path
from verify_cpp_literal_declaration_batch import (
    SOURCE_SPELLING_OVERLAYS, compile_text, restore, restore_source_spelling, sha, verify,
)


class SourceSpellingOverlayTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        manifest = json.loads((ROOT / 'metadata/cpp_20261101_remaining_literal_repairs.json').read_text())
        cls.case = next(c for c in manifest['cases'] if c['entry'] == '0x0036fbe0')
        cls.overlay = SOURCE_SPELLING_OVERLAYS[cls.case['entry']]
        cls.current = source_path(ROOT, cls.case['entry']).read_text()

    def test_accept_exact_overlay_and_restore_original_operands(self):
        self.assertEqual(sha(self.current), self.overlay['current_sha256'])
        historical_result = restore_source_spelling(self.case, self.current, SOURCE_SPELLING_OVERLAYS)
        self.assertEqual(sha(historical_result), self.case['result_source_sha256'])
        preimage = restore(self.case, self.current, source_spelling_overlays=SOURCE_SPELLING_OVERLAYS)
        original = preimage.replace(self.overlay['after'], self.overlay['before'], 1)
        self.assertEqual(sha(original), self.case['source_sha256'])
        raw = original.encode()
        self.assertEqual(hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest(), self.case['source_git_blob'])
        self.assertEqual(restore(self.case, historical_result), original)

    def test_full_current_source_compiles_both_optimizations(self):
        compiler = shutil.which('clang++')
        self.assertIsNotNone(compiler, 'clang++ required')
        for opt in ('-O0', '-O2'):
            rc, errors, _, _ = compile_text(compiler, ROOT, self.current, opt)
            self.assertEqual(rc, 0, (opt, errors))

    def test_reversal_rejected(self):
        reversed_text = self.current.replace(self.overlay['after'], self.overlay['before'], 1)
        with self.assertRaises(ValueError):
            restore(self.case, reversed_text, source_spelling_overlays=SOURCE_SPELLING_OVERLAYS)

    def test_corrupted_overlay_metadata_rejected(self):
        for field in ('before', 'after', 'prior_sha256', 'current_sha256', 'body_sha256'):
            overlays = copy.deepcopy(SOURCE_SPELLING_OVERLAYS)
            overlays[self.case['entry']][field] += 'corrupt'
            with self.subTest(field=field), self.assertRaises(ValueError):
                restore(self.case, self.current, source_spelling_overlays=overlays)

    def test_forged_historical_hashes_rejected(self):
        for field in ('source_sha256', 'source_git_blob', 'result_source_sha256', 'body_sha256'):
            case = copy.deepcopy(self.case)
            case[field] = '0' * len(case[field])
            with self.subTest(field=field), self.assertRaises(ValueError):
                restore(case, self.current, source_spelling_overlays=SOURCE_SPELLING_OVERLAYS)

    def test_source_and_literal_corruption_rejected(self):
        for text in (self.current + '\n',
                     self.current.replace(self.overlay['after'], self.overlay['after'].replace('0x12', '0x13'), 1),
                     self.current.replace(self.case['edits'][0]['after'], 'UINT32_C(0)', 1)):
            with self.assertRaises(ValueError):
                restore(self.case, text, source_spelling_overlays=SOURCE_SPELLING_OVERLAYS)

    def test_source_overlay_restricted_to_remaining_batch(self):
        manifest = {'cases': [self.case], 'expected_counts': {}}
        with self.assertRaisesRegex(ValueError, 'Source-only spelling overlay batch identity'):
            verify(ROOT, manifest, 'unused', source_spelling_overlays=SOURCE_SPELLING_OVERLAYS)

    def test_existing_fourteen_overlay_count_gate_preserved(self):
        manifest = {'cases': [self.case], 'expected_counts': {}}
        with self.assertRaisesRegex(ValueError, 'Reviewed 14-case overlay identity/status'):
            verify(ROOT, manifest, 'unused', overlays={self.case['entry']: self.overlay})

    def test_source_overlay_cannot_overlap_instruction_overlay(self):
        manifest = {'cases': [self.case], 'expected_counts': {}}
        with self.assertRaisesRegex(ValueError, 'Source-only spelling overlay batch identity'):
            verify(ROOT, manifest, 'unused',
                   approved_counts={'total':209,'complete':0,'partial':209,'values':469},
                   overlays={self.case['entry']: self.overlay},
                   source_spelling_overlays=SOURCE_SPELLING_OVERLAYS)

    def test_source_overlay_is_not_implicitly_enabled(self):
        with self.assertRaises(ValueError):
            restore(self.case, self.current)


if __name__ == '__main__':
    unittest.main()
