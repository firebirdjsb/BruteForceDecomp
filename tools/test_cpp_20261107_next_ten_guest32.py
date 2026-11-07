#!/usr/bin/env python3
"""Bounded synthetic memory traces for ten independently XBE-backed function drafts.

Tests do not execute original Xbox code or prove original ABI, guest VA mapping,
original machine faults, registers other than modeled EAX, or full game behavior.
"""
from __future__ import annotations
import csv
import hashlib
import subprocess
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WALKS = {0x2506a0:0x11,0x25d880:0x25,0x270dd0:0x2d,0x27cac0:0x1d,0x27cb90:0x21}
SCAN = 0x1faf70
COPY8 = 0x618d0
COPY3 = 0x2f108b
INIT49 = 0x2e7580
INIT52 = 0x1736a0
ADDRESSES = [*WALKS,SCAN,COPY8,COPY3,INIT49,INIT52]
SOURCES = {a:next(ROOT.glob(f'src/**/0x{a:08x}.cpp')) for a in ADDRESSES}

HARNESS = r'''
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <unordered_map>
#include <vector>
using U=std::uint32_t;
using Mem=std::unordered_map<U,std::uint8_t>;
struct Op{char type;U va;U val;bool operator==(const Op& o)const{
 return type==o.type&&va==o.va&&val==o.val;}};
static Mem actual,reference;
static std::vector<Op> seen,want;
static unsigned checked=0;
static U byte(const Mem&m,U va){auto p=m.find(va);return p==m.end()?0:p->second;}
static U peek32(const Mem&m,U va){U v=0;for(unsigned n=0;n<4;n++)v|=byte(m,va+U(n))<<(8*n);return v;}
static void store32(Mem&m,U va,U v){for(unsigned n=0;n<4;n++)m[va+U(n)]=std::uint8_t(v>>(8*n));}
static void rec(std::vector<Op>&trace,char op,U va,U val){
 if(trace.size()>256){std::fprintf(stderr,"unbounded fixture trace\n");std::exit(72);}trace.push_back({op,va,val});}
U bf_guest_read_u32(U va){U v=peek32(actual,va);rec(seen,'R',va,v);return v;}
std::uint8_t bf_guest_read_u8(U va){U v=byte(actual,va);rec(seen,'B',va,v);return std::uint8_t(v);}
void bf_guest_write_u32(U va,U v){rec(seen,'W',va,v);store32(actual,va,v);}
void bf_guest_write_u8(U va,std::uint8_t v){rec(seen,'b',va,v);actual[va]=v;}
static U r32(U va){U v=peek32(reference,va);rec(want,'R',va,v);return v;}
static U r8(U va){U v=byte(reference,va);rec(want,'B',va,v);return v;}
static void w32(U va,U v){rec(want,'W',va,v);store32(reference,va,v);}
static void w8(U va,U v){rec(want,'b',va,v);reference[va]=std::uint8_t(v);}
static void put32(U va,U v){store32(actual,va,v);}
static void put8(U va,U v){actual[va]=std::uint8_t(v);}
static void reset(){actual.clear();reference.clear();seen.clear();want.clear();}
static void check(const char*label,U iteration,U got,U expected){
 if(got!=expected||seen!=want||actual!=reference){
  std::fprintf(stderr,"FAIL %s iteration %u: EAX %08x vs %08x, events %zu/%zu, memory %zu/%zu\n",label,iteration,got,expected,seen.size(),want.size(),actual.size(),reference.size());
  for(size_t k=0;k<seen.size()||k<want.size();k++){
   if(k<seen.size())std::fprintf(stderr," seen[%zu] %c %08x %08x\n",k,seen[k].type,seen[k].va,seen[k].val);
   if(k<want.size())std::fprintf(stderr," want[%zu] %c %08x %08x\n",k,want[k].type,want[k].va,want[k].val);
  }
  std::exit(42);
 }checked++;
}
extern U FUN_002506a0(U); extern U FUN_0025d880(U);extern U FUN_00270dd0(U);
extern U FUN_0027cac0(U);extern U FUN_0027cb90(U);
extern U FUN_001faf70(U,U,U,U);
extern U FUN_000618d0(U,U,U,U);
extern U FUN_002f108b(U,U);
extern U FUN_002e7580(U);extern U FUN_001736a0(U);
static U next(U seed){seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;return seed;}
static void walk(const char*label,U(*fn)(U),U offset){
 for(U i=0;i<8192;i++){
  reset();U base=i%11==0?0xfffffc80u:0x10000000u+i*0x1800u;
  const U depth=i%6;U nodes[7];for(U j=0;j<=depth;j++)nodes[j]=base+0x100u+0x140u*j;
  put32(base,nodes[0]);
  for(U j=0;j<=depth;j++){
   put8(nodes[j]+offset,j==depth?1u+(i%254u):0);
   if(j<depth)put32(nodes[j],nodes[j+1]);
  }
  reference=actual;
  U prior=base,cur=r32(prior),flag=r8(cur+offset);
  for(U k=0;flag==0;k++){
   if(k>6)std::exit(88);
   prior=cur;cur=r32(cur);flag=r8(cur+offset);
  }
  U got=fn(base);check(label,i,got,prior);
 }
}
static void scan(){
 for(U i=0;i<8192;i++){
  reset();U base=i%13==0?0xfffff100u:0x20000000u+i*0x2000u;
  U n=i%6,end=base+0x900u,keyva=base+0x50u,out=(i%19==0?keyva:base+0x40u);
  U begin=n?base+0x100u:end,key=next(i|1u);
  put32(keyva,key);
  int match=(i%8==0||n==0)?-1:int((i/5)%n);
  for(U j=0;j<n;j++){
   const U node=base+0x100u+j*0x90u;
   put32(node+12,j==U(match)?key:key^(0x820000u+j+1u));
   put32(node,j+1==n?end:node+0x90u);
  }
  reference=actual;
  U current=begin;
  if(current!=end){
   U needle=r32(keyva);
   for(U k=0;k<n;k++){
    if(r32(current+12u)==needle)break;
    current=r32(current);
   }
  }
  w32(out,current);
  U got=FUN_001faf70(out,begin,end,keyva);
  check("001faf70",i,got,out);
 }
}
static void copy8(){
 for(U i=0;i<8192;i++){
  reset();U src=i%13==0?0xfffffff0u:0x30000000u+i*0x1800u,n=i%6,end=src+n*8u;
  U dst=src, out=src+0x500u;
  switch(i%7){case 0:dst=src+4u;break;case 1:dst=src+8u;break;case 2:dst=src-4u;break;case 3:dst=src-8u;break;case 4:dst=src+0x120u;break;default:break;}
  for(U j=0;j<n+3;j++){
   put32(src+j*8u,next(i+j+3u));put32(src+j*8u+4u,next(i+j+77u));
  }
  if(dst!=src)for(U j=0;j<n+3;j++){
   if(actual.find(dst+j*8u)==actual.end())put32(dst+j*8u,next(i+j+0x230u));
   if(actual.find(dst+j*8u+4u)==actual.end())put32(dst+j*8u+4u,next(i+j+0x480u));
  }
  reference=actual;U s=src,d=dst;
  for(U j=0;j<n;j++){
   U a=r32(s);w32(d,a);U b=r32(s+4u);w32(d+4u,b);
   s+=8u;d+=8u;
  }
  w32(out,d);
  U got=FUN_000618d0(out,src,end,dst);check("000618d0",i,got,out);
 }
}
static void copy3(){
 for(U i=0;i<8192;i++){
  reset();U src=i%13==0?0xfffffff8u:0x40000000u+i*0x1700u;
  U dst=src;
  switch(i%7){case 0:dst=src+4u;break;case 1:dst=src+8u;break;case 2:dst=src-4u;break;case 3:dst=src+0x80u;break;default:break;}
  for(U j=0;j<5;j++)put32(src+j*4u,next(i+j+111u));
  if(dst!=src)for(U j=0;j<5;j++)if(actual.find(dst+j*4u)==actual.end())put32(dst+j*4u,next(i+j+250u));
  reference=actual;
  for(U j=0;j<3;j++){U x=r32(src+j*4u);w32(dst+j*4u,x);}
  U got=FUN_002f108b(dst,src);check("002f108b",i,got,src+12u);
 }
}
static void init49(){
 for(U i=0;i<8192;i++){
  reset();U base=i%13==0?0xfffffff0u:0x50000000u+i*0x100u;
  for(U j=0;j<0x24u;j++)put8(base+j,(i+j)%256u);
  reference=actual;
  w8(base+7u,0u);w8(base+8u,0u);w8(base+5u,0u);
  w32(base,0x003868c8u);w8(base+6u,0xffu);
  w32(base+0x14u,0u);w32(base+0x18u,0u);w32(base+0x1cu,0u);w32(base+0x20u,0u);
  w32(base+0x0cu,0xffffffffu);w32(base+0x10u,0xffffffffu);
  U got=FUN_002e7580(base);check("002e7580",i,got,base);
 }
}
static void init52(){
 for(U i=0;i<8192;i++){
  reset();U base=i%17==0?0xfffffff0u:0x60000000u+i*0x100u;
  for(U j=0;j<0x25u;j++)put8(base+j,(i+3u*j)%256u);
  reference=actual;
  w32(base,0x0039a3d0u);w32(base+8u,3u);
  for(U j=0x0eu;j<=0x15u;j++)w8(base+j,0u);
  w8(base+0x0cu,0u);w8(base+0x0du,0u);w8(base+0x16u,0u);w8(base+0x17u,0u);
  U got=FUN_001736a0(base);check("001736a0",i,got,base);
 }
}
int main(){
 walk("002506a0",FUN_002506a0,0x11u);
 walk("0025d880",FUN_0025d880,0x25u);
 walk("00270dd0",FUN_00270dd0,0x2du);
 walk("0027cac0",FUN_0027cac0,0x1du);
 walk("0027cb90",FUN_0027cb90,0x21u);
 scan();copy8();copy3();init49();init52();
 std::printf("PASS ten guest32 models: %u trace comparisons\n",checked);
 return 0;
}
'''

