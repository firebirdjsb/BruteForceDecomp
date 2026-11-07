#!/usr/bin/env python3
"""Bounded synthetic guest32 checks for two authenticated original-XBE drafts.

Runs the real C++17 source translation units at O0/O2 and rejects wrong
operands. Does NOT prove host/x86 ABI, imported tailcall return or gameplay.
"""
from __future__ import annotations

import csv
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PATHS = (
    'src/main_unclassified/band_0001/0x0001c550.cpp',
    'src/main_unclassified/band_0001/0x0001fe80.cpp',
)
BODIES = {
    '0x0001c550': 'FB37FFC1E06F452E2078CD0FAFF8D2311A1B497FF5217BAF6D02C19B0CD7E67B',
    '0x0001fe80': '42B19D2AFE0357444371C9EBD7F904AA9001C35470ED9825E9767F3A5C05CD32',
}

HARNESS = r'''
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
std::uint32_t FUN_0001c550(std::uint32_t);
void FUN_0001fe80(std::uint32_t);
struct Event {
  char op; std::uint32_t va, value;
  bool operator==(const Event &x) const {return op==x.op && va==x.va && value==x.value;}
};
static std::unordered_map<std::uint32_t,std::uint32_t> words;
static std::unordered_map<std::uint32_t,std::uint8_t> bytes;
static std::vector<Event> actual, expected;
static std::uint32_t word(std::uint32_t va) {
  auto it=words.find(va);return it==words.end()?0x9e3779b9u:it->second;
}
static std::uint8_t byte(std::uint32_t va) {
  auto it=bytes.find(va);return it==bytes.end()?0x9fu:it->second;
}
std::uint32_t bf_guest_read_u32(std::uint32_t va) {
  const auto result=word(va);actual.push_back({'W',va,result});
  if(actual.size()>32u){std::fputs("guest read budget exceeded\n",stderr);std::exit(33);}
  return result;
}
std::uint8_t bf_guest_read_u8(std::uint32_t va) {
  const auto result=byte(va);actual.push_back({'B',va,result});
  if(actual.size()>32u){std::fputs("guest byte budget exceeded\n",stderr);std::exit(34);}
  return result;
}
void bf_guest_write_u32(std::uint32_t,std::uint32_t){std::abort();}
void bf_guest_write_u8(std::uint32_t,std::uint8_t){std::abort();}
void FUN_0008f6e0(std::uint32_t guest_edx) {actual.push_back({'J',guest_edx,0});}
static bool same(const char *label,int iteration){
  if(actual==expected)return true;
  std::fprintf(stderr,"%s iteration %d mismatch (%zu actual / %zu expected)\n",label,iteration,actual.size(),expected.size());
  for(std::size_t j=0;j<actual.size()||j<expected.size();j++){
    if(j<actual.size())std::fprintf(stderr," got %c %08x %08x\n",actual[j].op,actual[j].va,actual[j].value);
    if(j<expected.size())std::fprintf(stderr,"want %c %08x %08x\n",expected[j].op,expected[j].va,expected[j].value);
  }
  return false;
}
int main(){
  std::uint32_t state=0x137f2468u;
  for(int i=0;i<8192;i++){
    words.clear();bytes.clear();actual.clear();expected.clear();
    state^=state<<13;state^=state>>17;state^=state<<5;
    const auto object=0x72000000u+std::uint32_t(i)*16u;
    const auto start=i%7==0?0xfffffe00u:(0x21000000u+std::uint32_t(i)*0x1000u);
    const int length=1+(i%6),match=(i*7+3)%length;
    words[object]=start;
    for(int j=0;j<length;j++){
      const auto node=start+std::uint32_t(j)*0x200u;
      words[node]=node+0x200u;
      bytes[node+0xa9u]=(j==match)?std::uint8_t(1u+(state&0xfeu)):std::uint8_t(0u);
    }
    std::uint32_t original_eax=object,original_ecx=word(original_eax);
    expected.push_back({'W',original_eax,original_ecx});
    std::uint8_t original_dl=byte(original_ecx+0xa9u);
    expected.push_back({'B',original_ecx+0xa9u,original_dl});
    while(!original_dl){
      original_eax=original_ecx;
      original_ecx=word(original_eax);
      expected.push_back({'W',original_eax,original_ecx});
      original_dl=byte(original_ecx+0xa9u);
      expected.push_back({'B',original_ecx+0xa9u,original_dl});
      if(expected.size()>24u){std::fputs("wrong independent model bound\n",stderr);return 41;}
    }
    const auto returned=FUN_0001c550(object);
    if(returned!=original_eax||!same("1C550",i))return 42;

    words.clear();bytes.clear();actual.clear();expected.clear();
    state^=state<<13;state^=state>>17;state^=state<<5;
    const auto edx=i%19==0?0xfffffffdu:(0x66000000u+std::uint32_t(i)*16u);
    const auto val=i%3==0?0u:(state|1u);
    words[edx+4u]=val;
    expected.push_back({'W',edx+4u,val});
    if(val)expected.push_back({'J',edx,0});
    FUN_0001fe80(edx);
    if(!same("1FE80",i))return 43;
  }
  return 0;
}
'''

