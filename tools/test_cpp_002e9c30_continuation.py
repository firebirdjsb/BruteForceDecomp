#!/usr/bin/env python3
"""Bounded 0x002e9c30 continuation checks. Never run its canonical function.

Only initialized synthetic host storage/callback projections execute. Private
JSON replay and objdump decode bytes as data, not executable instructions.
"""
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

sys.dont_write_bytecode = True
HERE = Path(__file__).resolve().parent
ROOT = HERE.parent
MANIFEST = 'metadata/cpp_20261104_002e9c30_continuation.json'
COMPILER = shutil.which('clang++')
SANITIZER_COMPILER = shutil.which('g++')
PRIVATE_EXPORT = PRIVATE_CONTEXT = None
MANIFEST_SHA = '347d483db4e571d6e45040c4aab25ade5ff13870408bebfc023fb9f79ebf6694'
SPECS = [
    ('save_esi', 0x2e9c30, '56'), ('bind_esi_from_ecx', 0x2e9c31, '8bf1'),
    ('load_allocation', 0x2e9c33, '8b460c'), ('push_allocation', 0x2e9c36, '50'),
    ('table_word_store', 0x2e9c37, 'c7067c693800'), ('call', 0x2e9c3d, 'e8d6030000'),
    ('zero_eax', 0x2e9c42, '33c0'), ('caller_cleanup', 0x2e9c44, '83c404'),
    ('zero_0c', 0x2e9c47, '89460c'), ('zero_10', 0x2e9c4a, '894610'),
    ('zero_14', 0x2e9c4d, '894614'), ('zero_18', 0x2e9c50, '894618'),
    ('restore_esi', 0x2e9c53, '5e'), ('ret', 0x2e9c54, 'c3'),
]
EXPECTED_STATEMENTS = '''  guest_allocation_va = in_ECX[3];
  *in_ECX = UINT32_C(0x0038697c);
  thunk_FUN_00237ec0(guest_allocation_va);
  in_ECX[3] = UINT32_C(0);
  in_ECX[4] = UINT32_C(0);
  in_ECX[5] = UINT32_C(0);
  in_ECX[6] = UINT32_C(0);'''


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def blob(text):
    raw = text.encode()
    return hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()


def need(condition, message):
    if not condition:
        raise ValueError(message)


def validate_contract(d):
    need(d['entry'] == '0x002e9c30', 'entry')
    need(d['body_byte_count'] == 18 and d['body_ranges'] == [
        {'start':'0x002E9C30','end_inclusive':'0x002E9C41','length':18}], 'official range')
    need(d['original_body_sha256'] == '16F51CE9E39F62C64F480972ECE34344FFD240A259379B37E7FA597D850F01D4', 'body hash')
    need(not d['original_xbe_reauthenticated'] and not d['original_machine_code_executed'] and
         not d['canonical_held_function_executed'], 'scope')
    need(d['analyzed_flow_override'] == {'address':'0x002e9c3d','value':'CALL_RETURN','used_for_control_flow':False}, 'flow override')
    need(len(d['instruction_windows']) == len(SPECS), 'windows')
    next_address = 0x2e9c30
    for w, (role, address, encoded) in zip(d['instruction_windows'], SPECS):
        need(w == {'role':role,'address':f'0x{address:08x}','bytes':encoded,
                   'evidence_scope':'official_body' if address < 0x2e9c42 else 'adjacent_context_only'}, 'window')
        need(address == next_address, 'gap')
        next_address += len(bytes.fromhex(encoded))
    need(next_address == 0x2e9c55, 'RET endpoint')
    call = bytes.fromhex(d['instruction_windows'][5]['bytes'])
    need(0x2e9c42 + int.from_bytes(call[1:],'little',signed=True) == 0x2ea018, 'E8 destination')
    need(d['call_target'] == '0x002ea018' and d['guest_indirect_slot'] == '0x003bc654', 'heap boundary')
    context = d['context_provenance']
    need(context['start'] == '002e9c30' and context['end_inclusive'] == '002e9c81' and context['length'] == 82 and
         context['last_official_body_address'] == '002e9c41' and
         context['program_memory_context_sha256'] == '0F5C8818C9E8DF592509BD9E6E9654DE506D52B7B51DA0C77DE5687B4D882180' and
         context['scope'] == 'adjacent context, not an official function body and not whole-XBE reauthentication', 'context')


