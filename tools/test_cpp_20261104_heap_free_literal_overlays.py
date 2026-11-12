#!/usr/bin/env python3
"""Keep five call completions separate from immutable literal ledgers/classes."""
from __future__ import annotations
import argparse
import copy
import hashlib
import json
from pathlib import Path
import shutil
import sys
import tempfile
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]


class HeapFreeLiteralOverlayTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        sys.path.insert(0,str(ROOT/'tools'))
        import verify_cpp_literal_declaration_batch as gate
        cls.gate=gate
        cls.manifests={name:json.loads((ROOT/name).read_text()) for name in gate.HEAP_FREE_BATCHES}
        cls.overlays={name:gate.load_heap_free_overlays(ROOT,name) for name in gate.HEAP_FREE_BATCHES}
        cls.compiler=shutil.which('clang++')

    def historical(self, name, entry):
        return next(c for c in self.manifests[name]['cases'] if c['entry']==entry)

    def test_per_ledger_allowlists_and_original_initializer_channel(self):
        gate=self.gate
        self.assertEqual(set(self.overlays[gate.MANIFEST]),{'0x0008dcf0','0x000c0040'})
        self.assertEqual(set(self.overlays[gate.REMAINING_MANIFEST]),{'0x0023cca0','0x002ea08b','0x002ea0ca'})
        original=gate.load_exported_instruction_overlays(ROOT)
        self.assertEqual(set(original),{'0x0009e8b0'})
        gate.validate_exported_instruction_overlays(original)
        for name,overlays in self.overlays.items():
            gate.validate_heap_free_overlays(overlays,name)
            gate.validate_heap_free_batch(ROOT,self.manifests[name],gate.HEAP_FREE_BATCHES[name]['counts'],overlays,{},{},{})
            with self.assertRaises(ValueError):gate.validate_exported_instruction_overlays(overlays)
            with self.assertRaises(ValueError):gate.validate_heap_free_overlays(original,name)
        self.assertNotIn('0x002e9c30',set().union(*(set(o) for o in self.overlays.values())))
        # Earlier initializer API is intentionally not a merged six-case channel.
        with self.assertRaises(ValueError):gate.validate_exported_instruction_overlays(dict(original,**self.overlays[gate.MANIFEST]))

    def test_unchanged_ledgers_exact_reversal_and_original_literal_controls(self):
        gate=self.gate
        for name,overlays in self.overlays.items():
            self.assertEqual(hashlib.sha256((ROOT/name).read_bytes()).hexdigest(),gate.HEAP_FREE_BATCHES[name]['ledger_sha256'])
            for entry,overlay in overlays.items():
                historical=self.historical(name,entry);source=(ROOT/overlay['source']).read_text()
                before=gate.restore_heap_free_instruction(historical,source,overlays)
                self.assertEqual(gate.sha(before),historical['result_source_sha256'])
                self.assertEqual(gate.apply_heap_free_instruction(historical,before,overlays),source)
                original=gate.restore(historical,before)
                self.assertEqual(gate.sha(original),historical['source_sha256'])
                raw=original.encode()
                self.assertEqual(hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest(),historical['source_git_blob'])
                composed=gate.restore(historical,source,heap_free_overlays=overlays)
                expected=original
                for edit in overlay['replacements']:expected=expected.replace(edit['before'],edit['after'],1)
                self.assertEqual(composed,expected)
                for edit in historical['edits']:
                    self.assertIn(edit['before'],composed)
                    self.assertNotIn(edit['after'],composed)
                if self.compiler:
                    for opt in ('-O0','-O2'):
                        rc,errors,_,_=gate.compile_text(self.compiler,ROOT,source,opt)
                        self.assertEqual(rc,0,errors)
                        rc,errors,_,_=gate.compile_text(self.compiler,ROOT,composed,opt)
                        self.assertNotEqual(rc,0)
                        self.assertEqual(sum(errors.values()),overlay['historical_ledger']['original_literal_edit_count'])
                        self.assertTrue(all('pointer to integer conversion' in e for e in errors))

    def test_every_source_edit_and_historical_pin_rejects_mutation(self):
        gate=self.gate
        for name,overlays in self.overlays.items():
            for entry,overlay in overlays.items():
                case=self.historical(name,entry);source=(ROOT/overlay['source']).read_text()
                sources=[source+'\n',source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1),source.replace(case['edits'][0]['after'],'UINT32_C(0)',1)]
                sources += [source.replace(e['after'],e['before'],1) for e in overlay['replacements']]
                for changed in sources:
                    with self.assertRaises(ValueError):gate.restore(case,changed,heap_free_overlays=overlays)
                for field in ('source','source_sha256','source_git_blob','body_sha256','result_source_sha256'):
                    mutant=copy.deepcopy(case);mutant[field]+='changed'
                    with self.assertRaises(ValueError):gate.restore(mutant,source,heap_free_overlays=overlays)
                mutant=copy.deepcopy(case);mutant['body_ranges'][0]['length']+=1
                with self.assertRaises(ValueError):gate.restore(mutant,source,heap_free_overlays=overlays)
                mutant=copy.deepcopy(case);mutant['edits'][0]['before']='&DAT_ffffffff'
                with self.assertRaises(ValueError):gate.restore(mutant,source,heap_free_overlays=overlays)

    def test_forged_overlay_hashes_metadata_and_added_edits_are_rejected(self):
        gate=self.gate
        for name,overlays in self.overlays.items():
            entry=next(iter(overlays));case=self.historical(name,entry);source=(ROOT/case['source']).read_text()
            for field in ('entry','source','source_before_sha256','source_after_sha256','preimage_git_blob','original_body_sha256','private_function_record','private_context_record','call_target'):
                mutant=copy.deepcopy(overlays);mutant[entry][field]+='forged'
                with self.assertRaisesRegex(ValueError,'overlay pins'):gate.restore(case,source,heap_free_overlays=mutant)
            for field in ('before','after','count','kind'):
                mutant=copy.deepcopy(overlays)
                mutant[entry]['replacements'][0][field]=2 if field=='count' else 'forged'
                with self.assertRaises(ValueError):gate.validate_heap_free_overlays(mutant,name)
            for field in ('ledger','ledger_sha256','case_index'):
                mutant=copy.deepcopy(overlays);mutant[entry]['historical_ledger'][field]='forged'
                with self.assertRaises(ValueError):gate.validate_heap_free_overlays(mutant,name)
            mutant=copy.deepcopy(overlays);changed=source+'\n// unrelated\n'
            mutant[entry]['source_after_sha256']=gate.sha(changed)
            mutant[entry]['replacements'].append({'before':'','after':'\n// unrelated\n','count':1,'kind':'forged'})
            with self.assertRaises(ValueError):gate.restore(case,changed,heap_free_overlays=mutant)
            mutant=copy.deepcopy(overlays);mutant['0x002e9c30']=copy.deepcopy(mutant[entry])
            with self.assertRaises(ValueError):gate.validate_heap_free_overlays(mutant,name)

    def test_wrong_ledger_mixed_classes_or_counts_fail_before_compilation(self):
        gate=self.gate
        first=gate.MANIFEST;second=gate.REMAINING_MANIFEST
        union=dict(self.overlays[first],**self.overlays[second])
        with patch.object(gate,'compile_text',side_effect=AssertionError('bad admission reached compilation')):
            for name,other in ((first,second),(second,first)):
                overlays=self.overlays[name];manifest=self.manifests[name];counts=gate.HEAP_FREE_BATCHES[name]['counts']
                for invalid in (self.overlays[other],union,{next(iter(overlays)):next(iter(overlays.values()))}):
                    with self.assertRaises(ValueError):gate.verify(ROOT,manifest,'unused',approved_counts=counts,heap_free_overlays=invalid)
                with self.assertRaises(ValueError):gate.verify(ROOT,manifest,'unused',approved_counts={'total':999},heap_free_overlays=overlays)
                changed=copy.deepcopy(manifest);changed['cases'][0]['status']='forged'
                with self.assertRaises(ValueError):gate.verify(ROOT,changed,'unused',approved_counts=counts,heap_free_overlays=overlays)
                for other_class in ('overlays','source_spelling_overlays','exported_instruction_overlays'):
                    with self.assertRaisesRegex(ValueError,'classes overlap'):
                        gate.verify(ROOT,manifest,'unused',approved_counts=counts,heap_free_overlays=overlays,**{other_class:overlays})
                    entry=next(iter(overlays));case=self.historical(name,entry);source=(ROOT/case['source']).read_text()
                    with self.assertRaisesRegex(ValueError,'classes overlap'):
                        gate.restore(case,source,heap_free_overlays=overlays,**{other_class:overlays})
        with self.assertRaises(ValueError):gate.load_heap_free_overlays(ROOT,'unknown-ledger.json')

    def test_manifest_and_historical_file_corruption_rejected(self):
        gate=self.gate
        raw=(ROOT/gate.HEAP_FREE_MANIFEST).read_bytes()
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory);target=root/gate.HEAP_FREE_MANIFEST;target.parent.mkdir(parents=True)
            target.write_bytes(raw)
            for name,overlays in self.overlays.items():
                self.assertEqual(gate.load_heap_free_overlays(root,name),overlays)
            mutants=[raw+b'\n']
            for field in ('original_xbe_reauthenticated','original_game_functions_executed'):
                mutant=json.loads(raw);mutant[field]=True;mutants.append(json.dumps(mutant).encode())
            mutant=json.loads(raw);mutant['cases'][0]['source_after_sha256']='0'*64;mutants.append(json.dumps(mutant).encode())
            for changed in mutants:
                target.write_bytes(changed)
                with self.assertRaisesRegex(ValueError,'manifest changed'):gate.load_heap_free_overlays(root,gate.MANIFEST)
            for name,overlays in self.overlays.items():
                ledger=root/name;ledger.write_bytes((ROOT/name).read_bytes()+b'\n')
                with self.assertRaisesRegex(ValueError,'ledger changed'):
                    gate.validate_heap_free_batch(root,self.manifests[name],gate.HEAP_FREE_BATCHES[name]['counts'],overlays,{},{},{})


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--root',type=Path)
    args,remaining=parser.parse_known_args()
    if args.root:ROOT=args.root.resolve()
    unittest.main(argv=[sys.argv[0],*remaining])
