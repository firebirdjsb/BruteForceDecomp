#!/usr/bin/env python3
"""Seven exact existing-model handoffs; no original game function execution.

Public controls validate compact instruction operands, source reversals, hashes,
strict C++17 syntax/objects, and initialized scalar capture fixtures. Optional
private replay reads original Ghidra ranges and independently decodes them with
Capstone. The two payload memory reads are replaced by initialized scalar inputs
ONLY in the synthetic fixture, never in a canonical caller.
"""
from __future__ import annotations
import argparse
import copy
import csv
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CANDIDATE_ROOT = None
PRIVATE_EXPORT = None
MANIFEST = 'metadata/cpp_20261104_esi_stack_calls.json'
MANIFEST_SHA = '148448dd4790233d7beb167fc2958d32dbeb59728bf35ff9c77ff10cc02375d0'
DECL = 'extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);'
ENTRIES = ('0014bd40','00173270','001fba60','0020d710','0020db30','00226360','0022dc60')
# Reviewed source bindings, not new native/register ABI declarations.
BINDINGS = {
 '0014bd40': {'ebx':'unaff_EBX','edi':'unaff_EDI'},
 '00173270': {'ebx':'iVar1','edi':'unaff_EDI'},
 '001fba60': {'ecx':'in_ECX','eax':'in_EAX'},
 '0020d710': {'stack_0':'param_1','edi':'unaff_EDI'},
 '0020db30': {'eax':'in_EAX','edi':'param_1'},
 '00226360': {'edi':'unaff_EDI','eax':'in_EAX'},
 '0022dc60': {'edi':'unaff_EDI','eax':'in_EAX'},
}
EXTRA_WINDOWS = {
 '0014bd40': {'continuation':['85ff']},
 '00173270': {'binding':['8b4708','8b98f00b0000'], 'continuation':['83fdff']},
 '001fba60': {'continuation':['5e']},
 '0020d710': {'binding':['53','56'], 'continuation':['83c608'], 'loop':['3bf3','75e2']},
 '0020db30': {'binding':['53','56','57','8b7c2410'], 'continuation':['83c708','83c608'], 'loop':['3bfb','75df'], 'return_value':['8bc6']},
 '00226360': {'continuation':['8b4308']},
 '0022dc60': {'continuation':['8b4308']},
}
SOURCE_BINDINGS = {
 '00173270':['iVar1 = *(int *)(*(int *)(unaff_EDI + 8) + 0xbf0);'],
 '0020d710':['for (; param_1 != param_2; param_1 = param_1 + 8) {'],
 '0020db30':['for (; param_1 != param_2; param_1 = param_1 + 8) {',
              'in_EAX = in_EAX + 8;', 'return in_EAX;'],
}


def require(condition, message):
    if not condition:
        raise ValueError(message)


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def blob(raw):
    return hashlib.sha1(b'blob '+str(len(raw)).encode()+b'\0'+raw).hexdigest()


def path_for(relative):
    if CANDIDATE_ROOT is not None and (CANDIDATE_ROOT/relative).is_file():
        return CANDIDATE_ROOT/relative
    return ROOT/relative


def apply(case, source):
    for edit in case['replacements']:
        require(edit['count'] == 1 and source.count(edit['before']) == 1, 'edit occurrence differs')
        source = source.replace(edit['before'], edit['after'], 1)
    return source


def restore(case, source):
    require(sha(source.encode()) == case['source_after_sha256'], 'after source digest differs')
    for edit in reversed(case['replacements']):
        require(edit['count'] == 1 and source.count(edit['after']) == 1, 'reversal occurrence differs')
        source = source.replace(edit['after'], edit['before'], 1)
    require(sha(source.encode()) == case['source_before_sha256'], 'before source digest differs')
    require(blob(source.encode()) == case['preimage_git_blob'], 'before Git blob differs')
    return source


def raw(window):
    return bytes.fromhex(window['bytes'])


def address(window):
    return int(window['address'],16)


def one(windows, role):
    require(len(windows[role]) == 1, f'{role}: exactly one instruction required')
    return windows[role][0]


