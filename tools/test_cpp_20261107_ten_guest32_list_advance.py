#!/usr/bin/env python3
"""10 independent XBE-backed guest32 cursor models: source/trace tests.

Clang++17 O0/O2 synthetic byte/word memory event traces, eight original
branch pathways per function, wrapping guest32 addresses and negative controls.
Original x86 register/stack ABI, guest memory mapping and execution remain
unverified. User-owned retail XBE is NOT used or committed by this public test.
"""
import hashlib,json,re,subprocess,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
META=ROOT/'metadata/20261107_ten_guest32_list_advance.json'
H_HEAD=r'''
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
using U=std::uint32_t;
using Byte=std::uint8_t;
struct Event {char op;U addr;U val; bool operator==(Event const& other)const{return op==other.op && addr==other.addr && val==other.val;}};
using Mem=std::unordered_map<U,Byte>;
static Mem observed,expected;
static std::vector<Event> got,want;
static Byte get8(Mem const& m,U a){auto p=m.find(a);return p==m.end()?0:p->second;}
static U get32(Mem const& m,U a){U v=0;for(unsigned i=0;i<4;i++)v|=U(get8(m,a+U(i)))<<(i*8);return v;}
static void put8(Mem& m,U a,Byte x){m[a]=x;}
static void put32(Mem& m,U a,U x){for(unsigned i=0;i<4;i++)put8(m,a+U(i),Byte(x>>(i*8)));}
U bf_guest_read_u32(U a){U v=get32(observed,a);got.push_back({'R',a,v});return v;}
Byte bf_guest_read_u8(U a){Byte b=get8(observed,a);got.push_back({'B',a,U(b)});return b;}
void bf_guest_write_u32(U a,U v){got.push_back({'W',a,v});put32(observed,a,v);}
static void erd32(U a){want.push_back({'R',a,get32(expected,a)});}
static void erd8(U a){want.push_back({'B',a,get8(expected,a)});}
static void ewr32(U a,U v){want.push_back({'W',a,v});put32(expected,a,v);}
using Fn=void(*)(U);
struct Function{const char* entry;U flag;Fn call;};
'''
H_TAIL=r'''
static unsigned rand32(unsigned& x){x^=x<<13;x^=x>>17;x^=x<<5;return x;}
static void set_seed(U base,U edx,U flag,unsigned mode,unsigned& rng){
    const U root=base+0x100u,left=base+0x300u,n1=base+0x500u,n2=base+0x700u;
    const U right=base+0x900u,r1=base+0xb00u,term=base+0xf00u;
    observed.clear();
    for(unsigned i=0;i<16;i++)put32(observed,base+0x1200u+U(i)*4u,rand32(rng));
    put32(observed,edx,root);
    put32(observed,root,left);put32(observed,root+4u,right);
    put32(observed,root+8u,base+0x15c0u);
    put32(observed,left+8u,mode==2?n1:term);
    put32(observed,n1+8u,n2);put32(observed,n2+8u,term);
    put32(observed,right,(mode==5||mode==6||mode==7)?root:term);
    put32(observed,right+4u,mode==5?term:r1);
    put32(observed,r1,mode==6?right:term);
    put32(observed,r1+4u,term);
    put8(observed,root+flag,Byte(mode==0?0x80u:0u));
    put8(observed,left+flag,Byte(mode<3?0u:0x7fu));
    put8(observed,n1+flag,0);put8(observed,n2+flag,0);
    put8(observed,right+flag,Byte(mode==3?0x80u:0u));
    put8(observed,r1+flag,Byte(mode==6||mode==7?0u:1u));
    put8(observed,term+flag,1);
    expected=observed;got.clear();want.clear();
}
static void expected_trace(U base,U edx,U flag,unsigned mode){
    const U root=base+0x100u,left=base+0x300u,n1=base+0x500u,n2=base+0x700u;
    const U right=base+0x900u,r1=base+0xb00u,term=base+0xf00u;
    erd32(edx);erd8(root+flag);
    if(mode==0){erd32(root+8u);ewr32(edx,base+0x15c0u);return;}
    erd32(root);erd8(left+flag);
    if(mode==1){erd32(left+8u);erd8(term+flag);ewr32(edx,left);return;}
    if(mode==2){
       erd32(left+8u);erd8(n1+flag);
       erd32(n1+8u);erd8(n2+flag);
       erd32(n2+8u);erd8(term+flag);
       ewr32(edx,n2);return;
    }
    erd32(root+4u);erd8(right+flag);
    if(mode==3)return;
    erd32(edx);erd32(right);
    if(mode==4){erd8(right+flag);ewr32(edx,right);return;}
    ewr32(edx,right);erd32(right+4u);
    if(mode==5){erd8(term+flag);erd8(term+flag);return;}
    erd8(r1+flag);erd32(edx);erd32(r1);
    if(mode==6){ewr32(edx,r1);erd32(r1+4u);erd8(term+flag);erd8(term+flag);return;}
    erd8(r1+flag);ewr32(edx,r1);
}
int main(int argc,char**argv){
  int count=(argc>1&&std::strcmp(argv[1],"quick")==0)?64:8192;
  unsigned rng=0x71a04e31u;
  for(unsigned fn=0;fn<sizeof(functions)/sizeof(functions[0]);fn++){
    Function const& f=functions[fn];
    for(int i=0;i<count;i++){
      U base=(i%71==0)?0xffffe000u:0x10000000u+U(i)*0x3000u+U(fn)*0x10000000u;
      U edx=(i%13==0)?base+0x1180u:base+0x30u;
      unsigned mode=(unsigned(i)+fn)%8u;
      set_seed(base,edx,f.flag,mode,rng);
      expected_trace(base,edx,f.flag,mode);
      f.call(edx);
      if(observed!=expected||got!=want){
        std::fprintf(stderr,"ERROR %s case %d branch %u; got %zu want %zu\n",f.entry,i,mode,got.size(),want.size());
        for(unsigned p=0;p<got.size()||p<want.size();p++){
          if(p<got.size())std::fprintf(stderr," got %u %c %08x %08x\n",p,got[p].op,got[p].addr,got[p].val);
          if(p<want.size())std::fprintf(stderr," exp %u %c %08x %08x\n",p,want[p].op,want[p].addr,want[p].val);
          if(p>25)break;
        }
        return 42;
      }
    }
  }
  return 0;
}
'''

