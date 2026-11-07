#!/usr/bin/env python3
"""Two bounded EDI-derived handoffs; canonical game functions are never executed.

Compile whole caller, then run only initialized capture fixtures for added scalar
expressions. Optional private replay checks original copied-project byte ranges.
"""
from __future__ import annotations
import argparse
import copy
import csv
import hashlib
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CANDIDATE_ROOT = None
PRIVATE_EXPORT = None
MANIFEST = 'metadata/cpp_20261104_000beae0_esi_handoffs.json'
MANIFEST_SHA = '11542a1af2c2b47cae98de028b9e9f2262ed8ccc04083dee3e7d5bbc7b92b1ca'
DECL = 'extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);'
OLD = ('FUN_0008f6a0(*(int *)(unaff_EDI + 0x10));', 'FUN_0008f6a0(0);')
NEW = ('FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(4),\n                  static_cast<std::uint32_t>(*(int *)(unaff_EDI + 0x10)));',
       'FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x0c),\n                    UINT32_C(0));')
# Independent, immutable operand anchors. No disassembler required in public CI.
CALLER_WINDOWS = [
 (0xbeae0,'8b4710'),(0xbeae3,'8b4f08'),(0xbeae6,'3bc8'),
 (0xbeaeb,'8d5f0c'),(0xbeaee,'8d7704'),(0xbeaf1,'7409'),
 (0xbeaf3,'50'),(0xbeaf4,'e8a70bfdff'),(0xbeaf9,'83c404'),
 (0xbeafc,'8a474c'),(0xbeaff,'33ed'),(0xbeb01,'a801'),(0xbeb03,'740c'),
 (0xbeb05,'396f10'),(0xbeb08,'7517'),(0xbeb0a,'24fe'),(0xbeb0c,'88474c'),
 (0xbeb0f,'eb10'),(0xbeb11,'396b04'),(0xbeb14,'740b'),(0xbeb16,'55'),
 (0xbeb17,'8bf3'),(0xbeb19,'e8820bfdff'),(0xbeb1e,'83c404'),
 (0xbeb21,'896f24'),(0xbeb24,'896f20'),(0xbeb27,'896f1c'),(0xbeb2a,'8b4748'),
 (0xbeb2d,'5e'),(0xbeb2e,'896f40'),(0xbeb31,'896f44'),(0xbeb34,'5d'),
 (0xbeb35,'894728'),(0xbeb38,'5b'),(0xbeb39,'c3')]
CALLEE_WINDOWS = [(0x8f6a0,'8b4604'),(0x8f6a5,'53'),(0x8f6a6,'8b5c2408'),
 (0x8f6ac,'8bd6'),(0x8f6ae,'e82d000000'),(0x8f6b3,'85db'),
 (0x8f6b5,'895e04'),(0x8f6de,'5b'),(0x8f6df,'c3')]
NESTED_WINDOWS = [(0x8f6e0,'8b4204'),(0x8f715,'c3'),(0x8f71c,'c3')]
EDGES = [
 {'esi_source':'unaff_EDI','esi_displacement':4,'payload_source':'*(int *)(unaff_EDI + 0x10)',
  'payload_kind':'existing_dword_load','producer_addresses':['000beaee'],
  'push_address':'000beaf3','call_address':'000beaf4','cleanup_address':'000beaf9','continuation_address':'000beafc'},
 {'esi_source':'unaff_EDI','esi_displacement':12,'payload_source':'0','payload_kind':'xor_ebp_zero',
  'producer_addresses':['000beaeb','000beb17'],'push_address':'000beb16',
  'call_address':'000beb19','cleanup_address':'000beb1e','continuation_address':'000beb21'}]


def require(ok, message):
    if not ok:
        raise ValueError(message)


def sha(data):
    return hashlib.sha256(data).hexdigest()


def path_for(relative):
    if CANDIDATE_ROOT is not None and (CANDIDATE_ROOT/relative).is_file():
        return CANDIDATE_ROOT/relative
    return ROOT/relative


def specs(item):
    return [(int(w['address'],16),w['bytes']) for w in item['instruction_windows']]


