#!/usr/bin/env python3
"""Independent bounded execution/ordering tests for ten XBE-backed guest32 drafts.

The real game executable is NOT executed. Mock guest memory is not an Xbox ABI.
The test pins distinct original bodies and rejects wrong offsets/strides.
"""
from __future__ import annotations
import csv
import hashlib
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WALKS = {0x756a0: 0x29, 0xa83f0: 0x19, 0xa8480: 0x15, 0x17d460: 0x81, 0x1810f0: 0x41}
SEARCHES = {0xf6820, 0x12af50, 0x169d30}
COPIES = {0x12b090, 0x1cec30}
ADDRESSES = [*WALKS, *sorted(SEARCHES), *sorted(COPIES)]
SOURCES = {addr: next(ROOT.glob(f'src/**/0x{addr:08x}.cpp')) for addr in ADDRESSES}
HARNESS = r'''
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <unordered_map>
#include <vector>
#include <cstring>
using U=std::uint32_t;
struct E { char op;U addr;U val;
  bool operator==(const E&o)const{return op==o.op&&addr==o.addr&&val==o.val;}};
using Mem=std::unordered_map<U,std::uint8_t>;
static Mem seen, model;
static std::vector<E> observed,expected;
static unsigned checks=0;
static U byte(const Mem& m,U a){auto it=m.find(a);return it==m.end()?0u:it->second;}
static U peek32(const Mem&m,U a){U v=0;for(unsigned k=0;k<4;k++)v |= byte(m,a+U(k))<<(8*k);return v;}
static void put32(Mem&m,U a,U v){for(unsigned k=0;k<4;k++)m[a+U(k)]=std::uint8_t(v>>(8*k));}
static void put8(Mem&m,U a,U v){m[a]=std::uint8_t(v);}
static void event(std::vector<E>&v,char c,U a,U word){
  if(v.size()>128){std::fprintf(stderr,"event budget exceeded\\n"); std::exit(79);}v.push_back({c,a,word});}
U bf_guest_read_u32(U a){U v=peek32(seen,a);event(observed,'R',a,v);return v;}
std::uint8_t bf_guest_read_u8(U a){U v=byte(seen,a);event(observed,'B',a,v);return std::uint8_t(v);}
void bf_guest_write_u32(U a,U v){event(observed,'W',a,v);put32(seen,a,v);}
void bf_guest_write_u8(U a,std::uint8_t v){event(observed,'b',a,v);put8(seen,a,v);}
static U r32(U a){U v=peek32(model,a);event(expected,'R',a,v);return v;}
static U r8(U a){U v=byte(model,a);event(expected,'B',a,v);return v;}
static void w32(U a,U v){event(expected,'W',a,v);put32(model,a,v);}
static void reset(){seen.clear();model.clear();observed.clear();expected.clear();}
static void reconcile(const char*kind,unsigned ix,U actual,U oracle){
 if(actual!=oracle||observed!=expected||seen!=model){
  std::fprintf(stderr,"Mismatch %s trial %u: ret %08x expected %08x, events %zu/%zu, bytes %zu/%zu\\n",kind,ix,actual,oracle,observed.size(),expected.size(),seen.size(),model.size());
  for(unsigned j=0;j<observed.size()||j<expected.size();j++){
   if(j<observed.size())std::fprintf(stderr," got  %u %c %08x %08x\\n",j,observed[j].op,observed[j].addr,observed[j].val);
   if(j<expected.size())std::fprintf(stderr," want %u %c %08x %08x\\n",j,expected[j].op,expected[j].addr,expected[j].val);
  }std::exit(42);
 }
 checks++;
}
extern U FUN_000756a0(U);extern U FUN_000a83f0(U);extern U FUN_000a8480(U);
extern U FUN_0017d460(U);extern U FUN_001810f0(U);
extern U FUN_000f6820(U,U,U,U);extern U FUN_0012af50(U,U,U,U);
extern U FUN_00169d30(U,U,U,U);
extern U FUN_0012b090(U,U,U);extern U FUN_001cec30(U,U,U);
static void walk(const char*name,U(*f)(U),U off){
 for(U i=0;i<8192;i++){
  reset();const U base=i%17==0?0xfffffe00u:(0x12000000u+i*0x1000u);
  const unsigned depth=i%6;U nodes[7];for(unsigned j=0;j<=depth;j++)nodes[j]=base+0x100u+U(j)*0x180u;
  put32(seen,base,nodes[0]);
  for(unsigned j=0;j<=depth;j++){
   put8(seen,nodes[j]+off,j==depth?(U((i>>3)&0x7f)+1u):0u);
   if(j<depth)put32(seen,nodes[j],nodes[j+1]);
  }
  model=seen;
  U node=r32(base);U flag=r8(node+off);
  U expected_ret=base;
  for(unsigned j=0;flag==0;j++){
   if(j>=depth){std::fprintf(stderr,"bad walk fixture\\n");std::exit(50);}
   expected_ret=node;node=r32(node);flag=r8(node+off);
  }
  U actual=f(base);reconcile(name,i,actual,expected_ret);
 }
}
static void scan(const char*name,U(*f)(U,U,U,U),unsigned kind){
 for(U i=0;i<8192;i++){
  reset();U base=i%17==0?0xfffff000u:0x20000000u+i*0x1000u;
  const U n=i%6, out=base+0x30u,keyva=base+0x40u,key=0xabc12300u^(i*0x9e3779b9u);
  U node[7],end=base+0x800u;
  for(U j=0;j<n;j++)node[j]=base+0x100u+(kind==1?4u*j:0x80u*j);
  if(kind==1)end=base+0x100u+4*n;
  const U begin=n?node[0]:end;
  const int match=(i%7==0||n==0)?-1:int((i/7)%n);
  if(kind!=2)put32(seen,keyva,key);
  for(U j=0;j<n;j++){
   put32(seen,node[j]+(kind==0?8u:kind==2?12u:0u),j==U(match)?key:key^(0x700000u+j+1u));
   if(kind!=1)put32(seen,node[j],j+1<n?node[j+1]:end);
  }
  put32(seen,out,0xfee1deadu);model=seen;
  if(n&&kind!=2)r32(keyva);
  U actual_match=end;
  for(U j=0;j<n;j++){
   U v=r32(node[j]+(kind==0?8u:kind==2?12u:0u));
   if(v==key){actual_match=node[j];break;}
   if(kind!=1)r32(node[j]);
  }
  w32(out,actual_match);
  U got=f(out,begin,end,kind==2?key:keyva);
  reconcile(name,i,got,out);
 }
}
static void copy(const char*name,U(*f)(U,U,U)){
 for(U i=0;i<8192;i++){
  reset();U src=i%19==0?0xfffffff0u:0x30000000u+i*0x1000u;
  const U n=i%5,end=src+8*n;
  U dst=src;
  switch(i%7){case 0:dst=src+4;break;case 1:dst=src+8;break;case 2:dst=src+0x100;break;case 3:dst=src-4;break;case 4:dst=src-8;break;default:break;}
  for(U j=0;j<n+2;j++){put32(seen,src+8*j,0xf3310000u+i*77u+j);put32(seen,src+8*j+4,0x55a10000u+i*61u+j);}
  // initialize nonoverlapping destination too, preserving alias behavior
  for(U j=0;j<n+2;j++)if(dst!=src){
   if(!seen.count(dst+8*j))put32(seen,dst+8*j,0xd1d10000u+j);
   if(!seen.count(dst+8*j+4))put32(seen,dst+8*j+4,0xd2d20000u+j);
  }
  model=seen;U s=src,d=dst;
  for(U j=0;j<n;j++){
   U v0=r32(s);w32(d,v0);U v1=r32(s+4);w32(d+4,v1);
   s+=8;d+=8;
  }
  U got=f(dst,src,end);reconcile(name,i,got,d);
 }
}
int main(){
 walk("000756a0",FUN_000756a0,0x29);
 walk("000a83f0",FUN_000a83f0,0x19);
 walk("000a8480",FUN_000a8480,0x15);
 walk("0017d460",FUN_0017d460,0x81);
 walk("001810f0",FUN_001810f0,0x41);
 scan("000f6820",FUN_000f6820,0);
 scan("0012af50",FUN_0012af50,1);
 scan("00169d30",FUN_00169d30,2);
 copy("0012b090",FUN_0012b090);
 copy("001cec30",FUN_001cec30);
 std::printf("PASS 10 functions: %u isolated guest32 memory traces and live-out EAX values\\n",checks);
 return 0;
}
'''

