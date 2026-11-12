#!/usr/bin/env python3
"""Four bounded modulo-32 LEA handoffs; never execute original game functions."""
from __future__ import annotations
import argparse
import copy
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[1]
CANDIDATE_ROOT=None
MANIFEST_NAME='metadata/cpp_20261104_eax_lea_calls.json'
MANIFEST_SHA = '3971cbb09c27c6a0d29fa97ae0f234dcafbd70a542e493b18411853eb173f2a5'
SPECS={
 '0x00033ac0':[(0x33ac0,'56'),(0x33ac1,'8bf1'),(0x33ac3,'57'),(0x33ac4,'8d46c0'),(0x33ac7,'e824e6fdff'),(0x33acc,'8dbe44060000'),(0x33ad2,'c6807006000000'),(0x33af5,'5e'),(0x33af6,'c3')],
 '0x0003f5d0':[(0x3f5d0,'56'),(0x3f5d1,'8bf1'),(0x3f5d3,'8d46c0'),(0x3f5d6,'e8152bfdff'),(0x3f5db,'8bc8'),(0x3f61e,'5e'),(0x3f61f,'c3')],
 '0x0003f650':[(0x3f650,'56'),(0x3f651,'8bf1'),(0x3f653,'8d46c0'),(0x3f656,'e8952afdff'),(0x3f65b,'8bc8'),(0x3f69e,'5e'),(0x3f69f,'c3')],
 '0x00040aa0':[(0x40aa0,'56'),(0x40aa1,'8bf1'),(0x40aa3,'8d46c0'),(0x40aa6,'e84516fdff'),(0x40aab,'8b400c'),(0x40ae0,'5e'),(0x40ae1,'c3')],
}
OLD_BLOCK='  iVar1 = FUN_000120f0();'
NEW_BLOCK='  uint32_t guest_eax_bits = static_cast<uint32_t>(in_ECX) - UINT32_C(0x40);\n  iVar1 = FUN_000120f0(*bf_x86_signed_dword_view(&guest_eax_bits));'
INCLUDE_BEFORE='#include "bf_ghidra_types.h"\n'
INCLUDE_AFTER=INCLUDE_BEFORE+'#include "bf_x86_dword_operations.h"\n'
CALLEE_WINDOWS=[(0x120f0,'83ec08'),(0x120f3,'33c9'),(0x120f5,'894c2400'),(0x120f9,'8b5008'),(0x12130,'8bc6'),(0x12132,'5e'),(0x12133,'83c408'),(0x12136,'c3')]


def require(condition,message):
    if not condition:raise ValueError(message)


def sha(data):return hashlib.sha256(data).hexdigest()


def mov_register(encoded):
    raw=bytes.fromhex(encoded)
    require(len(raw)==2 and raw[0]==0x8b and raw[1]>>6==3,'expected DWORD register MOV')
    return ((raw[1]>>3)&7,raw[1]&7)