def rel32(address, data):
    require(len(data)==5 and data[0]==0xe8,'expected direct DWORD CALL')
    return (address+5+struct.unpack('<i',data[1:])[0]) & 0xffffffff


def lea8(data):
    require(len(data)==3 and data[0]==0x8d and data[1]>>6==1 and data[1]&7!=4,'expected LEA reg,[base+disp8]')
    return ((data[1]>>3)&7, data[1]&7, struct.unpack('b',data[2:])[0])


def validate_contract(document):
    c=document['case']; cal=document['callee']; nested=document['nested_callee']
    require(document['original_xbe_reauthenticated'] is False and document['original_game_functions_executed'] is False,'evidence level changed')
    require(c['entry']=='0x000beae0' and specs(c)==CALLER_WINDOWS,'caller windows/identity changed')
    require(cal['entry']=='0x0008f6a0' and specs(cal)==CALLEE_WINDOWS,'callee windows/identity changed')
    require(nested['entry']=='0x0008f6e0' and specs(nested)==NESTED_WINDOWS,'nested callee windows changed')
    require(c['edges']==EDGES,'source/raw edge binding changed')
    require(c['existing_scalar_binding']=='int unaff_EDI;' and c['existing_declaration']==DECL,'existing source binding changed')
    require(c['replacements']==[{'before':old,'after':new,'count':1} for old,new in zip(OLD,NEW)],'changes exceed two argument lists')
    w={a:bytes.fromhex(b) for a,b in specs(c)}
    require(lea8(w[0xbeaee])==(6,7,4) and lea8(w[0xbeaeb])==(3,7,12),'ESI/EBX must derive from EDI with original byte offsets')
    require(w[0xbeb17]==bytes.fromhex('8bf3'),'second ESI must receive EBX')
    require(w[0xbeae0]==bytes.fromhex('8b4710') and w[0xbeaf3]==b'\x50','first pushed word must be DWORD [EDI+16]')
    require(w[0xbeaff]==bytes.fromhex('33ed') and w[0xbeb16]==b'\x55','second pushed word must be zeroed EBP')
    for edge in EDGES:
        call=int(edge['call_address'],16);cleanup=int(edge['cleanup_address'],16);cont=int(edge['continuation_address'],16)
        require(rel32(call,w[call])==0x8f6a0,'wrong direct target')
        require(cleanup==call+5 and w[cleanup]==bytes.fromhex('83c404') and cont==cleanup+3,'call does not continue after caller DWORD cleanup')
    for branch,target in ((0xbeaf1,0xbeafc),(0xbeb03,0xbeb11),(0xbeb08,0xbeb21),(0xbeb0f,0xbeb21),(0xbeb14,0xbeb21)):
        b=w[branch];require(len(b)==2 and branch+2+struct.unpack('b',b[1:])[0]==target,'branch continuation changed')
    require(w[0xbeb39]==b'\xc3','caller has plain RET')
    cw={a:bytes.fromhex(b) for a,b in specs(cal)}
    require(cw[0x8f6a0]==bytes.fromhex('8b4604'),'callee must consume ESI+4 DWORD')
    require(cw[0x8f6a5]==b'\x53' and cw[0x8f6a6]==bytes.fromhex('8b5c2408'),'callee must consume original first stack word after EBX save')
    require(rel32(0x8f6ae,cw[0x8f6ae])==0x8f6e0,'nested helper target differs')
    require(cw[0x8f6de]==b'\x5b' and cw[0x8f6df]==b'\xc3','callee must restore EBX and leave word cleanup to caller')
    for item in (c,cal,nested):
        require(item['private_validation_issues']==[],'quarantined byte record')


