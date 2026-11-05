#!/usr/bin/env python3
"""Reviewer-defined corpus/graph composition plus hard-coded distinguishing anchors.
Reuses accepted primitive arithmetic, not the author's composition or corpus.
Undefined NaN ties require quiet scratch then conditional SSE relations only.
"""
import sys,pathlib,importlib.util,random,dataclasses,json,subprocess,os
ROOT=pathlib.Path(__file__).resolve().parents[3]
HERE=pathlib.Path(__file__).resolve().parent
import hashlib
PINS={'x87_integer': '895ca1f749a917b637b4f3c116affcf0b241ddc054c8f618c4940b83f1dd6278', 'x87_fraction': 'c7be1257607f0d27f3f01a3bae3695676593edbf08754d23b5b1f9528db48453', 'sse_integer': '9f8a96f73124e71a049f6144315fd4949ad4cd7c82a434b47d882caa8e78583f', 'sse_fraction': 'b617a05263437d31c09a92fa5c922f92e7e47dad30fda220e0719e79330fe04b'}
def load(name):
 p=(HERE/f'{name}.py') if name.startswith('x87_') else ROOT/'tests'/('generate_002b73d0_three_term_integer_model.py' if name=='sse_integer' else 'generate_002b7360_three_product_rational_model.py');assert hashlib.sha256(p.read_bytes()).hexdigest()==PINS[name]
 spec=importlib.util.spec_from_file_location('review_'+name,p);m=importlib.util.module_from_spec(spec);sys.modules[spec.name]=m;spec.loader.exec_module(m);return m
I,F,SI,SF=map(load,['x87_integer','x87_fraction','sse_integer','sse_fraction'])

def scalar(b,c,p,r):
 # Explicit independently transcribed top-of-stack flow from the disassembly.
 z,f,_=I.load32(b[2]); z,g,_=I.multiply_memory(z,c[2],p,r); flags=f|g
 y,f,_=I.load32(b[1]); y,g,_=I.multiply_memory(y,c[1],p,r); flags|=f|g
 zy,f,_=I.add_extended(z,y,p,r); flags|=f
 x,f,_=I.load32(b[0]); x,g,_=I.multiply_memory(x,c[0],p,r); flags|=f|g
 total,f,_=I.add_extended(zy,x,p,r); flags|=f
 neg=dataclasses.replace(total,sign=1-total.sign)
 word,f,c1=I.store32(neg,r)
 got=dict(scratch_bits=word,raised_flags=flags|f,c1=c1,c1_defined=bool(f&32) and not bool(f&8),value_defined=neg.defined)
 other=F.scalar_x87(b,c,p,r)
 for field in ('raised_flags','c1_defined','value_defined'):assert got[field]==other[field],(field,got,other)
 if got['value_defined']:assert word==other['scratch_bits']
 if got['c1_defined']:assert c1==other['c1']
 return got

def packed(b,c,s,m):
 # Model all three stored lanes and the separate hidden +0 lane explicitly.
 flags=0;out=[]
 for left,right in zip(b+[0],c+[0]):
  t,f=SI.multiply(right,s,m); v,g=SI.add(left,t,m)
  u,h=SF.binary(right,s,m,'mul');w,k=SF.binary(left,u,m,'add')
  assert (t,f,v,g)==(u,h,w,k)
  flags|=f|g;out.append(v)
 return out[:3],flags

def cases():
 rng=random.Random(0x4060cafe)
 # Exact product cancellation with independently varied weak remaining term.
 for i in range(384):
  a=rng.randrange(0x00800000,0x7f000000);d=rng.randrange(0x00800000,0x7f000000)
  tiny=rng.getrandbits(32)&0xff7fffff
  yield 'cancel', [a^0x80000000,tiny,a],[d,rng.choice([1,0x3f800000,0x33800000,0x7f7fffff]),d]
 for i in range(384):yield 'raw',[rng.getrandbits(32) for _ in range(3)],[rng.getrandbits(32) for _ in range(3)]
 # Sparse sign/payload interactions after an undefined tie and another NaN.
 for i in range(128):
  payload=0x400000|rng.randrange(1,0x400000);larger=0x400000|rng.randrange(1,0x400000)
  yield 'nan_taint',[0x7f800000|larger,0x7f800000|payload,0xff800000|payload],[0x3f800000]*3
 for i in range(128):
  a=((rng.randrange(35,65))<<23)|rng.randrange(0x800000)
  b=((rng.randrange(35,65))<<23)|rng.randrange(0x800000)
  yield 'tiny',[0,0,a|((i&1)<<31)],[0,0,b]
 for i in range(128):
  a=(rng.randrange(240,255)<<23)|rng.randrange(0x800000)
  yield 'large',[0,0,a|((i&1)<<31)],[0,0,0x40000000|rng.randrange(0x800000)]