def harness(cases):
    text=H_HEAD
    for c in cases:text+=f'extern void FUN_{int(c["entry"],16):08x}(U);\n'
    text+='static const Function functions[]={\n'
    for c in cases:text+=f'{{"{c["entry"]}",0x{c["flag_offset"]:x}u,FUN_{int(c["entry"],16):08x}}},\n'
    text+='};\n'
    return text+H_TAIL

def compiled(cases,opt,substitute=None,quick=False):
    with tempfile.TemporaryDirectory() as t:
      d=Path(t);args=['clang++','-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include')]
      for c in cases:
        p=ROOT/c['source']
        if substitute and c['entry'] in substitute:
          p=d/p.name;p.write_text(substitute[c['entry']])
        args.append(str(p))
      args.extend(['-x','c++','-','-o',str(d/'check')])
      build=subprocess.run(args,input=harness(cases),text=True,capture_output=True,timeout=60)
      if build.returncode:raise AssertionError('Cannot link synthetic original-address models: '+build.stderr[-2500:])
      return subprocess.run([str(d/'check')]+(['quick'] if quick else []),text=True,capture_output=True,timeout=50)

class ListAdvanceTests(unittest.TestCase):
 @classmethod
 def setUpClass(cls):cls.meta=json.loads(META.read_text());cls.cases=cls.meta['cases']
 def test_source_pin_and_provenance(self):
  cs=self.cases
  self.assertEqual(len(cs),10);self.assertEqual(len({c['entry'] for c in cs}),10)
  for c in cs:
   data=(ROOT/c['source']).read_bytes()
   self.assertEqual(hashlib.sha256(data).hexdigest(),c['source_sha256'])
   self.assertIn(c['original_body_sha256'].encode(),data)
   self.assertIn(b'ABI_UNVERIFIED',data)
   self.assertIn((f'FUN_{int(c["entry"],16):08x}').encode(),data)
   self.assertIn(b'bf_guest_read_u8',data)
   self.assertNotIn(b'(int)',data)
 def test_o0_all_eight_paths(self):
  result=compiled(self.cases,'-O0');self.assertEqual(result.returncode,0,result.stderr)
 def test_o2_all_eight_paths(self):
  result=compiled(self.cases,'-O2');self.assertEqual(result.returncode,0,result.stderr)
 def test_mutation_controls(self):
  for c in self.cases:
   source=(ROOT/c['source']).read_text()
   good='node + UINT32_C(8)';bad='node + UINT32_C(4)'
   self.assertIn(good,source)
   mutant=source.replace(good,bad,1)
   self.assertNotEqual(hashlib.sha256(mutant.encode()).hexdigest(),c['source_sha256'])
   got=compiled([c],'-O2',{c['entry']:mutant},quick=True)
   self.assertEqual(got.returncode,42,(c['entry'],got.stderr))

if __name__=='__main__':unittest.main()
