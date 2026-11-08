#!/usr/bin/env python3
"""XBE-evidenced guest32 models: independent ordered-memory oracle, not Xbox execution.

Exercises O0/O2 native host models with byte-addressed guest memory, including
original 16-bit/32-bit access widths, overlapping records and partial return
contracts. Entry ABI, runtime guest mapping and all live-out flags are unverified.
"""
import ctypes,hashlib,json,random,subprocess,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
META=ROOT/'metadata/20261107_next_ten_guest32_independent.json'
U=0xffffffff
MOCK=r'''
#include <cstdint>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
using U=std::uint32_t;using B=std::uint8_t;
static std::unordered_map<U,B> mem;
struct Event{char op;U addr;U value;};static std::vector<Event> ev;
static B peek(U x){auto it=mem.find(x);return it==mem.end()?B(0):it->second;}
extern "C" void bf_reset(){mem.clear();ev.clear();}
extern "C" void bf_seed(U x,B v){mem[x]=v;}
extern "C" U bf_ev_count(){return U(ev.size());}
extern "C" int bf_ev_op(U i){return ev.at(i).op;}
extern "C" U bf_ev_addr(U i){return ev.at(i).addr;}
extern "C" U bf_ev_val(U i){return ev.at(i).value;}
B bf_guest_read_u8(U x){B v=peek(x);ev.push_back({'B',x,v});return v;}
std::uint16_t bf_guest_read_u16(U x){std::uint16_t v=U(peek(x))|(U(peek(x+U(1)))<<8);ev.push_back({'H',x,U(v)});return v;}
U bf_guest_read_u32(U x){U v=0;for(int i=0;i<4;i++)v|=U(peek(x+U(i)))<<(8*i);ev.push_back({'R',x,v});return v;}
void bf_guest_write_u8(U x,B v){ev.push_back({'Y',x,v});mem[x]=v;}
void bf_guest_write_u16(U x,std::uint16_t v){ev.push_back({'Z',x,U(v)});for(int i=0;i<2;i++)mem[x+U(i)]=B(U(v)>>(8*i));}
void bf_guest_write_u32(U x,U v){ev.push_back({'W',x,v});for(int i=0;i<4;i++)mem[x+U(i)]=B(v>>(8*i));}
'''
DISPATCH=r'''
extern void FUN_002614a0(U,U,U,U);
extern void FUN_001dcc40(U,U,U,U);
extern U FUN_002588f0(U,U,U,U);
extern void FUN_00294900(U);
extern void FUN_00218c70(U,U,U,U,U);
extern void FUN_0024f210(U,U,U,U);
extern void FUN_001d66d0(U,U,U,U,bool);
extern void FUN_001d6710(U,U,U,U,bool);
extern void FUN_001d6460(U,U,U,U);
extern void FUN_00071ce0(U,U,U,U);
extern "C" U bf_call(U k,U a,U b,U c,U d,U e){
 switch(k){
 case 0:FUN_002614a0(a,b,c,d);return 0;
 case 1:FUN_001dcc40(a,b,c,d);return 0;
 case 2:return FUN_002588f0(a,b,c,d);
 case 3:FUN_00294900(a);return 0;
 case 4:FUN_00218c70(a,b,c,d,e);return 0;
 case 5:FUN_0024f210(a,b,c,d);return 0;
 case 6:FUN_001d66d0(a,b,c,d,e!=0);return 0;
 case 7:FUN_001d6710(a,b,c,d,e!=0);return 0;
 case 8:FUN_001d6460(a,b,c,d);return 0;
 case 9:FUN_00071ce0(a,b,c,d);return 0;
 default:return 0xdeadcafeu;
 }
}
'''
class Guest:
 def __init__(self):self.mem={};self.events=[]
 def seed8(self,x,v):self.mem[x&U]=v&255
 def seed(self,x,v,bits=32):
  for z in range(bits//8):self.seed8(x+z,v>>(8*z))
 def peek(self,x):return self.mem.get(x&U,0)
 def read(self,x,bits):
  x&=U;val=sum(self.peek(x+i)<<(8*i) for i in range(bits//8));self.events.append(({8:'B',16:'H',32:'R'}[bits],x,val));return val
 def write(self,x,v,bits):
  x&=U;v&=(1<<bits)-1;self.events.append(({8:'Y',16:'Z',32:'W'}[bits],x,v));self.seed(x,v,bits)
 def r(self,x):return self.read(x,32)
 def h(self,x):return self.read(x,16)
 def b(self,x):return self.read(x,8)
 def w(self,x,v):self.write(x,v,32)
 def z(self,x,v):self.write(x,v,16)
 def y(self,x,v):self.write(x,v,8)
def mask(v):return v&U

def original_model(k,m,args):
 a,b,c,d,e=args
 if k in (0,1,2,8):
  step={0:4,1:2,2:1,8:8}[k];src=b;dst=c
  while src!=a:
   x=m.read(src-step,step*8 if step in (1,2,4) else 32)
   src=mask(src-step);dst=mask(dst-step)
   m.write(dst,x,step*8 if step in (1,2,4) else 32)
   if k==8:
    v=m.r(src+4);m.w(dst+4,v)
  m.w(d,dst)
  return d if k==2 else 0
 if k==3:
  slot=a
  while slot:
   node=m.r(slot)
   if node:
    while True:
     if m.r(node+4):break
     node=m.r(node)
     m.w(slot,node)
     if not node:break
   slot=node
  return 0
 if k==4:
  cursor=a
  while cursor!=b:
   if m.r(cursor)==c and m.r(cursor+4)==d:break
   cursor=mask(cursor+0x14)
  m.w(e,cursor);return 0
 if k==5:
  if a!=b:
   end=m.r(c+8);cursor=b;dst=a
   while cursor!=end:
    v=m.r(cursor);m.w(dst,v);cursor=mask(cursor+4);dst=mask(dst+4)
   m.w(c+8,dst)
  m.w(d,a);return 0
 if k in (6,7):
  step,count=(32,8) if k==6 else (24,6)
  src=b;dst=c;df=e!=0
  while src!=a:
   src=mask(src-step);dst=mask(dst-step)
   si=src;di=dst
   for _ in range(count):
    v=m.r(si);m.w(di,v)
    si=mask(si-4 if df else si+4)
    di=mask(di-4 if df else di+4)
  m.w(d,dst);return 0
 if k==9:
  if b!=c:
   end=m.r(a+8);cursor=c;dst=b
   while cursor!=end:
    v=m.b(cursor);m.y(dst,v);cursor=mask(cursor+1);dst=mask(dst+1)
   m.w(a+8,dst)
  m.w(d,b);return 0
 raise ValueError(k)

def make_case(k,i):
 rng=random.Random(0xF17E0000 ^ (k<<12) ^ i)
 m=Guest();wrap=(i%17==0);base=0xfffffff0 if wrap else 0x1000+rng.randrange(0,0x10)*0x100
 def word():return rng.getrandbits(32)
 if k in (0,1,2,8):
  step={0:4,1:2,2:1,8:8}[k];n=i%5;src=base;end=mask(src+n*step)
  dst=mask(src+n*step+(0 if i%7==0 else (step if i%7==1 else 0x200)))
  output=0x5000+i*4 if not wrap else mask(0xffffff80+i*4)
  for j in range(n*step):m.seed8(src+j,rng.randrange(256))
  for j in range(n*step):m.seed8(dst-n*step+j,rng.randrange(256)) if i%13==0 else None
  args=(src,end,dst,output,0)
 elif k==3:
  slot=base if i%9 else 0;nodes=[base+0x100+j*0x40 for j in range(i%4)]
  if slot:
   m.seed(slot,mask(nodes[0]) if nodes else 0)
   for j,node in enumerate(nodes):
    m.seed(node,mask(nodes[j+1]) if j+1<len(nodes) else 0)
    m.seed(node+4,0 if i%3 and j%2==0 else 1)
  args=(slot,0,0,0,0)
 elif k==4:
  n=i%5;begin=base;end=mask(begin+0x14*n)
  key0=word();key1=word();chosen=(i//5)%max(1,n)
  for j in range(n):
   m.seed(begin+j*0x14,key0 if i%4==0 and j==chosen else word())
   m.seed(begin+j*0x14+4,key1 if i%4==0 and j==chosen else word())
  output=mask(begin if i%23==0 else 0x7000+i*4)
  args=(begin,end,key0,key1,output)
 elif k==5:
  n=i%5;src=base;dst=base if i%11==0 else mask(base+(4 if i%7==0 else 0x300))
  ebx=0x8000+i*4;output=0x9000+i*4
  m.seed(ebx+8,mask(src+4*n))
  for j in range(n):m.seed(src+j*4,word())
  args=(dst,src,ebx,output,0)
 elif k in (6,7):
  step,count=(32,8) if k==6 else (24,6)
  n=i%4;begin=base;end=mask(base+step*n)
  dst=mask(base+step*n+(0 if i%11==0 else (4 if i%7==0 else 0x600)))
  output=0xA000+i*4;df=int(i%3==0)
  # Seed both DF=0 and DF=1 source windows without overwriting other ranges.
  for j in range(-step,step*n+4):m.seed8(base+j,rng.randrange(256))
  args=(begin,end,dst,output,df)
 elif k==9:
  n=i%6;src=base;dst=base if i%11==0 else mask(base+(1 if i%7==0 else 0x300))
  owner=0xB000+i*4;output=0xC000+i*4
  m.seed(owner+8,mask(src+n))
  for j in range(n):m.seed8(src+j,rng.randrange(256))
  args=(owner,dst,src,output,0)
 else:raise ValueError(k)
 return m,args

def build(root,output,flag='-O0',override=None):
 meta=json.loads((root/'metadata/20261107_next_ten_guest32_independent.json').read_text())
 sources=[str(root/x['path']) for x in meta['cases']]
 if override:
  idx,path=override;sources[idx]=str(path)
 host=output.parent/'model_host.cpp';host.write_text(MOCK+DISPATCH)
 cmd=['clang++','-std=c++17','-fPIC','-shared',flag,'-I',str(root/'include'),*sources,str(host),'-o',str(output)]
 r=subprocess.run(cmd,capture_output=True,text=True,timeout=25)
 if r.returncode:raise AssertionError('Compiler failed: '+r.stderr[:4000])
 lib=ctypes.CDLL(str(output))
 lib.bf_reset.restype=None
 lib.bf_seed.argtypes=[ctypes.c_uint32,ctypes.c_uint8]
 lib.bf_ev_count.restype=ctypes.c_uint32
 for f in ['bf_ev_op','bf_ev_addr','bf_ev_val']:
  getattr(lib,f).argtypes=[ctypes.c_uint32];getattr(lib,f).restype=ctypes.c_uint32
 lib.bf_call.argtypes=[ctypes.c_uint32]*6;lib.bf_call.restype=ctypes.c_uint32
 return lib

def compare(lib,k,index):
 mem,args=make_case(k,index)
 lib.bf_reset()
 for x,v in mem.mem.items():lib.bf_seed(x,v)
 want=original_model(k,mem,args)
 have=lib.bf_call(k,*args)
 count=lib.bf_ev_count()
 if count>400:raise AssertionError(('unexpected excessively long execution',k,index,count))
 actual=[(chr(lib.bf_ev_op(j)),lib.bf_ev_addr(j),lib.bf_ev_val(j)) for j in range(count)]
 if (have,actual)!=(want,mem.events):
  raise AssertionError(f'case {k}/{index}: returned {have:#x}/{want:#x}, traces {actual!r}/{mem.events!r}')

class IndependentGuest32Tests(unittest.TestCase):
 def test_manifest_source_contract(self):
  m=json.loads(META.read_text())
  self.assertFalse(m['abi_verified']);self.assertFalse(m['native_linked'])
  self.assertEqual(len(m['cases']),10)
  for c in m['cases']:
   b=(ROOT/c['path']).read_bytes()
   self.assertEqual(hashlib.sha256(b).hexdigest().upper(),c['source_sha256'])
   self.assertIn(c['original_body_sha256'].encode(),b)
   self.assertIn(b'ABI_UNVERIFIED',b)
   self.assertIn(b'NOT_NATIVE_LINKED',b)
   self.assertNotEqual(c['historical_source_sha256'],c['source_sha256'])
 def test_compiled_independent_oracles_O0_O2(self):
  for opt in ('-O0','-O2'):
   with tempfile.TemporaryDirectory() as temp:
    lib=build(ROOT,Path(temp)/'model.so',opt)
    for k in range(10):
     for index in range(384):compare(lib,k,index)
   print(f'{opt}: 3840 independent guest-memory traces passed')
 def test_compiled_negative_models(self):
  changes=[
   ('bf_guest_write_u32(dst, value);','bf_guest_write_u32(dst + UINT32_C(4), value);'),
   ('bf_guest_write_u16(dst, value);','bf_guest_write_u16(dst + UINT32_C(2), value);'),
   ('bf_guest_write_u8(dst, value);','bf_guest_write_u8(dst + UINT32_C(1), value);'),
   ('bf_guest_read_u32(node + UINT32_C(4))','bf_guest_read_u32(node + UINT32_C(8))'),
   ('bf_guest_read_u32(cursor + UINT32_C(4))','bf_guest_read_u32(cursor + UINT32_C(8))'),
   ('bf_guest_write_u32(output, value);','bf_guest_write_u32(output + UINT32_C(4), value);'),
   ('bf_guest_write_u32(edi, value);','bf_guest_write_u32(edi + UINT32_C(4), value);'),
   ('bf_guest_write_u32(edi, value);','bf_guest_write_u32(edi + UINT32_C(4), value);'),
   ('bf_guest_write_u32(dst + UINT32_C(4), second);','bf_guest_write_u32(dst + UINT32_C(8), second);'),
   ('bf_guest_write_u8(output, value);','bf_guest_write_u8(output + UINT32_C(1), value);'),
  ]
  m=json.loads(META.read_text())
  with tempfile.TemporaryDirectory() as tmp:
   folder=Path(tmp)
   for k,(original,replaced) in enumerate(changes):
    txt=(ROOT/m['cases'][k]['path']).read_text()
    self.assertEqual(txt.count(original),1,(k,original))
    mutated=folder/f'mutant_{k}.cpp';mutated.write_text(txt.replace(original,replaced))
    lib=build(ROOT,folder/f'lib{k}.so','-O0',(k,mutated))
    rejected=False
    for i in range(1,100):
     try:compare(lib,k,i)
     except AssertionError:rejected=True;break
    self.assertTrue(rejected, f'XBE-inconsistent source mutation accepted for {m["cases"][k]["entry"]}')
    print('rejected source mutation',m['cases'][k]['entry'])

if __name__=='__main__':unittest.main()
