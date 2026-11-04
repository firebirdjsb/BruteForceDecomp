#!/usr/bin/env python3
"""Two source-only C++17 gains. No original machine code/function execution.

Optional BF_MEMORY_CALL_EVIDENCE points to private priority-v2 JSON exports.
BF_REPO_ROOT/BF_OVERLAY_ROOT support an out-of-tree review before integration.
"""
from __future__ import annotations
import copy
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

import cpp_memory_call_declarations as gate

ROOT = Path(os.environ.get('BF_REPO_ROOT',Path(__file__).resolve().parents[1]))
OVERLAY = Path(os.environ.get('BF_OVERLAY_ROOT',ROOT))
EVIDENCE = Path(os.environ['BF_MEMORY_CALL_EVIDENCE']) if os.environ.get('BF_MEMORY_CALL_EVIDENCE') else None
COMPILER = shutil.which('clang++')


def source(path):
    return (OVERLAY/path if (OVERLAY/path).is_file() else ROOT/path).read_text()


def mutate_raw(record, site, raw):
    out = copy.deepcopy(record)
    address = int(site,16)
    for row in out['body_ranges']:
        start = int(row['start'],16)
        offset = address - start
        if 0 <= offset and offset + len(raw) <= row['length']:
            data = bytearray.fromhex(row['bytes_hex'])
            data[offset:offset+len(raw)] = raw
            row['bytes_hex'] = data.hex()
            return out
    raise ValueError('Mutation outside recorded bytes')


