#!/usr/bin/env python3
"""Fail-closed source-only admission and initialized DWORD-only fixtures.

The original callers/callee are compiled, never linked into or run by fixtures.
"""
from __future__ import annotations
import argparse
import copy
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest

import verify_cpp_20261105_literal_declaration_pair as evidence

ROOT = Path(__file__).resolve().parents[1]
PRIVATE_EXPORT = None


def leaves(value,path=()):
    if isinstance(value,dict):
        for key,child in value.items():
            yield from leaves(child,path+(key,))
    elif isinstance(value,list) and value:
        for key,child in enumerate(value):
            yield from leaves(child,path+(key,))
    else:
        yield path,value


def alter(doc,path,value):
    out = copy.deepcopy(doc); node = out
    for key in path[:-1]:
        node = node[key]
    node[path[-1]] = value
    return out


def fixture(statement,immediate):
    # The source expression is evaluated only with initialized, aligned, real
    # uint32_t array storage. It is not an unbound guest ESI or a game object.
    return r'''#include "bf_ghidra_types.h"
#include <type_traits>
int main() {
    static_assert(std::is_same<undefined4,uint32_t>::value,"existing DWORD alias");
    static_assert(sizeof(undefined4)==4,"DWORD width");
    const uint32_t seeds[]={0,1,0x7fffffffu,0x80000000u,0xffffffffu,0x55aa55aau};
    for(auto seed:seeds) {
        undefined4 words[6];
        for(unsigned i=0;i<6;++i)words[i]=seed ^ (0x9e3779b9u*(i+1));
        undefined4 before[6];
        for(unsigned i=0;i<6;++i)before[i]=words[i];
        undefined4 *unaff_ESI=&words[2];
        STATEMENT
        for(unsigned i=0;i<6;++i)
            if(words[i]!=(i==2?UINT32_C(IMMEDIATE):before[i]))return 42;
    }
    return 0;
}
'''.replace('STATEMENT',statement).replace('IMMEDIATE',immediate)


class LiteralDeclarationPairTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.doc = evidence.load_manifest(ROOT)
        cls.compiler = shutil.which('clang++')
        if cls.compiler is None:
            raise RuntimeError('clang++ is required; strict source checks cannot be skipped')

    def compile(self,source,opt,extra=()):
        cmd = [self.compiler,'-std=c++17',opt,'-Werror=pointer-to-int-cast','-ferror-limit=0',
               '-I',str(ROOT/'include'),'-x','c++','-']
        cmd += list(extra) if extra else ['-fsyntax-only']
        return subprocess.run(cmd,input=source,text=True,capture_output=True,timeout=60)

    def test_exact_sources_and_reversal(self):
        evidence.verify_source(ROOT,self.doc)
        for case in self.doc['cases']:
            source = (ROOT/case['source']).read_bytes().decode('utf-8')
            old = evidence.restore(case,source)
            self.assertEqual(evidence.apply(case,old),source)
            immediate = case['store']['immediate']
            mutants = [source+'\n', source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1),
                source.replace(case['after'],case['after'].replace(immediate,'0x00000000'),1),
                source.replace('undefined4 *unaff_ESI;','uint64_t *unaff_ESI;',1),
                source.replace(case['after'],case['after'].replace('*unaff_ESI','unaff_ESI[1]'),1),
                source.replace(evidence.DECLARATION,'extern int FUN_00066920(void);',1),
                source.replace(evidence.DECLARATION,'extern void FUN_00066920(unsigned);',1),
                source.replace(case['source_call'],'FUN_00066920(0);',1),
                source.replace('return;','return 0;',1),
                source.replace(case['added_comment'],'',1)]
            for mutant in mutants:
                with self.assertRaises(ValueError):
                    evidence.restore(case,mutant)

    def test_strict_o0_o2_syntax_objects_and_restoration_negatives(self):
        with tempfile.TemporaryDirectory() as temp:
            for case in self.doc['cases']:
                source = (ROOT/case['source']).read_bytes().decode('utf-8')
                old = evidence.restore(case,source)
                for opt in ('-O0','-O2'):
                    for extra in ((),('-c','-o',str(Path(temp)/(case['entry']+opt+'.o')))):
                        result = self.compile(source,opt,extra)
                        self.assertEqual(result.returncode,0,result.stderr)
                    for name,negative,expected,absent in (
                        ('declaration-only-restored',source.replace(evidence.DECLARATION,'',1),
                         ["use of undeclared identifier 'FUN_00066920'"],['incompatible pointer to integer conversion']),
                        ('literal-only-restored',source.replace(case['after'],case['before'],1),
                         ['incompatible pointer to integer conversion'],["use of undeclared identifier 'FUN_00066920'"]),
                        ('both-restored',old,["use of undeclared identifier 'FUN_00066920'",
                         'incompatible pointer to integer conversion'],[])):
                        result = self.compile(negative,opt)
                        self.assertNotEqual(result.returncode,0,name)
                        for token in expected:
                            self.assertIn(token,result.stderr)
                        for token in absent:
                            self.assertNotIn(token,result.stderr)

    def test_exact_definition_compatibility_is_not_an_abi_bridge(self):
        combined = '\n'.join((ROOT/i['source']).read_bytes().decode('utf-8') for i in self.doc['cases']+self.doc['dependencies'])
        combined += '\nstatic_assert(std::is_same<decltype(&FUN_00066920),void (*)(void)>::value,"exact source type");\n'
        with tempfile.TemporaryDirectory() as temp:
            for opt in ('-O0','-O2'):
                for extra in ((),('-c','-o',str(Path(temp)/('combined'+opt+'.o')))):
                    result = self.compile(combined,opt,extra)
                    self.assertEqual(result.returncode,0,result.stderr)
                for replacement in ('extern unsigned FUN_00066920(void);','extern void FUN_00066920(unsigned);'):
                    result = self.compile(combined.replace(evidence.DECLARATION,replacement),opt)
                    self.assertNotEqual(result.returncode,0)

    def test_callee_and_header_mutations_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            targets = [i['source'] for i in self.doc['dependencies']]+[i['path'] for i in self.doc['headers']]
            # source_path uses the immutable routing index, not guessed flat paths.
            targets += ['metadata/asm_supported_readable_names.csv']
            for path in targets:
                dest = root/path;dest.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(ROOT/path,dest)
            evidence.verify_dependencies(root,self.doc)
            for path in targets[:2]:
                target = root/path;raw = target.read_bytes();target.write_bytes(raw+b'\n')
                with self.assertRaises(ValueError):
                    evidence.verify_dependencies(root,self.doc)
                target.write_bytes(raw)
            evidence.verify_dependencies(root,self.doc)

    def test_source_and_header_newline_bytes_fail_closed(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            targets = [i['source'] for i in self.doc['cases']+self.doc['dependencies']]
            targets += [i['path'] for i in self.doc['headers']]
            support = ['metadata/asm_supported_readable_names.csv','metadata/bulk_13694_inventory.csv']
            for path in targets+support:
                dest = root/path;dest.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(ROOT/path,dest)
            evidence.verify_source(root,self.doc)
            for path in targets:
                target = root/path;raw = target.read_bytes()
                self.assertNotIn(b'\r',raw)
                self.assertGreater(raw.count(b'\n'),1)
                for name,mutant in (('crlf',raw.replace(b'\n',b'\r\n')),
                                    ('mixed',raw.replace(b'\n',b'\r\n',1))):
                    with self.subTest(path=path,newlines=name):
                        self.assertNotEqual(mutant,raw)
                        try:
                            target.write_bytes(mutant)
                            with self.assertRaises(ValueError):
                                evidence.verify_source(root,self.doc)
                        finally:
                            target.write_bytes(raw)
                        self.assertEqual(target.read_bytes(),raw)
                        evidence.verify_source(root,self.doc)

    def test_all_public_metadata_and_instruction_bytes_fail_closed(self):
        count = byte_count = 0
        for path,value in leaves(self.doc):
            changed = not value if isinstance(value,bool) else value+1 if isinstance(value,int) else value+'!' if isinstance(value,str) else ['forged']
            mutant = alter(self.doc,path,changed)
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
            with self.assertRaises(ValueError):
                evidence.load_bytes((json.dumps(mutant,indent=2)+'\n').encode())
            count += 1
        for section in ('cases','dependencies'):
            for n,item in enumerate(self.doc[section]):
                for address,window in item['instruction_windows'].items():
                    for pos in range(len(bytes.fromhex(window['bytes']))):
                        raw = bytearray.fromhex(window['bytes']);raw[pos] ^= 1
                        with self.assertRaises(ValueError):
                            evidence.validate_contract(alter(self.doc,(section,n,'instruction_windows',address,'bytes'),raw.hex()))
                        byte_count += 1
        for mutant in (dict(self.doc,extra='forged'),dict(self.doc,cases=self.doc['cases']*2)):
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
        for raw in ('{"x":1,"x":2}','{"x":NaN}','{"x":Infinity}'):
            with self.assertRaises(ValueError):
                evidence.strict_json(raw)
        self.assertEqual(byte_count,74)
        print('Public controls:',count,'metadata leaf mutations;',byte_count,'instruction-byte mutations')

    def test_narrow_decoders_reject_other_operands(self):
        for case in self.doc['cases']:
            self.assertEqual(evidence.mov_memory_imm32(bytes.fromhex(case['store']['bytes'])),int(case['store']['immediate'],16))
            call = case['direct_calls'][0]
            self.assertEqual(evidence.direct_call(int(call['address'],16),call['bytes']),0x66920)
        for raw in ('66c706d0f4','c606d0','c7c6d0f43800','c70ed0f43800','c706d0f438','c706d0f4380000'):
            with self.assertRaises(ValueError):
                evidence.mov_memory_imm32(bytes.fromhex(raw))
        for raw in ('e8','ff15d0f43800','e900000000','e80000000000'):
            with self.assertRaises(ValueError):
                evidence.direct_call(0x2ae202,raw)

    def test_initialized_guarded_dword_only(self):
        runs = 0
        with tempfile.TemporaryDirectory() as temp:
            for case in self.doc['cases']:
                source = (ROOT/case['source']).read_bytes().decode('utf-8')
                statement = next(line.strip() for line in source.splitlines() if line.strip() == case['after'])
                immediate = case['store']['immediate']; low = int(immediate,16)&0xffff
                variants = [('positive',statement,0),
                    ('wrong-value',statement.replace(immediate,hex(int(immediate,16)+1)),42),
                    ('zero-value',statement.replace(immediate,'0'),42),
                    ('wrong-offset',statement.replace('*unaff_ESI','unaff_ESI[1]'),42),
                    ('wide-write',statement+' unaff_ESI[1]=0;',42),
                    ('short-write',f'*unaff_ESI=(*unaff_ESI & 0xffff0000u)|{low}u;',42)]
                for opt in ('-O0','-O2'):
                    for name,operation,expected in variants:
                        exe = Path(temp)/(case['entry']+name+opt)
                        result = self.compile(fixture(operation,immediate),opt,('-Wall','-Wextra','-Werror','-o',str(exe)))
                        self.assertEqual(result.returncode,0,result.stderr)
                        result = subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
                        self.assertEqual(result.returncode,expected,name+opt+result.stderr)
                        runs += 1
        print('Initialized DWORD-only fixtures:',runs,'runs, 20 negative controls; no game caller execution')

    def test_ci_addition_preserves_existing_gates(self):
        ci = (ROOT/'.github/workflows/cpp-compatibility-audit.yml').read_text()
        self.assertEqual(ci.count(evidence.CI_ADDITION),1)
        for gate in ('verify_cpp_guest_address_literals.py --root .','test_cpp_20261105_callback_dword_pair.py',
                     'test_cpp_20261105_global_dword_six.py','test_cpp_20261105_00023a80_literal_pair.py'):
            self.assertIn('        run: python3 tools/'+gate+'\n',ci)

    def test_private_full_bodies_all_flows_and_corruption_controls(self):
        if PRIVATE_EXPORT is None:
            self.skipTest('optional private complete-body replay not requested')
        from capstone import Cs,CS_ARCH_X86,CS_MODE_32
        decoder = Cs(CS_ARCH_X86,CS_MODE_32);decoder.detail = True
        records = evidence.read_records(PRIVATE_EXPORT,self.doc)
        with (PRIVATE_EXPORT/'validation.json').open() as stream:
            index = {i['entry']:i for i in evidence.strict_json(stream.read())['functions']}
        count = byte_count = index_count = 0
        for item in self.doc['cases']+self.doc['dependencies']:
            record = records[item['entry']];evidence.validate_record(record,item,decoder)
            row = index[item['entry'][2:]]
            for key,value in [('entry','00000000'),('canonical_hash_match',False),
                    ('byte_and_instruction_validation_pass',False),('issues',['forged']),('uncovered_body_byte_count',1),
                    ('first_uncovered_addresses',['00000000']),('prefetch_listing_disagreements',['forged']),
                    ('canonical_body_sha256','0'*64),('program_memory_body_sha256','0'*64),
                    ('body_byte_count',1),('instruction_count',1),('jsonl_byte_offset',-1),('jsonl_byte_length',1024*1024+1)]:
                with self.assertRaises(ValueError):
                    evidence.validate_index_row(dict(row,**{key:value}),item)
                index_count += 1
            changes = [(('entry',),'00000000'),(('name',),'forged'),(('is_thunk',),True),
                (('body_ranges',0,'start'),'00000000'),(('body_ranges',0,'end_inclusive'),'00000000'),
                (('body_ranges',0,'length'),1),(('body_ranges',),record['body_ranges']*2),
                (('program_memory_body_sha256',),'0'*64),(('body_byte_count',),1),(('instruction_count',),1),
                (('instructions',),record['instructions'][:-1])]
            for n,ins in enumerate(record['instructions']):
                for key,value in [('address','00000000'),('length',100),('parsed_length',100),
                    ('flow_override','CALL_RETURN'),('is_length_overridden',True),('is_fallthrough_overridden',True),
                    ('listing_metadata_is_analyzed_not_byte_proof',False),('flows',['ffffffff']),
                    ('fallthrough','ffffffff'),('flow_type','FORGED_FLOW')]:
                    changes.append((('instructions',n,key),value))
                for pos in range(len(bytes.fromhex(ins['bytes_hex']))):
                    raw = bytearray.fromhex(ins['bytes_hex']);raw[pos] ^= 1
                    changes.append((('instructions',n,'bytes_hex'),raw.hex()));byte_count += 1
            body = bytes.fromhex(record['body_ranges'][0]['bytes_hex'])
            for pos in range(len(body)):
                raw = bytearray(body);raw[pos] ^= 1
                changes.append((('body_ranges',0,'bytes_hex'),raw.hex()));byte_count += 1
            for path,value in changes:
                with self.assertRaises(ValueError):
                    evidence.validate_record(alter(record,path,value),item,decoder)
                count += 1
        self.assertEqual(byte_count,410)
        self.assertEqual(index_count,39)
        print('Private replay: 3 bodies, 205 bytes, 47 instructions;',count,
              'record controls including',byte_count,'byte controls;',index_count,'index controls')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--private-export',type=Path)
    parser.add_argument('--tooldeps',type=Path)
    args,remaining = parser.parse_known_args()
    PRIVATE_EXPORT = args.private_export
    if args.tooldeps:
        sys.path.insert(0,str(args.tooldeps))
    unittest.main(argv=[sys.argv[0],*remaining])
