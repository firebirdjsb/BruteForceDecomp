#!/usr/bin/env python3
"""Three bounded scalar EAX handoffs; never execute original game functions."""
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
MANIFEST_NAME='metadata/cpp_20261104_eax_scalar_calls.json'
MANIFEST_SHA = 'c33fb2d140ca9dd03246360326815b418490a6cf1635e8a702e7e4acf5aa858f'
SPECS={
 '0x000216b0':('in_EAX','iVar1',[(0x216b0,'56'),(0x216b1,'8bf0'),(0x216b3,'e8380affff'),(0x216b8,'c786ac0600000e000000'),(0x216df,'5e'),(0x216e0,'c20400')]),
 '0x00023ee0':('unaff_ESI','iVar1',[(0x23ef4,'8bc6'),(0x23ef6,'e8f5e1feff'),(0x23efb,'8b889c050000'),(0x23f07,'5b'),(0x23f08,'c3'),(0x23f13,'5b'),(0x23f14,'c3')]),
 '0x000480f0':('unaff_ESI','iVar2',[(0x480f0,'83ec08'),(0x480f3,'57'),(0x480f4,'8bc6'),(0x480f6,'e8f59ffcff'),(0x480fb,'8bf8'),(0x4815c,'5f'),(0x4815d,'83c408'),(0x48160,'c20400'),(0x4816f,'5f'),(0x48170,'83c408'),(0x48173,'c20400'),(0x4818a,'5f'),(0x4818b,'83c408'),(0x4818e,'c20400')]),
}
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
        arg,result,expected=SPECS[case['entry']]
        require([(int(w['address'],16),w['bytes']) for w in case['instruction_windows']]==expected,'caller windows changed')
        require(case['analyzed_overrides']==[],'unexpected analyzed override')
        require(case['source_argument']==arg and case['old_call']==f'{result} = FUN_000120f0();' and case['new_call']==f'{result} = FUN_000120f0({arg});','source transfer differs')
        require(case['existing_declaration']=='extern uint32_t FUN_000120f0(int32_t in_EAX);','existing caller declaration changed')
        require(case['replacements']==[{'before':case['old_call'],'after':case['new_call'],'count':1}],'changes exceed one argument')
        calls=[(a,bytes.fromhex(b)) for a,b in expected if b.startswith('e8')]
        require(len(calls)==1,'expected one E8')
        address,raw=calls[0]
        require(len(raw)==5 and (address+5+struct.unpack('<i',raw[1:])[0])&0xffffffff==0x120f0,'wrong direct CALL target')
        if arg=='in_EAX':
            # PUSH ESI and MOV ESI,EAX do not alter the incoming EAX word.
            require(expected[:2]==[(0x216b0,'56'),(0x216b1,'8bf0')] and mov_register(expected[1][1])==(6,0),'incoming EAX was not preserved')
            require(address==0x216b3,'unexpected instruction between entry EAX and call')
        else:
            producer=next((a,b) for a,b in expected if a==address-2)
            require(mov_register(producer[1])==(0,6),'call must transfer ESI to EAX')
    callee=document['callee']
    require(callee['entry']=='0x000120f0' and callee['existing_definition_signature']=='uint32_t FUN_000120f0(int32_t in_EAX)','existing callee identity/signature changed')
    require([(int(w['address'],16),w['bytes']) for w in callee['instruction_windows']]==CALLEE_WINDOWS,'callee read/return/cleanup changed')
    raw=bytes.fromhex(CALLEE_WINDOWS[3][1])
    require(raw[0]==0x8b and raw[1]>>6==1 and (raw[1]>>3)&7==2 and raw[1]&7==0 and raw[2]==8,'callee must read DWORD [incoming EAX+8]')
    require(mov_register(CALLEE_WINDOWS[4][1])==(0,6),'callee return producer changed')
    require(CALLEE_WINDOWS[-3:]==[(0x12132,'5e'),(0x12133,'83c408'),(0x12136,'c3')],'callee restores local stack and uses plain RET')


