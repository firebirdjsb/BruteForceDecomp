#!/usr/bin/env python3
"""Bounded guest32 event-trace test of original 0x1C4D0 instruction order.

Uses real reconstructed TU at -O0 and -O2; original Xbox ABI, guest mapping,
other callee behavior and game runtime remain unverified. No private XBE here.
"""
from __future__ import annotations

import csv
import hashlib
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'src/main_unclassified/band_0001/0x0001c4d0.cpp'
ORIGINAL_HASH = 'BDD51F73956DD2E714AE63A6BF410C529C5FE39B05605A885DCE8F2C660ECADF'

# Independent micro-operation oracle, expressed in x86 instruction order as
# labels and branch destinations, rather than copied C++ source control flow.
HARNESS = r'''
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
void FUN_0001c4d0(std::uint32_t,std::uint32_t);
struct Event {
    char op; std::uint32_t address, value;
    bool operator==(const Event &o)const {return op==o.op&&address==o.address&&value==o.value;}
};
struct Memory {
    std::unordered_map<std::uint32_t,std::uint8_t> bytes;
    std::vector<Event> events;
    std::uint8_t raw8(std::uint32_t a)const {
       auto it=bytes.find(a);return it==bytes.end()?0:it->second;
    }
    std::uint32_t raw32(std::uint32_t a)const {
       std::uint32_t w=0;
       for(unsigned n=0;n<4;n++)w |= std::uint32_t(raw8(a+std::uint32_t(n))) << (8*n);
       return w;
    }
    void put8(std::uint32_t a,std::uint8_t v){bytes[a]=v;}
    void put32(std::uint32_t a,std::uint32_t v){
       for(unsigned n=0;n<4;n++)put8(a+std::uint32_t(n),std::uint8_t(v>>(8*n)));
    }
    std::uint32_t read32(std::uint32_t a){auto v=raw32(a);events.push_back({'R',a,v});return v;}
    std::uint8_t read8(std::uint32_t a){auto v=raw8(a);events.push_back({'B',a,v});return v;}
    void write32(std::uint32_t a,std::uint32_t v){events.push_back({'W',a,v});put32(a,v);}
};
Memory *active=nullptr;
std::uint32_t bf_guest_read_u32(std::uint32_t a){return active->read32(a);}
void bf_guest_write_u32(std::uint32_t a,std::uint32_t v){active->write32(a,v);}
std::uint8_t bf_guest_read_u8(std::uint32_t a){return active->read8(a);}
void bf_guest_write_u8(std::uint32_t,std::uint8_t){std::fputs("unexpected guest byte write\n",stderr);std::abort();}
static unsigned paths[3]={};
static void raw_oracle(Memory &m, std::uint32_t ecx,std::uint32_t arg0){
    // Read instructions in original guest VA order. Distinct registers are
    // retained to expose guest aliasing and the second MOV EDX,[EAX].
    std::uint32_t eax=0,edx=0;std::uint8_t bl=0;
    enum {ENTRY, FLAG, AFTER_FLAG, ROOT, PREV, THIRD, FIRST_RET, SECOND_RET, THIRD_RET};
    int pc=ENTRY;
    for(int n=0;n<40;n++){
      switch(pc){
      case ENTRY:
        eax=m.read32(ecx+8u);            // 1C4D0
        edx=m.read32(eax);              // 1C4D3
        m.write32(ecx+8u,edx);         // 1C4D5
        edx=m.read32(eax);             // 1C4D8
        bl=m.read8(edx+0xa9u);          // 1C4DB
        pc=bl?AFTER_FLAG:FLAG; break;   // 1C4E3
      case FLAG:
        m.write32(edx+4u,ecx);         // 1C4E5
        pc=AFTER_FLAG;break;
      case AFTER_FLAG:
        edx=m.read32(ecx+4u);          // 1C4E8
        m.write32(eax+4u,edx);         // 1C4EB
        edx=m.read32(arg0+4u);         // 1C4EE: [entry ESP+4]
        edx=m.read32(edx+4u);          // 1C4F2
        pc=ROOT;break;
      case ROOT:
        pc=(ecx==m.read32(edx+4u))?FIRST_RET:PREV;break;
      case FIRST_RET:
        m.write32(edx+4u,eax);m.write32(eax,ecx);m.write32(ecx+4u,eax);
        paths[0]++;return;
      case PREV:
        edx=m.read32(ecx+4u);
        pc=(ecx==m.read32(edx))?SECOND_RET:THIRD;break;
      case SECOND_RET:
        m.write32(edx,eax);m.write32(eax,ecx);m.write32(ecx+4u,eax);
        paths[1]++;return;
      case THIRD:
        m.write32(edx+8u,eax);m.write32(eax,ecx);m.write32(ecx+4u,eax);
        paths[2]++;return;
      default: std::abort();
      }
    }
    std::abort();
}
static std::uint32_t rng=0x1c4d0917u;
static std::uint32_t random_word(){rng^=rng<<13;rng^=rng>>17;rng^=rng<<5;return rng;}
static void prepare(Memory &m,std::uint32_t ecx,std::uint32_t arg0,int scenario){
    const std::uint32_t eax=ecx+0x100u, first=ecx+0x200u,prev=ecx+0x300u;
    const std::uint32_t owner=ecx+0x400u,owner2=ecx+0x500u;
    m.put32(ecx+8u,eax);
    m.put32(eax,first);
    m.put8(first+0xa9u,std::uint8_t(scenario%2));
    m.put32(ecx+4u,prev);
    m.put32(arg0+4u,owner);
    m.put32(owner+4u,owner2);
    m.put32(owner2+4u,scenario%3==0?ecx:random_word());
    m.put32(prev,scenario%3==1?ecx:random_word());
    // Non-overlapping ordinary cases plus intentionally overlapping guest VA.
    if(scenario%11==0)m.put32(ecx+8u,ecx+8u);
    if(scenario%13==0)m.put32(arg0+4u,ecx+4u);
    if(scenario%17==0)m.put32(ecx+4u,ecx+8u);
    for(unsigned j=0;j<10;j++){
        auto a=ecx+0x800u+j*4u;
        m.put32(a,random_word());
    }
}
int main(){
   for(int i=0;i<8192;i++){
      std::uint32_t ecx=(i%23==0?0xfffffff0u:(0x10000000u+std::uint32_t(i)*0x1000u));
      std::uint32_t arg0=ecx+0x700u;
      Memory target,expected;
      prepare(target,ecx,arg0,i);
      expected=target;
      active=&target;
      FUN_0001c4d0(ecx,arg0);
      raw_oracle(expected,ecx,arg0);
      if(target.events!=expected.events || target.bytes!=expected.bytes){
         std::fprintf(stderr,"0x1C4D0 mismatch at test %d: observed %zu, expected %zu events\n",i,target.events.size(),expected.events.size());
         const unsigned len=target.events.size()<expected.events.size()?target.events.size():expected.events.size();
         for(unsigned j=0;j<len;j++)if(!(target.events[j]==expected.events[j])){
            auto g=target.events[j],e=expected.events[j];
            std::fprintf(stderr,"event %u: got %c %08x %08x expected %c %08x %08x\n",j,g.op,g.address,g.value,e.op,e.address,e.value);break;
         }
         return 42;
      }
   }
   if(!paths[0] || !paths[1] || !paths[2]){
     std::fprintf(stderr,"Missing return branches: %u/%u/%u\n",paths[0],paths[1],paths[2]);return 43;
   }
   std::printf("PASS: 8192 modeled states; return paths %u/%u/%u; exact ordered read/write events\n",paths[0],paths[1],paths[2]);
   return 0;
}
'''


