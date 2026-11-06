#!/usr/bin/env python3
"""Bounded C++17 guest-record initialization fixture; NOT an Xbox ABI proof.

Compile the actual original-address 0x00012320.cpp at O0/O2, compare observed
byte/DWORD guest memory event ordering, callee dispatch and output register.
The synthetic callee only records dispatch and does not emulate its effects.
"""
from __future__ import annotations

import csv
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'src/main_unclassified/band_0001/0x00012320.cpp'
EXPECTED_BODY_HASH = '09DF5F57AB66CA1D79AC7A0FB48234BFAD09EDAA4737F016616473C9F3143917'

FIXTURE = r'''
#include <cstdint>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
std::uint32_t FUN_00012320(std::uint32_t,std::uint32_t,std::uint32_t);
struct Event {
  char op; std::uint32_t address; std::uint32_t value;
  bool operator==(const Event& b) const {
    return op==b.op && address==b.address && value==b.value;
  }
};
static std::vector<Event> observed, expected;
static std::unordered_map<std::uint32_t,std::uint8_t> memory;
static std::uint8_t read_raw8(std::uint32_t a) {
  auto i=memory.find(a); return i==memory.end() ? 0u : i->second;
}
static std::uint32_t read_raw32(std::uint32_t a) {
  std::uint32_t r=0;
  for (unsigned i=0;i<4;i++)r|=std::uint32_t(read_raw8(a+i))<<(i*8);
  return r;
}
static void write_raw8(std::uint32_t a,std::uint8_t v){ memory[a]=v; }
static void write_raw32(std::uint32_t a,std::uint32_t v) {
  for(unsigned i=0;i<4;i++)write_raw8(a+i,std::uint8_t(v>>(8*i)));
}
std::uint32_t bf_guest_read_u32(std::uint32_t a) {
  const auto v=read_raw32(a);observed.push_back({'R',a,v});return v;
}
void bf_guest_write_u32(std::uint32_t a,std::uint32_t v) {
  observed.push_back({'W',a,v});write_raw32(a,v);
}
std::uint8_t bf_guest_read_u8(std::uint32_t a) {
  const auto v=read_raw8(a);observed.push_back({'r',a,v});return v;
}
void bf_guest_write_u8(std::uint32_t a,std::uint8_t v) {
  observed.push_back({'w',a,v});write_raw8(a,v);
}
void FUN_0008f6a0(std::uint32_t esi,std::uint32_t word) {
  // Callee is deliberately NOT simulated: only the verified edge is observed.
  observed.push_back({'C',esi,word});
}
static void exp_w32(std::uint32_t a,std::uint32_t v) {
  expected.push_back({'W',a,v});write_raw32(a,v);
}
static std::uint32_t exp_r32(std::uint32_t a) {
  auto v=read_raw32(a);expected.push_back({'R',a,v});return v;
}
static void exp_w8(std::uint32_t a,std::uint8_t v) {
  expected.push_back({'w',a,v});write_raw8(a,v);
}
static std::uint8_t exp_r8(std::uint32_t a) {
  auto v=read_raw8(a);expected.push_back({'r',a,v});return v;
}
static bool verify(int n,std::uint32_t ret,std::uint32_t base,
                   const std::unordered_map<std::uint32_t,std::uint8_t>& actual_memory) {
  if (ret==base && expected==observed && actual_memory==memory) return true;
  std::fprintf(stderr,"Mismatch sample %d: return %08x expected %08x; events %zu vs %zu\n",
    n,ret,base,observed.size(),expected.size());
  for(unsigned i=0;i<observed.size() || i<expected.size();i++) {
    if(i<observed.size()) std::fprintf(stderr,"  got %zu %c %08x %08x\n",
      size_t(i),observed[i].op,observed[i].address,observed[i].value);
    if(i<expected.size()) std::fprintf(stderr,"  exp %zu %c %08x %08x\n",
      size_t(i),expected[i].op,expected[i].address,expected[i].value);
  }
  return false;
}
int main() {
  std::uint32_t state=0x31415926u;
  for(int n=0;n<8192;n++) {
    state ^=state<<13;state ^=state>>17;state ^=state<<5;
    const std::uint32_t base= n%7==0 ? 0xffffffe0u : 0x10000000u+std::uint32_t(n)*0x100u;
    std::uint32_t ecx= n%4==0 ? 0u : (n%4==1 ? 2u : state|1u);
    const std::uint32_t stackword=state^0xa5a5a5a5u;
    memory.clear();expected.clear();observed.clear();
    for(unsigned i=0;i<68;i++)write_raw8(base+i,std::uint8_t(state>>(8*(i%4))));
    const auto before=memory;
    // Expected order from authenticated 0x12320..0x1239C x86 instructions.
    exp_w32(base,0x003a479cu); exp_w32(base+0x10u,0u);
    exp_w32(base+0x24u,0u);exp_w32(base+4u,0x003a4f64u);
    exp_w32(base+8u,0u);exp_w32(base+0x1cu,0u);
    exp_w32(base+0x18u,0u);exp_w32(base+0x14u,0u);
    const auto b38=exp_r8(base+0x38u);
    exp_w8(base+0x38u,std::uint8_t(b38&0xfeu));
    exp_w32(base+0x2cu,0u); exp_w32(base+0x30u,0u);
    exp_w32(base+0x34u,0u); exp_w32(base+0x28u,0u);
    const auto b3c=exp_r8(base+0x3cu);
    exp_w8(base+0x3cu,std::uint8_t(b3c&0xfeu));
    exp_w32(base+8u,stackword);
    if (ecx==0) {
      if (exp_r32(base+0x10u)!=0 && exp_r32(base+0x28u)==2u)
        exp_w32(base+0x28u,0);
    } else exp_w32(base+0x28u,2u);
    const auto r10=exp_r32(base+0x10u);
    if (r10!=ecx)expected.push_back({'C',base+0x0cu,ecx});
    const auto expected_memory=memory;
    memory=before;
    std::uint32_t result=FUN_00012320(base,ecx,stackword);
    const auto actual_memory=memory;
    memory=expected_memory;
    if(!verify(n,result,base,actual_memory)) return 37;
  }
  return 0;
}
'''