def fixture(case,call=None):
    variable=case['source_argument']
    other='unaff_ESI' if variable=='in_EAX' else 'in_EAX'
    return '''#include <cstdint>
#include <cstring>
#include <type_traits>
static std::uint32_t captured,count;
static std::uint32_t FUN_000120f0(std::int32_t word) {std::memcpy(&captured,&word,4);++count;return 0;}
static bool check(std::uint32_t bits) {
    int VARIABLE,OTHER,iVar1=0,iVar2=0;
    std::uint32_t different=~bits;
    std::memcpy(&VARIABLE,&bits,4);std::memcpy(&OTHER,&different,4);
    captured=~bits;count=0;
    CALL
    return count==1 && captured==bits;
}
int main() {
    static_assert(std::is_same<int,std::int32_t>::value,"existing signed DWORD locals");
    const std::uint32_t edges[]={0,1,0xff,0x100,0xffff,0x10000,0x7fffffff,0x80000000,0xffffff00,0xfffffffe,0xffffffff};
    for(auto v:edges)if(!check(v))return 42;
    for(unsigned i=0;i<32;++i)if(!check(1u<<i)||!check(~(1u<<i)))return 42;
    std::uint32_t state=0x9b72930f;
    for(unsigned i=0;i<100000;++i){state^=state<<13;state^=state>>17;state^=state<<5;if(!check(state))return 42;}
}
'''.replace('VARIABLE',variable).replace('OTHER',other).replace('CALL',call or case['new_call'])


class EaxScalarCallsTests(unittest.TestCase):
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
        require(source.count(case['new_call'])==1 and source.count(case['existing_declaration'])==1,'call/declaration changed')
        old=source.replace(case['new_call'],case['old_call'],1);raw=old.encode()
        require(sha(raw)==case['source_before_sha256'] and hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()==case['preimage_git_blob'],'wrong source reversal')
        return old

    def compile(self,source,opt,output=None,link=False):
        if not self.compiler:self.skipTest('clang++ unavailable')
        args=[self.compiler,'-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),'-x','c++','-']
        if output is None:args+=['-fsyntax-only','-ferror-limit=0']
        else:args+= ([] if link else ['-c'])+['-o',str(output)]
        return subprocess.run(args,input=source,capture_output=True,text=True,timeout=60)

    def test_exact_source_signature_and_body_pins(self):
        self.assertEqual(sha(self.manifest_path.read_bytes()),MANIFEST_SHA)
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:inventory={r['entry']:r for r in csv.DictReader(stream)}
        for item in self.cases+[self.document['callee']]:
            self.assertEqual(item['source'],self.relative_source_path(ROOT,item['entry']).as_posix())
            source=self.source(item) if item in self.cases else (ROOT/item['source']).read_text()
            self.assertEqual(self.read_body_digest(source),(item['original_body_sha256'],False))
            self.assertEqual(inventory[item['entry']]['original_body_sha256'],item['original_body_sha256'])
            self.assertEqual(sum(q['length'] for q in item['body_ranges']),item['body_byte_count'])
            if item in self.cases:
                self.original(item)
                self.assertIn('  int '+item['source_argument']+';\n',source)
                for changed in (source+'\n',source.replace(item['new_call'],item['old_call']),source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1)):
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
            for field in ('source_argument','old_call','new_call','existing_declaration'):
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

    def test_synthetic_full_dword_capture_with_zero_wrong_register_negatives(self):
        with tempfile.TemporaryDirectory() as directory:
            exe=Path(directory)/'synthetic'
            for case in self.cases:
                other='unaff_ESI' if case['source_argument']=='in_EAX' else 'in_EAX'
                bad=[case['new_call'].replace(case['source_argument'],'0'),case['new_call'].replace(case['source_argument'],other)]
                for opt in ('-O0','-O2'):
                    for call,code in [(case['new_call'],0)]+[(b,42) for b in bad]:
                        result=self.compile(fixture(case,call),opt,exe,True);self.assertEqual(result.returncode,0,result.stderr)
                        self.assertEqual(subprocess.run([str(exe)],capture_output=True,timeout=20).returncode,code)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--root',type=Path);parser.add_argument('--candidate-root',type=Path)
    args,remaining=parser.parse_known_args()
    if args.root:ROOT=args.root.resolve()
    if args.candidate_root:CANDIDATE_ROOT=args.candidate_root.resolve()
    unittest.main(argv=[sys.argv[0],*remaining])