class OriginalGuest32Tests(unittest.TestCase):
    def test_source_identity_and_guest32_safety(self):
        with (ROOT/'metadata/bulk_13694_inventory.csv').open(newline='') as file:
            identity={row['entry']:row['original_body_sha256'] for row in csv.DictReader(file)}
        for path in PATHS:
            p=ROOT/path
            addr='0x'+p.stem[2:]
            self.assertEqual(identity[addr],BODIES[addr])
            source=p.read_text()
            self.assertIn('Input x86 body SHA-256: '+BODIES[addr],source)
            self.assertIn('ABI_UNVERIFIED',source)
            self.assertIn('#include "bf_xbe_guest32_record_model.h"',source)
            self.assertNotIn('reinterpret_cast',source)
            self.assertNotIn('uintptr_t',source)

    def compile_and_run(self,tmp:Path,opt:str,paths:list[Path])->subprocess.CompletedProcess:
        executable=tmp/('guest32_'+opt[1:]+('_negative' if paths!=[ROOT/p for p in PATHS] else ''))
        cmd=['clang++','-std=c++17',opt,'-Werror=pointer-to-int-cast',
             '-I',str(ROOT/'include'),*[str(p) for p in paths],'-x','c++','-','-o',str(executable)]
        build=subprocess.run(cmd,input=HARNESS,text=True,capture_output=True,timeout=50)
        self.assertEqual(build.returncode,0,build.stderr)
        return subprocess.run([str(executable)],capture_output=True,text=True,timeout=30)

    def test_o0_o2_and_wrong_operand_mutations(self):
        paths=[ROOT/p for p in PATHS]
        with tempfile.TemporaryDirectory() as name:
            tmp=Path(name)
            for opt in ('-O0','-O2'):
                result=self.compile_and_run(tmp,opt,paths)
                self.assertEqual(result.returncode,0,result.stderr)
            negatives=(
                (0,'std::uint8_t guest_dl = bf_guest_read_u8(guest_ecx + UINT32_C(0xa9));','std::uint8_t guest_dl = bf_guest_read_u8(guest_ecx + UINT32_C(0xa8));'),
                (0,'\n        guest_dl = bf_guest_read_u8(guest_ecx + UINT32_C(0xa9));','\n        guest_dl = bf_guest_read_u8(guest_ecx + UINT32_C(0xa8));'),
                (0,'guest_eax = guest_ecx;','guest_eax += UINT32_C(4);'),
                (0,'guest_dl == 0','guest_dl != 0'),
                (1,'guest_edx + UINT32_C(4)','guest_edx + UINT32_C(8)'),
                (1,'!= 0','== 0'),
            )
            for index,(which,before,after) in enumerate(negatives):
                source=paths[which].read_text()
                self.assertEqual(source.count(before),1)
                changed=tmp/f'mutant_{which}_{index}.cpp'
                changed.write_text(source.replace(before,after,1))
                candidates=paths.copy();candidates[which]=changed
                result=self.compile_and_run(tmp,'-O0',candidates)
                self.assertNotEqual(result.returncode,0, f'Silent wrong-operand acceptance: {before} -> {after}')

if __name__=='__main__':
    unittest.main()
