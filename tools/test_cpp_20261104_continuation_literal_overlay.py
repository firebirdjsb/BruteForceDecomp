#!/usr/bin/env python3
"""Canonical historical-gate admission for the separately pinned continuation."""
import copy
import hashlib
import json
from pathlib import Path
import shutil
import tempfile
import unittest
from unittest.mock import patch

import verify_cpp_literal_declaration_batch as gate
import verify_cpp_002e9c30_continuation as continuation

ROOT = Path(__file__).resolve().parents[1]


class ContinuationLiteralOverlayTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.overlays=gate.load_continuation_overlays(ROOT)
        cls.document=cls.overlays[continuation.ENTRY]
        cls.manifest=json.loads((ROOT/continuation.LEDGER).read_text())
        cls.case=cls.manifest['cases'][188]
        cls.source=(ROOT/cls.case['source']).read_text()
        cls.heap=gate.load_heap_free_overlays(ROOT,continuation.LEDGER)
        cls.compiler=shutil.which('clang++')

    def test_unchanged_historical_manifests_and_separate_channel(self):
        pins={gate.MANIFEST:'a5ad8f63714151ddcc66088df4999c54cf988c4e11699f2495410f306506aeef',
              continuation.LEDGER:continuation.LEDGER_SHA,
              gate.HEAP_FREE_MANIFEST:gate.HEAP_FREE_MANIFEST_SHA}
        for name,digest in pins.items():
            self.assertEqual(hashlib.sha256((ROOT/name).read_bytes()).hexdigest(),digest)
        self.assertEqual(set(self.overlays),{'0x002e9c30'})
        self.assertEqual(set(self.heap),{'0x0023cca0','0x002ea08b','0x002ea0ca'})
        self.assertEqual(set(gate.load_heap_free_overlays(ROOT,gate.MANIFEST)),{'0x0008dcf0','0x000c0040'})
        self.assertEqual(set(gate.load_exported_instruction_overlays(ROOT)),{'0x0009e8b0'})
        self.assertEqual(self.case['status'],'partial')
        self.assertEqual(self.manifest['expected_counts'],continuation.COUNTS)
        self.assertEqual(self.case['body_ranges'],[{'start':'0x002E9C30','end_inclusive':'0x002E9C41','length':18}])
        for validate in (gate.validate_heap_free_overlays,gate.validate_exported_instruction_overlays):
            with self.assertRaises(ValueError):validate(self.overlays)
        for wrong in (self.heap,dict(self.overlays,**self.heap),gate.load_exported_instruction_overlays(ROOT)):
            with self.assertRaises(ValueError):continuation.validate(wrong)

    def test_canonical_two_stage_reversal_and_original_literal_negative(self):
        historical=gate.restore_continuation_instruction(self.case,self.source,self.overlays)
        self.assertEqual(gate.sha(historical),self.case['result_source_sha256'])
        oldest=gate.restore(self.case,historical)
        self.assertEqual(gate.sha(oldest),self.case['source_sha256'])
        self.assertEqual(continuation.git_blob(oldest),self.case['source_git_blob'])
        composed=gate.restore(self.case,self.source,continuation_overlays=self.overlays)
        self.assertEqual(composed,gate.apply_continuation_instruction(self.case,oldest,self.overlays))
        self.assertEqual(gate.sha(composed),continuation.NEGATIVE_SHA)
        self.assertIn('&PTR_LAB_0038697c',composed)
        self.assertNotIn('UINT32_C(0x0038697c)',composed)
        self.assertIn('in_ECX[6] = UINT32_C(0);',composed)
        if not self.compiler:self.skipTest('clang++ missing')
        for opt in ('-O0','-O2'):
            rc,errors,_,_=gate.compile_text(self.compiler,ROOT,self.source,opt)
            self.assertEqual(rc,0,errors)
            rc,errors,_,_=gate.compile_text(self.compiler,ROOT,composed,opt)
            self.assertNotEqual(rc,0)
            self.assertEqual(sum(errors.values()),1)
            self.assertTrue(all('pointer to integer conversion' in message for message in errors),errors)
        # Omission is an error: never silently accept the new source without its channel.
        with self.assertRaises(ValueError):gate.restore(self.case,self.source)

    def test_each_source_edit_literal_and_historical_identity_is_pinned(self):
        sources=[self.source+'\n',self.source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1),
                 self.source.replace('UINT32_C(0x0038697c)','UINT32_C(0)',1)]
        sources += [self.source.replace(edit['after'],edit['before'],1) for edit in self.document['replacements']]
        for changed in sources:
            with self.assertRaises(ValueError):gate.restore(self.case,changed,continuation_overlays=self.overlays)
        for field in ('entry','source','status','source_sha256','source_git_blob','body_sha256','result_source_sha256','added_block'):
            changed=copy.deepcopy(self.case);changed[field]+='changed'
            with self.assertRaises(ValueError):gate.restore(changed,self.source,continuation_overlays=self.overlays)
        for field in ('body_ranges','edits','dependencies'):
            changed=copy.deepcopy(self.case);changed[field].append({})
            with self.assertRaises(ValueError):gate.restore(changed,self.source,continuation_overlays=self.overlays)

    def test_forged_hashes_added_edits_and_evidence_boundaries_are_rejected(self):
        for field in ('source_after_sha256','source_before_sha256','original_body_sha256','preimage_git_blob'):
            changed=copy.deepcopy(self.overlays);changed[continuation.ENTRY][field]='0'*64
            with self.assertRaises(ValueError):gate.restore(self.case,self.source,continuation_overlays=changed)
        changed=copy.deepcopy(self.overlays);forged_source=self.source+'\n// unrelated change\n'
        changed[continuation.ENTRY]['source_after_sha256']=gate.sha(forged_source)
        changed[continuation.ENTRY]['replacements'].append({'before':'','after':'\n// unrelated change\n','count':1})
        with self.assertRaises(ValueError):gate.restore(self.case,forged_source,continuation_overlays=changed)
        for key in ('original_xbe_reauthenticated','original_machine_code_executed','canonical_held_function_executed'):
            changed=copy.deepcopy(self.overlays);changed[continuation.ENTRY][key]=True
            with self.assertRaises(ValueError):continuation.validate(changed)
        changed=copy.deepcopy(self.overlays);changed[continuation.ENTRY]['body_ranges'][0]['length']=37
        with self.assertRaises(ValueError):continuation.validate(changed)
        for index,edit in enumerate(self.document['replacements']):
            for field in ('before','after','kind','count'):
                changed=copy.deepcopy(self.overlays)
                changed[continuation.ENTRY]['replacements'][index][field]=2 if field=='count' else edit[field]+'changed'
                with self.assertRaises(ValueError):continuation.validate(changed)

    def test_wrong_ledger_and_all_four_channel_overlaps_fail_before_compilation(self):
        with patch.object(gate,'compile_text',side_effect=AssertionError('invalid admission reached compiler')):
            for other_channel in ('overlays','source_spelling_overlays','exported_instruction_overlays','heap_free_overlays'):
                with self.assertRaisesRegex(ValueError,'classes overlap'):
                    gate.verify(ROOT,self.manifest,'unused',approved_counts=continuation.COUNTS,
                                continuation_overlays=self.overlays,**{other_channel:self.overlays})
                with self.assertRaisesRegex(ValueError,'classes overlap'):
                    gate.restore(self.case,self.source,continuation_overlays=self.overlays,**{other_channel:self.overlays})
            wrong_ledger=json.loads((ROOT/gate.MANIFEST).read_text())
            with self.assertRaises(ValueError):gate.verify(ROOT,wrong_ledger,'unused',continuation_overlays=self.overlays)
            for counts in (None,{'total':999},dict(continuation.COUNTS,complete=1)):
                with self.assertRaises(ValueError):gate.verify(ROOT,self.manifest,'unused',approved_counts=counts,continuation_overlays=self.overlays)
            changed=copy.deepcopy(self.manifest);changed['cases'][0]['status']='forged'
            with self.assertRaises(ValueError):gate.verify(ROOT,changed,'unused',approved_counts=continuation.COUNTS,continuation_overlays=self.overlays)
            for wrong in (self.heap,dict(self.overlays,**self.heap)):
                with self.assertRaises(ValueError):gate.verify(ROOT,self.manifest,'unused',approved_counts=continuation.COUNTS,continuation_overlays=wrong)

    def test_canonical_gate_validates_all_preimages_before_first_compile(self):
        fourteen=json.loads((ROOT/'metadata/cpp_20261101_remaining_literal_overlay_14.json').read_text())['overlays']
        with patch.object(gate,'compile_text',side_effect=RuntimeError('all source preimages checked')) as compile_spy:
            with self.assertRaisesRegex(RuntimeError,'all source preimages checked'):
                gate.verify(ROOT,self.manifest,'unused',approved_counts=continuation.COUNTS,
                            overlays={c['entry']:c for c in fourteen},source_spelling_overlays=gate.SOURCE_SPELLING_OVERLAYS,
                            heap_free_overlays=self.heap,continuation_overlays=self.overlays)
            self.assertEqual(compile_spy.call_count,1)

    def test_manifest_and_ledger_file_corruption_fail_before_compilation(self):
        raw=(ROOT/continuation.MANIFEST).read_bytes()
        with tempfile.TemporaryDirectory(prefix='held002e9c30-') as tmp:
            root=Path(tmp);manifest=root/continuation.MANIFEST;manifest.parent.mkdir()
            ledger=root/continuation.LEDGER;ledger.write_bytes((ROOT/continuation.LEDGER).read_bytes())
            manifest.write_bytes(raw)
            self.assertEqual(gate.load_continuation_overlays(root),self.overlays)
            mutants=[raw+b'\n']
            changed=json.loads(raw);changed['source_after_sha256']='0'*64;mutants.append(json.dumps(changed).encode())
            for changed in mutants:
                manifest.write_bytes(changed)
                with self.assertRaisesRegex(ValueError,'manifest changed'):gate.load_continuation_overlays(root)
            manifest.write_bytes(raw);ledger.write_bytes(ledger.read_bytes()+b'\n')
            with self.assertRaisesRegex(ValueError,'ledger changed'):gate.load_continuation_overlays(root)
            with patch.object(gate,'compile_text',side_effect=AssertionError('corrupt ledger reached compiler')):
                with self.assertRaisesRegex(ValueError,'ledger changed'):
                    gate.verify(root,self.manifest,'unused',approved_counts=continuation.COUNTS,continuation_overlays=self.overlays)


if __name__=='__main__':unittest.main()