class MemoryCallDeclarations(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.data = gate.load_manifest(OVERLAY)
        cls.history = {c['entry']:c for c in json.loads((ROOT/'metadata/cpp_20261101_byte_offset_20.json').read_text())['cases']}

    def compile(self, text, opt='-O0', object_code=False):
        if COMPILER is None:
            self.skipTest('clang++ unavailable')
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/'probe.cpp'
            path.write_text(text)
            cmd=[COMPILER,'-std=c++17','-x','c++','-ferror-limit=3',opt,'-I',str(ROOT/'include')]
            cmd += ['-c','-o',str(Path(directory)/'probe.o')] if object_code else ['-fsyntax-only']
            return subprocess.run(cmd+[str(path)],text=True,capture_output=True,timeout=60,check=False)

    def test_sources_reverse_exactly_and_historical_ledger_composes(self):
        for case in self.data['cases']:
            with self.subTest(entry=case['entry']):
                text=source(case['source'])
                old=gate.restore_source(self.data,case,text)
                restored=gate.restore_for_byte_offset_ledger(OVERLAY,self.history[case['entry']],text)
                self.assertEqual(old,restored)
                if OVERLAY!=ROOT:
                    self.assertEqual(old,(ROOT/case['source']).read_text())
                self.assertIn('#include "bf_ghidra_types.h"\n'+self.data['added_block'],text)
                self.assertIn('ABI_UNVERIFIED',text)

    def test_exact_callee_and_existing_neighbor_signature_unchanged(self):
        callee=self.data['callee'];text=source(callee['source'])
        self.assertEqual(gate.sha(text),callee['source_sha256'])
        self.assertIn('\n'+gate.SIGNATURE+'\n',text)
        self.assertIn('Input x86 body SHA-256: '+callee['original_body_sha256'],text)
        neighbor=self.data['existing_source_declaration'];text=source(neighbor['source'])
        self.assertEqual(gate.sha(text),neighbor['source_sha256'])
        self.assertIn('extern '+gate.SIGNATURE+';',text)

    def test_full_candidates_parse_and_object_compile_o0_o2(self):
        for case in self.data['cases']:
            for opt in ('-O0','-O2'):
                for object_code in (False,True):
                    with self.subTest(entry=case['entry'],opt=opt,object=object_code):
                        run=self.compile(source(case['source']),opt,object_code)
                        self.assertEqual(run.returncode,0,run.stderr)

    def test_original_missing_declaration_failures_preserved_o0_o2(self):
        for case in self.data['cases']:
            old=gate.restore_source(self.data,case,source(case['source']))
            for opt in ('-O0','-O2'):
                with self.subTest(entry=case['entry'],opt=opt):
                    run=self.compile(old,opt)
                    self.assertNotEqual(run.returncode,0)
                    self.assertIn("undeclared identifier '_memmove'",run.stderr)

    def test_wrong_typed_arguments_and_arity_rejected(self):
        prefix='#include "bf_ghidra_types.h"\nextern '+gate.SIGNATURE+';\n'
        for call in ('_memmove(p,p);','_memmove(p,p,n,n);','_memmove(n,p,n);','_memmove(p,n,n);','_memmove(p,p,p);'):
            run=self.compile(prefix+'void probe(void *p,size_t n){(void)'+call+'}\n')
            self.assertNotEqual(run.returncode,0,call)

    def test_source_mutations_rejected(self):
        for case in self.data['cases']:
            text=source(case['source'])
            for bad in (text+'\n',text.replace('return 0;','return 1;',1),text.replace('size_t __n','unsigned __n',1),text.replace(self.data['added_block'],'',1),text.replace('ABI_UNVERIFIED','ABI_VERIFIED',1)):
                with self.assertRaises(ValueError):
                    gate.restore_source(self.data,case,bad)
            for field in ('source_before_sha256','source_after_sha256','preimage_git_blob','original_body_sha256'):
                changed=dict(case);changed[field]='0'*len(case[field])
                with self.assertRaises(ValueError):
                    gate.restore_source(self.data,changed,text)

    def test_manifest_scope_mutations_rejected(self):
        for field,value in [('schema_version',2),('full_xbe_reauthenticated',True),('original_xbe_sha256','0'*64),('evidence_kind','original_xbe'),('added_block','extern void * _memmove(...);\n')]:
            changed=copy.deepcopy(self.data);changed[field]=value
            with tempfile.TemporaryDirectory() as directory:
                path=Path(directory)/gate.MANIFEST;path.parent.mkdir(parents=True)
                path.write_text(json.dumps(changed))
                with self.assertRaises(ValueError):gate.load_manifest(directory)
        for case in self.data['cases']:
            with self.subTest(entry=case['entry']):
                # A source-repair overlay cannot mutate the historical source path.
                import sys
                sys.path.insert(0,str(ROOT/'tools'))
                from source_layout import relative_source_path
                self.assertEqual(case['source'],str(relative_source_path(ROOT,case['entry'])))

    def test_historical_ledger_mutations_rejected(self):
        for case in self.data['cases']:
            history=self.history[case['entry']];text=source(case['source'])
            for field,value in [('path','src/wrong.cpp'),('original_body_sha256','0'*64),('body_length',1),('preimage_git_blob','0'*40),('after','wrong'),('before','wrong')]:
                changed=dict(history);changed[field]=value
                with self.assertRaises(ValueError):
                    gate.restore_for_byte_offset_ledger(OVERLAY,changed,text)
        other=dict(self.history['0x002e0650']);other['entry']='0x00000000'
        self.assertEqual(gate.restore_for_byte_offset_ledger(OVERLAY,other,'untouched'),'untouched')

    def test_callee_remains_uncompiled_no_host_replacement(self):
        run=self.compile(source(self.data['callee']['source']))
        self.assertNotEqual(run.returncode,0)
        self.assertIn('pointer',run.stderr)
        for case in self.data['cases']:
            text=source(case['source'])
            self.assertEqual(text.count('_memmove('),2)
            self.assertNotIn('std::memmove(',text)

    @unittest.skipUnless(EVIDENCE,'private recorded byte export not supplied')
    def test_all_recorded_body_bytes_and_contracts(self):
        for case in self.data['cases']+[self.data['callee']]:
            with self.subTest(entry=case['entry']):
                record=json.loads((EVIDENCE/(case['entry'][2:]+'.json')).read_text())
                gate.validate_record(record,case)
                if case in self.data['cases']:
                    gate.validate_call_contract(record,case)
                else:
                    gate.validate_callee_contract(record,case)

    @unittest.skipUnless(EVIDENCE,'private recorded byte export not supplied')
    def test_wrong_targets_and_stack_order_rejected(self):
        for case in self.data['cases']:
            record=json.loads((EVIDENCE/(case['entry'][2:]+'.json')).read_text())
            raw=bytearray.fromhex(case['call_bytes']);raw[1]^=1
            with self.assertRaisesRegex(ValueError,'Wrong raw direct-call target'):
                gate.validate_call_contract(mutate_raw(record,case['call_site'],raw),case)
            # Swap the first and final PUSH opcodes, preserving lengths.
            raw=bytearray.fromhex(case['stack_setup_bytes']);raw[0],raw[-1]=raw[-1],raw[0]
            self.assertNotEqual(raw.hex(),case['stack_setup_bytes'])
            with self.assertRaisesRegex(ValueError,'Changed raw contract'):
                gate.validate_call_contract(mutate_raw(record,case['stack_setup_site'],raw),case)
            with self.assertRaises(ValueError):
                gate.validate_call_contract(mutate_raw(record,case['caller_cleanup_site'],bytes.fromhex('83c408')),case)

    @unittest.skipUnless(EVIDENCE,'private recorded byte export not supplied')
    def test_callee_loads_and_return_contract_mutations_rejected(self):
        case=self.data['callee'];record=json.loads((EVIDENCE/'002ea100.json').read_text())
        # Change MOV ESI,[EBP+0xc] to [EBP+8], swapping argument identity.
        with self.assertRaises(ValueError):
            gate.validate_callee_contract(mutate_raw(record,'002ea107',bytes.fromhex('08')),case)
        for site in case['return_load_and_epilogue_sites']:
            changed=mutate_raw(record,site,bytes.fromhex('8b450c'))
            with self.assertRaises(ValueError):
                gate.validate_callee_contract(changed,case)

    @unittest.skipUnless(EVIDENCE,'private recorded byte export not supplied')
    def test_body_and_analyzed_boundary_mutations_rejected(self):
        for case in self.data['cases']+[self.data['callee']]:
            record=json.loads((EVIDENCE/(case['entry'][2:]+'.json')).read_text())
            changed=mutate_raw(record,record['body_ranges'][-1]['end_inclusive'],bytes.fromhex('90'))
            with self.assertRaises(ValueError): gate.validate_record(changed,case)
            changed=copy.deepcopy(record);changed['instructions'][-1]['flow_override']='CALL_RETURN'
            with self.assertRaises(ValueError): gate.validate_record(changed,case)
            changed=copy.deepcopy(record);changed['body_ranges'].pop()
            with self.assertRaises(ValueError): gate.validate_record(changed,case)


if __name__=='__main__':
    unittest.main()
