#!/usr/bin/env python3
"""Strict C++17 guest32 trace test for ten independently XBE-backed initializers.

Original entry ABI and Xbox runtime guest-address mapping are NOT tested here.
Original retail XBE evidence is checked separately, with a private XBE file.
"""
from __future__ import annotations
import csv
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/20261107_ten_guest32_record_initializers.json'

HEADER = r'''
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <utility>
#include <cstring>
#include "bf_xbe_guest32_record_model.h"
using U = std::uint32_t;
using B = std::uint8_t;
struct Event { char kind; U addr; U word;
    bool operator==(Event const& x) const {
        return kind==x.kind && addr==x.addr && word==x.word;
    }
};
using Mem=std::unordered_map<U,B>;
static Mem observed,expected;
static std::vector<Event> got,want;
static B read_byte(Mem const& m,U a){auto it=m.find(a);return it==m.end()?0:it->second;}
static U read_word(Mem const& m,U a){
    U x=0;for(unsigned i=0;i<4;i++)x|=U(read_byte(m,a+U(i)))<<(8*i);
    return x;
}
static void put_byte(Mem& m,U a,B x){m[a]=x;}
static void put_word(Mem& m,U a,U x){for(unsigned i=0;i<4;i++)m[a+U(i)]=B(x>>(8*i));}
U bf_guest_read_u32(U a){U x=read_word(observed,a);got.push_back({'R',a,x});return x;}
void bf_guest_write_u32(U a,U x){got.push_back({'W',a,x});put_word(observed,a,x);}
void bf_guest_write_u8(U a,B x){got.push_back({'B',a,U(x)});put_byte(observed,a,x);}
static U expect_read(U a){U x=read_word(expected,a);want.push_back({'R',a,x});return x;}
static void expect_w32(U a,U x){want.push_back({'W',a,x});put_word(expected,a,x);}
static void expect_w8(U a,B x){want.push_back({'B',a,U(x)});put_byte(expected,a,x);}
static U randword(U& state){state^=state<<13;state^=state>>17;state^=state<<5;return state;}
struct Op{int bits;U addr;U value;};
using Func=U(*)(U,U);
struct Case{const char* name;Func func;U link;U tail;const Op* ops;unsigned nops;};
'''

TAIL = r'''
static void reference(Case const& c,U base,U source){
    for(unsigned j=0;j<c.nops;j++){
        Op const& o=c.ops[j];
        if(o.bits==8) expect_w8(base+o.addr,B(o.value));
        else if(o.bits==32) expect_w32(base+o.addr,o.value);
        else {std::fprintf(stderr,"unknown op width\n");std::abort();}
    }
    const U link=base+c.link;
    expect_w32(link,0x003a0f0cu);
    expect_w32(link+4u,1u);
    expect_w32(link+8u,base);
    const U next=expect_read(source+8u);
    expect_w32(base+c.tail,next);
    if(next==0)expect_w32(base+c.tail,link);
    else expect_w32(expect_read(source+12u),link);
}
int main(int argc,char** argv){
    const int count=argc>1 && std::strcmp(argv[1],"quick")==0?128:8192;
    U random=0xa19c7853u;
    for(unsigned fn=0;fn<sizeof(cases)/sizeof(cases[0]);fn++){
        const Case& c=cases[fn];
        for(int i=0;i<count;i++){
            U base= i%11==0? 0xffffffe0u: 0x10000000u+U(i)*0x500u+U(fn)*0x200000u;
            U source=(i%7==0)?base:(i%7==1)?base+c.link:(i%7==2)?base+c.tail:(i%7==3)?base+8u:(i%7==4)?0xfffffff4u:(i%7==5)?base+0xfffffff0u:(0x40000000u+U(i)*0x50u);
            Mem seeds;
            for(int j=0;j<20;j++)put_word(seeds,base+U(j)*4u,randword(random));
            for(int j=0;j<5;j++)put_word(seeds,base+c.link+U(j)*4u,randword(random));
            put_word(seeds,source+8u,i%2?randword(random)|1u:0);
            put_word(seeds,source+12u,base+U(i%17)*4u);
            observed=seeds;expected=seeds;got.clear();want.clear();
            reference(c,base,source);
            U result=c.func(base,source);
            if(result!=base || got!=want || observed!=expected){
                std::fprintf(stderr,"FAILED %s case %d: returned %08x, expected %08x; ops %zu/%zu\n",
                    c.name,i,result,base,got.size(),want.size());
                for(unsigned k=0;k<got.size() || k<want.size();k++){
                    if(k<got.size())std::fprintf(stderr," got %d: %c %08x %08x\n",k,got[k].kind,got[k].addr,got[k].word);
                    if(k<want.size())std::fprintf(stderr," exp %d: %c %08x %08x\n",k,want[k].kind,want[k].addr,want[k].word);
                    if(k>20)break;
                }
                return 42;
            }
        }
    }
    return 0;
}
'''


