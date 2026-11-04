#!/usr/bin/env python3
"""Keep exported-instruction completion separate from both older evidence classes."""
from __future__ import annotations

import copy
import hashlib
import json
from pathlib import Path
import shutil
import tempfile
import unittest
from unittest.mock import patch

import verify_cpp_literal_declaration_batch as gate

ROOT = Path(__file__).resolve().parents[1]
HISTORICAL_MANIFEST_SHA = 'a5ad8f63714151ddcc66088df4999c54cf988c4e11699f2495410f306506aeef'
REMAINING_MANIFEST_SHA = 'e8215f264ed96b97af09c41f1c9f2e8fc26e41437225efe6cfbcce53e0d54448'
ENTRY = '0x0009e8b0'


class InitializerLiteralOverlayTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads((ROOT / gate.MANIFEST).read_text())
        cls.case = next(c for c in cls.manifest['cases'] if c['entry'] == ENTRY)
        cls.overlays = gate.load_exported_instruction_overlays(ROOT)
        cls.source = (ROOT / cls.case['source']).read_text()

    def test_historical_ledgers_and_exact_two_stage_reversal(self):
        for name, digest in ((gate.MANIFEST, HISTORICAL_MANIFEST_SHA),
                ('metadata/cpp_20261101_remaining_literal_repairs.json', REMAINING_MANIFEST_SHA)):
            self.assertEqual(hashlib.sha256((ROOT / name).read_bytes()).hexdigest(), digest)
        historical = gate.restore_exported_instruction(self.case, self.source, self.overlays)
        self.assertEqual(gate.sha(historical), self.case['result_source_sha256'])
        preimage = gate.restore(self.case, historical)
        raw = preimage.encode()
        blob = hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()
        self.assertEqual(gate.sha(preimage), self.case['source_sha256'])
        self.assertEqual(blob, self.case['source_git_blob'])
        self.assertEqual(gate.apply_exported_instruction(self.case, historical, self.overlays), self.source)
        expected_diagnostic_preimage = preimage
        for edit in self.overlays[ENTRY]['replacements']:
            self.assertEqual(expected_diagnostic_preimage.count(edit['before']), 1)
            expected_diagnostic_preimage = expected_diagnostic_preimage.replace(edit['before'], edit['after'], 1)
        self.assertEqual(gate.restore(self.case, self.source,
            exported_instruction_overlays=self.overlays), expected_diagnostic_preimage)
        self.assertIn(self.case['edits'][0]['before'], expected_diagnostic_preimage)
        self.assertNotIn(self.case['edits'][0]['after'], expected_diagnostic_preimage)

    def test_independent_overlay_pins_reject_forged_hashes_and_replacements(self):
        for field in ('entry', 'source', 'original_body_sha256', 'source_before_sha256',
                      'source_after_sha256', 'preimage_git_blob', 'private_record'):
            mutant = copy.deepcopy(self.overlays)
            mutant[ENTRY][field] += 'changed'
            with self.subTest(field=field), self.assertRaisesRegex(ValueError, 'overlay pins'):
                gate.restore_exported_instruction(self.case, self.source, mutant)
        for i in range(len(self.overlays[ENTRY]['replacements'])):
            for field in ('before', 'after', 'count', 'kind'):
                mutant = copy.deepcopy(self.overlays)
                edit = mutant[ENTRY]['replacements'][i]
                edit[field] = 2 if field == 'count' else edit[field] + 'changed'
                with self.subTest(edit=i, field=field), self.assertRaisesRegex(ValueError, 'overlay pins'):
                    gate.restore_exported_instruction(self.case, self.source, mutant)
        mutant = copy.deepcopy(self.overlays)
        changed = self.source + '\n// forged unrelated edit\n'
        mutant[ENTRY]['source_after_sha256'] = gate.sha(changed)
        mutant[ENTRY]['replacements'].append({'before': '', 'after': '\n// forged unrelated edit\n',
                                             'count': 1, 'kind': 'source_matched_declaration'})
        with self.assertRaisesRegex(ValueError, 'overlay pins'):
            gate.restore_exported_instruction(self.case, changed, mutant)
        for key in ('original_xbe_reauthenticated', 'source_spelling_only'):
            mutant = copy.deepcopy(self.overlays)
            mutant[ENTRY][key] = True
            with self.assertRaisesRegex(ValueError, 'overlay pins'):
                gate.validate_exported_instruction_overlays(mutant)
        mutant = copy.deepcopy(self.overlays)
        mutant['0x000388b0'] = copy.deepcopy(mutant[ENTRY])
        with self.assertRaisesRegex(ValueError, 'overlay pins'):
            gate.validate_exported_instruction_overlays(mutant)

    def test_manifest_boundary_and_instruction_corruption_are_rejected(self):
        raw = (ROOT / gate.EXPORTED_INSTRUCTION_MANIFEST).read_bytes()
        document = json.loads(raw)
        mutants = [raw + b'\n']
        for flag in ('original_xbe_reauthenticated', 'original_game_functions_executed'):
            mutant = copy.deepcopy(document)
            mutant[flag] = True
            mutants.append(json.dumps(mutant).encode())
        mutant = copy.deepcopy(document)
        mutant['dword_stores'][0]['producer']['bytes'] = 'b805df3800'
        mutants.append(json.dumps(mutant).encode())
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            path = root / gate.EXPORTED_INSTRUCTION_MANIFEST
            path.parent.mkdir(parents=True)
            path.write_bytes(raw)
            self.assertEqual(gate.load_exported_instruction_overlays(root), self.overlays)
            for data in mutants:
                path.write_bytes(data)
                with self.assertRaisesRegex(ValueError, 'evidence manifest changed'):
                    gate.load_exported_instruction_overlays(root)

    def test_every_source_edit_and_historical_literal_control_survive(self):
        changes = [self.source + '\n', self.source.replace('ABI_UNVERIFIED', 'ABI_VERIFIED', 1),
                   self.source.replace(self.case['edits'][0]['after'], 'UINT32_C(0)', 1)]
        for edit in self.overlays[ENTRY]['replacements']:
            changes.append(self.source.replace(edit['after'], edit['before'], 1))
        for source in changes:
            with self.assertRaises(ValueError):
                gate.restore(self.case, source, exported_instruction_overlays=self.overlays)
        for field in ('source_sha256', 'source_git_blob', 'result_source_sha256', 'body_sha256', 'source'):
            mutant = copy.deepcopy(self.case)
            mutant[field] += 'changed'
            with self.subTest(field=field), self.assertRaises(ValueError):
                gate.restore(mutant, self.source, exported_instruction_overlays=self.overlays)
        mutant = copy.deepcopy(self.case)
        mutant['body_ranges'][0]['length'] += 1
        with self.assertRaises(ValueError):
            gate.restore(mutant, self.source, exported_instruction_overlays=self.overlays)
        mutant = copy.deepcopy(self.case)
        mutant['edits'][0]['before'] = '&DAT_004a745d'
        with self.assertRaises(ValueError):
            gate.restore(mutant, self.source, exported_instruction_overlays=self.overlays)

    def test_evidence_classes_and_batch_scope_cannot_be_combined(self):
        remaining = json.loads((ROOT / 'metadata/cpp_20261101_remaining_literal_repairs.json').read_text())
        invalid_calls = [
            (self.manifest, {'overlays': self.overlays}),
            (self.manifest, {'source_spelling_overlays': self.overlays}),
            (self.manifest, {'overlays': self.overlays, 'exported_instruction_overlays': self.overlays}),
            (self.manifest, {'source_spelling_overlays': self.overlays, 'exported_instruction_overlays': self.overlays}),
            (remaining, {'approved_counts': {'total':209,'complete':0,'partial':209,'values':469},
                         'exported_instruction_overlays': self.overlays}),
        ]
        with patch.object(gate, 'compile_text', side_effect=AssertionError('invalid input reached compilation')):
            for manifest, arguments in invalid_calls:
                with self.subTest(arguments=list(arguments)), self.assertRaises(ValueError):
                    gate.verify(ROOT, manifest, 'unused', **arguments)
            with self.assertRaises(ValueError):
                gate.verify(ROOT, self.manifest, 'unused')
        for old_class in ('overlays', 'source_spelling_overlays'):
            with self.assertRaisesRegex(ValueError, 'evidence classes overlap'):
                gate.restore(self.case, self.source, exported_instruction_overlays=self.overlays,
                             **{old_class: self.overlays})

    def test_composed_preimage_still_fails_only_the_original_literal(self):
        compiler = shutil.which('clang++')
        if not compiler:
            self.skipTest('clang++ unavailable; no compiler result claimed')
        preimage = gate.restore(self.case, self.source, exported_instruction_overlays=self.overlays)
        for opt in ('-O0', '-O2'):
            with self.subTest(opt=opt):
                rc, errors, _, _ = gate.compile_text(compiler, ROOT, self.source, opt)
                self.assertEqual(rc, 0, errors)
                rc, errors, _, _ = gate.compile_text(compiler, ROOT, preimage, opt)
                self.assertNotEqual(rc, 0)
                self.assertEqual(sum(errors.values()), 1, errors)
                self.assertIn('pointer to integer conversion', next(iter(errors)))


if __name__ == '__main__':
    unittest.main()