def decode_esi(items):
    """Only observed x86 producer forms. Results are guest-register expressions."""
    data = [raw(i) for i in items]
    if len(data) == 1 and len(data[0]) == 6 and data[0][0] == 0x8d:
        modrm = data[0][1]
        require(modrm >> 6 == 2 and (modrm >> 3) & 7 == 6, 'expected LEA ESI,base+disp32')
        require(modrm & 7 in (3,7), 'expected EBX or EDI base; no SIB/native pointer')
        base = {3:'ebx',7:'edi'}[modrm & 7]
        disp = struct.unpack('<i',data[0][2:])[0]
        require(disp >= 0, 'unexpected negative observed displacement')
        return base, disp
    if len(data) == 2 and data[0] == bytes.fromhex('8bf1'):
        require(len(data[1]) == 6 and data[1][:2] == bytes.fromhex('81c6'), 'expected ADD ESI,imm32')
        return 'ecx', struct.unpack('<I',data[1][2:])[0]
    if data == [bytes.fromhex('8b74240c')]:
        return 'stack_0', 0  # Two preserved DWORD pushes precede this [ESP+12].
    if data == [bytes.fromhex('8bf0')]:
        return 'eax', 0
    raise ValueError('unexpected ESI producer')


def validate_edge(case):
    entry=case['entry'][2:]; w=case['windows']; bindings=BINDINGS[entry]
    expected_roles={'esi','payload','push','skip','call','cleanup','continuation'} | set(EXTRA_WINDOWS[entry])
    require(set(w) == expected_roles, 'changed window roles')
    for role, values in EXTRA_WINDOWS[entry].items():
        require([i['bytes'] for i in w[role]] == values, f'{role} raw contract differs')
    # Distinct instruction starts; selected windows may have gaps, never overlap.
    instructions=sorted((i for windows in w.values() for i in windows), key=address)
    for previous, current in zip(instructions,instructions[1:]):
        require(address(previous)+len(raw(previous)) <= address(current), 'window addresses overlap')
    base, displacement = decode_esi(w['esi'])
    require(base in bindings, 'no reviewed source binding for producer register')
    source_base=bindings[base]
    require(case['esi_source'] == source_base and case['esi_displacement'] == displacement, 'ESI source/displacement differs')
    esi='static_cast<std::uint32_t>('+source_base+')'
    if displacement:
        esi+=f' + UINT32_C(0x{displacement:x})'
    push=one(w,'push'); p=raw(push)
    require(p in (b'\x50', b'\x57'), 'one original pushed EAX/EDI DWORD required')
    if w['payload']:
        producer=one(w,'payload')
        require(raw(producer) == bytes.fromhex('8b4704') and p == b'\x50', 'expected MOV EAX,DWORD [EDI+4]; PUSH EAX')
        require(address(producer)+3 < address(push), 'payload source must precede comparison/push')
        payload='*(int *)('+bindings['edi']+' + 4)'
        word=payload
    else:
        reg={b'\x50':'eax',b'\x57':'edi'}[p]
        require(reg in bindings, 'no reviewed payload source binding')
        payload=bindings[reg]; word='static_cast<std::uint32_t>('+payload+')'
    require(case['payload_source'] == payload, 'payload source differs')
    expected=f'FUN_0008f6a0({esi}, {word});'
    require(case['source_call_after'] == expected, 'source handoff differs from decoded operands')
    old='FUN_0008f6a0('+ (payload if w['payload'] else '') +');'
    require(case['source_call_before'] == old, 'original call differs')
    call=one(w,'call'); data=raw(call)
    require(len(data) == 5 and data[0] == 0xe8, 'expected direct E8')
    target=(address(call)+5+struct.unpack('<i',data[1:])[0]) & 0xffffffff
    require(target == 0x0008f6a0, 'wrong E8 destination')
    cleanup=one(w,'cleanup'); skip=one(w,'skip')
    require(address(push)+1 == address(call), 'push must immediately precede call')
    require(address(cleanup) == address(call)+5 and raw(cleanup) == bytes.fromhex('83c404'), 'expected ADD ESP,4 at return')
    require(raw(skip) == bytes.fromhex('7409') and address(skip)+2 == address(push), 'expected conditional skip over push/call/cleanup')
    continuation=address(w['continuation'][0])
    require(continuation == address(cleanup)+3 and address(skip)+2+raw(skip)[1] == continuation, 'branch and call continuation differ')
    require(address(w['esi'][-1])+len(raw(w['esi'][-1])) <= address(skip), 'ESI producer must precede call path')
    if entry in ('0014bd40','00173270','00226360','0022dc60'):
        require(address(w['esi'][0])+6 == address(skip), 'LEA must immediately precede skip')
    if entry == '001fba60':
        require(address(w['esi'][0])+8 == address(w['esi'][1]), 'MOV/ADD original interval differs')
        require(address(w['esi'][1])+8 == address(skip), 'ADD/CMP original interval differs')
    return source_base, displacement, payload