class TenGuest32Tests(unittest.TestCase):
    def test_original_sha_labels_and_no_host_pointer_truncation(self):
        with (ROOT/'metadata/bulk_13694_inventory.csv').open(newline='') as stream:
            inventory={int(x['entry'],16):x['original_body_sha256'] for x in csv.DictReader(stream)}
        self.assertEqual(len(SOURCES),10)
        for addr,path in SOURCES.items():
            raw=path.read_text()
            self.assertIn('Input x86 body SHA-256: '+inventory[addr],raw)
            self.assertIn('ABI_UNVERIFIED',raw)
            self.assertIn('bf_xbe_guest32_record_model.h',raw)
            self.assertNotIn('reinterpret_cast',raw)
            self.assertNotIn('uintptr_t',raw)
            self.assertNotIn('uint32_t*',raw)

    @staticmethod
    def build(out:Path,sources:dict,opt:str):
        cmd=['clang++','-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),
             *[str(sources[a]) for a in ADDRESSES],'-x','c++','-','-o',str(out)]
        return subprocess.run(cmd,input=HARNESS,text=True,capture_output=True,timeout=120)

    def test_o0_o2_synthetic_guest_memory_trace(self):
        with tempfile.TemporaryDirectory() as d:
            for opt in ('-O0','-O2'):
                exe=Path(d)/('trace_'+opt[1:]);built=self.build(exe,SOURCES,opt)
                self.assertEqual(built.returncode,0,built.stderr[-2500:])
                p=subprocess.run([str(exe)],capture_output=True,text=True,timeout=45)
                self.assertEqual(p.returncode,0,p.stderr[-4000:])
                self.assertIn('81920',p.stdout)

    def test_ten_behavioral_mutation_controls(self):
        negatives={
            0x756a0:('UINT32_C(0x29)','UINT32_C(0x2a)'),
            0xa83f0:('UINT32_C(0x19)','UINT32_C(0x1a)'),
            0xa8480:('UINT32_C(0x15)','UINT32_C(0x14)'),
            0x17d460:('UINT32_C(0x81)','UINT32_C(0x80)'),
            0x1810f0:('UINT32_C(0x41)','UINT32_C(0x40)'),
            0xf6820:('current + UINT32_C(8)','current + UINT32_C(4)'),
            0x12af50:('current += UINT32_C(4)','current += UINT32_C(8)'),
            0x169d30:('current + UINT32_C(12)','current + UINT32_C(8)'),
            0x12b090:('guest_begin + UINT32_C(4)','guest_begin + UINT32_C(8)'),
            0x1cec30:('guest_begin += UINT32_C(8)','guest_begin += UINT32_C(4)'),
        }
        with tempfile.TemporaryDirectory() as d:
            for addr,(before,after) in negatives.items():
                original=SOURCES[addr].read_text()
                self.assertIn(before,original)
                altered=original.replace(before,after,1)
                path=Path(d)/f'mutated_0x{addr:08x}.cpp';path.write_text(altered)
                sources=dict(SOURCES);sources[addr]=path
                exe=Path(d)/f'trace_0x{addr:08x}'
                built=self.build(exe,sources,'-O0')
                self.assertEqual(built.returncode,0,built.stderr[-2000:])
                ran=subprocess.run([str(exe)],capture_output=True,text=True,timeout=35)
                self.assertNotEqual(ran.returncode,0,f'wrong source for 0x{addr:08x} was accepted')

if __name__=='__main__':
    unittest.main()
