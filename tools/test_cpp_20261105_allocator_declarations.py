#!/usr/bin/env python3
"""Two exact source declarations; never execute unbound-register callers."""
from __future__ import annotations
import argparse
import copy
import csv
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest
import verify_cpp_20261105_allocator_declarations as evidence

ROOT = Path(__file__).resolve().parents[1]
CANDIDATE = None


def leaf_paths(value, path=()):
    if isinstance(value,dict):
        for k,v in value.items():
            yield from leaf_paths(v,path+(k,))
    elif isinstance(value,list):
        if not value:
            yield path,value
        else:
            for k,v in enumerate(value):
                yield from leaf_paths(v,path+(k,))
    else:
        yield path,value


def alter(doc, path, value):
    out = copy.deepcopy(doc); node = out
    for key in path[:-1]:
        node = node[key]
    node[path[-1]] = value
    return out


def model(call='iVar1 = FUN_002ea01d(0x30);', result='guest_result'):
    # The source expression runs only in this initialized, authored fixture.
    # Native scalar storage is not guest memory. This establishes a compiler-
    # local integer conversion observation, not a portable guest ABI guarantee.
    return r'''#include <cstdint>
#include <cstring>
#include <type_traits>
#include "bf_002ea01d_allocator_guest32.h"
static std::uint32_t guest_result, size_seen, calls;
std::uint32_t FUN_002ea01d(std::uint32_t size) {size_seen=size;++calls;return RESULT;}
static bool probe(std::uint32_t bits) {
    guest_result=bits; size_seen=0; calls=0;
    int iVar1=0;
    CALL
    std::uint32_t stored_bits=0;
    std::memcpy(&stored_bits,&iVar1,sizeof stored_bits);
    return calls==1 && size_seen==0x30 && stored_bits==bits;
}
int main() {
    static_assert(sizeof(int)==4,"existing signed DWORD local");
    static_assert(std::is_same<decltype(&FUN_002ea01d),std::uint32_t (*)(std::uint32_t)>::value,"existing guest32 declaration");
    const std::uint32_t edge[]={0,1,0x7f,0x80,0xff,0x100,0xffff,0x10000,0x7fffffff,0x80000000,0xffffff00,0xfffffffe,0xffffffff};
    for(auto x:edge)if(!probe(x))return 42;
    for(unsigned i=0;i<32;++i)if(!probe(1u<<i)||!probe(~(1u<<i)))return 42;
    std::uint32_t state=0x87ad059b;
    for(unsigned i=0;i<100000;++i){state^=state<<13;state^=state>>17;state^=state<<5;if(!probe(state))return 42;}
    return 0;
}
'''.replace('CALL',call).replace('RESULT',result)


class AllocatorDeclarationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.candidate = CANDIDATE or ROOT
        cls.doc = evidence.load_manifest(cls.candidate)
        cls.compiler = shutil.which('clang++')
        sys.path.insert(0,str(ROOT/'tools'))
        from source_layout import relative_source_path
        cls.route = staticmethod(relative_source_path)

    def source(self, item):
        return (self.candidate/item['source']).read_text()

    def compile(self, source, opt, obj=None):
        if not self.compiler:
            self.skipTest('clang++ unavailable; no compiler result claimed')
        cmd=[self.compiler,'-std=c++17','-x','c++',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),'-']
        cmd += ['-fsyntax-only','-ferror-limit=0'] if obj is None else ['-c','-o',str(obj)]
        return subprocess.run(cmd,input=source,text=True,capture_output=True,timeout=60)

    def test_exact_preimages_and_canonical_provenance(self):
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as stream:
            inventory={r['entry']:r['original_body_sha256'] for r in csv.DictReader(stream)}
        for item in self.doc['cases']:
            source=self.source(item);old=evidence.restore(item,source)
            self.assertEqual(item['source'],self.route(ROOT,item['entry']).as_posix())
            self.assertIn('Input x86 body SHA-256: '+item['original_body_sha256'],old)
            self.assertEqual(inventory[item['entry']],item['original_body_sha256'])
            self.assertEqual(source.count(item['source_call']),1)
            self.assertIn('  int iVar1;',source)
            self.assertIn('  int in_ECX;',source)
            self.assertEqual(evidence.apply(old),source)
            for mutant in [source+'\n',source.replace('ABI_UNVERIFIED','ABI_VERIFIED',1),source.replace('(0x30)','(0x31)',1),source.replace('  int iVar1;','  uint32_t iVar1;',1),source.replace('FUN_002b3c60();','FUN_002b3c60(in_ECX);',1)]:
                with self.assertRaises(ValueError):
                    evidence.restore(item,mutant)

    def test_immutable_callee_definitions_and_headers(self):
        for dep in self.doc['dependencies']:
            raw=(ROOT/dep['source']).read_bytes();text=raw.decode()
            self.assertEqual(evidence.sha(raw),dep['source_before_sha256'])
            self.assertIn(dep['definition_signature'],text.splitlines())
            self.assertIn('Input x86 body SHA-256: '+dep['original_body_sha256'],text)
        for header in self.doc['headers']:
            self.assertEqual(evidence.sha((ROOT/header['source']).read_bytes()),header['sha256'])
        allocator=(ROOT/'include/bf_002ea01d_allocator_guest32.h').read_text()
        self.assertIn('Platform implementation of bf_xbox_guest_import_call1_u32 is intentionally',allocator)
        self.assertIn('ABSENT.',allocator)

    def test_o0_o2_positive_syntax_objects_and_original_negatives(self):
        with tempfile.TemporaryDirectory() as tmp:
            for item in self.doc['cases']:
                source=self.source(item);old=evidence.restore(item,source)
                for opt in ('-O0','-O2'):
                    for obj in (None,Path(tmp)/(item['entry']+opt+'.o')):
                        result=self.compile(source,opt,obj)
                        self.assertEqual(result.returncode,0,result.stderr)
                    baseline=self.compile(old,opt)
                    self.assertNotEqual(baseline.returncode,0)
                    for symbol in ('FUN_002ea01d','FUN_002b3c60'):
                        self.assertIn("undeclared identifier '"+symbol+"'",baseline.stderr)
                    for line,symbol in [('#include "bf_002ea01d_allocator_guest32.h"\n','FUN_002ea01d'),('extern void FUN_002b3c60(void);\n','FUN_002b3c60')]:
                        result=self.compile(source.replace(line,'',1),opt)
                        self.assertNotEqual(result.returncode,0)
                        self.assertIn("undeclared identifier '"+symbol+"'",result.stderr)

    def test_all_public_window_bytes_and_binding_fields_reject_mutations(self):
        evidence.validate_contract(self.doc)
        count=0
        for path,value in leaf_paths(self.doc):
            changed=(not value) if isinstance(value,bool) else (value+1 if isinstance(value,int) else (['forged'] if isinstance(value,list) else str(value)+'!'))
            mutant=alter(self.doc,path,changed)
            with self.assertRaises(ValueError):
                evidence.validate_contract(mutant)
            with self.assertRaises(ValueError):
                evidence.load_bytes((json.dumps(mutant,indent=2)+'\n').encode())
            count+=1
        byte_count=0
        for group in ('cases','dependencies'):
            for index,item in enumerate(self.doc[group]):
                for role,w in item['instruction_windows'].items():
                    for offset in range(len(bytes.fromhex(w['bytes']))):
                        raw=bytearray.fromhex(w['bytes']);raw[offset]^=1
                        mutant=alter(self.doc,(group,index,'instruction_windows',role,'bytes'),raw.hex())
                        with self.assertRaises(ValueError):
                            evidence.validate_contract(mutant)
                        byte_count+=1
        self.assertEqual(count,185);self.assertGreater(byte_count,120)
        print('Metadata controls:',count,'leaf mutations and',byte_count,'window-byte mutations')
        with self.assertRaises(ValueError):
            evidence.strict_json('{"x":1,"x":2}')
        with self.assertRaises(ValueError):
            evidence.strict_json('{"x":NaN}')
        with self.assertRaises(ValueError):
            evidence.direct_call(0x2d1581,'e9978a0100')
        self.assertEqual(evidence.direct_call(0x2d1581,'e8978a0100'),0x2ea01d)

    def test_initialized_synthetic_size_and_integer_conversion_only(self):
        if not self.compiler:
            self.skipTest('clang++ unavailable; no runtime fixture result claimed')
        with tempfile.TemporaryDirectory() as tmp:
            for opt in ('-O0','-O2'):
                for label,call,result,expected in [('positive',None,'guest_result',0),('wrong-size','iVar1 = FUN_002ea01d(0x31);','guest_result',42),('zero-size','iVar1 = FUN_002ea01d(0);','guest_result',42),('lost-high-bit',None,'guest_result & 0x7fffffffu',42),('lost-low-bits',None,'guest_result & 0xffffff00u',42)]:
                    exe=Path(tmp)/(label+opt)
                    text=model(result=result) if call is None else model(call,result)
                    p=subprocess.run([self.compiler,'-std=c++17',opt,'-Wall','-Wextra','-Werror','-I',str(ROOT/'include'),'-x','c++','-','-o',str(exe)],input=text,text=True,capture_output=True,timeout=60)
                    self.assertEqual(p.returncode,0,p.stderr)
                    p=subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
                    self.assertEqual(p.returncode,expected,label+opt+p.stderr)

    def test_additive_canonical_ci_step(self):
        text=(self.candidate/'.github/workflows/cpp-compatibility-audit.yml').read_text()
        self.assertEqual(text.count('          python3 tools/test_cpp_20261105_allocator_declarations.py\n'),1)
        self.assertIn('          python3 tools/test_cpp_20261104_heap_free_scalar_calls.py\n',text)
        self.assertIn('          python3 tools/test_cpp_20261104_heap_free_literal_overlays.py\n',text)


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=ROOT)
    parser.add_argument('--candidate-root',type=Path)
    args,remaining=parser.parse_known_args();ROOT=args.root.resolve();CANDIDATE=args.candidate_root.resolve() if args.candidate_root else None
    unittest.main(argv=[sys.argv[0]]+remaining)
