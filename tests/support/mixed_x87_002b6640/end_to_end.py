#!/usr/bin/env python3
"""Two independent arithmetic foundations, composed in this one graph adapter.
The composition is NOT claimed to be independently authored twice. Graph
identity is separately checked against hash-pinned instruction evidence.
Undefined x87 NaN payload/sign is not guessed: check quiet class, then test SSE
continuation conditionally on actual hardware scratch; exact cases are wholly
predicted before any native execution. Undefined C1 is never constrained.
"""
import hashlib,importlib.util,json,os,pathlib,random,subprocess,sys
ROOT=pathlib.Path(__file__).resolve().parents[3]
HERE=pathlib.Path(__file__).resolve().parent
PINS={'x87_integer':'895ca1f749a917b637b4f3c116affcf0b241ddc054c8f618c4940b83f1dd6278','x87_fraction':'c7be1257607f0d27f3f01a3bae3695676593edbf08754d23b5b1f9528db48453','sse_integer':'9f8a96f73124e71a049f6144315fd4949ad4cd7c82a434b47d882caa8e78583f','sse_fraction':'b617a05263437d31c09a92fa5c922f92e7e47dad30fda220e0719e79330fe04b'}
def load(name):
 p=(HERE/f'{name}.py') if name.startswith('x87_') else ROOT/'tests'/('generate_002b73d0_three_term_integer_model.py' if name=='sse_integer' else 'generate_002b7360_three_product_rational_model.py');assert hashlib.sha256(p.read_bytes()).hexdigest()==PINS[name],name
 spec=importlib.util.spec_from_file_location(name,p);m=importlib.util.module_from_spec(spec);sys.modules[name]=m;spec.loader.exec_module(m);return m
XI,XF,SI,SF=map(load,PINS)
def integer_sse(b,c,s,mx):
 bb=[b[0],0,b[1],b[2]];cc=[c[0],0,c[1],c[2]];out=[];flags=0
 for j in range(4):
  product,pf=SI.multiply(cc[j],s,mx);value,af=SI.add(bb[j],product,mx);out.append(value);flags|=pf|af
 return [out[0],out[2],out[3]],flags

def fraction_sse(b,c,s,mx):
 # MOVSS clears lane1 before MOVHPS loads the high pair. Source/destination
 # roles match the original packed instructions, not commutative formulas.
 inputs=((b[0],c[0]),(0,0),(b[1],c[1]),(b[2],c[2]))
 muls=[SF.binary(cword,s,mx,'mul') for _,cword in inputs]
 sums=[SF.binary(pair[0],prod[0],mx,'add') for pair,prod in zip(inputs,muls)]
 flags=0
 for _,raised in muls+sums:flags|=raised
 return [sums[k][0] for k in (0,2,3)],flags

def vectors():
 anchors=[('order_pc24',[0xcb800000,0x3f800000,0x4b800000],[0x3f800000]*3),
 ('pc53_64',[0xcd000000,0x3f800000,0x4d000000],[0x4d000000,0x3f800000,0x4d000000]),
 ('double_round',[0x1f000000,0x33800000,0x3f800000],[0x3f800000]*3),
 ('hidden_lane_invalid',[0,0,0x7f7fffff],[0x3f800000,0x3f800000,0x40000000]),
 ('exact_subnormal',[0,0,0x1a000000],[0,0,0x1a800000]),
 ('half_min_subnormal',[0,0,0x1a000000],[0,0,0x1a000000]),
 ('tiny_rounds_normal',[0,0,0x800000],[0,0,0x3f7fffff]),
 ('c1_lower',[0,0x33000000,0x3f800000],[0,0x3f800000,0x3f800000]),
 ('c1_upper',[0,0x33c00000,0x3f800000],[0,0x3f800000,0x3f800000])]
 yield from anchors
 edge=[0,0x80000000,1,0x80000001,0x7fffff,0x807fffff,0x800000,0x80800000,0x3f7fffff,0xbf7fffff,0x3f800000,0xbf800000,0x3f800001,0xbf800001,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc00001,0xffc00001,0x7fc12345,0xffc12345,0x7fffffff,0xffffffff,0x7f800001,0xff800001,0x7f812345,0xff812345]
 for role in range(6):
  for word in edge:
   v=[0x3f800000]*6;v[role]=word;yield f'role_{role}_{word:08x}',v[:3],v[3:]
 special=[0x7fc00001,0xffc00001,0x7fc12345,0xffc12345,0x7f800001,0xff800001,0x7f812345,0xff812345,1,0x80000001,0x7f800000,0xff800000]
 for lane in range(3):
  for a in special:
   for d in special:
    b=[0,0,0];c=[0x3f800000]*3;b[lane]=a;c[lane]=d;yield 'mul_special',b,c
 for a in special[:8]:
  for d in special[:8]:yield 'add_nan_tie',[0,a,d],[0x3f800000]*3
 rng=random.Random(0x002b66404056)
 for j in range(256):yield f'raw_random_{j}',[rng.getrandbits(32) for _ in range(3)],[rng.getrandbits(32) for _ in range(3)]

