#!/usr/bin/env python3
"""Independent ordered guest-memory oracle for ten authenticated short XBE drafts.

Clang++17 O0/O2 compile and execute host guest32 models over synthetic byte
memory. This does not execute Xbox machine code, recover native ABI, model
faults, SEH, all EFLAGS or guest stack return cleanup, or prove 1:1 linkage.
"""
from __future__ import annotations
import ctypes, hashlib, json, pathlib, random, subprocess, tempfile, unittest
ROOT=pathlib.Path(__file__).resolve().parents[1]
META=ROOT/'metadata/20261107_ten_short_guest32_models.json'
U=0xffffffff
MOCK=r'''
#include <cstdint>
#include <unordered_map>
#include <vector>
#include "bf_xbe_guest32_record_model.h"
using U=std::uint32_t;using B=std::uint8_t;
static std::unordered_map<U,B> ram;
struct Event{char op;U address;U value;};
static std::vector<Event> events;
static B peek(U p){auto it=ram.find(p);return it==ram.end()?0:it->second;}
extern "C" void reset_model(){ram.clear();events.clear();}
extern "C" void seed_byte(U p,B b){ram[p]=b;}
extern "C" unsigned event_count(){return (unsigned)events.size();}
extern "C" int event_op(unsigned i){return (unsigned char)events.at(i).op;}
extern "C" U event_address(unsigned i){return events.at(i).address;}
extern "C" U event_value(unsigned i){return events.at(i).value;}
extern "C" int peek_byte(U p){return peek(p);}
U bf_guest_read_u32(U p){U v=0;for(int i=0;i<4;i++)v|=U(peek(p+U(i)))<<(8*i);events.push_back({'R',p,v});return v;}
B bf_guest_read_u8(U p){B v=peek(p);events.push_back({'B',p,v});return v;}
void bf_guest_write_u32(U p,U v){events.push_back({'W',p,v});for(int i=0;i<4;i++)ram[p+U(i)]=B(v>>(8*i));}
void bf_guest_write_u8(U p,B v){events.push_back({'Y',p,v});ram[p]=v;}
'''
DECL=r'''
extern std::uint32_t FUN_00048000(U,U);extern std::uint32_t FUN_00126b20(U);
extern std::uint32_t FUN_00162cd0(U,U);
extern void FUN_00075620(U,U);extern void FUN_000a7bd0(U,U);extern void FUN_000b11e0(U,U);
extern void FUN_00085410(U,U,U);extern std::uint32_t FUN_000908f0(U);
extern std::uint32_t FUN_0005c370(U,U,U);extern std::uint32_t FUN_0006ebc0(U,U,U,B,U,U);
extern "C" U run_model(unsigned k,U a,U b,U c,U d,U e,U f){
 switch(k){
 case 0:return FUN_00048000(a,b);
 case 1:return FUN_00126b20(a);
 case 2:return FUN_00162cd0(a,b);
 case 3:FUN_00075620(a,b);return 0;
 case 4:FUN_000a7bd0(a,b);return 0;
 case 5:FUN_000b11e0(a,b);return 0;
 case 6:FUN_00085410(a,b,c);return 0;
 case 7:return FUN_000908f0(a);
 case 8:return FUN_0005c370(a,b,c);
 case 9:return FUN_0006ebc0(a,b,c,B(d),e,f);
 default:return 0xdeadbeefu;
 }
}
'''
def mask(x):return x & U
class Oracle:
 def __init__(self):self.mem={};self.trace=[]
 def seed8(self,a,v):self.mem[mask(a)]=v&255
 def seed32(self,a,v):
  for i in range(4):self.seed8(a+i,v>>(8*i))
 def val8(self,a):return self.mem.get(mask(a),0)
 def val32(self,a):return sum(self.val8(a+i)<<(8*i) for i in range(4))
 def r(self,a):a=mask(a);v=self.val32(a);self.trace.append(('R',a,v));return v
 def b(self,a):a=mask(a);v=self.val8(a);self.trace.append(('B',a,v));return v
 def w(self,a,v):a=mask(a);v=mask(v);self.trace.append(('W',a,v));self.seed32(a,v)
 def y(self,a,v):a=mask(a);self.trace.append(('Y',a,v&255));self.seed8(a,v)