class GuestRecordInitTests(unittest.TestCase):
    def test_provenance_and_explicit_host_adapter_only(self):
        with (ROOT / 'metadata/bulk_13694_inventory.csv').open() as handle:
            rows = {r['entry']: r for r in csv.DictReader(handle)}
        self.assertEqual(rows['0x00012320']['original_body_sha256'], EXPECTED_BODY_HASH)
        content = SOURCE.read_text()
        self.assertIn('Input x86 body SHA-256: ' + EXPECTED_BODY_HASH, content)
        self.assertIn('ABI_UNVERIFIED', content)
        self.assertIn('CROSS_FUNCTION_UNVERIFIED', content)
        self.assertNotIn('reinterpret_cast', content)
        self.assertNotIn('uintptr_t', content)
        header = (ROOT/'include/bf_xbe_guest32_record_model.h').read_text()
        self.assertIn('bf_guest_read_u8(std::uint32_t guest_va)', header)
        self.assertIn('bf_guest_write_u8(std::uint32_t guest_va, std::uint8_t value)', header)

    def build_run(self, source: Path, opt: str, workdir: Path) -> subprocess.CompletedProcess:
        target = workdir/('guest_12320_'+opt[1:]+'_'+source.stem)
        cmd = ['clang++','-std=c++17',opt,'-Wall','-Wextra','-Werror',
               '-I',str(ROOT/'include'),str(source),'-x','c++','-', '-o',str(target)]
        built=subprocess.run(cmd,input=FIXTURE,text=True,capture_output=True,timeout=60)
        self.assertEqual(built.returncode,0,built.stderr)
        return subprocess.run([str(target)],text=True,capture_output=True,timeout=30)

    def test_guest_byte_and_dword_order_o0_o2_with_corruption_controls(self):
        with tempfile.TemporaryDirectory() as tmp:
            workdir=Path(tmp)
            for optimization in ('-O0','-O2'):
                run=self.build_run(SOURCE,optimization,workdir)
                self.assertEqual(run.returncode,0,run.stderr)
            before=SOURCE.read_text()
            corruptions=(
                ('UINT32_C(0x003a479c)','UINT32_C(0x003a479d)'),
                ('guest_edi + UINT32_C(0x38)','guest_edi + UINT32_C(0x39)'),
                ('guest_edi + UINT32_C(0x0c)','guest_edi + UINT32_C(0x10)'),
                ('return guest_edi;','return guest_ecx;'),
            )
            for i,(needle,replacement) in enumerate(corruptions):
                self.assertIn(needle,before)
                broken=workdir/f'broken_{i}.cpp'
                broken.write_text(before.replace(needle,replacement,1))
                run=self.build_run(broken,'-O0',workdir)
                self.assertNotEqual(run.returncode,0,f'Incorrect mutation {i} was accepted')


if __name__ == '__main__':
    unittest.main()
