#!/usr/bin/env python3
"""Pin five existing scalar call boundaries; do not execute canonical callers.

The original body and continuation are replayed separately only when private
exports are supplied to verify_cpp_20261104_heap_free_export.py. Public tests
use short windows, exact source reversals and initialized synthetic transfers.
"""
from __future__ import annotations
import argparse
import copy
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch
import verify_cpp_20261104_heap_free_export as evidence

ROOT = Path(__file__).resolve().parents[1]
CANDIDATE_ROOT = None


def blob(text):
    raw = text.encode()
    return hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()


def apply(case, source):
    for edit in case['replacements']:
        evidence.require(source.count(edit['before']) == edit['count'] == 1, 'source edit occurrence changed')
        source = source.replace(edit['before'], edit['after'], 1)
    return source


def restore(case, source):
    evidence.require(evidence.sha(source.encode()) == case['source_after_sha256'], 'new source hash differs')
    for edit in reversed(case['replacements']):
        evidence.require(source.count(edit['after']) == edit['count'] == 1, 'source reversal occurrence changed')
        source = source.replace(edit['after'], edit['before'], 1)
    evidence.require(evidence.sha(source.encode()) == case['source_before_sha256'] and blob(source) == case['preimage_git_blob'],
                     'source preimage differs')
    return source


def fixture(case, call=None):
    argument = case['source_argument']
    name = argument.split('[')[0]; index = int(argument.split('[')[1][:-1],0)
    target = int(case['call_target'],16)
    # This array is synthetic native storage, NOT a mapped guest object/address.
    return '''#include <cstdint>
#include <type_traits>
static std::uint32_t captured, target, count;
static std::uint32_t thunk_FUN_00237ec0(std::uint32_t word) {captured=word;target=0x002ea018; ++count; return 0x81234567;}
static std::uint32_t thunk_FUN_00067bf0(std::uint32_t word) {captured=word;target=0x00067bf0; ++count; return 0x81234567;}
static bool check(std::uint32_t value) {
    std::uint32_t storage[32];
    for (unsigned i=0;i<32;++i) storage[i]=~value;
    storage[INDEX]=value;
    std::uint32_t* NAME=storage;
    captured=~value; target=0; count=0;
    CALL
    return captured==value && count==1 && target==TARGET;
}
int main() {
    static_assert(sizeof(std::uint32_t)==4, "one DWORD");
    const std::uint32_t edges[]={0,1,0x7f,0x80,0xff,0x100,0x7fff,0x8000,0xffff,0x10000,0x7fffffff,0x80000000,0xffffff00,0xfffffffe,0xffffffff};
    for(auto v:edges) if(!check(v)) return 42;
    for(unsigned bit=0;bit<32;++bit) if(!check(1u<<bit)||!check(~(1u<<bit))) return 42;
    std::uint32_t state=0x9128fa4b;
    for(unsigned i=0;i<100000;++i) {state^=state<<13;state^=state>>17;state^=state<<5;if(!check(state)) return 42;}
    return 0;
}
'''.replace('INDEX',str(index)).replace('NAME',name).replace('CALL',call or case['source_call_after']).replace('TARGET',hex(target))


class HeapFreeScalarCallsTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        sys.path.insert(0,str(ROOT/'tools'))
        import verify_cpp_literal_declaration_batch as gate
        from source_layout import relative_source_path
        from body_hash_labels import read_body_digest
        cls.gate = gate
        cls.relative_source_path = staticmethod(relative_source_path)
        cls.read_body_digest = staticmethod(read_body_digest)
        cls.candidate_root = CANDIDATE_ROOT or ROOT
        cls.document = evidence.load_manifest(cls.candidate_root)
        cls.cases = cls.document['cases']
        cls.compiler = shutil.which('clang++')

    def source(self, case):
        return (self.candidate_root/case['source']).read_text()

    def compile(self, text, opt, directory=None, name='test'):
        if not self.compiler:
            self.skipTest('clang++ unavailable; no compiler result claimed')
        args = [self.compiler,'-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),'-x','c++','-']
        if directory is None: args += ['-fsyntax-only','-ferror-limit=0']
        else: args += ['-c','-o',str(Path(directory)/(name+'.o'))]
        return subprocess.run(args,input=text,capture_output=True,text=True,timeout=60)

    def run_fixture(self, case, opt, directory, call=None):
        text = fixture(case,call)
        exe = Path(directory)/'synthetic'
        result = subprocess.run([self.compiler,'-std=c++17',opt,'-x','c++','-','-o',str(exe)],input=text,capture_output=True,text=True,timeout=60)
        self.assertEqual(result.returncode,0,result.stderr)
        return subprocess.run([str(exe)],capture_output=True,text=True,timeout=20).returncode

    def test_source_hashes_original_body_identity_and_existing_models(self):
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            inventory = {r['entry']:r['original_body_sha256'] for r in csv.DictReader(stream)}
        for case in self.cases:
            source = self.source(case)
            self.assertEqual(case['source'],self.relative_source_path(ROOT,case['entry']).as_posix())
            self.assertEqual(self.read_body_digest(source),(case['original_body_sha256'],False))
            self.assertEqual(inventory[case['entry']],case['original_body_sha256'])
            before = restore(case,source)
            self.assertEqual(apply(case,before),source)
            self.assertEqual(source.count(case['source_call_after']),1)
            self.assertIn('ABI_UNVERIFIED',source)
            for changed in (source+'\n', source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1), source.replace(case['source_argument'],'0',1)):
                with self.assertRaises(ValueError): restore(case,changed)
            for edit in case['replacements']:
                with self.assertRaises(ValueError): restore(case,source.replace(edit['after'],edit['before'],1))
        for model in self.document['models']:
            raw = (ROOT/model['source']).read_bytes()
            self.assertEqual(evidence.sha(raw),model['source_sha256'])
            self.assertEqual(self.read_body_digest(raw.decode()),(model['original_body_sha256'],False))
            self.assertEqual(inventory[model['entry']],model['original_body_sha256'])
        header = self.document['header']
        self.assertEqual(evidence.sha((ROOT/header['source']).read_bytes()),header['source_sha256'])
        self.assertIn('deliberately undefined guest-runtime adapter',(ROOT/header['source']).read_text())
        self.assertNotIn('0x002e9c30',[c['entry'] for c in self.cases])

    def test_decoded_x86_calls_stack_cleanup_and_source_binding(self):
        evidence.validate_contract(self.document)
        # E8 CALL and E9 JMP must not be accepted interchangeably.
        with self.assertRaises(ValueError): evidence.relative_target(0,'e900000000',0xe8)
        with self.assertRaises(ValueError): evidence.relative_target(0,'e800000000',0xe9)
        for case in self.cases:
            self.assertFalse(case['analyzed_flow_override']['used_for_control_flow'])
            context = case['context_provenance']
            self.assertIn('not an official function body',context['scope'])
            self.assertEqual(int(context['last_official_body_address'],16),int(case['body_ranges'][-1]['end_inclusive'],16))

    def test_all_narrow_window_byte_and_binding_mutations_rejected(self):
        mutations = 0
        for i,case in enumerate(self.cases):
            for role,window in case['instruction_windows'].items():
                for j in range(len(bytes.fromhex(window['bytes']))):
                    mutant = copy.deepcopy(self.document); raw=bytearray.fromhex(window['bytes']);raw[j]^=1
                    mutant['cases'][i]['instruction_windows'][role]['bytes']=raw.hex()
                    with self.assertRaises(ValueError): evidence.validate_contract(mutant)
                    mutations += 1
                for field,value in [('address',hex(int(window['address'],16)+1)),('evidence_scope','forged')]:
                    mutant=copy.deepcopy(self.document);mutant['cases'][i]['instruction_windows'][role][field]=value
                    with self.assertRaises(ValueError): evidence.validate_contract(mutant)
                    mutations += 1
            for field in ('source_argument','call_target','source_call_before','source_call_after'):
                mutant=copy.deepcopy(self.document);mutant['cases'][i][field]+='changed'
                with self.assertRaises(ValueError): evidence.validate_contract(mutant)
                mutations += 1
            mutant=copy.deepcopy(self.document);mutant['cases'][i]['analyzed_flow_override']['used_for_control_flow']=True
            with self.assertRaises(ValueError): evidence.validate_contract(mutant)
            mutations += 1
        for i,model in enumerate(self.document['models']):
            if 'instruction_window' not in model: continue
            for j in range(len(bytes.fromhex(model['instruction_window']['bytes']))):
                mutant=copy.deepcopy(self.document);raw=bytearray.fromhex(model['instruction_window']['bytes']);raw[j]^=1
                mutant['models'][i]['instruction_window']['bytes']=raw.hex()
                with self.assertRaises(ValueError): evidence.validate_contract(mutant)
                mutations += 1
        self.assertEqual(mutations,184)

    def test_historical_ledgers_and_exact_two_stage_reversal(self):
        for case in self.cases:
            pin=case['historical_ledger'];path=ROOT/pin['ledger']
            self.assertEqual(evidence.sha(path.read_bytes()),pin['ledger_sha256'])
            historical=json.loads(path.read_text())['cases'][pin['case_index']]
            self.assertEqual(historical['entry'],case['entry'])
            self.assertEqual(historical['status'],'partial')
            self.assertEqual(historical['body_ranges'],case['body_ranges'])
            self.assertEqual(historical['body_sha256'],case['original_body_sha256'])
            before=restore(case,self.source(case))
            self.assertEqual(evidence.sha(before.encode()),historical['result_source_sha256'])
            oldest=self.gate.restore(historical,before)
            self.assertEqual(evidence.sha(oldest.encode()),pin['historical_preimage_sha256'])
            self.assertEqual(blob(oldest),pin['historical_preimage_git_blob'])
            for opt in ('-O0','-O2'):
                result=self.compile(apply(case,oldest),opt)
                self.assertNotEqual(result.returncode,0)
                errors=re.findall(r'error:\s*([^\n]+)',result.stderr)
                self.assertEqual(len(errors),pin['original_literal_edit_count'],result.stderr)
                self.assertTrue(all('pointer to integer conversion' in error for error in errors),result.stderr)

    def test_complete_current_compile_and_original_negative_at_o0_o2(self):
        with tempfile.TemporaryDirectory() as directory:
            for case in self.cases:
                source=self.source(case);before=restore(case,source)
                for opt in ('-O0','-O2'):
                    result=self.compile(source,opt)
                    self.assertEqual(result.returncode,0,result.stderr)
                    result=self.compile(source,opt,directory,case['entry'])
                    self.assertEqual(result.returncode,0,result.stderr)
                    result=self.compile(before,opt)
                    self.assertNotEqual(result.returncode,0)
                    self.assertEqual(re.findall(r'error:\s*([^\n]+)',result.stderr),["use of undeclared identifier 'thunk_FUN_00237ec0'"])

    def test_synthetic_full_dword_capture_and_wrong_transfer_negatives(self):
        if not self.compiler: self.skipTest('clang++ unavailable')
        with tempfile.TemporaryDirectory() as directory:
            for case in self.cases:
                name=case['source_argument'].split('[')[0];index=int(case['source_argument'].split('[')[1][:-1],0)
                call=case['source_call_after']
                other='thunk_FUN_00067bf0' if case['call_target']=='0x002ea018' else 'thunk_FUN_00237ec0'
                mutants=[call.replace(case['source_argument'],'0'),call.replace(case['source_argument'],f'{name}[{index+1}]'),other+'('+case['source_argument']+');']
                for opt in ('-O0','-O2'):
                    self.assertEqual(self.run_fixture(case,opt,directory),0)
                    for mutant in mutants:self.assertEqual(self.run_fixture(case,opt,directory,mutant),42)

    def test_manifest_boundary_and_forged_source_pins_rejected(self):
        raw=(self.candidate_root/evidence.MANIFEST_NAME).read_bytes()
        mutants=[raw+b'\n']
        for flag in ('original_xbe_reauthenticated','original_game_functions_executed'):
            changed=copy.deepcopy(self.document);changed[flag]=True
            mutants.append(json.dumps(changed).encode())
        for field in ('source_before_sha256','source_after_sha256','preimage_git_blob','original_body_sha256'):
            changed=copy.deepcopy(self.document);changed['cases'][0][field]='0'*64
            mutants.append(json.dumps(changed).encode())
        changed=copy.deepcopy(self.document);changed['cases'][0]['body_ranges'][0]['length']+=1
        mutants.append(json.dumps(changed).encode())
        changed=copy.deepcopy(self.document);changed['cases'][0]['context_provenance']['program_memory_context_sha256']='0'*64
        mutants.append(json.dumps(changed).encode())
        changed=copy.deepcopy(self.document);changed['cases'][0]['replacements'][0]['after']+='// unrelated change\n'
        mutants.append(json.dumps(changed).encode())
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/evidence.MANIFEST_NAME;path.parent.mkdir(parents=True)
            path.write_bytes(raw);evidence.load_manifest(directory)
            for mutant in mutants:
                path.write_bytes(mutant)
                with self.assertRaisesRegex(ValueError,'manifest hash changed'):evidence.load_manifest(directory)

    def test_bounded_jsonl_replay_rejects_duplicate_entries_and_keys(self):
        with self.assertRaisesRegex(ValueError,'duplicate JSON key'): evidence.strict_json(b'{"x":1,"x":2}')
        with self.assertRaises(ValueError): evidence.strict_json(b'{"x":NaN}')
        with tempfile.TemporaryDirectory() as directory:
            path=Path(directory)/'records.jsonl';one=b'{"entry":"00067bf0"}\n'
            path.write_bytes(one)
            self.assertEqual(set(evidence.selected_records(path,{'0x00067bf0'})),{'0x00067bf0'})
            for raw in (one+one,b'{"entry":"00067bf0","entry":"00067bf0"}\n',b'{"entry":"ffffffff"}\n'):
                path.write_bytes(raw)
                with self.assertRaises(ValueError):evidence.selected_records(path,{'0x00067bf0'})
            path.write_bytes(one)
            for name,value in [('MAX_RECORD_BYTES',8),('MAX_EXPORT_BYTES',8),('MAX_RECORDS',0)]:
                with patch.object(evidence,name,value),self.assertRaises(ValueError): evidence.selected_records(path,{'0x00067bf0'})
            with self.assertRaises(ValueError):evidence.bounded_json(path,8)

    def test_replay_exact_body_coverage_and_separate_context_hash(self):
        # Synthetic bytes exercise parser invariants, not additional game evidence.
        raw=b'\x90\xc3';digest=evidence.sha(raw).upper()
        item={'entry':'0x00000010','body_byte_count':2,'body_ranges':[{'start':'10','end_inclusive':'10','length':1},{'start':'12','end_inclusive':'12','length':1}], 'original_body_sha256':digest}
        record={'entry':'00000010','body_byte_count':2,'body_ranges':[dict(item['body_ranges'][0],bytes_hex='90'),dict(item['body_ranges'][1],bytes_hex='c3')], 'program_memory_body_sha256':digest,'instruction_count':2,'instructions':[]}
        for address,encoded in [('10','90'),('12','c3')]:
            record['instructions'].append({'address':address,'bytes_hex':encoded,'length':1,'parsed_length':1,'is_length_overridden':False,'is_fallthrough_overridden':False,'flow_override':'NONE'})
        memory=evidence.validate_record(record,item)
        self.assertEqual(memory,{0x10:0x90,0x12:0xc3})
        for field,value in [('length',2),('bytes_hex','91'),('is_length_overridden',True),('flow_override','CALL_RETURN'),('address','12')]:
            mutant=copy.deepcopy(record);mutant['instructions'][0][field]=value
            with self.assertRaises(ValueError):evidence.validate_record(mutant,item)
        mutant=copy.deepcopy(record);mutant['instructions'].pop();mutant['instruction_count']=1
        with self.assertRaises(ValueError):evidence.validate_record(mutant,item)
        context={'function_entry':'00000010','start':'10','end_inclusive':'12','length':3,'program_memory_context_sha256':evidence.sha(b'\x90\x59\xc3').upper(),'bytes_hex':'9059c3'}
        case=dict(item,context_provenance={k:v for k,v in context.items() if k not in ('function_entry','bytes_hex')},instruction_windows={'cleanup':{'address':'11','bytes':'59'}})
        evidence.validate_context(context,case,memory)
        mutant=copy.deepcopy(context);mutant['bytes_hex']='9058c3'
        with self.assertRaises(ValueError):evidence.validate_context(mutant,case,memory)
        mutant=copy.deepcopy(context);mutant['program_memory_context_sha256']=evidence.sha(bytes.fromhex(mutant['bytes_hex'])).upper();mutant['bytes_hex']='9159c3'
        with self.assertRaises(ValueError):evidence.validate_context(mutant,case,memory)


if __name__ == '__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--root',type=Path)
    parser.add_argument('--candidate-root',type=Path)
    args,remaining=parser.parse_known_args()
    if args.root:ROOT=args.root.resolve()
    if args.candidate_root:CANDIDATE_ROOT=args.candidate_root.resolve()
    unittest.main(argv=[sys.argv[0],*remaining])