def validate_sources(case, source):
    before=restore(case,source)
    require(source.count(DECL) == 1 and DECL not in before, 'existing-model declaration was not genuinely absent')
    require(source.count(case['source_call_after']) == 1, 'call occurrence differs')
    require(before.count(case['source_call_before']) == 1, 'old call occurrence differs')
    expected_edits=[{'before':'#include "bf_ghidra_types.h"\n',
                     'after':'#include "bf_ghidra_types.h"\n'+DECL+'\n','count':1},
                    {'before':case['source_call_before'],'after':case['source_call_after'],'count':1}]
    require(case['replacements'] == expected_edits, 'edit exceeds declaration and one call')
    require(apply(case,before) == source, 'exact two-way reversal failed')
    for binding in SOURCE_BINDINGS.get(case['entry'][2:],[]):
        require(before.count(binding) == 1, 'reviewed source binding differs')
    # Every newly passed source is an existing int guest word, never a pointer.
    for name in {case['esi_source'], case['payload_source']}:
        if name.startswith('*'):
            continue
        require(re.search(r'\bint\s+'+re.escape(name)+r'\b', before) is not None, 'new argument is not an existing int word')
    return before


def fixture(case, mutation=None):
    base,disp,payload=validate_edge(case)
    call=case['source_call_after']
    # Substitute only a verified memory-value operand with initialized int32 bits.
    # Canonical native-pointer expressions are compiled but NEVER dereferenced.
    memory=payload.startswith('*')
    if memory:
        require(call.count(payload)==1, 'fixture payload occurrence differs')
        call=call.replace(payload,'initialized_payload_word',1)
    if mutation=='esi':
        first='static_cast<std::uint32_t>('+base+')'
        call=call.replace(first,'('+first+' ^ UINT32_C(1))',1)
    elif mutation=='payload':
        operand='initialized_payload_word' if memory else 'static_cast<std::uint32_t>('+payload+')'
        call=call.replace(operand,'(static_cast<std::uint32_t>('+operand+') ^ UINT32_C(1))',1)
    elif mutation=='deleted':
        call=''
    declarations='const std::int32_t '+base+' = signed_bits(base_word);\n'
    wordname='initialized_payload_word' if memory else payload
    require(wordname != base, 'fixture inputs must be independent')
    declarations+='const std::int32_t '+wordname+' = signed_bits(payload_word);\n'
    return '''#include <cstdint>
#include <cstring>
static std::uint32_t captured_esi, captured_word, captures;
static void FUN_0008f6a0(std::uint32_t esi, std::uint32_t word) {
    captured_esi=esi; captured_word=word; ++captures;
}
static std::int32_t signed_bits(std::uint32_t word) {
    std::int32_t result; std::memcpy(&result,&word,4); return result;
}
static bool check(std::uint32_t base_word,std::uint32_t payload_word) {
    const std::uint32_t expected=static_cast<std::uint32_t>(
        (std::uint64_t(base_word)+DISPLACEMENT) % UINT64_C(0x100000000));
    DECLARATIONS
    captured_esi=~expected; captured_word=~payload_word; captures=0;
    CALL
    return captures==1 && captured_esi==expected && captured_word==payload_word;
}
int main() {
    static_assert(sizeof(int)==4 && sizeof(std::int32_t)==4 && sizeof(std::uint32_t)==4,"DWORDs");
    const std::uint32_t edges[]={0,1,3,4,7,8,0x7fffffff,0x80000000,0xffffff00,0xfffffffe,0xffffffff};
    for(auto base:edges) for(auto payload:edges) if(!check(base,payload)) return 42;
    for(unsigned bit=0;bit<32;++bit) if(!check(1u<<bit,~(1u<<bit))||!check(~(1u<<bit),1u<<bit)) return 42;
    const std::uint32_t around[]={0u-DISPLACEMENT,0u-DISPLACEMENT-1,0x80000000u-DISPLACEMENT,0x80000000u-DISPLACEMENT-1};
    for(auto base:around) for(auto payload:edges) if(!check(base,payload)) return 42;
    std::uint32_t state=0x9128fa4b;
    for(unsigned i=0;i<20000;++i) {
        state^=state<<13;state^=state>>17;state^=state<<5;const auto base=state;
        state^=state<<13;state^=state>>17;state^=state<<5;if(!check(base,state)) return 42;
    }
    return 0;
}
'''.replace('DISPLACEMENT',str(disp)+'u').replace('DECLARATIONS',declarations).replace('CALL',call)


