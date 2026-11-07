#!/usr/bin/env python3
"""Immutable 250-case historical source pins for ten new XBE-backed drafts.

This is a source/provenance-only check, not a native ABI or gameplay test.
"""
from __future__ import annotations
import json
import sys
import unittest
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'tools'))
import verify_cpp_literal_declaration_batch as historical

ENTRIES = ('0x00095cf0','0x000968e0','0x00098500','0x0009c5e0','0x0009da70',
           '0x000a1e90','0x000a2dc0','0x000a34a0','0x000a3b10','0x000a6fd0')

class HistoricalGuest32(unittest.TestCase):
    def setUp(self):
        self.manifest = {c['entry']:c for c in json.loads(
            (ROOT/historical.MANIFEST).read_text())['cases']}
    def test_ten_pinned_legacy_preimages_and_new_live_source(self):
        for entry in ENTRIES:
            with self.subTest(entry=entry):
                guard = historical.SUPERSEDED_GUEST32_SOURCES[entry]
                case = self.manifest[entry]
                live = historical.source_path(ROOT, entry).read_text()
                archived = (ROOT/guard['fixture']).read_text()
                self.assertEqual(historical.sha(live),guard['current_sha256'])
                self.assertEqual(historical.sha(archived),guard['historical_sha256'])
                self.assertEqual(historical.read_body_digest(live),
                                 (guard['body_sha256'],False))
                self.assertEqual(historical.read_body_digest(archived),
                                 (guard['body_sha256'],False))
                self.assertEqual(historical.historical_literal_source_for_guest32_rewrite(case,live),archived)
                self.assertEqual(case['result_source_sha256'],guard['historical_sha256'])
                self.assertEqual(case['status'],'partial')
    def test_both_source_versions_reject_corruption(self):
        for entry in ENTRIES:
            with self.subTest(entry=entry):
                guard=historical.SUPERSEDED_GUEST32_SOURCES[entry]
                case=self.manifest[entry]
                live=historical.source_path(ROOT,entry).read_text()
                archived=(ROOT/guard['fixture']).read_text()
                bad_live=live.replace('ABI_UNVERIFIED','ABI_BROKEN',1)
                bad_old=archived.replace(case['edits'][0]['after'],'UINT32_C(0)',1)
                self.assertNotEqual(bad_live,live)
                self.assertNotEqual(bad_old,archived)
                for mutant in (bad_live,bad_old):
                    with self.assertRaises(ValueError):
                        historical.historical_literal_source_for_guest32_rewrite(case,mutant)

if __name__=='__main__':
    unittest.main()