def original_oracle(k,m,a,b,c,d,e,f):
 if k==0:
  end=m.r(a+0x64);cursor=m.r(a+0x60)
  while cursor!=end:
   if m.r(cursor)==b:break
   cursor=mask(cursor+8)
  return (cursor&0xffffff00)|int(cursor!=end)
 if k==1:
  x=m.r(a+0x214)
  ok=(x!=0 and m.r(x)==1)
  return (x&0xffffff00)|int(ok)
 if k==2:
  count=m.r(a+0x104);limit=mask(a+4+count*4);cur=mask(a+4)
  while cur!=limit:
   if m.r(cur)==b:break
   cur=mask(cur+4)
  return (cur&0xffffff00)|int(cur!=limit)
 if k in (3,4,5):
  flag={3:0x29,4:0x19,5:0x15}[k]
  removed=m.r(a+8);next_=m.r(removed);m.w(a+8,next_)
  next_=m.r(removed)
  if m.b(next_+flag)==0:m.w(next_+4,a)
  prev=m.r(a+4);m.w(removed+4,prev)
  link=m.r(b+4)
  if a==m.r(link+4):m.w(link+4,removed)
  else:
   adj=m.r(a+4)
   if a==m.r(adj):m.w(adj,removed)
   else:m.w(adj+8,removed)
  m.w(removed,a);m.w(a+4,removed)
  return 0
 if k==6:
  end=m.r(b+8);cur=mask(c+4)
  while cur!=end:
   x=m.r(cur);m.w(cur-4,x);cur=mask(cur+4)
  m.w(b+8,mask(m.r(b+8)-4));m.w(a,c)
  return 0
 if k==7:
  eax=m.r(0x3bb5b0);index=0
  if eax!=U:
   target=m.r(a);table=0x3bb5b0
   while eax!=target:
    eax=m.r(table+0x60);table=mask(table+0x60);index+=1
    if eax==U:break
  p=mask(0x3bb5a8+index*0x60)
  return (p&0xffffff00)|m.b(p+0x14)
 if k==8:
  start=m.r(a+4);cur=start
  def sar2(bits):return ((bits>>2)|(0xc0000000 if (bits&0x80000000) else 0))&U
  n=sar2(mask(m.r(a+8)-start)) if start else 0
  eax=b
  if eax>n:eax=sar2(mask(m.r(a+8)-start)) if start else 0
  if eax and eax<0x80000000:
   target=m.r(c);i=0
   while i<eax:
    if m.r(cur)==target:return (eax&0xffffff00)|1
    i+=1;cur=mask(cur+4)
  return eax&0xffffff00
 if k==9:
  eax=a&0xffffff00
  if m.b(b)!=0:return eax
  v2=m.r(f);v1=m.r(e)
  if v1!=v2:return eax
  if d&255:
   m.w(c,m.r(a));m.y(b,1);return eax
  word=m.r(c);m.w(a,word);m.y(b,1)
  return (word&0xffffff00)|1
 raise AssertionError(k)

