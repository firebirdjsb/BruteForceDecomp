#!/usr/bin/env python3
"""Audit canonical 003759c0 source and bounded native operation artifacts."""
import argparse,copy,hashlib,json,pathlib,re,shutil,struct,subprocess,tempfile
from source_layout import source_path
MANIFEST_SHA='9b9c8e3a54ddc44d66a65ee8f6599ec18f4caad4ff75dae785c5cc32ae33448b'
PROGRAM_RECORD_SHA='6d19749d1da0e13646d4c7b340a7296c768019fba9653cfc4955d3bb14c36c3f'
BODY_SHA='8D9A9D11F07D18B9B216AB210508D8F0E36AF65D001346642B3F9B5FF5D914FA'
SIGNATURE=b'void FUN_003759c0(undefined8 *param_1,float *param_2,float param_3,float *param_4)'
INCLUDE=b'#include "bf_003759c0_four_term_operation.h"\n'
WINDOWS={'0x003759c0':'8b4424088b4c2410','0x003759d0':'0f5911','0x003759e0':'0f58d1','0x00375a01':'0f5949300f58d1','0x00375a08':'0f13100fc6d202f30f115008','0x00375a14':'c21000'}
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed'
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['0x003759c0.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def window_check(w):assert len(w)==len(WINDOWS) and {x['va']:x['bytes'] for x in w}==WINDOWS

def record_check(r):
 assert sha(json.dumps(r,sort_keys=True,separators=(',',':')).encode())==PROGRAM_RECORD_SHA
 assert r['entry']=='003759c0' and r['body_byte_count']==87 and r['instruction_count']==22
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==87 and b['length']==87
 assert len(r['instructions'])==22 and not r['is_thunk'] and r['name']=='FUN_003759c0'
 assert int(b['start'],16)==0x3759c0 and int(b['end_inclusive'],16)==0x375a16
 cursor=0x3759c0;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor and not i['flows']
  last=cursor+i['length']==0x375a17
  assert i['flow_type']==('TERMINATOR' if last else 'FALL_THROUGH')
  assert i['fallthrough']==(None if last else f"{cursor+i['length']:08x}")
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x375a17
 for va,data in WINDOWS.items():
  off=int(va,16)-0x3759c0;chunk=bytes.fromhex(data);assert raw[off:off+len(chunk)]==chunk
 return raw

def codegen_check(assembly):
 assert not re.search(r'^\s*(?:callq?|jmp)\s',assembly,re.M),'call/tail-call forbidden'
 apps=re.findall(r'#APP(.*?)#NO_APP',assembly,re.S);assert len(apps)==1
 lines=[line.split('#')[0].strip() for line in apps[0].splitlines() if line.split('#')[0].strip()]
 ops=[line.split()[0] for line in lines]
 assert ops==['movss','shufps','mulps','movss','shufps','mulps','addps','movss','shufps','mulps','addps','movss','shufps','mulps','addps','movlps','shufps','movss'],ops
 def norm(s):return re.sub(r'\s+','',s)
 args=[norm(line[len(op):]) for line,op in zip(lines,ops)]
 scalar=re.fullmatch(r'(-?[0-9]+\(%r(?:sp|bp)\)),%xmm1',args[11]);assert scalar
 v=re.fullmatch(r'\((%[a-z0-9]+)\),%xmm2',args[0]);r=re.fullmatch(r'\((%[a-z0-9]+)\),%xmm2',args[2]);d=re.fullmatch(r'%xmm2,\((%[a-z0-9]+)\)',args[15]);assert v and r and d
 vr,rr,dr=v[1],r[1],d[1]
 assert args==[f'({vr}),%xmm2','$0,%xmm2,%xmm2',f'({rr}),%xmm2',f'4({vr}),%xmm1','$0,%xmm1,%xmm1',f'16({rr}),%xmm1','%xmm1,%xmm2',f'8({vr}),%xmm1','$0,%xmm1,%xmm1',f'32({rr}),%xmm1','%xmm1,%xmm2',f'{scalar[1]},%xmm1','$0,%xmm1,%xmm1',f'48({rr}),%xmm1','%xmm1,%xmm2',f'%xmm2,({dr})','$2,%xmm2,%xmm2',f'%xmm2,8({dr})'],args
 before,after=re.split(r'#APP.*?#NO_APP',assembly,flags=re.S);outside=before+after
 returns=re.findall(r'^\s+(ret[a-z]*)([^\n]*)$',outside,re.M)
 assert [(op,arg.split('#')[0].strip()) for op,arg in returns]==[('retq','')],returns
 # Trace complete allowed native transport, including integer stack writes.
 # Byte-level symbolic storage detects any overlap with the scalar spill;
 # symbolic stack offsets detect altered bases or incorrect argument pointers.
 registers={'%rdi':'destination','%rsi':'vector','%rdx':'rows','%rbp':'saved_rbp','%rsp':('stack',0),'%xmm0':'scalar'}
 memory={};pushes=0;pops=0
 def mem_address(operand):
  match=re.fullmatch(r'(-?[0-9]*)\(%r(sp|bp)\)',operand);assert match,operand
  base=registers.get('%r'+match[2]);assert isinstance(base,tuple) and base[0]=='stack',operand
  return base[1]+int(match[1] or '0')
 def read_mem(address,width):
  cells=[memory.get(address+i) for i in range(width)]
  assert cells[0] is not None and all(cells[i]==(cells[0][0],i) for i in range(width)),('uninitialized/overwritten stack value',address,width,cells)
  return cells[0][0]
 def write_mem(address,width,value):
  for i in range(width):memory[address+i]=(value,i)
 for region,prior in ((before,True),(after,False)):
  for line in region.splitlines():
   match=re.match(r'^\s+([a-z0-9]+)\s*(.*)',line)
   if not match:continue
   op,arg=match.groups();arg=norm(arg.split('#')[0])
   if op=='pushq':
    assert prior and arg=='%rbp' and pushes==0
    registers['%rsp']=('stack',registers['%rsp'][1]-8);write_mem(registers['%rsp'][1],8,registers['%rbp']);pushes+=1
   elif op=='popq':
    assert not prior and arg=='%rbp' and pops==0
    registers['%rbp']=read_mem(registers['%rsp'][1],8);registers['%rsp']=('stack',registers['%rsp'][1]+8);pops+=1
   elif op=='retq':
    assert not prior and not arg and registers['%rsp']==('stack',0) and registers['%rbp']=='saved_rbp'
   elif op in ('movq','movss'):
    assert prior
    operands=arg.split(',');assert len(operands)==2
    src,dst=operands;width=8 if op=='movq' else 4
    if op=='movss':
     assert (src=='%xmm0') != (dst=='%xmm0')
    else:
     assert not any('%'+r in arg for r in ('xmm','ymm','zmm','mm'))
    if src.startswith('%'):
     assert src in registers,(line,registers);value=registers[src]
    else:value=read_mem(mem_address(src),width)
    if op=='movss':assert value=='scalar',line
    if dst.startswith('%'):
     assert dst in ('%rax','%rcx','%rdx','%rdi','%rsi','%r8','%r9','%r10','%r11','%rbp','%xmm0'),line
     assert dst!='%rbp' or src=='%rsp',line
     assert (op=='movss') == (dst=='%xmm0'),line
     registers[dst]=value
    else:
     address=mem_address(dst);stack=registers["%rsp"][1]
     assert stack-128<=address and address+width<=stack,"write outside private SysV red zone"
     write_mem(address,width,value)
   else:raise AssertionError('unexpected native wrapper operation: '+line)
  if prior:
   assert registers.get(dr)=='destination' and registers.get(rr)=='rows' and registers.get(vr)=='vector','wrong argument transport'
   assert read_mem(mem_address(scalar[1]),4)=='scalar','packed scalar load lacks initialized input'
 assert pushes==pops

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--program-record',type=pathlib.Path);ap.add_argument('--sanitizers',action='store_true');a=ap.parse_args();a.root=a.root.resolve()
 paths={
  '0x003759c0.cpp':source_path(a.root,'0x003759c0'),
  'bf_003759c0_four_term_operation.h':a.root/'include/bf_003759c0_four_term_operation.h',
  'native_test.cpp':a.root/'tests/test_003759c0_four_term_operation.cpp',
  'model_test.cpp':a.root/'tests/test_003759c0_four_term_integer_model.cpp',
  'generate_model.py':a.root/'tests/generate_003759c0_four_term_integer_model.py',
  'rational_generate.py':a.root/'tests/generate_003759c0_four_term_rational_model.py',
  'rational_test.cpp':a.root/'tests/test_003759c0_four_term_rational_model.cpp',
  'integer_primitives.py':a.root/'tests/generate_002b3e60_multiply_add_integer_model.py',
  'source_before.cpp.txt':a.root/'tests/fixtures/003759c0_before.cpp.txt',
  'README.md':a.root/'docs/evidence/003759c0_four_term_operation.md',
 }
 assert paths['0x003759c0.cpp'].relative_to(a.root)==pathlib.Path('src/platform/graphics_d3d/0x003759c0.cpp'),'unapproved alias route'
 assert list((a.root/'src').rglob('0x003759c0.cpp'))==[paths['0x003759c0.cpp']],'duplicate or noncanonical source'
 mb=(a.root/'metadata/cpp_20261105_003759c0_four_term_operation.json').read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 assert set(m['artifacts'])==set(paths)-{'source_before.cpp.txt'}
 for name,digest in m['artifacts'].items():assert sha(paths[name].read_bytes())==digest,name
 source=paths['0x003759c0.cpp'].read_bytes();before=paths['source_before.cpp.txt'].read_bytes();header=paths['bf_003759c0_four_term_operation.h'].read_text()
 source_check(source,before,m);window_check(m['narrow_opcode_windows']);negatives=0
 def rejected(fn,*args):
  nonlocal negatives
  try:fn(*args)
  except AssertionError:negatives+=1
  else:raise AssertionError('mutation unexpectedly accepted')
 for bs,bb in [(source+b' ',before),(source,before+b' ')]:rejected(source_check,bs,bb,m)
 for n,w in enumerate(m['narrow_opcode_windows']):
  for idx in range(len(bytes.fromhex(w['bytes']))):
   bad=copy.deepcopy(m['narrow_opcode_windows']);raw=bytearray.fromhex(w['bytes']);raw[idx]^=1;bad[n]['bytes']=raw.hex();rejected(window_check,bad)
 if a.program_record:
  r=json.loads(a.program_record.read_text());raw=record_check(r)
  for idx in range(len(raw)):
   bad=copy.deepcopy(r);b=bytearray(raw);b[idx]^=1;bad['body_ranges'][0]['bytes_hex']=b.hex();rejected(record_check,bad)
  fields={'mnemonic':'NOP','operands':[],'text':'corrupt','flow_type':'COMPUTED_JUMP','flows':['00000000'],'fallthrough':'00000000','flow_override':'CALL','is_length_overridden':True,'is_fallthrough_overridden':True,'parsed_length':0,'length':0,'address':'00000000','bytes_hex':'90'}
  for idx in range(len(r['instructions'])):
   for field,value in fields.items():
    bad=copy.deepcopy(r);assert bad['instructions'][idx][field]!=value;bad['instructions'][idx][field]=value;rejected(record_check,bad)
  print('Private body: 87 hash-matched bytes; not whole-XBE authentication',flush=True)
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(a.root/'include')]
 with tempfile.TemporaryDirectory(prefix='bf-3759c0-gate-') as td:
  td=pathlib.Path(td);fixture=td/'model.bin';rational=td/'rational.bin'
  print(run(['python3',str(paths['generate_model.py']),str(fixture)]).stdout.strip(),flush=True)
  print(run(['python3',str(paths['rational_generate.py']),str(rational)]).stdout.strip(),flush=True)
  import sys
  sys.path.insert(0,str(paths['generate_model.py'].parent))
  from generate_003759c0_four_term_integer_model import NAMED_ANCHORS,record
  for name,(coeff,rows) in NAMED_ANCHORS.items():(td/(name+'.bin')).write_bytes(record(coeff,rows,0x1f80))
  for opt in ['-O0','-O2']:
   assembly=td/(opt+'.s');run(common+[opt,'-S',str(paths['0x003759c0.cpp']),'-o',str(assembly)]);codegen_check(assembly.read_text());print('Exact eighteen-operation codegen and initialized scalar:',opt,flush=True)
   for extra in ['\tfldz\n','\taddss %xmm1,%xmm2\n','\tcallq helper\n','\tmovups (%rdi),%xmm0\n','\tmovq %rdi,%rbx\n']:
    rejected(codegen_check,assembly.read_text()+'\n'+extra)
   for replacement in ['', '\tretq $16\n']:
    altered,count=re.subn(r'^\s+retq[ \t]*$',replacement,assembly.read_text(),flags=re.M);assert count==1;rejected(codegen_check,altered)
   altered,count=re.subn(r'^\s+movss\s+%xmm0, -?[0-9]+\(%r(?:sp|bp)\)[^\n]*$', '',assembly.read_text(),count=1,flags=re.M);assert count==1;rejected(codegen_check,altered)
   for injected in ['\tmovl $0,-4(%rsp)\n','\taddq $16,%rsp\n','\tmovq %rdi,-4(%rsp)\n','\tmovq %rdi,(%rsp)\n','\tmovq %rdi,8(%rsp)\n','\tmovq %rdi,%r12\n']:
    rejected(codegen_check,assembly.read_text().replace('\t#APP',injected+'\t#APP',1))
   for test in ['native_test','model_test','rational_test']:
    exe=td/(test+opt);run(common+[opt,str(paths[test+'.cpp']),str(paths['0x003759c0.cpp']),'-o',str(exe)]);args=[str(exe)]+([str(fixture)] if test=='model_test' else [str(rational)] if test=='rational_test' else []);print(run(args).stdout.strip(),flush=True)
    if test=='model_test':
     for name in NAMED_ANCHORS:print(name+':',run([str(exe),str(td/(name+'.bin')),'--single-anchor']).stdout.strip(),flush=True)
   bad=run(common+[opt,'-x','c++','-fsyntax-only','-'],ok=False,stdin=before.decode());assert 'CONCAT requires integral bytes' in bad.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native SSE'),(['-U__SSE__'],'requires GNU/Clang x86-64 Linux SysV native SSE')]:
   bad=run(common+flags+['-x','c++','-fsyntax-only','-'],ok=False,stdin='#include "bf_003759c0_four_term_operation.h"\n');assert marker in bad.stderr;negatives+=1
  changes={
   'wrong_vector_pointer':header.replace('0(%[vector])','0(%[rows])',1),
   'wrong_store_pointer':header.replace('%%xmm2, 0(%[destination])','%%xmm2, 0(%[vector])',1),
   'missing_first_product':header.replace('mulps 0(%[rows]), %%xmm2','movaps 0(%[rows]), %%xmm2',1),
   'missing_second_product':header.replace('mulps 16(%[rows]), %%xmm1','movaps 16(%[rows]), %%xmm1',1),
   'missing_third_product':header.replace('mulps 32(%[rows]), %%xmm1','movaps 32(%[rows]), %%xmm1',1),
   'missing_fourth_product':header.replace('mulps 48(%[rows]), %%xmm1','movaps 48(%[rows]), %%xmm1',1),
   'missing_add':header.replace('addps %%xmm1, %%xmm2','movaps %%xmm1, %%xmm2',1),
   'multiply_nan_priority':header.replace('mulps 0(%[rows]), %%xmm2','movaps 0(%[rows]), %%xmm0\\n\\tmulps %%xmm2, %%xmm0\\n\\tmovaps %%xmm0, %%xmm2',1).replace(': "xmm1",',': "xmm0", "xmm1",',1),
   'fourth_scalar_qnan':header.replace('mulps 48(%[rows]), %%xmm1','movaps 48(%[rows]), %%xmm0\\n\\tmulps %%xmm1, %%xmm0\\n\\tmovaps %%xmm0, %%xmm1',1).replace(': "xmm1",',': "xmm0", "xmm1",',1),
   'add_nan_priority':header.replace('addps %%xmm1, %%xmm2','addps %%xmm2, %%xmm1\\n\\tmovaps %%xmm1, %%xmm2',1),
   'left_association':header.replace('addps %%xmm1, %%xmm2','movaps %%xmm1, %%xmm3',1).replace('addps %%xmm1, %%xmm2','addps %%xmm1, %%xmm3\\n\\taddps %%xmm3, %%xmm2',1).replace(': "xmm1",',': "xmm3", "xmm1",',1),
   'wrong_broadcast':header.replace('shufps $0,','shufps $85,',1),
   'wrong_output_lane':header.replace('shufps $2,','shufps $0,',1),
   'wide_read':header.replace('movss 0(%[vector]), %%xmm2','movups 0(%[vector]), %%xmm2\\n\\tmovss 0(%[vector]), %%xmm2',1),
   'wide_store':header.replace('movlps %%xmm2, 0(%[destination])','movups %%xmm2, 0(%[destination])',1),
   'early_store':header.replace('mulps 0(%[rows]), %%xmm2','mulps 0(%[rows]), %%xmm2\\n\\tmovlps %%xmm2, 0(%[destination])',1),
   'hidden_invalid':header.replace('    __asm__ volatile(', '    alignas(16) const unsigned mask[4]={0xffffffffu,0xffffffffu,0xffffffffu,0};\n    __asm__ volatile(',1).replace('mulps 48(%[rows]), %%xmm1','movaps 48(%[rows]), %%xmm0\\n\\tandps %[mask], %%xmm0\\n\\tmulps %%xmm0, %%xmm1',1).replace('[rows] "r"(rows)','[rows] "r"(rows), [mask] "m"(mask)',1).replace(': "xmm1",',': "xmm0", "xmm1",',1),
   'nonfused_cancellation':'#include <cmath>\n'+header[:header.index('    __asm__ volatile(')]+'''    float coeff[4]={vector[0],vector[1],vector[2],scalar}, result[4];
    for(unsigned lane=0;lane<4;++lane){result[lane]=coeff[0]*rows[lane];for(unsigned j=1;j<4;++j)result[lane]=std::fma(coeff[j],rows[4*j+lane],result[lane]);}
    __builtin_memcpy(destination,result,12);
}
#endif
''',
  }
  for name,h in changes.items():
   assert h!=header;md=td/name;md.mkdir();(md/'bf_003759c0_four_term_operation.h').write_text(h);(md/'0x003759c0.cpp').write_bytes(source)
   test='model_test' if name in NAMED_ANCHORS else 'native_test';(md/(test+'.cpp')).write_bytes(paths[test+'.cpp'].read_bytes())
   exe=md/'negative';run(common+['-O2',str(md/(test+'.cpp')),str(md/'0x003759c0.cpp'),'-o',str(exe)])
   args=[str(exe)]+([str(td/(name+'.bin')),'--single-anchor'] if name in NAMED_ANCHORS else []);bad=run(args,ok=False);assert bad.returncode in (1,2,-11),bad.stdout+bad.stderr;negatives+=1
   if name in NAMED_ANCHORS:assert bad.returncode==1 and 'FAIL case=0' in bad.stderr,bad.stdout+bad.stderr
   assembly=md/'negative.s';run(common+['-O2','-S',str(md/'0x003759c0.cpp'),'-o',str(assembly)]);rejected(codegen_check,assembly.read_text())
   print('Rejected behavior/codegen mutation:',name,flush=True)
  md=td/'capture_restore';md.mkdir();oracle=paths['native_test.cpp'].read_text();assert 'fxrstor (%rsp)\\n' in oracle
  (md/'native_test.cpp').write_text(oracle.replace('fxrstor (%rsp)\\n','',1));(md/'0x003759c0.cpp').write_bytes(source);(md/'bf_003759c0_four_term_operation.h').write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'native_test.cpp'),str(md/'0x003759c0.cpp'),'-o',str(exe)]);bad=run([str(exe)],ok=False);assert 'caller-state restoration failed' in bad.stderr;negatives+=1
  if a.sanitizers:
   g=shutil.which('g++');assert g
   for test in ['native_test','model_test','rational_test']:
    exe=td/(test+'-san');run([g]+common[1:]+['-O2','-fsanitize=address,undefined','-fno-omit-frame-pointer','-fno-pie','-no-pie',str(paths[test+'.cpp']),str(paths['0x003759c0.cpp']),'-o',str(exe)])
    args=['env','ASAN_OPTIONS=detect_leaks=0:halt_on_error=1','UBSAN_OPTIONS=halt_on_error=1',str(exe)]+([str(fixture)] if test=='model_test' else [str(rational)] if test=='rational_test' else []);print('GCC ASan+UBSan:',run(args).stdout.strip(),flush=True)
 print('Exact source reversal and',negatives,'negative controls passed')
 print('Bounded native memory operation only; guest ABI/stack aliasing/fault/original-CPU limits remain')
if __name__=='__main__':main()
