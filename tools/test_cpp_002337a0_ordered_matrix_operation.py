#!/usr/bin/env python3
"""Provenance, complete native codegen, mutable memory/FP models and mutants.
No original machine code is executed. Private record is optional, not committed.
"""
import argparse,copy,hashlib,json,pathlib,re,shutil,struct,subprocess,sys,tempfile
from source_layout import source_path
MANIFEST_SHA='e9356b894bd7838d1b5c01f07edc793cb99af91be48f09f64b9d024c473fa90d'
PROGRAM_RECORD_SHA='346146b9959b9a6ff29ae5a28d82289275c20c5269a54112d05f94bb5fabec32'
BODY_SHA='9845F4400F31673C8FFC0EC92B60D421983004F32EEE8BC70A60F9061E3EB58B'
SIGNATURE=b'undefined8 * FUN_002337a0(undefined8 *param_1,float *param_2,float *param_3)'
INCLUDE=b'#include "bf_002337a0_ordered_matrix_operation.h"\n'
WINDOWS={'0x002337a0':'8b5424088b4424048b4c240c','0x002337bc':'0f59c1','0x00233871':'f30f104234','0x0023387d':'0f137820f30f1052300f177828','0x002338b5':'0f1150308b442404c3'}
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 assert (p.returncode==0)==ok,(args,p.returncode,p.stdout,p.stderr)
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['src/main_unclassified/band_0023/0x002337a0.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def window_check(w):assert {x['va']:x['bytes'] for x in w}==WINDOWS and len(w)==len(WINDOWS)

def record_check(r):
 assert sha(json.dumps(r,sort_keys=True,separators=(',',':')).encode())==PROGRAM_RECORD_SHA
 assert r['entry']=='002337a0' and r['body_byte_count']==286 and r['instruction_count']==76
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==b['length']==286
 assert len(r['instructions'])==76 and not r['is_thunk'] and r['name']=='FUN_002337a0'
 assert b['start']=='002337a0' and b['end_inclusive']=='002338bd'
 cursor=0x2337a0;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor and not i['flows']
  last=cursor+i['length']==0x2338be
  assert i['flow_type']==('TERMINATOR' if last else 'FALL_THROUGH')
  assert i['fallthrough']==(None if last else f"{cursor+i['length']:08x}")
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x2338be
 for va,data in WINDOWS.items():
  off=int(va,16)-0x2337a0;chunk=bytes.fromhex(data);assert raw[off:off+len(chunk)]==chunk
 return raw

def codegen_check(assembly,expected):
 apps=re.findall(r'#APP(.*?)#NO_APP',assembly,re.S);assert len(apps)==1
 def norm(s):return re.sub(r'(?<![0-9])0\(', '(', re.sub(r'\s+','',s))
 lines=[line.split('#')[0].strip() for line in apps[0].splitlines() if line.split('#')[0].strip()]
 assert len(lines)==71
 l=re.fullmatch(r'movss\s+(?:0)?\((%[a-z0-9]+)\),\s*%xmm0',lines[0]);r=re.fullmatch(r'movups\s+(?:0)?\((%[a-z0-9]+)\),\s*%xmm1',lines[1]);o=re.fullmatch(r'movlps\s+%xmm0,\s*(?:0)?\((%[a-z0-9]+)\)',lines[23]);assert l and r and o
 lr,rr,orr=l[1],r[1],o[1]
 converted=[norm(s.replace('%%','%').replace('%[left]',lr).replace('%[right]',rr).replace('%[out]',orr)) for s in expected]
 assert [norm(s) for s in lines]==converted,'wrong event, offset, operand or ordering'
 before,after=re.split(r'#APP.*?#NO_APP',assembly,flags=re.S)
 # Strict symbolic native transport: only full-width GPR MOVs and a balanced
 # RBP frame are allowed outside the pinned asm region, with an optional
 # operand-free ENDBR64 as the first entry instruction for host CET/IBT.
 # Do not disable compiler protection or admit the marker elsewhere. This rejects
 # extra FP/loads/calls/narrowing and proves exact native argument/result transport.
 reg={'%rdi':'out','%rsi':'left','%rdx':'right','%rbp':'saved_rbp','%rsp':('stack',0)}
 mem={};pushes=pops=returns=wrapper_ops=0;entry_open=False
 def address(v):
  m=re.fullmatch(r'(-?\d*)\(%r(sp|bp)\)',v);assert m,v
  base=reg['%r'+m[2]];assert isinstance(base,tuple) and base[0]=='stack'
  return base[1]+int(m[1] or '0')
 def write(addr,value):
  for k in range(8):mem[addr+k]=(value,k)
 def read(addr):
  v=mem.get(addr);assert v and v[1]==0
  assert all(mem.get(addr+k)==(v[0],k) for k in range(8))
  return v[0]
 for region,prior in [(before,True),(after,False)]:
  for line in region.splitlines():
   text=line.split('#')[0].strip()
   if text=='.cfi_startproc':entry_open=True
   elif text=='.cfi_endproc':entry_open=False
   if not text or text.startswith('.') or text.endswith(':'):continue
   m=re.fullmatch(r'([a-z][a-z0-9]*)\s*(.*)',text);assert m,line
   op,arg=m.groups();arg=norm(arg)
   if op=='endbr64':
    assert prior and entry_open and wrapper_ops==0 and not arg,'misplaced or malformed entry marker'
   elif op=='pushq':
    assert prior and arg=='%rbp' and pushes==0
    reg['%rsp']=('stack',reg['%rsp'][1]-8);write(reg['%rsp'][1],reg['%rbp']);pushes+=1
   elif op=='popq':
    assert not prior and arg=='%rbp' and pops==0
    reg['%rbp']=read(reg['%rsp'][1]);reg['%rsp']=('stack',reg['%rsp'][1]+8);pops+=1
   elif op in ('retq','ret'):
    assert not prior and not arg and reg['%rsp']==('stack',0) and reg['%rbp']=='saved_rbp' and reg.get('%rax')=='out';returns+=1
   elif op=='movq':
    src,dst=arg.split(',');value=reg[src] if src.startswith('%') else read(address(src))
    if dst.startswith('%'):
     assert dst in ('%rax','%rcx','%rdx','%rdi','%rsi','%r8','%r9','%r10','%r11','%rbp')
     assert dst!='%rbp' or src=='%rsp';reg[dst]=value
    else:
     assert prior;at=address(dst);stack=reg['%rsp'][1];assert stack-128<=at and at+8<=stack
     write(at,value)
   else:raise AssertionError('unexpected wrapper operation: '+line)
   wrapper_ops+=1
  if prior:assert reg.get(lr)=='left' and reg.get(rr)=='right' and reg.get(orr)=='out'
 assert pushes==pops and returns==1

def entry_marker_controls(assembly,expected,rejected):
 # Check real compiler output first, then vary only the authored wrapper text.
 codegen_check(assembly,expected)
 plain=re.sub(r'(?m)^[ \t]*endbr64[ \t]*(?:#.*)?\n','',assembly)
 start='\t.cfi_startproc\n';assert plain.count(start)==1
 entry='\tendbr64\n'
 def marked(marker):return plain.replace(start,start+marker,1)
 for marker in ['',entry,'endbr64\n','  endbr64  # host entry marker\n']:
  codegen_check(marked(marker),expected)
 for marker in [entry+entry,'\tendbr64 %rax\n','\tendbr64 $0\n',
                '\tendbr32\n','\tendbr\n','\tnop\n','ud2\n']:
  rejected(codegen_check,marked(marker),expected)
 rejected(codegen_check,plain.replace(start,entry+start,1),expected)
 # Every later position is invalid, including inside and after the SSE block.
 for boundary in ['#APP','#NO_APP']:
  rejected(codegen_check,plain.replace(boundary,entry+boundary,1),expected)
  rejected(codegen_check,plain.replace(boundary,boundary+'\n'+entry,1),expected)
 rejected(codegen_check,plain+'\n'+entry,expected)
 # The admitted marker must not bypass the exact return or SSE graph checks.
 protected=marked(entry)
 bad,count=re.subn(r'(?m)^([ \t]*)(retq?)([ \t]*(?:#.*)?)$',
                  r'\1movq %rsi,%rax\n\1\2\3',protected);assert count==1
 rejected(codegen_check,bad,expected)
 bad=protected.replace('mulps','addps',1);assert bad!=protected
 rejected(codegen_check,bad,expected)

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--program-record',type=pathlib.Path);ap.add_argument('--sanitizers',action='store_true');ap.add_argument('--corpus-dir',type=pathlib.Path);ap.add_argument('--capstone',action='store_true');a=ap.parse_args();root=a.root.resolve()
 mb=(root/'metadata/cpp_20261105_002337a0_ordered_matrix_operation.json').read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 for path,digest in m['artifacts'].items():assert sha((root/path).read_bytes())==digest,path
 src=source_path(root,'0x002337a0');assert src.relative_to(root).as_posix()=='src/main_unclassified/band_0023/0x002337a0.cpp'
 assert list((root/'src').rglob('0x002337a0.cpp'))==[src]
 source=src.read_bytes();before=(root/'tests/fixtures/002337a0_before.cpp.txt').read_bytes();header=(root/'include/bf_002337a0_ordered_matrix_operation.h').read_text();expected=json.loads((root/'metadata/002337a0_ordered_sse.json').read_text())
 source_check(source,before,m);window_check(m['narrow_opcode_windows']);negatives=0
 def rejected(fn,*args):
  nonlocal negatives
  try:fn(*args)
  except (AssertionError,KeyError,ValueError):negatives+=1
  else:raise AssertionError('mutation unexpectedly accepted')
 rejected(source_check,source+b' ',before,m);rejected(source_check,source,before+b' ',m)
 for n,w in enumerate(m['narrow_opcode_windows']):
  for j in range(len(bytes.fromhex(w['bytes']))):
   bad=copy.deepcopy(m['narrow_opcode_windows']);b=bytearray.fromhex(w['bytes']);b[j]^=1;bad[n]['bytes']=b.hex();rejected(window_check,bad)
 if a.program_record:
  r=json.loads(a.program_record.read_text());raw=record_check(r)
  for j in range(len(raw)):
   bad=copy.deepcopy(r);b=bytearray(raw);b[j]^=1;bad['body_ranges'][0]['bytes_hex']=b.hex();rejected(record_check,bad)
  fields={'mnemonic':'NOP','operands':['bad'],'text':'corrupt','flow_type':'COMPUTED_JUMP','flows':['00000000'],'fallthrough':'00000000','flow_override':'CALL','is_length_overridden':True,'is_fallthrough_overridden':True,'parsed_length':0,'length':0,'address':'00000000','bytes_hex':'90'}
  for j in range(76):
   for field,value in fields.items():
    bad=copy.deepcopy(r);assert bad['instructions'][j][field]!=value;bad['instructions'][j][field]=value;rejected(record_check,bad)
  for field,value in [('entry','002337a1'),('body_byte_count',285),('instruction_count',75),('is_thunk',True)]:
   bad=copy.deepcopy(r);bad[field]=value;rejected(record_check,bad)
  if a.capstone:
   from capstone import Cs,CS_ARCH_X86,CS_MODE_32
   decoded=list(Cs(CS_ARCH_X86,CS_MODE_32).disasm(raw,0x2337a0));assert len(decoded)==76
   converted=[]
   for dec,record in zip(decoded,r['instructions']):
    assert dec.address==int(record['address'],16) and dec.size==record['length'] and bytes(dec.bytes).hex()==record['bytes_hex']
   for dec in decoded[3:-2]:
    def operand(v):
     mm=re.search(r'\[(e(?:ax|cx|dx))(?: \+ (0x[0-9a-f]+|[0-9]+))?\]',v)
     if mm:return str(int(mm[2],0) if mm[2] else 0)+'(%['+{'eax':'out','ecx':'right','edx':'left'}[mm[1]]+'])'
     return '%%'+v if v.startswith('xmm') else '$'+str(int(v,0))
    converted.append(dec.mnemonic+' '+', '.join(operand(v.strip()) for v in dec.op_str.split(',')[::-1]))
   assert converted==expected,'independent decoded original SSE graph disagrees'
   print('Fresh Capstone: complete boundaries/bytes and all 71 semantic events agree',flush=True)
  print('Private record: 286 bytes/76 instructions/boundaries pinned; not full-XBE authentication',flush=True)
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(root/'include')]
 native=root/'tests/test_002337a0_ordered_matrix_operation.cpp';model=root/'tests/test_002337a0_ordered_matrix_model.cpp'
 sys.path.insert(0,str(root/'tests'))
 import generate_002337a0_ordered_matrix_integer_model as integer
 import generate_002337a0_ordered_matrix_rational_model as rational
 with tempfile.TemporaryDirectory(prefix='bf-2337a0-gate-') as td:
  td=pathlib.Path(td);cd=a.corpus_dir or td;cd.mkdir(exist_ok=True,parents=True)
  fixtures=[]
  for name,mod in [('integer',integer),('rational',rational)]:
   fixture=cd/(name+'.bin')
   if not fixture.exists():mod.generate(fixture)
   expected_records=m['corpora'][name]['records'];assert fixture.stat().st_size==expected_records*788
   assert sha(fixture.read_bytes())==m['corpora'][name]['sha256'];fixtures.append(fixture)
  # Independently composed graphs agree on every model's named anchors, every
  # control, and a deterministic representative overlap set. Native tests
  # compare each full independently generated corpus with all 64 sticky seeds.
  for mod in [integer,rational]:
   for name,(memory,l,r,o) in mod.NAMED_ANCHORS.items():
    for rc in range(4):
     for daz in range(2):
      for ftz in range(2):
       csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
       assert integer.operation(memory,l,r,o,csr)==rational.operation(memory,l,r,o,csr),name
  for name,case in integer.NAMED_ANCHORS.items():(td/(name+'.bin')).write_bytes(integer.record(*case,0x1f80))
  for opt in ['-O0','-O2']:
   asm=td/(opt+'.s');run(common+[opt,'-S',str(src),'-o',str(asm)]);entry_marker_controls(asm.read_text(),expected,rejected);print('Exact 71-SSE event graph/native transport:',opt,flush=True)
   for extra in ['\tfldz\n','\taddss %xmm1,%xmm2\n','\tcallq helper\n','\tmovups (%rdi),%xmm0\n','\tmovq %rdi,%rbx\n','\tmovl %edi,%eax\n','\tretq $12\n','\tvfmadd132ps %xmm1,%xmm2,%xmm0\n']:
    rejected(codegen_check,asm.read_text()+'\n'+extra,expected)
   rejected(codegen_check,asm.read_text().replace('\tretq','\tmovq %rsi,%rax\n\tretq'),expected)
   for test in [native,model]:
    exe=td/(test.stem+opt);run(common+[opt,str(test),str(src),'-o',str(exe)])
    for fixture in fixtures if test==model else [None]:
     print(run([str(exe)]+([str(fixture)] if fixture else [])).stdout.strip(),flush=True)
   bad=run(common+[opt,'-x','c++','-fsyntax-only','-'],ok=False,stdin=before.decode());assert 'CONCAT requires integral bytes' in bad.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native SSE'),(['-U__SSE__'],'requires GNU/Clang x86-64 Linux SysV native SSE')]:
   bad=run(common+flags+['-x','c++','-fsyntax-only','-'],ok=False,stdin='#include "bf_002337a0_ordered_matrix_operation.h"\n');assert marker in bad.stderr;negatives+=1
  # Behavioral mutants are compiled, then challenged by a decisive named
  # anchor or native guarded/state oracle. Failure cannot be just compilation.
  def swap(h,a,b):
   assert a in h and b in h;return h.replace(a,'@@A@@',1).replace(b,a,1).replace('@@A@@',b,1)
  low='        "movlps %%xmm7, 32(%[out])\\n\\t"\n';ld12='        "movss 48(%[left]), %%xmm2\\n\\t"\n';high='        "movhps %%xmm7, 40(%[out])\\n\\t"\n'
  changes={
   'coefficient_nan':(header.replace('mulps %%xmm1, %%xmm0','movaps %%xmm1, %%xmm8\\n\\tmulps %%xmm0, %%xmm8\\n\\tmovaps %%xmm8, %%xmm0',1).replace(': "xmm0",',': "xmm8", "xmm0",',1),'coefficient_nan'),
   'add_priority':(header.replace('addps %%xmm2, %%xmm0','addps %%xmm0, %%xmm2\\n\\tmovaps %%xmm2, %%xmm0',1),'add_nan'),
   'broadcast':(header.replace('shufps $0','shufps $85',1),'ordered_finite'),
   'right_row':(header.replace('movups 16(%[right])','movups 32(%[right])',1),'ordered_finite'),
   'association':(header.replace('addps %%xmm2, %%xmm0','movaps %%xmm2, %%xmm8',1).replace('addps %%xmm7, %%xmm0','addps %%xmm7, %%xmm8\\n\\taddps %%xmm8, %%xmm0',1).replace(': "xmm0",',': "xmm8", "xmm0",',1),'association'),
   'l12_early':(swap(header,low,ld12),'split_store'),
   'l12_late':(swap(header,ld12,high),'split_store_after'),
   'merged_row2':(header.replace(low+ld12+high,'        "movups %%xmm7, 32(%[out])\\n\\t"\n'+ld12),'split_store_after'),
   'l13_late':(header.replace('        "movss 52(%[left]), %%xmm0\\n\\t"\n','',1).replace('        "shufps $0, %%xmm0, %%xmm0\\n\\t"\n'+low,low,1).replace(high,high+'        "movss 52(%[left]), %%xmm0\\n\\t"\n        "shufps $0, %%xmm0, %%xmm0\\n\\t"\n',1),'split_store'),
   'left_snapshot':(header.replace('    __asm__ volatile(','    float captured[16]; __builtin_memcpy(captured,left,64); left=captured;\n    __asm__ volatile(',1),'split_store'),
   'right_reload':(header.replace('mulps %%xmm1, %%xmm6','movups 0(%[right]), %%xmm1\\n\\tmulps %%xmm1, %%xmm6',1),'right_alias'),
   'scalar_lane':(header.replace('mulps %%xmm1, %%xmm0','mulss %%xmm1, %%xmm0',1),'ordered_finite'),
   'wide_output':(header.replace('movups %%xmm2, 48(%[out])','movups %%xmm2, 48(%[out])\\n\\tmovss %%xmm2, 64(%[out])',1),None),
   'wide_input':(header.replace('movss 60(%[left]), %%xmm7','movups 60(%[left]), %%xmm7',1),None),
   'reset_mxcsr':(header.replace('    __asm__ volatile(','    const unsigned reset=0x1f80; __asm__ volatile("ldmxcsr %0"::"m"(reset):"memory");\n    __asm__ volatile(',1),'underflow'),
   'callee_saved':(header.replace('movups %%xmm2, 48(%[out])','movups %%xmm2, 48(%[out])\\n\\tmovq $0, %%rbx',1),None),
   'x87_change':(header.replace('movups %%xmm2, 48(%[out])','movups %%xmm2, 48(%[out])\\n\\tfldz',1),None),
  }
  for name,(h,anchor) in changes.items():
   assert h!=header;md=td/name;md.mkdir();(md/'bf_002337a0_ordered_matrix_operation.h').write_text(h);ss=md/'source.cpp';ss.write_bytes(source)
   exe=md/'negative';run(common+['-O2',str(model if anchor else native),str(ss),'-o',str(exe)])
   bad=run([str(exe)]+([str(td/(anchor+'.bin'))] if anchor else []),ok=False);assert bad.returncode in (1,-11),bad.stderr
   if anchor:assert bad.returncode==1 and 'FAIL case=0' in bad.stderr,bad.stderr
   negatives+=1;asm=md/'negative.s';run(common+['-O2','-S',str(ss),'-o',str(asm)]);rejected(codegen_check,asm.read_text(),expected)
   print('Rejected behavior/codegen:',name,flush=True)
  md=td/'return';md.mkdir();ss=md/'source.cpp';ss.write_bytes(source.replace(b'return param_1;',b'return param_1 + 1;'));exe=md/'negative';run(common+['-O2',str(model),str(ss),'-o',str(exe)]);bad=run([str(exe),str(td/'ordered_finite.bin')],ok=False);assert 'return=bad' in bad.stderr;negatives+=1
  oracle=native.read_text();assert 'fxrstor (%rsp)\\n' in oracle;ss=td/'capture_bad.cpp';ss.write_text(oracle.replace('fxrstor (%rsp)\\n','',1));exe=td/'capture_bad';run(common+['-O2',str(ss),str(src),'-o',str(exe)]);bad=run([str(exe)],ok=False);assert 'caller-state restoration failed' in bad.stderr;negatives+=1
  if a.sanitizers:
   g=shutil.which('g++');assert g
   for protection in ['default','branch','full']:
    gcc=[g]+common[1:]+([] if protection=='default' else ['-fcf-protection='+protection])
    asm=td/('gcc-'+protection+'.s');run(gcc+['-O2','-S',str(src),'-o',str(asm)])
    assembly=asm.read_text()
    if protection!='default':assert len(re.findall(r'(?m)^\s*endbr64\s*$',assembly))==1
    entry_marker_controls(assembly,expected,rejected)
    print('GCC exact 71-SSE event graph/native transport:',protection,'-O2',flush=True)
    for test in [native,model]:
     exe=td/(test.stem+'-san-'+protection);run(gcc+['-O2','-fsanitize=address,undefined','-fno-omit-frame-pointer','-fno-pie','-no-pie',str(test),str(src),'-o',str(exe)])
     for fixture in fixtures if test==model else [None]:
      print('GCC ASan+UBSan '+protection+':',run(['env','ASAN_OPTIONS=detect_leaks=0:halt_on_error=1','UBSAN_OPTIONS=halt_on_error=1',str(exe)]+([str(fixture)] if fixture else [])).stdout.strip(),flush=True)
 print('Exact source reversal and',negatives,'negative controls passed; bounded native operation only',flush=True)
if __name__=='__main__':main()