def isquiet(x):return x&0x7fc00000==0x7fc00000

def generate():
 records=[];undefined=0;vec=list(vectors())
 for label,b,c in vec:
  for pc in (24,53,64):
   for rc in range(4):
    a=XI.scalar_x87(b,c,pc,rc);d=XF.scalar_x87(b,c,pc,rc)
    for field in ('raised_flags','value_defined','c1_defined'):
     assert a[field]==d[field],(label,b,c,pc,rc,field,a[field],d[field])
    if a['c1_defined']:assert a['c1']==d['c1']
    if a['value_defined']:assert a['scratch_bits']==d['scratch_bits'],(label,b,c,pc,rc,a,d)
    for mm in range(16):
     mx=((mm&3)<<13)|(64 if mm&4 else 0)|(0x8000 if mm&8 else 0)
     scratch=a['scratch_bits'] if a['value_defined'] else None
     expected=None
     if scratch is not None:
      expected=integer_sse(b,c,scratch,mx);other=fraction_sse(b,c,scratch,mx)
      assert expected==other,(label,b,c,pc,rc,mx,expected,other)
     else:undefined+=1
     records.append((label,b,c,pc,rc,mx,a,expected))
 print(f'oracles agree: {len(vec)} vectors, {len(records)} full mode cases, {undefined} explicitly undefined-payload cases',flush=True)
 return records

def run(binary,records):
 lines=['%u %u %x %s\n'%(pc,rc,mx,' '.join(f'{x:08x}' for x in b+c)) for _,b,c,pc,rc,mx,_,_ in records]
 run=subprocess.run([str(binary),'--stream'],input=''.join(lines),text=True,capture_output=True,env=dict(os.environ,ASAN_OPTIONS='detect_leaks=0:halt_on_error=1',UBSAN_OPTIONS='halt_on_error=1'))
 assert run.returncode==0,(binary,run.returncode,run.stderr)
 results=run.stdout.splitlines();assert len(results)==len(records),(len(results),len(records))
 for index,(row,record) in enumerate(zip(results,records)):
  scratch,o0,o1,o2,sw,mxcsr=map(lambda x:int(x,16),row.split());label,b,c,pc,rc,mx,x87,expected=record
  errors=[]
  if x87['value_defined']:
   if scratch!=x87['scratch_bits']:errors.append('scratch')
  else:
   if not isquiet(scratch):errors.append('quiet_nan_class')
   expected=integer_sse(b,c,scratch,mx)
   if expected!=fraction_sse(b,c,scratch,mx):errors.append('conditional_SSE_oracles')
  if [o0,o1,o2]!=expected[0]:errors.append('output')
  if sw&63!=x87['raised_flags']:errors.append('x87_flags')
  if x87['c1_defined'] and (sw>>9)&1!=x87['c1']:errors.append('defined_C1')
  if mxcsr!=(0x1f80|mx|expected[1]):errors.append('MXCSR')
  if errors:raise AssertionError(dict(binary=str(binary),index=index,label=label,b=b,c=c,pc=pc,rc=rc,mx=mx,actual=row,expected=expected,x87=x87,errors=errors))
 return dict(binary=binary.name,cases=len(records),passed=True,sha256=hashlib.sha256(binary.read_bytes()).hexdigest())