def records():
 result=[]
 for n,(label,b,c) in enumerate(cases()):
  for p in (24,53,64):
   for r in range(4):
    s=scalar(b,c,p,r)
    for mm in ((n+p+r)%16,(n+p+r+7)%16):
     m=((mm&3)<<13)|(64 if mm&4 else 0)|(0x8000 if mm&8 else 0)
     expected=packed(b,c,s['scratch_bits'],m) if s['value_defined'] else None
     result.append((label,b,c,p,r,m,s,expected))
 return result

def run(binary,recs):
 inp=''.join('%d %d %x %s\n'%(p,r,m,' '.join('%08x'%x for x in b+c)) for _,b,c,p,r,m,_,_ in recs)
 proc=subprocess.run([str(binary),'--stream'],input=inp,capture_output=True,text=True,env=dict(os.environ,ASAN_OPTIONS='detect_leaks=0:halt_on_error=1:detect_stack_use_after_return=1',UBSAN_OPTIONS='halt_on_error=1'))
 assert proc.returncode==0,(binary,proc.returncode,proc.stderr)
 rows=proc.stdout.splitlines();assert len(rows)==len(recs)
 for i,(line,rec) in enumerate(zip(rows,recs)):
  label,b,c,p,r,m,s,expected=rec;word,*rest=[int(x,16) for x in line.split()];o=rest[:3];sw,mx=rest[3:]
  if s['value_defined']:assert word==s['scratch_bits'],(binary,i,'scratch',rec,line)
  else:
   assert word&0x7fc00000==0x7fc00000
   expected=packed(b,c,word,m)
  assert o==expected[0] and (sw&63)==s['raised_flags'] and mx==(0x1f80|m|expected[1]),(binary,i,'result',rec,line,expected)
  if s['c1_defined']:assert (sw>>9)&1==s['c1'],(binary,i,'c1',rec,line)
 return len(rows)

def anchors(binary):
 # Expected scratch/output/flags/C1 derived directly on paper, not by models.
 one=0x3f800000;zero=0
 anchors=[
 ('z_y_x_pc24',[0xcb800000,one,0x4b800000],[one]*3,24,0,0,0x80000000,[0xcb800000,one,0x4b800000],32,None,0),
 ('p53',[0xcd000000,one,0x4d000000],[0x4d000000,one,0x4d000000],53,0,0,0x80000000,[0xcd000000,one,0x4d000000],32,None,0),
 ('p64',[0xcd000000,one,0x4d000000],[0x4d000000,one,0x4d000000],64,0,0,0xbf800000,[0xcd800000,0,0],0,None,0),
 ('double_round',[0x1f000000,0x33800000,one],[one]*3,64,0,0,0xbf800000,[0xbf800000,0xbf7fffff,0],32,0,32),
 ('hidden_IE',[0,0,0x7f7fffff],[one,one,0x40000000],64,0,0,0xff800000,[0xff800000]*3,40,None,1),
 ('separate_domains',[0,0,0x1a000000],[0,0,0x1a800000],64,0,0,0x80000001,[0,0,0x1a000000],0,None,50),
 ('separate_domains_DAZ',[0,0,0x1a000000],[0,0,0x1a800000],64,0,64,0x80000001,[0,0,0x1a000000],0,None,0),
 ('half_minsub',[0,0,0x1a000000],[0,0,0x1a000000],64,0,0,0x80000000,[0,0,0x1a000000],48,0,0),
 ('C1_down',[0,0x33000000,one],[0,one,one],64,0,0,0xbf800000,None,32,0,None),
 ('C1_up',[0,0x33c00000,one],[0,one,one],64,0,0,0xbf800001,None,32,1,None),
 ('negate_before_store_RD',[0,0x33000000,one],[0,one,one],64,1,0,0xbf800001,None,32,1,None),
 ('negate_before_store_RU',[0,0x33000000,one],[0,one,one],64,2,0,0xbf800000,None,32,0,None)]
 inp=''.join('%d %d %x %s\n'%(p,r,m,' '.join('%08x'%x for x in b+c)) for _,b,c,p,r,m,*_ in anchors)
 out=subprocess.check_output([str(binary),'--stream'],input=inp,text=True,env=dict(os.environ,ASAN_OPTIONS='detect_leaks=0:halt_on_error=1:detect_stack_use_after_return=1',UBSAN_OPTIONS='halt_on_error=1'))
 assert len(out.splitlines())==len(anchors),'truncated anchor response'
 for line,a in zip(out.splitlines(),anchors):
  label,b,c,p,r,m,exp,expected,flags,c1,mf=a
  s,x,y,z,sw,mx=[int(x,16) for x in line.split()]
  assert s==exp and sw&63==flags,(label,line,a)
  if expected is not None:assert [x,y,z]==expected,(label,line,a)
  if c1 is not None:assert (sw>>9)&1==c1,(label,line,a)
  if mf is not None:assert mx==0x1f80|m|mf,(label,line,a)
 return len(anchors)
