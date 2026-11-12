#!/usr/bin/env python3
"""Canonical 002ccc10 source, native-operation and bounded conformance gate."""
import argparse,copy,hashlib,json,pathlib,re,shutil,struct,subprocess,tempfile,sys
from source_layout import source_path
MANIFEST_SHA='cebfca36d661a7f4b14886e5d1db1aaf9d751d6a7fb1990b19523d96171b59c3'
PROGRAM_RECORD_SHA='d5726e0f50c3f6cea4fbe8c1103cb6bd595213b01a7293d2c43ef9d1cbdd6c5c'
BODY_SHA='75A9A41869FF7B7C222C6F80344F3B6D42D3271ECBF3C1924643EBC9EBF61C05'
SIGNATURE=b'void FUN_002ccc10(float *param_1,float *param_2,float *param_3,float *param_4)'
INCLUDE=b'#include "bf_002ccc10_difference_products_operation.h"\n'
WINDOWS={'0x002ccc1d':'f30f1018','0x002ccc39':'0f5ccb','0x002ccc40':'0f5cd3','0x002ccc46':'0fc6c032','0x002ccc4a':'0fc6d283','0x002ccc4e':'0f59c2','0x002ccc55':'0fc6d283','0x002ccc59':'0f59ca','0x002ccc60':'0f5cc1','0x002ccc63':'f30f11000f174004','0x002ccc6b':'59c21000'}
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 assert (p.returncode==0)==ok,p.stdout+p.stderr
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['source'] and sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def window_check(w):assert len(w)==len(WINDOWS) and {x['va']:x['bytes'] for x in w}==WINDOWS

def record_check(r):
 assert sha(json.dumps(r,sort_keys=True,separators=(',',':')).encode())==PROGRAM_RECORD_SHA
 assert r['entry']=='002ccc10' and r['body_byte_count']==95 and r['instruction_count']==27
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==95 and b['length']==95
 assert len(r['instructions'])==27 and not r['is_thunk'] and r['name']=='FUN_002ccc10'
 assert int(b['start'],16)==0x2ccc10 and int(b['end_inclusive'],16)==0x2ccc6e
 cursor=0x2ccc10;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor and not i['flows']
  last=cursor+i['length']==0x2ccc6f
  assert i['flow_type']==('TERMINATOR' if last else 'FALL_THROUGH')
  assert i['fallthrough']==(None if last else f'{cursor+i["length"]:08x}')
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x2ccc6f
 for va,data in WINDOWS.items():
  off=int(va,16)-0x2ccc10;chunk=bytes.fromhex(data);assert raw[off:off+len(chunk)]==chunk
 return raw