def scene(k,i):
 m=Oracle();rng=random.Random(0xabc1234+k*4909+i)
 root=(0xffffe000 if i%23==0 else 0x11000000+k*0x01000000+i*0x2000)&U
 a=root+0x100;b=root+0x900;c=root+0x1100;d=e=f=0
 if k==0:
  n=i%5;start=root+0x300;target=(0xc0010000+i)&U
  m.seed32(a+0x60,start);m.seed32(a+0x64,start+n*8)
  for j in range(n):m.seed32(start+j*8,target if (i%3==0 and j==n//2) else target+1+j)
  b=target
 elif k==1:
  pointer=0 if i%4==0 else root+0x700
  m.seed32(a+0x214,pointer)
  if pointer:m.seed32(pointer,1 if i%3==0 else i+3)
 elif k==2:
  n=i%5;key=(i*73+7)&U
  m.seed32(a+0x104,n)
  for j in range(n):m.seed32(a+4+j*4,key if i%3==0 and j==n//2 else (key+10+j)&U)
  b=key
 elif k in (3,4,5):
  flag={3:0x29,4:0x19,5:0x15}[k]
  removed=root+0x500;next_=root+0xa00;neighbor=root+0xc00;link=root+0x1300;arg=root+0x1500
  a=root+0x100;b=arg
  m.seed32(a+8,removed);m.seed32(removed,next_);m.seed32(a+4,neighbor)
  m.seed8(next_+flag,0 if i%2==0 else 1)
  m.seed32(arg+4,link)
  if i%3==0:m.seed32(link+4,a)
  elif i%3==1:m.seed32(link+4,root+0x1400);m.seed32(neighbor,a)
  else:m.seed32(link+4,root+0x1400);m.seed32(neighbor,root+0x1500)
 elif k==6:
  n=i%5;c=root+0x500;a=root+0x100;b=root+0x900
  m.seed32(b+8,c+4+n*4)
  for j in range(n):m.seed32(c+4+j*4,rng.getrandbits(32))
 elif k==7:
  a=root+0x100;mode=i%4;target=(0x870000+i*17)&U
  m.seed32(0x3bb5b0,U if mode==0 else target+100)
  if mode!=0:m.seed32(a,target)
  for j in range(1,4):m.seed32(0x3bb5b0+j*0x60,target if (j==mode and mode in (1,2)) else (U if j==3 else target+100+j))
  for j in range(4):m.seed8(0x3bb5bc+j*0x60,(i+j*23)&255)
 elif k==8:
  n=i%5;count=i%7;a=root+0x100;b=count;c=root+0x900
  p=root+0x600 if i%5 else 0
  m.seed32(a+4,p);m.seed32(a+8,p+n*4)
  v=(i*19+7)&U;m.seed32(c,v)
  for j in range(n):m.seed32(p+j*4,v if i%2 and j==n//2 else (v+j+1)&U)
 elif k==9:
  a=root+0x100;b=root+0x900;c=root+0x600;e=root+0x1100;f=root+0x1500;d=(i//4)&1
  m.seed8(b,0 if i%5 else 3)
  m.seed32(e,0xabcde if i%4 else 0xabcdf)
  m.seed32(f,0xabcde)
  m.seed32(a,rng.getrandbits(32));m.seed32(c,rng.getrandbits(32))
 return m,(mask(a),mask(b),mask(c),mask(d),mask(e),mask(f))

class TenShortModels(unittest.TestCase):
 @classmethod
 def setUpClass(cls):
  cls.cases=json.loads(META.read_text())['cases']
  cls.paths=[ROOT/c['source'] for c in cls.cases]
  assert len(cls.paths)==10
 def test_source_and_original_pin(self):
  for p,case in zip(self.paths,self.cases):
   data=p.read_bytes()
   self.assertEqual(hashlib.sha256(data).hexdigest(),case['source_sha256'])
   self.assertIn(case['original_body_sha256'].encode(),data)
   self.assertIn(b'ABI_UNVERIFIED',data)
 def run_library(self,opt,mutate=None,quick=False):
  with tempfile.TemporaryDirectory() as directory:
   scratch=pathlib.Path(directory)
   mock=scratch/'mock.cpp';mock.write_text(MOCK+DECL)
   paths=[]
   for path in self.paths:
    if mutate and path.name==mutate[0]:
     p=scratch/path.name;p.write_text(mutate[1]);paths.append(p)
    else:paths.append(path)
   lib=scratch/'models.so'
   cmd=['clang++','-shared','-fPIC','-std=c++17',opt,'-Werror=pointer-to-int-cast','-I',str(ROOT/'include'),str(mock)]+list(map(str,paths))+['-o',str(lib)]
   build=subprocess.run(cmd,text=True,capture_output=True,timeout=60)
   self.assertEqual(build.returncode,0,build.stderr[-2500:])
   dll=ctypes.CDLL(str(lib))
   u32=ctypes.c_uint32
   dll.reset_model.restype=None
   dll.seed_byte.argtypes=(u32,ctypes.c_uint8)
   dll.event_count.restype=ctypes.c_uint32
   dll.event_op.argtypes=(ctypes.c_uint32,);dll.event_op.restype=ctypes.c_int
   dll.event_address.argtypes=(ctypes.c_uint32,);dll.event_address.restype=u32
   dll.event_value.argtypes=(ctypes.c_uint32,);dll.event_value.restype=u32
   dll.peek_byte.argtypes=(u32,);dll.peek_byte.restype=ctypes.c_int
   dll.run_model.argtypes=(ctypes.c_uint32,)+(u32,)*6
   dll.run_model.restype=u32
   cases=32 if quick else 256
   for k in range(10):
    for i in range(cases):
     memory,argv=scene(k,i)
     original=dict(memory.mem)
     expected=original_oracle(k,memory,*argv)
     dll.reset_model()
     for a,v in original.items():dll.seed_byte(a,v)
     actual=dll.run_model(k,*argv)
     observed=[(chr(dll.event_op(t)),dll.event_address(t),dll.event_value(t)) for t in range(dll.event_count())]
     msg=f'function {self.cases[k]["entry"]}, test case {i}, opt {opt}'
     self.assertEqual(actual,expected,msg+' partial-EAX return')
     self.assertEqual(observed,memory.trace,msg+' read/write event order')
     for a,v in memory.mem.items():self.assertEqual(dll.peek_byte(a),v,msg+f' guest byte {a:08x}')
  return cases*10
 def test_o0(self):self.assertEqual(self.run_library('-O0'),2560)
 def test_o2(self):self.assertEqual(self.run_library('-O2'),2560)
 def test_reject_source_corruption(self):
  # Per-source mutation must change behavior on at least one deterministic case.
  needles={
   '0x00048000.cpp':('bf_guest_read_u32(cursor)','bf_guest_read_u32(cursor + UINT32_C(4))'),
   '0x00126b20.cpp':('UINT32_C(0x214)','UINT32_C(0x210)'),
   '0x00162cd0.cpp':('UINT32_C(0x104)','UINT32_C(0x100)'),
   '0x00075620.cpp':('UINT32_C(0x29)','UINT32_C(0x28)'),
   '0x000a7bd0.cpp':('UINT32_C(0x19)','UINT32_C(0x18)'),
   '0x000b11e0.cpp':('UINT32_C(0x15)','UINT32_C(0x14)'),
   '0x00085410.cpp':('cursor - UINT32_C(4)','cursor - UINT32_C(8)'),
   '0x000908f0.cpp':('address + UINT32_C(0x14)','address + UINT32_C(0x15)'),
   '0x0005c370.cpp':('cursor += UINT32_C(4)','cursor += UINT32_C(8)'),
   '0x0006ebc0.cpp':('bf_guest_write_u8(guest_ecx, UINT8_C(1))','bf_guest_write_u8(guest_ecx, UINT8_C(0))'),
  }
  # Do not bypass the test runner: trigger its independent trace mismatch directly.
  for p in self.paths:
   before=p.read_text();needle,alternative=needles[p.name]
   self.assertIn(needle,before)
   altered=before.replace(needle,alternative,1)
   self.assertNotEqual(altered,before)
   with self.assertRaisesRegex(AssertionError,'(read/write event order|guest byte|partial-EAX return)'):
    self.run_library('-O0',mutate=(p.name,altered),quick=True)
if __name__=='__main__':unittest.main()