class TenGuest32Cases(unittest.TestCase):
    def test_source_labels_and_adapter_contracts(self):
        with (ROOT/'metadata/bulk_13694_inventory.csv').open(newline='') as s:
            sha={int(x['entry'],16):x['original_body_sha256'] for x in csv.DictReader(s)}
        self.assertEqual(len(SOURCES),10)
        for a,p in SOURCES.items():
            text=p.read_text()
            self.assertIn('Input x86 body SHA-256: '+sha[a],text)
            self.assertIn('ABI_UNVERIFIED',text)
            self.assertIn('bf_xbe_guest32_record_model.h',text)
            self.assertNotIn('reinterpret_cast',text)
            self.assertNotIn('uintptr_t',text)

    @staticmethod
    def build(path:Path,sources:dict,opt:str):
        args=['clang++','-std=c++17',opt,'-Werror=pointer-to-int-cast',
              '-I',str(ROOT/'include'),*[str(sources[a]) for a in ADDRESSES],
              '-x','c++','-','-o',str(path)]
        return subprocess.run(args,input=HARNESS,text=True,capture_output=True,timeout=90)

    def test_o0_o2_163840_synthetic_memory_traces(self):
        with tempfile.TemporaryDirectory() as d:
            for opt in ('-O0','-O2'):
                exe=Path(d)/f'trace_{opt}'
                compiled=self.build(exe,SOURCES,opt)
                self.assertEqual(compiled.returncode,0,compiled.stderr[-4000:])
                result=subprocess.run([str(exe)],text=True,capture_output=True,timeout=50)
                self.assertEqual(result.returncode,0,result.stderr[-4000:])
                self.assertIn('81920 trace comparisons',result.stdout)

    def test_ten_corrupted_source_controls(self):
        changes={
            0x2506a0:('UINT32_C(0x11)','UINT32_C(0x12)'),
            0x25d880:('UINT32_C(0x25)','UINT32_C(0x24)'),
            0x270dd0:('UINT32_C(0x2d)','UINT32_C(0x2c)'),
            0x27cac0:('UINT32_C(0x1d)','UINT32_C(0x1c)'),
            0x27cb90:('UINT32_C(0x21)','UINT32_C(0x20)'),
            0x1faf70:('current + UINT32_C(12)','current + UINT32_C(8)'),
            0x618d0:('src + UINT32_C(4)','src + UINT32_C(8)'),
            0x2f108b:('src += UINT32_C(4)','src += UINT32_C(8)'),
            0x2e7580:('base + UINT32_C(7)','base + UINT32_C(6)'),
            0x1736a0:('UINT32_C(0x0e)','UINT32_C(0x0f)'),
        }
        with tempfile.TemporaryDirectory() as d:
            for a,(old,new) in changes.items():
                source=SOURCES[a].read_text()
                self.assertIn(old,source)
                target=Path(d)/f'mutated_{a:08x}.cpp'
                target.write_text(source.replace(old,new,1))
                pieces=dict(SOURCES);pieces[a]=target
                exe=Path(d)/f'bad_{a:08x}'
                compiled=self.build(exe,pieces,'-O0')
                self.assertEqual(compiled.returncode,0,compiled.stderr[-2000:])
                result=subprocess.run([str(exe)],text=True,capture_output=True,timeout=40)
                self.assertNotEqual(result.returncode,0,f'Original operand mistake accepted for 0x{a:08x}')

if __name__=='__main__':
    unittest.main()