def restore(case, source):
    require(sha(source.encode())==case['source_after_sha256'],'changed candidate source')
    require(source.count(DECL)==1 and source.count('int unaff_EDI;')==1,'original declaration/live-in changed')
    before=source
    for edit in reversed(case['replacements']):
        require(edit['count']==1 and before.count(edit['after'])==1,'wrong edit occurrence')
        before=before.replace(edit['after'],edit['before'],1)
    data=before.encode()
    require(sha(data)==case['source_before_sha256'],'source reversal digest mismatch')
    require(hashlib.sha1(b'blob '+str(len(data)).encode()+b'\0'+data).hexdigest()==case['preimage_git_blob'],'source reversal Git blob mismatch')
    after=before
    for edit in case['replacements']:
        require(after.count(edit['before'])==1,'wrong preimage occurrence')
        after=after.replace(edit['before'],edit['after'],1)
    require(after==source,'non-reversible argument-only change')
    return before


def fixture(edge_index, mutation=None):
    call=NEW[edge_index]
    # Replace only existing payload dereference inside fixture. Never run the
    # canonical caller, dereference guest addresses or invoke canonical helpers.
    call=call.replace('*(int *)(unaff_EDI + 0x10)','initialized_payload_word')
    if mutation=='offset':
        call=call.replace('UINT32_C(4)' if edge_index==0 else 'UINT32_C(0x0c)', 'UINT32_C(5)' if edge_index==0 else 'UINT32_C(0x0d)')
    elif mutation=='payload':
        call=call.replace('static_cast<std::uint32_t>(initialized_payload_word)','(static_cast<std::uint32_t>(initialized_payload_word) ^ UINT32_C(1))') if edge_index==0 else call.replace('UINT32_C(0)','UINT32_C(1)')
    elif mutation=='deleted':
        call=''
    elif mutation=='swapped':
        call=('FUN_0008f6a0(static_cast<std::uint32_t>(initialized_payload_word), static_cast<std::uint32_t>(unaff_EDI)+UINT32_C(4));' if edge_index==0 else 'FUN_0008f6a0(UINT32_C(0), static_cast<std::uint32_t>(unaff_EDI)+UINT32_C(0x0c));')
    return r'''#include <cstdint>
#include <cstring>
#include <type_traits>
static std::uint32_t got_esi,got_word,count;
static void FUN_0008f6a0(std::uint32_t esi,std::uint32_t word) {
  got_esi=esi;got_word=word;++count;
}
static bool check(std::uint32_t base,std::uint32_t payload) {
  int unaff_EDI,initialized_payload_word;
  std::memcpy(&unaff_EDI,&base,4);std::memcpy(&initialized_payload_word,&payload,4);
  (void)unaff_EDI;(void)initialized_payload_word;
  const auto expected_esi=static_cast<std::uint32_t>((std::uint64_t(base)+DISPLACEMENT)%UINT64_C(0x100000000));
  const auto expected_word=PAYLOAD;
  count=0;got_esi=~expected_esi;got_word=~expected_word;
  CALL
  return count==1 && got_esi==expected_esi && got_word==expected_word;
}
int main() {
  static_assert(std::is_same<int,std::int32_t>::value,"existing signed DWORD live-in");
  const std::uint32_t cases[]={0,1,3,4,5,11,12,13,0x7fffffff,0x80000000,0xffffffef,0xfffffff3,0xfffffff4,0xfffffff5,0xfffffffb,0xfffffffc,0xfffffffd,0xffffffff};
  for(auto a:cases)for(auto b:cases)if(!check(a,b))return 42;
  for(unsigned bit=0;bit<32;++bit)if(!check(1u<<bit,~(1u<<bit))||!check(~(1u<<bit),1u<<bit))return 42;
  std::uint32_t state=0x47cc62d3;
  for(unsigned i=0;i<20000;++i){state^=state<<13;state^=state>>17;state^=state<<5;const auto a=state;state^=state<<13;state^=state>>17;state^=state<<5;if(!check(a,state))return 42;}
  return 0;
}
'''.replace('DISPLACEMENT',str(EDGES[edge_index]['esi_displacement'])+'u').replace('PAYLOAD','payload' if edge_index==0 else 'UINT32_C(0)').replace('CALL',call)


