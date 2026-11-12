#!/usr/bin/env python3
"""Public, original-XBE-independent integrity checks for high-priority stub review.

No original game bytes are bundled. No native ABI or C++ execution is claimed.
"""
import csv
import json
import re
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/20261109_five_return_stub_gaps.json'


def validate_evidence(data, inventory=None):
    if data.get('schema_version') != 1:
        raise ValueError('Unknown evidence schema')
    if data.get('original_xbe_sha256', '').lower() != ('b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'):
        raise ValueError('Original-XBE digest mismatch')
    rows = data.get('functions', [])
    if len(rows) != 5:
        raise ValueError('Expected five original-address evidence records')
    seen = set()
    for row in rows:
        address = row['entry'].lower()
        if not re.fullmatch(r'0x[0-9a-f]{8}', address) or address in seen:
            raise ValueError('Duplicate/invalid original entry')
        seen.add(address)
        if row['original_body_sha256'] != row['original_body_sha256'].upper() or not re.fullmatch(r'[0-9A-F]{64}', row['original_body_sha256']):
            raise ValueError('Invalid body digest')
        ranges = row['ghidra_selected_ranges']
        if not ranges or sum(n for _, n in ranges) != row['selected_bytes']:
            raise ValueError('Incorrect selected size')
        if ranges != sorted(ranges) or any(a < 0 or n < 1 or a + n > 4096 for a,n in ranges):
            raise ValueError('Invalid original function ranges')
        if any(a+n > b for (a,n),(b,_) in zip(ranges,ranges[1:])):
            raise ValueError('Overlapping original body ranges')
        if inventory is not None and row['original_body_sha256'] != inventory[address]['original_body_sha256']:
            raise ValueError('Original body digest differs from canonical inventory')
        if row['priority'] != 'HIGH' or row['behavior_status'] != 'ABI_UNVERIFIED':
            raise ValueError('Unwarranted verified-behavior claim')
        if not row['instruction_windows'] or any(i < 0 or not re.fullmatch('[a-f0-9]+',bits) or len(bits)%2 for i,bits in row['instruction_windows']):
            raise ValueError('Instruction windows malformed')
    if sorted(seen) != sorted(('0x002ecc14','0x002ef9ea','0x002f04d0','0x002f060d','0x002f0696')):
        raise ValueError('Unexpected evidence entry set')
    return rows


class ReturnStubEvidenceTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads(MANIFEST.read_text(encoding='utf-8'))
        with (ROOT/'metadata/bulk_13694_inventory.csv').open(newline='',encoding='utf-8-sig') as f:
            cls.inventory={row['entry'].lower():row for row in csv.DictReader(f)}

    def test_source_and_original_body_identity(self):
        entries = validate_evidence(self.evidence, self.inventory)
        for row in entries:
            inventory = self.inventory[row['entry'].lower()]
            self.assertEqual(row['original_body_sha256'],inventory['original_body_sha256'])
            source = ROOT/row['source']
            self.assertTrue(source.is_file(),str(source))
            self.assertEqual(source.stem.lower(),row['entry'].lower())
            self.assertIn(row['original_body_sha256'],source.read_text())
            # The evidence remains valid if a future verified source repair replaces
            # the currently empty draft; never pin the live source's old hash.

    def test_exception_handler_gapped_function(self):
        entry=next(v for v in self.evidence['functions'] if v['entry']=='0x002ef9ea')
        self.assertEqual(entry['ghidra_selected_ranges'],[[0,29],[54,12]])
        self.assertEqual(entry['selected_bytes'],41)
        self.assertEqual(entry['excluded_executable_range'],[29,54])

    def test_reject_unverified_status_or_tampered_body(self):
        import copy
        for modifier in (
            lambda d: d.update(original_xbe_sha256='00'*32),
            lambda d: d['functions'][0].update(behavior_status='VERIFIED_1TO1'),
            lambda d: d['functions'][0].update(original_body_sha256='00'*32),
            lambda d: d['functions'][1].update(selected_bytes=42),
            lambda d: d['functions'].append(copy.deepcopy(d['functions'][0])),
        ):
            altered=copy.deepcopy(self.evidence);modifier(altered)
            with self.assertRaises(ValueError):validate_evidence(altered,self.inventory)


if __name__=='__main__':
    unittest.main()