def private_replay(manifest, directory):
    try:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    except ImportError as error:
        raise ValueError('private replay requires Capstone on PYTHONPATH') from error
    summary=json.loads((directory/'validation.json').read_text())
    records={v['entry']:v for v in summary['functions']}
    decoder=Cs(CS_ARCH_X86,CS_MODE_32); decoder.detail=True
    result=[]
    with (directory/'functions.jsonl').open('rb') as stream:
        for item in manifest['cases']+[manifest['callee']]:
            entry=item['entry'][2:]; index=records[entry]
            require(index['jsonl_byte_offset']==item['private_jsonl_byte_offset'] and index['jsonl_byte_length']==item['private_jsonl_byte_length'], 'private offset differs')
            stream.seek(index['jsonl_byte_offset']); record=json.loads(stream.read(index['jsonl_byte_length']))
            require(record['entry']==entry and index['issues']==[] and index['uncovered_body_byte_count']==0, 'private identity or validation quarantine')
            memory={}; joined=bytearray(); decoded=[]; spans=[]
            for span in record['body_ranges']:
                start=int(span['start'],16); data=bytes.fromhex(span['bytes_hex']); end=int(span['end_inclusive'],16)
                require(len(data)==span['length']==end-start+1 and not(set(range(start,end+1)) & memory.keys()), 'body range length/overlap')
                require(not spans or int(spans[-1]['end_inclusive'],16)<start, 'body range ordering')
                spans.append({key:value for key,value in span.items() if key!='bytes_hex'}); joined.extend(data)
                memory.update({start+i:value for i,value in enumerate(data)})
                instructions=list(decoder.disasm(data,start))
                require(sum(i.size for i in instructions)==len(data), 'independent decode does not consume entire range')
                decoded.extend(instructions)
            require(spans==item['body_ranges'] and len(joined)==item['body_byte_count']==record['body_byte_count'], 'body span/count differs')
            require(sha(joined).upper()==item['original_body_sha256']==record['program_memory_body_sha256']==index['canonical_body_sha256'], 'body digest differs')
            listing=record['instructions']; require(len(listing)==len(decoded)==record['instruction_count'], 'instruction count differs')
            for analyzed, independent in zip(listing,decoded):
                require(int(analyzed['address'],16)==independent.address and analyzed['length']==independent.size and analyzed['bytes_hex']==independent.bytes.hex(), 'listing/independent decode mismatch')
                require(analyzed['flow_override']=='NONE' and not analyzed['is_length_overridden'] and not analyzed['is_fallthrough_overridden'], 'analyzed flow/length override')
            boundaries={i.address:i for i in decoded}
            windows=item.get('instruction_windows') or [i for rows in item['windows'].values() for i in rows]
            for window in windows:
                start=address(window); data=raw(window)
                require(all(memory.get(start+i)==b for i,b in enumerate(data)), 'compact window bytes differ')
                consumed=0
                while consumed<len(data):
                    require(start+consumed in boundaries, 'window is not on decoded boundary')
                    consumed+=boundaries[start+consumed].size
                require(consumed==len(data), 'window ends inside instruction')
            if 'windows' in item:
                validate_edge(item); w=item['windows']; call=address(one(w,'call'))
                first=address(w['esi'][0]); last=address(w['esi'][-1])
                allowed={address(i) for i in w['esi']}
                for insn in decoded:
                    if first<=insn.address<call:
                        _,written=insn.regs_access()
                        require(not any(insn.reg_name(reg)=='esi' for reg in written) or insn.address in allowed, 'unrecorded ESI overwrite on handoff corridor')
                        require(insn.mnemonic!='call', 'unmodeled intervening call')
                if w['payload']:
                    producer=address(w['payload'][0])
                    for insn in decoded:
                        if producer<insn.address<call:
                            _,written=insn.regs_access()
                            require(not any(insn.reg_name(reg)=='eax' for reg in written), 'payload EAX overwritten before call')
            result.append({'entry':item['entry'],'body_sha256':item['original_body_sha256'],'bytes':len(joined),'instructions':len(decoded)})
    return {'bodies':result,'body_count':len(result),'total_body_bytes':sum(r['bytes'] for r in result),'original_game_functions_executed':False,'full_xbe_reauthenticated':False}


class EsiStackCallsTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest=json.loads(path_for(MANIFEST).read_text())
        cls.compiler=os.environ.get('CXX') or shutil.which('clang++')
        require(cls.compiler is not None, 'clang++ unavailable; set CXX explicitly')

    def compile(self,path,*flags):
        return subprocess.run([self.compiler,'-std=c++17','-I',str(ROOT/'include'),*flags,str(path)],capture_output=True,text=True,timeout=60)

    def test_exact_source_body_identity_and_declaration(self):
        from body_hash_labels import read_body_digest
        from source_layout import relative_source_path
        self.assertEqual(sha(path_for(MANIFEST).read_bytes()),MANIFEST_SHA)
        self.assertEqual(tuple(c['entry'][2:] for c in self.manifest['cases']),ENTRIES)
        self.assertFalse(self.manifest['original_xbe_reauthenticated'])
        self.assertFalse(self.manifest['original_game_functions_executed'])
        self.assertEqual(self.manifest['existing_model_declaration'],DECL)
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            inventory={r['entry']:r['original_body_sha256'] for r in csv.DictReader(stream)}
        for item in self.manifest['cases']+[self.manifest['callee']]:
            source=path_for(item['source']).read_text()
            self.assertEqual(item['source'],relative_source_path(ROOT,item['entry']).as_posix())
            self.assertEqual(read_body_digest(source),(item['original_body_sha256'],False))
            self.assertEqual(item['original_body_sha256'],inventory[item['entry']])
            self.assertIn('ABI_UNVERIFIED',source)
            self.assertEqual(sum(r['length'] for r in item['body_ranges']),item['body_byte_count'])
            self.assertEqual(item['private_validation_issues'],[])
            if 'replacements' in item:
                validate_edge(item); validate_sources(item,source)
        callee=self.manifest['callee']; definition=path_for(callee['source']).read_text(); header=(ROOT/callee['header']).read_text()
        self.assertEqual(sha(definition.encode()),callee['source_sha256'])
        self.assertEqual(sha(header.encode()),callee['header_sha256'])
        self.assertIn(DECL.removeprefix('extern ').removesuffix(';')+'\n{',definition)
        self.assertIn(DECL.removeprefix('extern '),header)
        self.assertEqual(callee['instruction_windows'],[{'address':'0008f6a0','bytes':'8b4604'},{'address':'0008f6a5','bytes':'538b5c2408'},{'address':'0008f6de','bytes':'5bc3'}])

    def test_historical_ledger_non_overlap(self):
        scan=self.manifest['historical_ledger_scan']
        self.assertEqual(scan['overlaps'],[])
        self.assertEqual(scan['file_count'],len(scan['files']))
        for pin in scan['files']:
            data=(ROOT/pin['path']).read_bytes()
            self.assertEqual(sha(data),pin['sha256'])
            for entry in ENTRIES:
                self.assertNotIn(entry,data.decode().lower())

    def test_raw_and_expression_mutation_controls(self):
        for case in self.manifest['cases']:
            validate_edge(case)
            for role, windows in case['windows'].items():
                for index, window in enumerate(windows):
                    for byte_index in range(len(raw(window))):
                        mutant=copy.deepcopy(case); changed=bytearray(raw(window)); changed[byte_index]^=1
                        mutant['windows'][role][index]['bytes']=changed.hex()
                        with self.subTest(entry=case['entry'],role=role,index=index,byte=byte_index):
                            with self.assertRaises(ValueError):validate_edge(mutant)
            for key in ('esi_source','payload_source','source_call_after','source_call_before'):
                mutant=copy.deepcopy(case);mutant[key]+=' '
                with self.assertRaises(ValueError):validate_edge(mutant)
            for role in ('call','push','cleanup','skip','continuation'):
                mutant=copy.deepcopy(case);mutant['windows'][role][0]['address']=f'{address(case["windows"][role][0])+1:08x}'
                with self.assertRaises(ValueError):validate_edge(mutant)

    def test_reversal_corruption_controls(self):
        for case in self.manifest['cases']:
            source=path_for(case['source']).read_text()
            for mutant in (source+'\n',source.replace(DECL,''),source.replace(case['source_call_after'],''),source.replace('ABI_UNVERIFIED','ABI_VERIFIED')):
                with self.assertRaises(ValueError):validate_sources(case,mutant)
            changed=copy.deepcopy(case);changed['replacements'][1]['before']='FUN_0008f6a0(0);'
            with self.assertRaises(ValueError):validate_sources(changed,source)

    def test_complete_source_and_original_negatives_o0_o2(self):
        with tempfile.TemporaryDirectory() as temp:
            temp=Path(temp)
            for case in self.manifest['cases']:
                source=path_for(case['source']);before=validate_sources(case,source.read_text());old=temp/'before.cpp';old.write_text(before)
                declared=temp/'declared.cpp';declared.write_text(before.replace('#include "bf_ghidra_types.h"\n','#include "bf_ghidra_types.h"\n'+DECL+'\n'))
                for opt in ('-O0','-O2'):
                    for mode in (('-fsyntax-only',),('-c','-o',str(temp/'source.o'))):
                        good=self.compile(source,opt,*mode);self.assertEqual(good.returncode,0,good.stderr)
                        bad=self.compile(old,opt,'-ferror-limit=0',*mode);self.assertNotEqual(bad.returncode,0)
                        self.assertEqual(bad.stderr.count('error:'),1,bad.stderr)
                        self.assertIn("use of undeclared identifier 'FUN_0008f6a0'",bad.stderr)
                        arity=self.compile(declared,opt,'-ferror-limit=0',*mode);self.assertNotEqual(arity.returncode,0)
                        self.assertEqual(arity.stderr.count('error:'),1,arity.stderr)
                        self.assertIn("no matching function for call to 'FUN_0008f6a0'",arity.stderr)

    def test_initialized_scalar_capture_and_negative_controls(self):
        with tempfile.TemporaryDirectory() as temp:
            temp=Path(temp)
            for case in self.manifest['cases']:
                validate_sources(case,path_for(case['source']).read_text())
                for mutation in (None,'esi','payload','deleted'):
                    cpp=temp/'capture.cpp';cpp.write_text(fixture(case,mutation))
                    for opt in ('-O0','-O2'):
                        exe=temp/'capture'
                        # Deleted-call controls intentionally leave unused initialized variables.
                        flags=['-Wall','-Wextra','-Werror'] if mutation!='deleted' else []
                        built=self.compile(cpp,opt,*flags,'-o',str(exe));self.assertEqual(built.returncode,0,built.stderr)
                        ran=subprocess.run([str(exe)],timeout=20)
                        self.assertEqual(ran.returncode,0 if mutation is None else 42,(case['entry'],mutation,opt))

    def test_private_full_body_replay(self):
        if PRIVATE_EXPORT is None:
            self.skipTest('optional private byte replay not requested')
        result=private_replay(self.manifest,PRIVATE_EXPORT)
        self.assertEqual(result['body_count'],8)
        print('PRIVATE_REPLAY '+json.dumps(result,sort_keys=True))


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--root',type=Path,default=ROOT)
    parser.add_argument('--candidate-root',type=Path)
    parser.add_argument('--private-export',type=Path)
    options, remaining=parser.parse_known_args()
    ROOT=options.root.resolve(); CANDIDATE_ROOT=options.candidate_root.resolve() if options.candidate_root else None
    PRIVATE_EXPORT=options.private_export.resolve() if options.private_export else None
    sys.path.insert(0,str(ROOT/'tools'))
    unittest.main(argv=[sys.argv[0]]+remaining)