class RecordRewireTests(unittest.TestCase):
    def test_source_provenance_and_no_native_casts(self):
        with (ROOT/'metadata/bulk_13694_inventory.csv').open() as file:
            record = next(row for row in csv.DictReader(file) if row['entry'] == '0x0001c4d0')
        self.assertEqual(record['original_body_sha256'], ORIGINAL_HASH)
        src = SOURCE.read_text()
        self.assertIn('Input x86 body SHA-256: '+ORIGINAL_HASH,src)
        self.assertIn('ABI_UNVERIFIED',src)
        self.assertNotIn('reinterpret_cast',src)
        self.assertNotIn('(int32_t*)',src)
        self.assertIn('bf_guest_read_u8',src)

    def compile_and_run(self,src:Path,opt:str,output:Path):
        command=['clang++','-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),str(src),'-x','c++','-','-o',str(output)]
        p=subprocess.run(command,input=HARNESS,text=True,capture_output=True,timeout=60)
        self.assertEqual(p.returncode,0,p.stderr)
        return subprocess.run([str(output)],capture_output=True,text=True,timeout=30)

    def test_original_three_returns_and_guest_aliasing_o0_o2(self):
        with tempfile.TemporaryDirectory() as temp:
            folder=Path(temp)
            for opt in ('-O0','-O2'):
                p=self.compile_and_run(SOURCE,opt,folder/('good'+opt))
                self.assertEqual(p.returncode,0,p.stderr)
                self.assertIn('PASS: 8192',p.stdout)
            original=SOURCE.read_text()
            changes=(
                ('UINT32_C(0xa9)','UINT32_C(0xa8)'),
                ('guest_stack_word_0 + UINT32_C(4)','guest_stack_word_0 + UINT32_C(8)'),
                ('bf_guest_write_u32(guest_ecx + UINT32_C(8), guest_edx)','bf_guest_write_u32(guest_ecx + UINT32_C(4), guest_edx)'),
                ('guest_ecx == bf_guest_read_u32(guest_edx)','guest_ecx != bf_guest_read_u32(guest_edx)'),
                ('bf_guest_write_u32(guest_edx + UINT32_C(8), guest_eax)','bf_guest_write_u32(guest_edx + UINT32_C(4), guest_eax)'),
                ('guest_edx = bf_guest_read_u32(guest_eax);\n\n    // MOV BL','guest_edx = bf_guest_read_u32(guest_ecx);\n\n    // MOV BL'),
            )
            for i,(before,after) in enumerate(changes):
                self.assertIn(before,original)
                corrupt=folder/f'mutated_{i}.cpp'
                corrupt.write_text(original.replace(before,after,1))
                p=self.compile_and_run(corrupt,'-O0',folder/f'mutated_{i}')
                self.assertNotEqual(p.returncode,0,f'Incorrect source accepted: {before}')


if __name__=='__main__':
    unittest.main()