def validate_contract(document):
    require(document['original_xbe_reauthenticated'] is False and document['original_game_functions_executed'] is False,'evidence boundary changed')
    require([c['entry'] for c in document['cases']]==list(SPECS),'caller set/order differs')
    for case in document['cases']:
        expected=SPECS[case['entry']]
        require([(int(w['address'],16),w['bytes']) for w in case['instruction_windows']]==expected,'caller windows changed')
        require(case['analyzed_overrides']==[],'unexpected analyzed override')
        require(case['source_input']=='in_ECX' and case['source_block_before']==OLD_BLOCK and case['source_block_after']==NEW_BLOCK,'scalar wrap expression differs')
        require(case['existing_declaration']=='extern uint32_t FUN_000120f0(int32_t in_EAX);','existing caller declaration changed')
        require(case['replacements']==[{'before':INCLUDE_BEFORE,'after':INCLUDE_AFTER,'count':1},{'before':OLD_BLOCK,'after':NEW_BLOCK,'count':1}],'changes exceed bounded scalar expression/header')
        require(expected[0][1]=='56' and mov_register(expected[1][1])==(6,1),'ESI must capture entry ECX')
        calls=[(a,bytes.fromhex(b)) for a,b in expected if b.startswith('e8')]
        require(len(calls)==1,'expected one E8')
        address,raw=calls[0]
        require(len(raw)==5 and (address+5+struct.unpack('<i',raw[1:])[0])&0xffffffff==0x120f0,'wrong direct CALL target')
        lea=bytes.fromhex(next(b for a,b in expected if a==address-3))
        require(len(lea)==3 and lea[0]==0x8d and lea[1]>>6==1 and (lea[1]>>3)&7==0 and lea[1]&7==6 and struct.unpack('b',lea[2:])[0]==-0x40,'LEA destination/base/displacement differ')
        prefix=[(a,b) for a,b in expected if a<address]
        for (a,b),(next_a,_) in zip(prefix,prefix[1:]):
            require(a+len(bytes.fromhex(b))==next_a,'gap in binding-to-call dataflow')
        require(prefix[-1][0]+len(bytes.fromhex(prefix[-1][1]))==address,'gap before call')
        # The only extra prefix instruction in 00033ac0 saves EDI, not ECX/ESI.
        require([b for _,b in prefix]==(['56','8bf1','57','8d46c0'] if case['entry']=='0x00033ac0' else ['56','8bf1','8d46c0']),'unexpected producer clobber')
    require(document['helper']['existing_signature']=='static inline int *bf_x86_signed_dword_view(std::uint32_t *word) noexcept','signed DWORD view helper changed')
    callee=document['callee']
    require(callee['entry']=='0x000120f0' and callee['existing_definition_signature']=='uint32_t FUN_000120f0(int32_t in_EAX)','existing callee identity/signature changed')
    require([(int(w['address'],16),w['bytes']) for w in callee['instruction_windows']]==CALLEE_WINDOWS,'callee read/return/cleanup changed')
    raw=bytes.fromhex(CALLEE_WINDOWS[3][1])
    require(raw[0]==0x8b and raw[1]>>6==1 and (raw[1]>>3)&7==2 and raw[1]&7==0 and raw[2]==8,'callee must read DWORD [incoming EAX+8]')
    require(mov_register(CALLEE_WINDOWS[4][1])==(0,6),'callee return producer changed')
    require(CALLEE_WINDOWS[-3:]==[(0x12132,'5e'),(0x12133,'83c408'),(0x12136,'c3')],'callee restores local stack and uses plain RET')


def fixture(case,block=None):
    return r'''#include <cstdint>
#include <cstring>
#include <type_traits>
#include "bf_x86_dword_operations.h"
static std::uint32_t captured,count;
static std::uint32_t FUN_000120f0(std::int32_t word) {std::memcpy(&captured,&word,4);++count;return 0;}
static bool check(std::uint32_t bits) {
    int in_ECX,in_EAX,iVar1=0;
    std::uint32_t other=~bits;
    std::memcpy(&in_ECX,&bits,4);std::memcpy(&in_EAX,&other,4);
    captured=bits;count=0;
    BLOCK
    const std::uint32_t expected=bits-UINT32_C(0x40);
    return count==1 && captured==expected;
}
int main() {
    static_assert(std::is_same<int,std::int32_t>::value,"existing signed DWORD input");
    const std::uint32_t edges[]={0,1,0x3e,0x3f,0x40,0x41,0x42,0xff,0x100,0x7fffffbf,0x7fffffc0,0x7fffffff,0x80000000,0x80000001,0x8000003f,0x80000040,0x80000041,0xffffffbf,0xffffffc0,0xfffffffe,0xffffffff};
    for(auto v:edges)if(!check(v))return 42;
    for(unsigned i=0;i<32;++i)if(!check(1u<<i)||!check(~(1u<<i)))return 42;
    std::uint32_t state=0x9b72930f;
    for(unsigned i=0;i<100000;++i){state^=state<<13;state^=state>>17;state^=state<<5;if(!check(state))return 42;}
}
'''.replace('BLOCK',block or case['source_block_after'])


class EaxLeaCallsTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        sys.path.insert(0,str(ROOT/'tools'))
        from source_layout import relative_source_path
        from body_hash_labels import read_body_digest
        cls.relative_source_path=staticmethod(relative_source_path);cls.read_body_digest=staticmethod(read_body_digest)
        cls.candidate_root=CANDIDATE_ROOT or ROOT
        cls.manifest_path=cls.candidate_root/MANIFEST_NAME
        cls.document=json.loads(cls.manifest_path.read_text());cls.cases=cls.document['cases']
        cls.compiler=shutil.which('clang++')

    def source(self,case):return (self.candidate_root/case['source']).read_text()

    def original(self,case,source=None):
        source=self.source(case) if source is None else source
        require(sha(source.encode())==case['source_after_sha256'],'changed source')
        require(source.count(case['existing_declaration'])==1,'existing declaration changed')
        old=source
        for edit in reversed(case['replacements']):
            require(old.count(edit['after'])==edit['count']==1,'replacement occurrence changed')
            old=old.replace(edit['after'],edit['before'],1)
        raw=old.encode()
        require(sha(raw)==case['source_before_sha256'] and hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()==case['preimage_git_blob'],'wrong source reversal')
        return old

    def compile(self,source,opt,output=None,link=False,extra=()):
        if not self.compiler:self.skipTest('clang++ unavailable')
        args=[self.compiler,'-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),'-x','c++','-']
        args+=list(extra)
        if output is None:args+=['-fsyntax-only','-ferror-limit=0']
        else:args+= ([] if link else ['-c'])+['-o',str(output)]
        return subprocess.run(args,input=source,capture_output=True,text=True,timeout=60)

    def test_exact_source_signature_and_body_pins(self):
        self.assertEqual(sha(self.manifest_path.read_bytes()),MANIFEST_SHA)
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:inventory={r['entry']:r for r in csv.DictReader(stream)}
        helper=self.document['helper']
        self.assertEqual(sha((ROOT/helper['source']).read_bytes()),helper['source_sha256'])
        self.assertIn(helper['existing_signature'],(ROOT/helper['source']).read_text())
        for item in self.cases+[self.document['callee']]:
            self.assertEqual(item['source'],self.relative_source_path(ROOT,item['entry']).as_posix())
            source=self.source(item) if item in self.cases else (ROOT/item['source']).read_text()
            self.assertEqual(self.read_body_digest(source),(item['original_body_sha256'],False))
            self.assertEqual(inventory[item['entry']]['original_body_sha256'],item['original_body_sha256'])
            self.assertEqual(sum(q['length'] for q in item['body_ranges']),item['body_byte_count'])
            if item in self.cases:
                self.original(item)
                self.assertIn('  int '+item['source_input']+';\n',source)
                for changed in (source+'\n',source.replace(item['source_block_after'],item['source_block_before']),source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1)):
                    with self.assertRaises(ValueError):self.original(item,changed)
            else:
                # The historical caller-hand-off ABI is pinned to the original
                # callee source fixture, rather than silently reinterpreting its
                # old signed-DWORD declaration as the current guest32 interface.
                historical=(ROOT/item['historical_source_fixture']).read_bytes()
                self.assertEqual(sha(historical),item['source_sha256'])
                self.assertIn(item['existing_definition_signature']+'\n{',historical.decode())
                self.assertEqual(sha(source.encode()),item['current_source_sha256'])
                self.assertIn(item['current_definition_signature']+'\n{',source)
                self.assertIn(item['current_source_status'],source)
                self.assertNotEqual(sha(historical),sha(source.encode()))
                for raw,expected in ((historical,item['source_sha256']),
                                     (source.encode(),item['current_source_sha256'])):
                    for position in (0,len(raw)//2,len(raw)-1):
                        mutation=bytearray(raw);mutation[position]^=1
                        self.assertNotEqual(sha(mutation),expected)

    def test_raw_target_producer_cleanup_and_source_contract(self):validate_contract(self.document)

    def test_byte_address_source_register_and_cleanup_mutations(self):
        count=0
        for case_index,item in enumerate(self.cases+[self.document['callee']]):
            for index,window in enumerate(item['instruction_windows']):
                for j in range(len(bytes.fromhex(window['bytes']))):
                    mutant=copy.deepcopy(self.document);target=(mutant['cases'][case_index] if case_index<len(self.cases) else mutant['callee'])
                    raw=bytearray.fromhex(window['bytes']);raw[j]^=1;target['instruction_windows'][index]['bytes']=raw.hex()
                    with self.assertRaises(ValueError):validate_contract(mutant)
                    count+=1
                mutant=copy.deepcopy(self.document);target=(mutant['cases'][case_index] if case_index<len(self.cases) else mutant['callee'])
                target['instruction_windows'][index]['address']=hex(int(window['address'],16)+1)
                with self.assertRaises(ValueError):validate_contract(mutant)
                count+=1
        for i,case in enumerate(self.cases):
            for field in ('source_input','source_block_before','source_block_after','existing_declaration'):
                mutant=copy.deepcopy(self.document);mutant['cases'][i][field]+='wrong'
                with self.assertRaises(ValueError):validate_contract(mutant)
                count+=1
        self.assertGreater(count,130)

    def test_o0_o2_complete_sources_and_original_negatives(self):
        with tempfile.TemporaryDirectory() as directory:
            for case in self.cases:
                for opt in ('-O0','-O2'):
                    for output in (None,Path(directory)/'candidate.o'):
                        result=self.compile(self.source(case),opt,output)
                        self.assertEqual(result.returncode,0,result.stderr)
                    result=self.compile(self.original(case),opt)
                    self.assertNotEqual(result.returncode,0)
                    self.assertEqual(re.findall(r'error:\s*([^\n]+)',result.stderr),["no matching function for call to 'FUN_000120f0'"])

    def test_synthetic_modulo_capture_and_wrong_register_displacement_sign_controls(self):
        with tempfile.TemporaryDirectory() as directory:
            exe=Path(directory)/'synthetic'
            # All four source expressions are identical; execute each copied block.
            for case in self.cases:
                block=case['source_block_after']
                bad=[block.replace('in_ECX','in_EAX'),block.replace('UINT32_C(0x40)','UINT32_C(0x41)'),block.replace('*bf_x86_signed_dword_view(&guest_eax_bits)','static_cast<int32_t>(guest_eax_bits & UINT32_C(0x7fffffff))')]
                for opt in ('-O0','-O2'):
                    for code,expected in [(block,0)]+[(b,42) for b in bad]:
                        result=self.compile(fixture(case,code),opt,exe,True);self.assertEqual(result.returncode,0,result.stderr)
                        self.assertEqual(subprocess.run([str(exe)],capture_output=True,timeout=20,cwd=directory).returncode,expected)
            case=self.cases[0]
            wrong=case['source_block_after'].replace('static_cast<uint32_t>(in_ECX) - UINT32_C(0x40)','static_cast<uint32_t>(in_ECX - 0x40)')
            for opt in ('-O0','-O2'):
                for code,good in [(case['source_block_after'],True),(wrong,False)]:
                    result=self.compile(fixture(case,code),opt,exe,True,extra=('-fsanitize=undefined','-fsanitize-trap=undefined'))
                    self.assertEqual(result.returncode,0,result.stderr)
                    ran=subprocess.run([str(exe)],capture_output=True,text=True,timeout=20,cwd=directory)
                    if good:self.assertEqual(ran.returncode,0,ran.stderr)
                    else:
                        self.assertNotEqual(ran.returncode,0)
                        self.assertLess(ran.returncode,0,'expected sanitizer trap for signed overflow')

    def test_existing_helper_rejects_wider_or_wrong_pointer_types(self):
        for declaration in ('std::uint64_t word=0;', 'int word=0;'):
            source='#include "bf_x86_dword_operations.h"\nint main(){'+declaration+' return *bf_x86_signed_dword_view(&word);}'
            result=self.compile(source,'-O0')
            self.assertNotEqual(result.returncode,0)
            self.assertIn("no matching function for call to 'bf_x86_signed_dword_view'",result.stderr)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--root',type=Path);parser.add_argument('--candidate-root',type=Path)
    args,remaining=parser.parse_known_args()
    if args.root:ROOT=args.root.resolve()
    if args.candidate_root:CANDIDATE_ROOT=args.candidate_root.resolve()
    unittest.main(argv=[sys.argv[0],*remaining])