def private_replay(document, directory, record_mutator=None):
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_GRP_JUMP
    indexes={x['entry']:x for x in json.loads((directory/'validation.json').read_text())['functions']}
    decoder=Cs(CS_ARCH_X86,CS_MODE_32);decoder.detail=True
    outputs=[]; decoded_by_entry={}
    with (directory/'functions.jsonl').open('rb') as stream:
        for item in (document['case'],document['callee'],document['nested_callee']):
            entry=item['entry'][2:];index=indexes[entry]
            require(index['jsonl_byte_offset']==item['private_jsonl_byte_offset'] and index['jsonl_byte_length']==item['private_jsonl_byte_length'],'private offsets differ')
            stream.seek(index['jsonl_byte_offset']);record=json.loads(stream.read(index['jsonl_byte_length']))
            if record_mutator is not None:
                record_mutator(entry,index,record)
            require(index['entry']==entry and record['entry']==entry,'private entry differs')
            require(index['issues']==[] and index['uncovered_body_byte_count']==0 and index['first_uncovered_addresses']==[] and index['byte_and_instruction_validation_pass'] is True and index['canonical_hash_match'] is True,'private validation quarantine')
            require(record['is_thunk'] is False,'unexpected thunk record')
            joined=bytearray();decoded=[];spans=[]
            for span in record['body_ranges']:
                a=int(span['start'],16);b=int(span['end_inclusive'],16);data=bytes.fromhex(span['bytes_hex'])
                require(len(data)==span['length']==b-a+1,'range length mismatch')
                require(not spans or int(spans[-1]['end_inclusive'],16)<a,'range ordering/overlap')
                spans.append({k:v for k,v in span.items() if k!='bytes_hex'});joined.extend(data)
                row=list(decoder.disasm(data,a));require(sum(i.size for i in row)==len(data),'independent decode coverage incomplete');decoded.extend(row)
            require(spans==item['body_ranges'] and len(joined)==item['body_byte_count']==record['body_byte_count']==index['body_byte_count'],'range/count differs')
            require(sha(joined).upper()==item['original_body_sha256']==record['program_memory_body_sha256']==index['canonical_body_sha256']==index['program_memory_body_sha256'],'body hash differs')
            require(len(decoded)==item['instruction_count']==record['instruction_count']==index['instruction_count']==len(record['instructions']),'instruction count differs')
            for gh,cs in zip(record['instructions'],decoded):
                require(int(gh['address'],16)==cs.address and gh['length']==gh['parsed_length']==cs.size and gh['bytes_hex']==cs.bytes.hex(),'decode boundaries differ')
                require(gh['flow_override']=='NONE' and gh['is_length_overridden'] is False and gh['is_fallthrough_overridden'] is False,'analyzed override quarantine')
                if cs.mnemonic=='ret':
                    flow_type='TERMINATOR';targets=[];fallthrough=None
                elif cs.mnemonic=='call' or CS_GRP_JUMP in cs.groups:
                    require(len(cs.operands)==1 and cs.operands[0].type==2,'indirect control flow needs new evidence')
                    targets=[f'{cs.operands[0].imm:08x}']
                    flow_type=('UNCONDITIONAL_CALL' if cs.mnemonic=='call' else 'UNCONDITIONAL_JUMP' if cs.mnemonic=='jmp' else 'CONDITIONAL_JUMP')
                    fallthrough=None if cs.mnemonic=='jmp' else f'{cs.address+cs.size:08x}'
                else:
                    flow_type='FALL_THROUGH';targets=[];fallthrough=f'{cs.address+cs.size:08x}'
                require(gh['flow_type']==flow_type and gh['flows']==targets and gh['fallthrough']==fallthrough,'analyzed flow/fallthrough differs from raw decode')
            starts={i.address:i for i in decoded}
            for address,hexbytes in specs(item):
                require(address in starts and starts[address].bytes.hex()==hexbytes,'compact window not exact decoded instruction')
            for ins in decoded:
                if CS_GRP_JUMP in ins.groups:
                    require(len(ins.operands)==1 and ins.operands[0].type==2 and ins.operands[0].imm in starts,'external/indirect branch needs new evidence')
                if ins.mnemonic not in ('ret','jmp'):
                    require(ins.address+ins.size in starts,'uncovered fallthrough continuation')
            decoded_by_entry[entry]=decoded
            outputs.append({'entry':item['entry'],'bytes':len(joined),'instructions':len(decoded),'body_sha256':item['original_body_sha256']})
    caller=decoded_by_entry['000beae0'];callee=decoded_by_entry['0008f6a0'];nested=decoded_by_entry['0008f6e0']
    require([(i.address,i.operands[0].imm) for i in caller if i.mnemonic=='call']==[(0xbeaf4,0x8f6a0),(0xbeb19,0x8f6a0)],'unexpected caller calls')
    require([(i.address,i.operands[0].imm) for i in callee if i.mnemonic=='call']==[(0x8f6ae,0x8f6e0)],'unexpected helper calls')
    require(not any(i.mnemonic=='call' for i in nested),'nested helper has unreviewed calls')
    # Both continuations depend on original EDI; second also uses saved EBX and
    # zero EBP. Establish actual preserved registers, not an assumed ABI.
    for i in callee:
        _,writes=i.regs_access();names={i.reg_name(r) for r in writes}
        require(not names.intersection({'edi','di','ebp','bp','esi','si'}),'callee clobbers caller continuation register')
    for i in nested:
        _,writes=i.regs_access();names={i.reg_name(r) for r in writes}
        require(not names.intersection({'ebx','bx','bl','bh','edi','di','ebp','bp','esi','si'}),'nested helper clobbers saved registers')
    require(callee[2].mnemonic=='push' and callee[2].op_str=='ebx' and callee[-2].mnemonic=='pop' and callee[-2].op_str=='ebx','callee EBX save/restore differs')
    for start,end,reg,allowed in ((0xbeae0,0xbeaf4,'eax',{0xbeae0}),(0xbeaee,0xbeaf4,'esi',{0xbeaee}),(0xbeaeb,0xbeb19,'ebx',{0xbeaeb}),(0xbeaff,0xbeb19,'ebp',{0xbeaff}),(0xbeb17,0xbeb19,'esi',{0xbeb17})):
        for i in caller:
            if start<=i.address<end:
                _,writes=i.regs_access();require(not any(i.reg_name(r)==reg for r in writes) or i.address in allowed,'producer overwritten before handoff')
    return {'bodies':outputs,'body_count':3,'total_body_bytes':sum(x['bytes'] for x in outputs),'original_game_functions_executed':False,'full_xbe_reauthenticated':False}


class HandoffTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.document=json.loads(path_for(MANIFEST).read_text());cls.case=cls.document['case']
        cls.compiler=os.environ.get('CXX') or shutil.which('clang++')
        require(cls.compiler is not None,'Clang unavailable')

    def compile(self,path,*flags):
        return subprocess.run([self.compiler,'-std=c++17','-pedantic-errors','-I',str(ROOT/'include'),*flags,str(path)],capture_output=True,text=True,timeout=60)

    def test_source_body_manifest_and_dependency_pins(self):
        from body_hash_labels import read_body_digest
        from source_layout import relative_source_path
        self.assertEqual(sha(path_for(MANIFEST).read_bytes()),MANIFEST_SHA);validate_contract(self.document)
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            inventory={r['entry']:r['original_body_sha256'] for r in csv.DictReader(stream)}
        for item in (self.case,self.document['callee'],self.document['nested_callee']):
            source=path_for(item['source']).read_text()
            self.assertEqual(item['source'],relative_source_path(ROOT,item['entry']).as_posix())
            self.assertEqual(read_body_digest(source),(item['original_body_sha256'],False))
            self.assertEqual(inventory[item['entry']],item['original_body_sha256']);self.assertIn('ABI_UNVERIFIED',source)
            if 'replacements' in item:restore(item,source)
            else:self.assertEqual(sha(source.encode()),item['source_sha256'])
        cal=self.document['callee'];self.assertEqual(sha((ROOT/cal['header']).read_bytes()),cal['header_sha256'])
        self.assertIn(cal['existing_definition']+'\n{',path_for(cal['source']).read_text())
        scan=self.document['historical_dependency_scan'];self.assertEqual(scan['paths_containing_entry'],scan['expected_inventory_only'])
        for pin in scan['metadata_pins']:
            data=(ROOT/pin['path']).read_bytes();self.assertEqual(sha(data),pin['sha256']);self.assertNotIn('000beae0',data.decode().lower())

    def test_raw_source_and_manifest_corruption_controls(self):
        for key in ('case','callee','nested_callee'):
            for index,window in enumerate(self.document[key]['instruction_windows']):
                for byte in range(len(bytes.fromhex(window['bytes']))):
                    mutant=copy.deepcopy(self.document);data=bytearray.fromhex(window['bytes']);data[byte]^=1
                    mutant[key]['instruction_windows'][index]['bytes']=data.hex()
                    with self.assertRaises(ValueError):validate_contract(mutant)
                mutant=copy.deepcopy(self.document);mutant[key]['instruction_windows'][index]['address']=f'{int(window["address"],16)+1:08x}'
                with self.assertRaises(ValueError):validate_contract(mutant)
        for edge in range(2):
            mutant=copy.deepcopy(self.document);mutant['case']['edges'][edge]['esi_displacement']+=1
            with self.assertRaises(ValueError):validate_contract(mutant)
        source=path_for(self.case['source']).read_text()
        for mutant in (source+'\n',source.replace(DECL,''),source.replace(NEW[0],OLD[0]),source.replace(NEW[1],''),source.replace('ABI_UNVERIFIED','ABI_VERIFIED')):
            with self.assertRaises(ValueError):restore(self.case,mutant)
        altered=copy.deepcopy(self.document);altered['original_game_functions_executed']=True
        with self.assertRaises(ValueError):validate_contract(altered)

    def test_whole_source_o0_o2_and_old_arity_negatives(self):
        with tempfile.TemporaryDirectory() as tmp:
            tmp=Path(tmp);source=path_for(self.case['source']);old=tmp/'old.cpp';old.write_text(restore(self.case,source.read_text()))
            for opt in ('-O0','-O2'):
                for mode in (('-fsyntax-only',),('-c','-o',str(tmp/'caller.o'))):
                    good=self.compile(source,opt,*mode);self.assertEqual(good.returncode,0,good.stderr)
                    bad=self.compile(old,opt,'-ferror-limit=0',*mode);self.assertNotEqual(bad.returncode,0)
                    self.assertEqual(bad.stderr.count('error:'),2,bad.stderr)
                    self.assertEqual(bad.stderr.count("error: no matching function for call to 'FUN_0008f6a0'"),2,bad.stderr)

    def test_initialized_capture_with_negative_mutations(self):
        with tempfile.TemporaryDirectory() as tmp:
            tmp=Path(tmp)
            for edge in range(2):
                for mutation in (None,'offset','payload','deleted','swapped'):
                    cpp=tmp/'capture.cpp';cpp.write_text(fixture(edge,mutation))
                    for opt in ('-O0','-O2'):
                        exe=tmp/'capture';flags=['-Wall','-Wextra','-Werror'] if mutation!='deleted' else []
                        built=self.compile(cpp,opt,*flags,'-o',str(exe));self.assertEqual(built.returncode,0,built.stderr)
                        ran=subprocess.run([str(exe)],timeout=20);self.assertEqual(ran.returncode,0 if mutation is None else 42,(edge,mutation,opt))

    def test_optional_private_metadata_and_byte_negatives(self):
        if PRIVATE_EXPORT is None:self.skipTest('optional private negative replay not requested')
        # Mutate only copies in memory after read; private export stays read-only.
        mutations=[
          ('listed_length',lambda ix,r:r['instructions'][0].__setitem__('length',99)),
          ('parsed_length',lambda ix,r:r['instructions'][0].__setitem__('parsed_length',99)),
          ('record_count',lambda ix,r:r.__setitem__('instruction_count',99)),
          ('index_count',lambda ix,r:ix.__setitem__('instruction_count',99)),
          ('call_return_override',lambda ix,r:r['instructions'][0].__setitem__('flow_override','CALL_RETURN')),
          ('length_override',lambda ix,r:r['instructions'][0].__setitem__('is_length_overridden',True)),
          ('fallthrough_override',lambda ix,r:r['instructions'][0].__setitem__('is_fallthrough_overridden',True)),
          ('listed_flow_type',lambda ix,r:r['instructions'][0].__setitem__('flow_type','TERMINATOR')),
          ('listed_flows',lambda ix,r:r['instructions'][0].__setitem__('flows',['00000000'])),
          ('listed_fallthrough',lambda ix,r:r['instructions'][0].__setitem__('fallthrough',None)),
          ('uncovered_bytes',lambda ix,r:ix.__setitem__('uncovered_body_byte_count',1)),
          ('uncovered_addresses',lambda ix,r:ix.__setitem__('first_uncovered_addresses',['00000000'])),
          ('validation_issue',lambda ix,r:ix.__setitem__('issues',['flow_override'])),
          ('validation_failure',lambda ix,r:ix.__setitem__('byte_and_instruction_validation_pass',False)),
          ('canonical_mismatch',lambda ix,r:ix.__setitem__('canonical_hash_match',False)),
          ('record_digest',lambda ix,r:r.__setitem__('program_memory_body_sha256','0'*64)),
          ('index_digest',lambda ix,r:ix.__setitem__('program_memory_body_sha256','0'*64)),
          ('canonical_digest',lambda ix,r:ix.__setitem__('canonical_body_sha256','0'*64)),
          ('record_byte_count',lambda ix,r:r.__setitem__('body_byte_count',0)),
          ('index_byte_count',lambda ix,r:ix.__setitem__('body_byte_count',0)),
          ('range_length',lambda ix,r:r['body_ranges'][0].__setitem__('length',0)),
          ('range_end',lambda ix,r:r['body_ranges'][0].__setitem__('end_inclusive','00000000')),
          ('raw_byte',lambda ix,r:r['body_ranges'][0].__setitem__('bytes_hex','00'+r['body_ranges'][0]['bytes_hex'][2:])),
          ('listed_byte',lambda ix,r:r['instructions'][0].__setitem__('bytes_hex','00')),
          ('thunk',lambda ix,r:r.__setitem__('is_thunk',True)),
        ]
        for target in ('000beae0','0008f6a0','0008f6e0'):
            for label,mutation in mutations:
                def mutate(entry,index,record):
                    if entry==target:mutation(index,record)
                with self.subTest(entry=target,mutation=label):
                    with self.assertRaises(ValueError):private_replay(self.document,PRIVATE_EXPORT,mutate)
        # Specifically corrupt both CALL continuation addresses and a conditional
        # edge, including the metadata hazard known from held functions.
        for target,address in (('000beae0','000beaf4'),('000beae0','000beb19'),('000beae0','000beb14'),('0008f6a0','0008f6ae')):
            for field,value in (('flows',['00000000']),('fallthrough',None),('flow_override','CALL_RETURN')):
                def mutate(entry,index,record):
                    if entry==target:
                        next(x for x in record['instructions'] if x['address']==address)[field]=value
                with self.subTest(entry=target,address=address,field=field):
                    with self.assertRaises(ValueError):private_replay(self.document,PRIVATE_EXPORT,mutate)

    def test_optional_private_full_body_replay(self):
        if PRIVATE_EXPORT is None:self.skipTest('optional private copied-project byte replay not requested')
        result=private_replay(self.document,PRIVATE_EXPORT);print('PRIVATE_REPLAY '+json.dumps(result,sort_keys=True))
        self.assertEqual(result['total_body_bytes'],215)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--root',type=Path,default=ROOT)
    parser.add_argument('--candidate-root',type=Path);parser.add_argument('--private-export',type=Path)
    options,rest=parser.parse_known_args();ROOT=options.root.resolve()
    CANDIDATE_ROOT=options.candidate_root.resolve() if options.candidate_root else None
    PRIVATE_EXPORT=options.private_export.resolve() if options.private_export else None
    sys.path.insert(0,str(ROOT/'tools'));unittest.main(argv=[sys.argv[0]]+rest)
