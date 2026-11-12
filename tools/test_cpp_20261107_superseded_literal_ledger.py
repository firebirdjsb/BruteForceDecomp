#!/usr/bin/env python3
"""Preserve two exact historical literal ledgers after XBE-backed replacements.

This checks a *historical* preimage and a separate *current* guest32 source,
not an original x86 ABI or full-game behavioral equivalence claim. The
original 209/250-case compilers remain unchanged in CI, with this test as a
fast additional negative-control gate.
"""
import json
from pathlib import Path
import shutil
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_cpp_literal_declaration_batch import (
    SUPERSEDED_GUEST32_SOURCES, compile_text, historical_literal_source_for_guest32_rewrite,
    restore, sha,
)

MANIFESTS = (
    'metadata/cpp_20261101_literal_declarations.json',
    'metadata/cpp_20261101_remaining_literal_repairs.json',
)


class SupercededLiteralLedgerTests(unittest.TestCase):
    def setUp(self):
        self.cases = {}
        for path in MANIFESTS:
            for case in json.loads((ROOT / path).read_text())['cases']:
                if case['entry'] in {'0x001736a0', '0x002e7580'}:
                    self.cases[case['entry']] = case
        self.assertEqual(set(self.cases), {'0x001736a0', '0x002e7580'})

    def test_both_old_and_live_sources_hash_pinned(self):
        for entry, case in self.cases.items():
            with self.subTest(entry=entry):
                pin = SUPERSEDED_GUEST32_SOURCES[entry]
                live = source_path(ROOT, entry).read_text()
                historic = historical_literal_source_for_guest32_rewrite(case, live)
                self.assertEqual(sha(live), pin['current_sha256'])
                self.assertEqual(sha(historic), case['result_source_sha256'])
                self.assertEqual(read_body_digest(live), (case['body_sha256'], False))
                self.assertEqual(read_body_digest(historic), (case['body_sha256'], False))
                self.assertIn('ABI_UNVERIFIED', live)
                self.assertNotEqual(live, historic)
                self.assertEqual(sha(restore(case, historic)), case['source_sha256'])

    def test_legacy_and_current_sources_reject_mutations(self):
        for entry, case in self.cases.items():
            pin = SUPERSEDED_GUEST32_SOURCES[entry]
            live = source_path(ROOT, entry).read_text()
            historic = (ROOT / pin['fixture']).read_text()
            for text, label in ((live, 'live'), (historic, 'archived')):
                for at in (0, len(text) // 2, len(text) - 1):
                    mutated = text[:at] + ('Z' if text[at] != 'Z' else 'Y') + text[at + 1:]
                    with self.subTest(entry=entry, label=label, at=at):
                        if label == 'live':
                            with self.assertRaisesRegex(ValueError, 'Changed XBE-evidenced'):
                                historical_literal_source_for_guest32_rewrite(case, mutated)
                        else:
                            self.assertNotEqual(sha(mutated), pin['historical_sha256'])
                            self.assertNotEqual(sha(mutated), case['result_source_sha256'])

    def test_both_eras_compile_with_expected_status(self):
        compiler = shutil.which('clang++')
        if compiler is None:
            self.skipTest('clang++ is required for source compatibility tests')
        for entry, case in self.cases.items():
            historical = historical_literal_source_for_guest32_rewrite(case, source_path(ROOT, entry).read_text())
            preimage = restore(case, historical)
            live = source_path(ROOT, entry).read_text()
            for opt in ('-O0', '-O2'):
                with self.subTest(entry=entry, opt=opt):
                    old_rc, old_errors, _, _ = compile_text(compiler, ROOT, preimage, opt)
                    legacy_rc, legacy_errors, _, _ = compile_text(compiler, ROOT, historical.replace(case['added_block'], '', 1), opt)
                    current_rc, current_errors, _, _ = compile_text(compiler, ROOT, live, opt)
                    self.assertNotEqual(old_rc, 0, 'Original preimage should still fail C++17')
                    self.assertNotEqual(legacy_rc, 0, 'Historical partial repair was NOT a full syntax pass')
                    self.assertEqual(current_rc, 0, str(current_errors))
                    self.assertEqual(sum(old_errors.values()) - sum(legacy_errors.values()),
                                     sum(e['count'] for e in case['edits']))


if __name__ == '__main__':
    unittest.main()