def apply(d, source):
    for edit in d['replacements']:
        need(edit['count'] == source.count(edit['before']) == 1, 'apply occurrence')
        source = source.replace(edit['before'], edit['after'], 1)
    return source


def restore(d, source):
    need(sha(source.encode()) == d['source_after_sha256'], 'after hash')
    for edit in reversed(d['replacements']):
        need(edit['count'] == source.count(edit['after']) == 1, 'restore occurrence')
        source = source.replace(edit['after'], edit['before'], 1)
    need(sha(source.encode()) == d['source_before_sha256'] and blob(source) == d['preimage_git_blob'], 'before pin')
    return source


def operation(source):
    body = source.split('  guest_allocation_va = in_ECX[3];', 1)[1]
    body = '  guest_allocation_va = in_ECX[3];' + body.split('\n}',1)[0]
    need(body == EXPECTED_STATEMENTS, 'complete bounded statement projection')
    return body


def fixture(statements, traced):
    # This is separate initialized synthetic storage, never the canonical
    # undefined ECX pointer or a host pointer translated to guest32.
    return r'''
#include <cstdint>
#include <cstddef>
#include "bf_002ea018_heap_free_guest32.h"
struct Stop {};
static unsigned events[16], event_count, calls;
static bool failed, stop;
static uint32_t expected_word, status_word;
static void event(unsigned value) { if(event_count>=16) {failed=true; return;} events[event_count++]=value; }
#if TRACED
struct Cell;
static Cell* object;
struct Cell {
    uint32_t value;
    operator uint32_t() const;
    Cell& operator=(uint32_t word);
};
Cell::operator uint32_t() const { event(100+unsigned(this-object)); return value; }
Cell& Cell::operator=(uint32_t word) { event(200+unsigned(this-object));value=word;return *this; }
static uint32_t& raw(Cell& cell) {return cell.value;}
#else
using Cell=uint32_t;
static Cell* object;
static uint32_t& raw(Cell& cell) {return cell;}
#endif
static_assert(sizeof(Cell)==4, "synthetic DWORD cell");
uint32_t bf_xbox_guest_tailjump1_u32(uint32_t slot, uint32_t word) {
    event(300); ++calls;
    if(slot != BF_XBOX_HEAP_FREE_INDIRECT_SLOT || word != expected_word ||
       raw(object[0]) != UINT32_C(0x0038697c)) failed=true;
    for(unsigned i=1;i<7;++i) if(raw(object[i]) != (i==3 ? expected_word : UINT32_C(0x76543210)+i)) failed=true;
    // Callback-visible side effects survive except the four later zero stores.
    for(unsigned i=0;i<7;++i) raw(object[i])=UINT32_C(0xabcd1200)+i;
    if(stop) throw Stop{};
    return status_word;
}
static void run_bounded_projection(Cell* in_ECX) {
    uint32_t guest_allocation_va;
STATEMENTS
}
static bool check(uint32_t word, bool interrupt) {
    Cell storage[9]; object=storage+1;
    raw(storage[0])=UINT32_C(0x13579bdf); raw(storage[8])=UINT32_C(0xfdb97531);
    for(unsigned i=0;i<7;++i) raw(object[i])=UINT32_C(0x76543210)+i;
    raw(object[3])=word; expected_word=word;status_word=~word;
    event_count=0;calls=0;failed=false;stop=interrupt;
    bool caught=false;
    try {run_bounded_projection(object);} catch(const Stop&) {caught=true;}
    if(caught!=interrupt || failed || calls!=1 || raw(storage[0])!=UINT32_C(0x13579bdf) || raw(storage[8])!=UINT32_C(0xfdb97531)) return false;
    for(unsigned i=0;i<7;++i) if(raw(object[i]) != ((i<3 || interrupt) ? UINT32_C(0xabcd1200)+i : 0)) return false;
#if TRACED
    const unsigned expected[]={103,200,300,203,204,205,206};
    const unsigned count=interrupt?3:7;
    if(event_count!=count) return false;
    for(unsigned i=0;i<count;++i) if(events[i]!=expected[i]) return false;
#else
    if(event_count!=1 || events[0]!=300) return false;
#endif
    return true;
}
int main() {
    const uint32_t edges[]={0,1,0x7f,0x80,0xff,0x100,0x7fff,0x8000,0xffff,0x10000,0x7fffffff,0x80000000,0xffffff00,0xfffffffe,0xffffffff};
    for(auto word:edges) if(!check(word,false)||!check(word,true)) return 42;
    for(unsigned bit=0;bit<32;++bit) if(!check(1u<<bit,false)||!check(~(1u<<bit),false)) return 42;
    uint32_t state=UINT32_C(0x1298ab37);
    for(unsigned i=0;i<10000;++i) {state^=state<<13;state^=state>>17;state^=state<<5;if(!check(state,false)) return 42;}
    return 0;
}
'''.replace('TRACED','1' if traced else '0').replace('STATEMENTS',statements)


class ContinuationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        raw = (ROOT/MANIFEST).read_bytes()
        need(sha(raw) == MANIFEST_SHA, 'manifest hash changed')
        cls.d=json.loads(raw);validate_contract(cls.d)
        cls.source=(ROOT/cls.d['source']).read_text()
        sys.path.insert(0,str(ROOT/'tools'))
        import verify_cpp_literal_declaration_batch as gate
        import verify_cpp_20261104_heap_free_export as evidence
        from source_layout import relative_source_path
        cls.gate=gate;cls.evidence=evidence;cls.path=relative_source_path(ROOT,cls.d['entry'])
        cls.wrappers=[ROOT/p['source'] for p in cls.d['unchanged_dependencies'][1:]]

    def compile(self,text,opt,output=None,link=False,sanitize=False):
        args=[SANITIZER_COMPILER if sanitize else COMPILER,'-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include')]
        if sanitize:args+=['-fsanitize=undefined','-fno-sanitize-recover=all','-fno-omit-frame-pointer']
        if link:args+=['-Wall','-Wextra','-Werror']
        if output is None:args+=['-fsyntax-only']
        elif link:args += [str(p) for p in self.wrappers]+['-o',str(output)]
        else:args += ['-c','-o',str(output)]
        args += ['-x','c++','-']
        return subprocess.run(args,input=text,text=True,capture_output=True,timeout=60)

    def test_01_source_exact_identity_and_dependencies(self):
        d=self.d
        self.assertEqual(self.path.as_posix(),d['source'])
        self.assertEqual((ROOT/self.path).read_text(),self.source)
        current=restore(d,self.source)
        self.assertEqual(apply(d,current),self.source)
        self.assertEqual(operation(self.source),EXPECTED_STATEMENTS)
        self.assertEqual(self.gate.read_body_digest(self.source),(d['original_body_sha256'],False))
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            rows=[row for row in csv.DictReader(stream) if row['entry']==d['entry']]
        self.assertEqual(len(rows),1)
        self.assertEqual(rows[0]['original_body_sha256'],d['original_body_sha256'])
        for dependency in d['unchanged_dependencies']:
            self.assertEqual(sha((ROOT/dependency['source']).read_bytes()),dependency['source_sha256'])
        mutants=[self.source+'\n',self.source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1)]
        mutants += [self.source.replace(e['after'],e['before'],1) for e in d['replacements']]
        mutants += [self.source.replace(f'  in_ECX[{i}] = UINT32_C(0);\n','',1) for i in range(3,7)]
        for mutant in mutants:
            with self.assertRaises(ValueError):restore(d,mutant)

    def test_02_immutable_ledger_two_stage_reversal(self):
        d=self.d;p=d['historical_ledger'];raw=(ROOT/p['ledger']).read_bytes()
        self.assertEqual(sha(raw),p['ledger_sha256'])
        case=json.loads(raw)['cases'][p['case_index']]
        self.assertEqual(case['entry'],d['entry']);self.assertEqual(case['status'],'partial')
        self.assertEqual(case['body_ranges'],d['body_ranges'])
        old=restore(d,self.source)
        self.assertEqual(sha(old.encode()),case['result_source_sha256'])
        earliest=self.gate.restore(case,old)
        self.assertEqual(sha(earliest.encode()),p['historical_preimage_sha256'])
        self.assertEqual(blob(earliest),p['historical_preimage_git_blob'])
        negative=apply(d,earliest)
        self.assertIn('&PTR_LAB_0038697c',negative)
        self.assertNotIn('UINT32_C(0x0038697c)',negative)
        for opt in ('-O0','-O2'):
            r=self.compile(negative,opt)
            self.assertNotEqual(r.returncode,0,r.stderr)
            errors=re.findall(r'error:\s*([^\n]+)',r.stderr)
            self.assertEqual(len(errors),1,r.stderr)
            self.assertTrue('conversion' in errors[0],r.stderr)
        # Existing channels must still reject this genuinely different scope.
        self.assertNotIn(d['entry'],self.gate.load_heap_free_overlays(ROOT,p['ledger']))
        with self.assertRaises(ValueError): self.gate.restore(case,self.source)
        with self.assertRaises(ValueError): self.gate.validate_heap_free_overlays({d['entry']:d},p['ledger'])

    def test_03_complete_tu_syntax_objects_and_missing_adapter(self):
        with tempfile.TemporaryDirectory(prefix='held002e9c30-') as temp:
            for opt in ('-O0','-O2'):
                for output in (None,Path(temp)/'candidate.o'):
                    r=self.compile(self.source,opt,output)
                    self.assertEqual(r.returncode,0,r.stderr)
                r=self.compile(restore(self.d,self.source),opt)
                self.assertNotEqual(r.returncode,0,r.stderr)
                self.assertIn('thunk_FUN_00237ec0',r.stderr)
                # Do not call the uninitialized canonical function to force a link.
                r=self.compile('#include "bf_002ea018_heap_free_guest32.h"\nint main(){return int(thunk_FUN_00237ec0(1));}',opt,Path(temp)/'missing',link=True)
                self.assertNotEqual(r.returncode,0,r.stderr)
                self.assertIn('bf_xbox_guest_tailjump1_u32',r.stderr)

    def test_04_all_instruction_bytes_and_scope_mutants_rejected(self):
        mutations=0
        for i,w in enumerate(self.d['instruction_windows']):
            for j in range(len(bytes.fromhex(w['bytes']))):
                d=copy.deepcopy(self.d);raw=bytearray.fromhex(w['bytes']);raw[j]^=1
                d['instruction_windows'][i]['bytes']=raw.hex()
                with self.assertRaises(ValueError):validate_contract(d)
                mutations+=1
            for field,value in [('address',hex(int(w['address'],16)+1)),('evidence_scope','official_body_forged')]:
                d=copy.deepcopy(self.d);d['instruction_windows'][i][field]=value
                with self.assertRaises(ValueError):validate_contract(d)
                mutations+=1
        self.assertEqual(mutations,65)
        for field in ('original_xbe_reauthenticated','original_machine_code_executed','canonical_held_function_executed'):
            d=copy.deepcopy(self.d);d[field]=True
            with self.assertRaises(ValueError):validate_contract(d)
        d=copy.deepcopy(self.d);d['body_byte_count']=37
        with self.assertRaises(ValueError):validate_contract(d)
        d=copy.deepcopy(self.d);d['analyzed_flow_override']['used_for_control_flow']=True
        with self.assertRaises(ValueError):validate_contract(d)

    def run_projection(self,statements,opt,traced,directory,sanitize=False):
        exe=Path(directory)/'projection'
        r=self.compile(fixture(statements,traced),opt,exe,link=True,sanitize=sanitize)
        self.assertEqual(r.returncode,0,r.stderr)
        return subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)

    def test_05_initialized_objects_callbacks_trace_and_negative_controls(self):
        statements=operation(self.source)
        mutants=[statements.replace('guest_allocation_va = in_ECX[3]','guest_allocation_va = in_ECX[2]'),
                 statements.replace('thunk_FUN_00237ec0(guest_allocation_va)','thunk_FUN_00237ec0(guest_allocation_va ^ guest_allocation_va)'),
                 statements.replace('  guest_allocation_va = in_ECX[3];\n  *in_ECX = UINT32_C(0x0038697c);','  *in_ECX = UINT32_C(0x0038697c);\n  guest_allocation_va = in_ECX[3];'),
                 statements.replace('  in_ECX[3] = UINT32_C(0);\n','').replace('  thunk_FUN_00237ec0(guest_allocation_va);','  in_ECX[3] = UINT32_C(0);\n  thunk_FUN_00237ec0(guest_allocation_va);')]
        mutants += [statements.replace(f'  in_ECX[{i}] = UINT32_C(0);','') for i in range(3,7)]
        mutants += [statements.replace('  in_ECX[4] = UINT32_C(0);\n  in_ECX[5] = UINT32_C(0);','  in_ECX[5] = UINT32_C(0);\n  in_ECX[4] = UINT32_C(0);')]
        with tempfile.TemporaryDirectory(prefix='held002e9c30-') as temp:
            for opt in ('-O0','-O2'):
                for traced in (False,True):
                    r=self.run_projection(statements,opt,traced,temp)
                    self.assertEqual(r.returncode,0,r.stderr)
                for mutant in mutants:
                    r=self.run_projection(mutant,opt,True,temp)
                    self.assertEqual(r.returncode,42,r.stderr)
            for traced in (False,True):
                r=self.run_projection(statements,'-O1',traced,temp,sanitize=True)
                self.assertEqual(r.returncode,0,r.stderr)

    def test_06_optional_private_replay_and_independent_decode(self):
        if not PRIVATE_EXPORT:self.skipTest('no private export supplied')
        contexts=self.evidence.bounded_json(PRIVATE_CONTEXT)
        self.assertEqual({k:v for k,v in contexts.items() if k!='bytes_hex'},self.d['context_provenance'])
        raw=bytes.fromhex(contexts['bytes_hex'])
        self.assertEqual(len(raw),82)
        self.assertEqual(sha(raw).upper(),contexts['program_memory_context_sha256'])
        self.assertEqual(sha(raw[:18]).upper(),self.d['original_body_sha256'])
        record=self.evidence.selected_records(PRIVATE_EXPORT,{'0x002e9c30'})['0x002e9c30']
        official_item=copy.deepcopy(self.d)
        official_item['instruction_windows']={w['role']:w for w in self.d['instruction_windows'] if w['evidence_scope']=='official_body'}
        self.evidence.validate_record(record,official_item,allowed_override=0x2e9c3d)
        self.assertEqual(bytes.fromhex(record['body_ranges'][0]['bytes_hex']),raw[:18])
        for w in self.d['instruction_windows']:
            offset=int(w['address'],16)-0x2e9c30
            self.assertEqual(raw[offset:offset+len(bytes.fromhex(w['bytes']))],bytes.fromhex(w['bytes']))
        decoder=shutil.which('objdump')
        self.assertIsNotNone(decoder,'independent objdump decoder missing')
        with tempfile.TemporaryDirectory(prefix='held002e9c30-') as temp:
            binary=Path(temp)/'path.bin';binary.write_bytes(raw[:37])
            result=subprocess.run([decoder,'-D','-b','binary','-m','i386','--adjust-vma=0x2e9c30',str(binary)],capture_output=True,text=True,check=True)
            decoded=re.findall(r'^\s*([0-9a-f]+):\s*((?:[0-9a-f]{2}\s+)+)\s*(.*)$',result.stdout,re.M)
            self.assertEqual([(int(a,16),''.join(b.split())) for a,b,_ in decoded],[(a,b) for _,a,b in SPECS])
            self.assertIn('ret',decoded[-1][2]);self.assertIn('0x2ea018',decoded[5][2])



if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--root',default=ROOT,type=Path)
    parser.add_argument('--compiler',default='clang++')
    parser.add_argument('--sanitizer-compiler',default='g++')
    parser.add_argument('--private-export',type=Path)
    parser.add_argument('--private-context',type=Path)
    args,rest=parser.parse_known_args()
    ROOT=args.root.resolve();COMPILER=shutil.which(args.compiler)
    if not COMPILER: parser.error('strict C++17 compiler required')
    SANITIZER_COMPILER=shutil.which(args.sanitizer_compiler)
    if not SANITIZER_COMPILER: parser.error('GCC UBSan compiler required')
    PRIVATE_EXPORT=args.private_export;PRIVATE_CONTEXT=args.private_context
    if bool(PRIVATE_EXPORT)!=bool(PRIVATE_CONTEXT):parser.error('both private paths required')
    unittest.main(argv=[sys.argv[0],*rest])