def make_harness(cases):
    out = HEADER
    for c in cases:
        out += f'extern U FUN_{int(c["entry"],16):08x}(U,U);\n'
    for n,c in enumerate(cases):
        out += 'static const Op ops_%d[] = { %s };\n' % (n, ','.join('{%d,0x%xu,0x%xu}' % tuple(x) for x in c['init']))
    out += 'static const Case cases[] = {\n'
    for n,c in enumerate(cases):
        out += '  {"%s",FUN_%08x,0x%xu,0x%xu,ops_%d,%d},\n' % (
            c['entry'],int(c['entry'],16),c['link'],c['tail'],n,len(c['init']))
    return out+'};\n'+TAIL


def compile_and_run(cases,root,opt,harness,overrides=None,quick=False):
    with tempfile.TemporaryDirectory() as d:
        td=Path(d)
        sources=[]
        for c in cases:
            src=root/c['source']
            if overrides and c['entry'] in overrides:
                src=td/(src.stem+'.cpp')
                src.write_text(overrides[c['entry']])
            sources.append(str(src))
        exe=td/'guest32_traces'
        args=['clang++','-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(root/'include'),
              *sources,'-x','c++','-','-o',str(exe)]
        proc=subprocess.run(args,input=harness,text=True,capture_output=True,timeout=70)
        if proc.returncode:raise AssertionError('Compilation failed: '+proc.stderr[-1000:])
        return subprocess.run([str(exe)]+(['quick'] if quick else []),capture_output=True,text=True,timeout=50)


class Guest32Initializers(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.doc=json.loads(MANIFEST.read_text())
        cls.cases=cls.doc['cases']

    def test_inventory_and_current_source_hashes(self):
        self.assertEqual(len(self.cases),10)
        self.assertEqual(len({x['entry'] for x in self.cases}),10)
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as f:
            inventory={r['entry']:r for r in csv.DictReader(f)}
        for c in self.cases:
            source=ROOT/c['source']
            text=source.read_text()
            self.assertEqual(hashlib.sha256(source.read_bytes()).hexdigest(),c['source_sha256'])
            self.assertEqual(inventory[c['entry']]['original_body_sha256'],c['sha256'])
            self.assertIn('Input x86 body SHA-256: '+c['sha256'],text)
            self.assertIn('ABI_UNVERIFIED',text)
            self.assertIn('NOT_NATIVE_LINKED',text)
            self.assertNotIn('reinterpret_cast',text)

    def test_o0_o2_aliases_branch_paths_and_byte_width(self):
        harness=make_harness(self.cases)
        for opt in ('-O0','-O2'):
            with self.subTest(opt=opt):
                proc=compile_and_run(self.cases,ROOT,opt,harness)
                self.assertEqual(proc.returncode,0,proc.stderr[:1400])

    def test_ten_compiled_wrong_offset_controls(self):
        harness=make_harness(self.cases)
        for c in self.cases:
            with self.subTest(entry=c['entry']):
                raw=(ROOT/c['source']).read_text()
                needle='base + UINT32_C(0x4)'
                self.assertIn(needle,raw)
                mutated=raw.replace(needle,'base + UINT32_C(0x5)',1)
                self.assertNotEqual(mutated,raw)
                proc=compile_and_run(self.cases,ROOT,'-O0',harness,
                                     overrides={c['entry']:mutated},quick=True)
                self.assertNotEqual(proc.returncode,0,'Incorrect guest offset escaped trace oracle')


if __name__=='__main__':
    unittest.main()