def codegen_check(assembly):
 assert not re.search(r'^\s*(?:callq?|jmp)\s',assembly,re.M),'call/tail-call forbidden'
 apps=re.findall(r'#APP(.*?)#NO_APP',assembly,re.S);assert len(apps)==1
 lines=[line.split('#')[0].strip() for line in apps[0].splitlines() if line.split('#')[0].strip()]
 ops=[line.split()[0] for line in lines]
 assert ops==['movss','movhps','movss','movhps','movss','subps','movhps','subps','movaps','shufps','shufps','mulps','shufps','shufps','mulps','subps','movss','movhps'],ops
 def norm(s):return re.sub(r'\s+','',s)
 args=[norm(line[len(op):]) for line,op in zip(lines,ops)]
 patterns=[(0,r'\((%[a-z0-9]+)\),%xmm3'),(2,r'\((%[a-z0-9]+)\),%xmm1'),(4,r'\((%[a-z0-9]+)\),%xmm2'),(16,r'%xmm0,\((%[a-z0-9]+)\)')]
 matches=[re.fullmatch(pattern,args[i]) for i,pattern in patterns];assert all(matches)
 br,fr,tr,dr=[x[1] for x in matches]
 assert args==[f'({br}),%xmm3',f'4({br}),%xmm3',f'({fr}),%xmm1',f'4({fr}),%xmm1',f'({tr}),%xmm2','%xmm3,%xmm1',f'4({tr}),%xmm2','%xmm3,%xmm2','%xmm1,%xmm0','$50,%xmm0,%xmm0','$131,%xmm2,%xmm2','%xmm2,%xmm0','$131,%xmm1,%xmm1','$131,%xmm2,%xmm2','%xmm2,%xmm1','%xmm1,%xmm0',f'%xmm0,({dr})',f'%xmm0,4({dr})'],args
 before,after=re.split(r'#APP.*?#NO_APP',assembly,flags=re.S);outside=before+after
 returns=re.findall(r'^\s+(ret[a-z]*)([^\n]*)$',outside,re.M)
 assert [(op,arg.split('#')[0].strip()) for op,arg in returns]==[('retq','')],returns
 registers={'%rdi':'destination','%rsi':'base','%rdx':'third','%rcx':'fourth','%rbp':'saved_rbp','%rsp':('stack',0)}
 memory={};pushes=0;pops=0
 def mem_address(operand):
  match=re.fullmatch(r'(-?[0-9]*)\(%r(sp|bp)\)',operand);assert match,operand
  base=registers.get('%r'+match[2]);assert isinstance(base,tuple) and base[0]=='stack',operand
  return base[1]+int(match[1] or '0')
 def read_mem(address):
  cells=[memory.get(address+i) for i in range(8)]
  assert cells[0] is not None and all(cells[i]==(cells[0][0],i) for i in range(8)),('uninitialized/overwritten stack pointer',address,cells)
  return cells[0][0]
 def write_mem(address,value):
  for i in range(8):memory[address+i]=(value,i)
 for region,prior in ((before,True),(after,False)):
  for line in region.splitlines():
   match=re.match(r'^\s+([a-z0-9]+)\s*(.*)',line)
   if not match:continue
   op,arg=match.groups();arg=norm(arg.split('#')[0])
   if op=='pushq':
    assert prior and arg=='%rbp' and pushes==0
    registers['%rsp']=('stack',registers['%rsp'][1]-8);write_mem(registers['%rsp'][1],registers['%rbp']);pushes+=1
   elif op=='popq':
    assert not prior and arg=='%rbp' and pops==0
    registers['%rbp']=read_mem(registers['%rsp'][1]);registers['%rsp']=('stack',registers['%rsp'][1]+8);pops+=1
   elif op=='retq':assert not prior and not arg and registers['%rsp']==('stack',0) and registers['%rbp']=='saved_rbp'
   elif op=='movq':
    assert prior
    src,dst=arg.split(',')
    if src.startswith('%'):
     assert src in registers,(line,registers);value=registers[src]
    else:value=read_mem(mem_address(src))
    if dst.startswith('%'):
     assert dst in ('%rax','%rcx','%rdx','%rdi','%rsi','%r8','%r9','%r10','%r11','%rbp'),line
     assert dst!='%rbp' or src=='%rsp',line
     registers[dst]=value
    else:
     address=mem_address(dst);stack=registers['%rsp'][1]
     assert stack-128<=address and address+8<=stack,'write outside private SysV red zone'
     write_mem(address,value)
   else:raise AssertionError('unexpected native wrapper operation: '+line)
  if prior:assert [registers.get(r) for r in [dr,br,tr,fr]]==['destination','base','third','fourth'],'wrong native argument transport'
 assert pushes==pops

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--program-record',type=pathlib.Path);ap.add_argument('--sanitizers',action='store_true');ap.add_argument('--fixture',type=pathlib.Path);a=ap.parse_args();a.root=a.root.resolve()
 paths={'source':source_path(a.root,'0x002ccc10'),'header':a.root/'include/bf_002ccc10_difference_products_operation.h','native':a.root/'tests/test_002ccc10_difference_products_operation.cpp','model':a.root/'tests/test_002ccc10_difference_products_integer_model.cpp','generator':a.root/'tests/generate_002ccc10_difference_products_integer_model.py','primitives':a.root/'tests/generate_002b3e60_multiply_add_integer_model.py','notes':a.root/'docs/evidence/002ccc10_difference_products_operation.md'}
 assert paths['source'].relative_to(a.root)==pathlib.Path('src/main_unclassified/band_002c/0x002ccc10.cpp'),'unapproved alias route'
 assert list((a.root/'src').rglob('0x002ccc10.cpp'))==[paths['source']],'duplicate or noncanonical source'
 mb=(a.root/'metadata/cpp_20261105_002ccc10_difference_products_operation.json').read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 assert set(m['artifacts'])==set(paths)
 for name,digest in m['artifacts'].items():assert sha(paths[name].read_bytes())==digest,name
 source=paths['source'].read_bytes();before=(a.root/'tests/fixtures/002ccc10_before.cpp.txt').read_bytes();header=paths['header'].read_text()
 source_check(source,before,m);window_check(m['narrow_opcode_windows']);negatives=0
 def reject(fn,*args):
  nonlocal negatives
  try:fn(*args)
  except (AssertionError,ValueError):negatives+=1
  else:raise AssertionError('negative control accepted')
 reject(source_check,source+b' ',before,m);reject(source_check,source,before+b' ',m)
 for n,w in enumerate(m['narrow_opcode_windows']):
  for idx in range(len(bytes.fromhex(w['bytes']))):
   bad=copy.deepcopy(m['narrow_opcode_windows']);raw=bytearray.fromhex(w['bytes']);raw[idx]^=1;bad[n]['bytes']=raw.hex();reject(window_check,bad)
 if a.program_record:
  r=json.loads(a.program_record.read_text());raw=record_check(r)
  for idx in range(len(raw)):
   bad=copy.deepcopy(r);b=bytearray(raw);b[idx]^=1;bad['body_ranges'][0]['bytes_hex']=b.hex();reject(record_check,bad)
  fields={'mnemonic':'NOP','operands':[],'text':'corrupt','flow_type':'COMPUTED_JUMP','flows':['00000000'],'fallthrough':'00000000','flow_override':'CALL','is_length_overridden':True,'is_fallthrough_overridden':True,'parsed_length':0,'length':0,'address':'00000000','bytes_hex':'90'}
  for idx in range(len(r['instructions'])):
   for field,value in fields.items():
    bad=copy.deepcopy(r);assert bad['instructions'][idx][field]!=value;bad['instructions'][idx][field]=value;reject(record_check,bad)
  print('Private body: 95 hash-matched bytes; not whole-XBE authentication',flush=True)
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(a.root/'include')]
 with tempfile.TemporaryDirectory(prefix='bf-2ccc10-gate-') as td:
  td=pathlib.Path(td);fixture=a.fixture.resolve() if a.fixture else td/'model.bin'
  if not a.fixture:print(run(['python3',str(paths['generator']),str(fixture)]).stdout.strip(),flush=True)
  assert sha(fixture.read_bytes())==m['model_fixture_sha256'],'fixture corruption'
  # Fixed independent expected words, not obtained by invoking the generator.
  anchors={
   'hidden_first':(0x1f80,0,0,0,0,0x3f800000,0x3f800000,0x7f800000,0,0,0,0xff800000,0x7f800000,0x1f81),
   'hidden_final':(0x1f80,0,0,0,*([0x3f800000]*3),0x7f800000,0x3f800000,0x3f800000,0,0xff800000,0x7f800000,0x1f81),
   'hidden_overflow':(0x1f80,0,0,0,0x7f7fffff,0,0,0x7f7fffff,0,0,0,0,0,0x1fa8),
   'nonfused':(0x1f80,0,0,0,0x3f800000,0x3f7ffffe,0,0x3f800001,0x3f800000,0,0,0,0,0x1fa0),
  }
  for name,record in anchors.items():(td/(name+'.bin')).write_bytes(struct.pack('<14I',*record))
  for opt in ['-O0','-O2']:
   assembly=td/(opt+'.s');run(common+[opt,'-S',str(paths['source']),'-o',str(assembly)]);text=assembly.read_text();codegen_check(text)
   print('Exact eighteen-operation codegen and four initialized pointers:',opt,flush=True)
   for extra in ['\tfldz\n','\taddss %xmm1,%xmm2\n','\tcallq helper\n','\tmovups (%rdi),%xmm0\n']:reject(codegen_check,text+'\n'+extra)
   for replacement in ['', '\tretq $16\n']:
    altered,count=re.subn(r'^\s+retq[ \t]*$',replacement,text,flags=re.M);assert count==1;reject(codegen_check,altered)
   for injected in ['\tmovl $0, -4(%rsp)\n','\taddq $16, %rsp\n','\tmovq %rdi, (%rsp)\n','\tmovq %rdi, 8(%rsp)\n','\tmovq %rdi, %rbx\n','\tmovq %rdi, %r12\n']:reject(codegen_check,text.replace('\t#APP',injected+'\t#APP',1))
   if opt=='-O0':
    altered,count=re.subn(r'^\s+movq\s+%rdi, -?[0-9]+\(%rbp\)[^\n]*$', '',text,count=1,flags=re.M);assert count==1;reject(codegen_check,altered)
   # Preserve the exact arithmetic while corrupting one pointer's transport.
   for register in ['%rsi','%rdx','%rcx']:
    reject(codegen_check,text.replace('# %bb.0:',f'# %bb.0:\n\tmovq %rdi, {register}',1))
   for test in ['native','model']:
    exe=td/(test+opt);run(common+[opt,str(paths[test]),str(paths['source']),'-o',str(exe)]);args=[str(exe)]+([str(fixture)] if test=='model' else []);print(run(args).stdout.strip(),flush=True)
    if test=='model':
     for name in anchors:print(name+':',run([str(exe),str(td/(name+'.bin')),'--single-anchor']).stdout.strip(),flush=True)
   bad=run(common+[opt,'-x','c++','-fsyntax-only','-'],False,before.decode());assert 'CONCAT requires integral bytes' in bad.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native SSE'),(['-U__SSE__'],'requires GNU/Clang x86-64 Linux SysV native SSE')]:
   bad=run(common+flags+['-x','c++','-fsyntax-only','-'],False,'#include "bf_002ccc10_difference_products_operation.h"\n');assert marker in bad.stderr;negatives+=1
  changes={
   'wrong_base':header.replace('0(%[base])','0(%[third])',1).replace('4(%[base])','4(%[third])',1),
   'wrong_store':header.replace('%%xmm0, 0(%[destination])','%%xmm0, 0(%[base])',1).replace('%%xmm0, 4(%[destination])','%%xmm0, 4(%[base])',1),
   'missing_first_sub':header.replace('subps %%xmm3, %%xmm1','movaps %%xmm3, %%xmm1',1),
   'missing_second_sub':header.replace('subps %%xmm3, %%xmm2','movaps %%xmm3, %%xmm2',1),
   'missing_first_mul':header.replace('mulps %%xmm2, %%xmm0','movaps %%xmm2, %%xmm0',1),
   'missing_second_mul':header.replace('mulps %%xmm2, %%xmm1','movaps %%xmm2, %%xmm1',1),
   'missing_final_sub':header.replace('subps %%xmm1, %%xmm0','movaps %%xmm1, %%xmm0',1),
   'wrong_shuffle32':header.replace('shufps $50,','shufps $51,',1),
   'wrong_shuffle83':header.replace('shufps $131,','shufps $130,',1),
   'reverse_final_sub':header.replace('subps %%xmm1, %%xmm0','subps %%xmm0, %%xmm1\\n\\tmovaps %%xmm1, %%xmm0',1),
   'reverse_first_mul':header.replace('mulps %%xmm2, %%xmm0','mulps %%xmm0, %%xmm2\\n\\tmovaps %%xmm2, %%xmm0',1),
   'incoming_lane':header.replace('movss 0(%[base]), %%xmm3','movss 0(%[base]), %%xmm0\\n\\tmovss %%xmm0, %%xmm3',1),
   'wide_read':header.replace('movss 0(%[base]), %%xmm3','movups 0(%[base]), %%xmm3\\n\\tmovss 0(%[base]), %%xmm3',1),
  }
  for name,target in [('hidden_first','mulps %%xmm2, %%xmm0'),('hidden_final','subps %%xmm1, %%xmm0')]:
   h=header.replace('    __asm__ volatile(', '    alignas(16) const unsigned lane_mask[4] = {0xffffffffu, 0u, 0xffffffffu, 0xffffffffu};\n    __asm__ volatile(',1)
   other='xmm2' if name=='hidden_first' else 'xmm1'
   h=h.replace(target,'andps %[lane_mask], %%xmm0\\n\\tandps %[lane_mask], %%'+other+'\\n\\t'+target,1).replace('[fourth] "r"(fourth)','[fourth] "r"(fourth), [lane_mask] "m"(lane_mask)',1);changes[name]=h
  prefix=header[:header.index('    __asm__ volatile(')]
  changes['nonfused']='#include <cmath>\n'+prefix+'    float u[3],v[3];\n    for(unsigned i=0;i<3;++i){u[i]=fourth[i]-base[i];v[i]=third[i]-base[i];}\n    for(unsigned i=0;i<3;++i){const unsigned j=(i+1)%3,k=(i+2)%3;const float right=u[k]*v[j];destination[i]=std::fma(u[j],v[k],-right);}\n}\n#endif\n'
  changes['interleaved_scalars']=prefix+'    for(unsigned i=0;i<3;++i){const unsigned j=(i+1)%3,k=(i+2)%3;const float uj=fourth[j]-base[j],vk=third[k]-base[k],uk=fourth[k]-base[k],vj=third[j]-base[j];destination[i]=uj*vk-uk*vj;}\n}\n#endif\n'
  for name,h in changes.items():
   assert h!=header;md=td/name;md.mkdir();(md/'bf_002ccc10_difference_products_operation.h').write_text(h);(md/'0x002ccc10.cpp').write_bytes(source)
   test='model' if name in ('hidden_first','hidden_final','nonfused') else 'native';(md/(test+'.cpp')).write_bytes(paths[test].read_bytes())
   exe=md/'negative';run(common+['-O2',str(md/(test+'.cpp')),str(md/'0x002ccc10.cpp'),'-o',str(exe)])
   args=[str(exe)]+([str(td/(name+'.bin')),'--single-anchor'] if test=='model' else [])
   bad=run(args,False);assert bad.returncode in (1,2,-11),bad.stdout+bad.stderr;negatives+=1
   if test=='model':assert bad.returncode==1 and 'FAIL case=0' in bad.stderr,bad.stdout+bad.stderr
   assembly=md/'negative.s';run(common+['-O2','-S',str(md/'0x002ccc10.cpp'),'-o',str(assembly)]);reject(codegen_check,assembly.read_text())
   print('Rejected behavior/codegen mutation:',name,flush=True)
  md=td/'capture_restore';md.mkdir();oracle=paths['native'].read_text();assert 'fxrstor (%rsp)\\n' in oracle
  (md/'native.cpp').write_text(oracle.replace('fxrstor (%rsp)\\n','',1));(md/'0x002ccc10.cpp').write_bytes(source);(md/'bf_002ccc10_difference_products_operation.h').write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'native.cpp'),str(md/'0x002ccc10.cpp'),'-o',str(exe)]);bad=run([str(exe)],False);assert 'caller-state restoration failed' in bad.stderr;negatives+=1
  if a.sanitizers:
   g=shutil.which('g++');assert g
   for test in ['native','model']:
    exe=td/(test+'-san');run([g]+common[1:]+['-O2','-fsanitize=address,undefined','-fno-omit-frame-pointer','-fno-pie','-no-pie',str(paths[test]),str(paths['source']),'-o',str(exe)])
    args=['env','ASAN_OPTIONS=detect_leaks=0:halt_on_error=1','UBSAN_OPTIONS=halt_on_error=1',str(exe)]+([str(fixture)] if test=='model' else []);print('GCC ASan+UBSan:',run(args).stdout.strip(),flush=True)
 print('Exact source reversal and',negatives,'negative controls passed',flush=True)
 print('Bounded native memory operation only; guest ABI/stack aliasing/fault/original-CPU limits remain')
if __name__=='__main__':main()
