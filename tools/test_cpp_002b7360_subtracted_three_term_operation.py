#!/usr/bin/env python3
"""Outside-tree 002b7360 operation gate; never executes original machine code."""
import argparse,copy,hashlib,json,pathlib,re,shutil,struct,subprocess,tempfile
MANIFEST_SHA='46b413c4f959939ec33965d0861d7b0403d381014b6480baa85d096bfb2bcf83'
BODY_SHA='8951BF145B71ABAD31FE514396FBA371A104DDBC96CD73C9B6406736AF29284B'
PROGRAM_RECORD_SHA='e69fb5ca9a9c56b3cc50815959370bd2e06b1e753399e9ab88e0b749821614c2'
BEFORE_SHA='1b187305a679e536e5641be07ac9476aaaa3d0c2685159a7089b3b363dcf2322'
SIGNATURE=b'void FUN_002b7360(float *param_1,float *param_2,float *param_3)'
INCLUDE=b'#include "bf_002b7360_subtracted_three_term_operation.h"\n'
CANONICAL_PATHS={'tests/generate_002b7360_subtract_rational_model.py': 'tests/generate_002b7360_subtract_rational_model.py', 'tests/test_002b7360_subtract_rational_model.cpp': 'tests/test_002b7360_subtract_rational_model.cpp', 'docs/SUGGESTED_CI.md': 'docs/evidence/002b7360_suggested_ci.md', 'src/0x002b7360.cpp': 'src/main_unclassified/band_002b/0x002b7360.cpp', 'include/bf_002b7360_subtracted_three_term_operation.h': 'include/bf_002b7360_subtracted_three_term_operation.h', 'metadata/manifest.json': 'metadata/cpp_20261105_002b7360_subtracted_three_term_operation.json', 'docs/PROPOSAL.md': 'docs/evidence/002b7360_subtracted_three_term_operation.md', 'tests/002b7360_before.cpp.txt': 'tests/fixtures/002b7360_before.cpp.txt', 'tests/native_test.cpp': 'tests/test_002b7360_subtracted_three_term_operation.cpp', 'tests/002b7360_integer_model_NOTES.md': 'docs/evidence/002b7360_integer_model_notes.md', 'tests/generate_002b7360_subtracted_three_term_integer_model.py': 'tests/generate_002b7360_subtracted_three_term_integer_model.py', 'tests/test_002b7360_subtracted_three_term_integer_model.cpp': 'tests/test_002b7360_subtracted_three_term_integer_model.cpp', 'tests/generate_002b7360_three_product_rational_model.py': 'tests/generate_002b7360_three_product_rational_model.py', 'tests/test_002b7360_three_product_rational_model.cpp': 'tests/test_002b7360_three_product_rational_model.cpp', 'tools/check_package.py': 'tools/test_cpp_002b7360_subtracted_three_term_operation.py'}
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed: '+str(args)
 return p

def source_check(source,before,m):
 assert sha(before)==BEFORE_SHA==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 expected=before[:before.index(b'{')]+b'{\n  bf_002b7360_subtracted_three_term_operation(param_1, param_2, param_3);\n}\n'
 expected=expected.replace(b'#include "bf_ghidra_types.h"\n',b'#include "bf_ghidra_types.h"\n'+INCLUDE,1)
 assert source==expected and sha(source)==m['artifacts']['src/0x002b7360.cpp']
 assert BODY_SHA.encode() in source

def record_check(r):
 assert sha(json.dumps(r,sort_keys=True,separators=(',',':')).encode())==PROGRAM_RECORD_SHA
 assert r['name']=='FUN_002b7360' and r['is_thunk'] is False
 assert r['entry']=='002b7360' and r['body_byte_count']==112 and r['instruction_count']==31
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==b['length']==112
 assert int(b['start'],16)==0x2b7360 and int(b['end_inclusive'],16)==0x2b73cf
 cursor=0x2b7360;joined=bytearray();assert len(r['instructions'])==31
 for i in r['instructions']:
  assert int(i['address'],16)==cursor
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
  assert not i['flows'] and i['flow_type']==('FALL_THROUGH' if cursor<0x2b73d0 else 'TERMINATOR')
  assert i['fallthrough']==(f'{cursor:08x}' if cursor<0x2b73d0 else None)
 assert bytes(joined)==raw and cursor==0x2b73d0
 return raw

def codegen_check(assembly):
 assert not re.search(r'^\s*(?:callq?|jmp)\s',assembly,re.M),'call/tail-call forbidden'
 apps=re.findall(r'#APP(.*?)#NO_APP',assembly,re.S);assert len(apps)==1
 lines=[line.split('#')[0].strip() for line in apps[0].splitlines() if line.split('#')[0].strip()]
 ops=[line.split()[0] for line in lines]
 assert ops==['movss','movhps','movss','movhps','movss','movhps','subps','movaps','shufps','movss','movhps','mulps','movaps','shufps','mulps','movss','movhps','shufps','addps','mulps','addps','movss','movhps'],ops
 def norm(s):return re.sub(r'\s+','',s)
 args=[norm(line[len(op):]) for line,op in zip(lines,ops)]
 v=re.fullmatch(r'\((%[a-z0-9]+)\),%xmm3',args[2]);m=re.fullmatch(r'48\((%[a-z0-9]+)\),%xmm1',args[0]);o=re.fullmatch(r'%xmm0,\((%[a-z0-9]+)\)',args[21]);assert v and m and o
 vr,mr,orr=v[1],m[1],o[1]
 assert args==[f'48({mr}),%xmm1',f'52({mr}),%xmm1',f'({vr}),%xmm3',f'4({vr}),%xmm3',f'({mr}),%xmm0',f'4({mr}),%xmm0','%xmm1,%xmm3','%xmm3,%xmm4','$0,%xmm4,%xmm4',f'16({mr}),%xmm1',f'20({mr}),%xmm1','%xmm4,%xmm0','%xmm3,%xmm5','$170,%xmm5,%xmm5','%xmm5,%xmm1',f'32({mr}),%xmm2',f'36({mr}),%xmm2','$255,%xmm3,%xmm3','%xmm1,%xmm0','%xmm3,%xmm2','%xmm2,%xmm0',f'%xmm0,({orr})',f'%xmm0,4({orr})'],args
 before,after=re.split(r'#APP.*?#NO_APP',assembly,flags=re.S);outside=before+after
 returns=re.findall(r'^\s+(ret[a-z]*)([^\n]*)$',outside,re.M)
 assert [(op,arg.split('#')[0].strip()) for op,arg in returns]==[('retq','')],returns
 # Trace every native transport operation; byte cells detect corrupted pointer
 # spills, stack-base changes or source/output argument swaps.
 registers={'%rdi':'terms','%rsi':'vector','%rdx':'output','%rbp':'saved_rbp','%rsp':('stack',0)}
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
   elif op=='movq':
    assert prior
    operands=arg.split(',');assert len(operands)==2
    src,dst=operands;width=8
    assert not any('%'+r in arg for r in ('xmm','ymm','zmm','mm'))
    if src.startswith('%'):
     assert src in registers,(line,registers);value=registers[src]
    else:value=read_mem(mem_address(src),width)
    if dst.startswith('%'):
     assert dst in ('%rax','%rcx','%rdx','%rdi','%rsi','%r8','%r9','%r10','%r11','%rbp'),line
     assert dst!='%rbp' or src=='%rsp',line
     registers[dst]=value
    else:
     address=mem_address(dst);stack=registers["%rsp"][1]
     assert stack-128<=address and address+width<=stack,"write outside private SysV red zone"
     write_mem(address,width,value)
   else:raise AssertionError('unexpected native wrapper operation: '+line)
  if prior:
   assert registers.get(mr)=='terms' and registers.get(vr)=='vector' and registers.get(orr)=='output','wrong argument transport'
 assert pushes==pops

def must_reject(fn,*args):
 try:fn(*args)
 except (AssertionError,ValueError,KeyError,IndexError):return 1
 raise AssertionError('negative unexpectedly accepted')

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--package',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--repo',type=pathlib.Path,required=True);ap.add_argument('--program-record',type=pathlib.Path);ap.add_argument('--corpus',type=pathlib.Path);ap.add_argument('--rational-corpus',type=pathlib.Path);ap.add_argument('--scalar-corpus',type=pathlib.Path);ap.add_argument('--sanitizers',action='store_true');a=ap.parse_args();p=a.package.resolve();repo=a.repo.resolve()
 outside=(p/'src/0x002b7360.cpp').is_file()
 def artifact(name):
  if outside:return p/name
  if name=='src/0x002b7360.cpp':
   import sys
   sys.path.insert(0,str(repo/'tools'))
   from source_layout import source_path
   return source_path(repo,'0x002b7360')
  return repo/CANONICAL_PATHS[name]
 mb=(artifact('metadata/manifest.json')).read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 for name,digest in m['artifacts'].items():assert sha(artifact(name).read_bytes())==digest,name
 assert m['original_body_sha256']==BODY_SHA
 source=(artifact('src/0x002b7360.cpp')).read_bytes();before=(artifact('tests/002b7360_before.cpp.txt')).read_bytes();header=(artifact('include/bf_002b7360_subtracted_three_term_operation.h')).read_text();source_check(source,before,m)
 negatives=0
 for bs,bb in [(source+b' ',before),(source,before+b' ')]:negatives+=must_reject(source_check,bs,bb,m)
 if a.program_record:
  r=json.loads(a.program_record.read_text());raw=record_check(r)
  for idx in range(112):
   bad=copy.deepcopy(r);b=bytearray(raw);b[idx]^=1;bad['body_ranges'][0]['bytes_hex']=b.hex();negatives+=must_reject(record_check,bad)
  for idx in range(31):
   for field,val in [('length',0),('flow_override','CALL_RETURN'),('fallthrough','00000000'),('flow_type','COMPUTED_CALL'),('mnemonic','NOP'),('operands',[]),('text','NOP')]:
    bad=copy.deepcopy(r);bad['instructions'][idx][field]=val;negatives+=must_reject(record_check,bad)
  for field,val in [('name','other'),('is_thunk',True)]:
   bad=copy.deepcopy(r);bad[field]=val;negatives+=must_reject(record_check,bad)
  print('Private body: complete112 hash-matched bytes/31 boundaries; not full-XBE authentication',flush=True)
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(p/'include'),'-I'+str(repo/'include')]
 tests={'scalar':artifact('tests/test_002b7360_subtract_rational_model.cpp'),'native':artifact('tests/native_test.cpp'),'model':artifact('tests/test_002b7360_subtracted_three_term_integer_model.cpp'),'rational':artifact('tests/test_002b7360_three_product_rational_model.cpp')}
 with tempfile.TemporaryDirectory(prefix='bf-2b7360-gate-') as t:
  td=pathlib.Path(t);corpus=a.corpus
  if corpus is None:
   corpus=td/'model.bin';print(run(['python3','-B',str(artifact('tests/generate_002b7360_subtracted_three_term_integer_model.py')),str(corpus)]).stdout.strip(),flush=True)
  assert sha(corpus.read_bytes())==m['model_corpus_sha256']
  rational=a.rational_corpus
  if rational is None:
   rational=td/'rational.bin';print(run(['python3','-B',str(artifact('tests/generate_002b7360_three_product_rational_model.py')),str(rational)]).stdout.strip(),flush=True)
  assert sha(rational.read_bytes())==m['rational_corpus_sha256']
  scalar=a.scalar_corpus
  if scalar is None:
   scalar=td/'scalar.bin';print(run(['python3','-B',str(artifact('tests/generate_002b7360_subtract_rational_model.py')),str(scalar)]).stdout.strip(),flush=True)
  assert sha(scalar.read_bytes())==m['scalar_corpus_sha256']
  def corpus_args(name):
   return [str({'model':corpus,'rational':rational,'scalar':scalar}[name])] if name in ('model','rational','scalar') else []
  # Explicit hand-derived infinity anchor: only the unstored +0*Inf lane is invalid.
  mat=[0x3f800000]*3+[0x7f800001]+[0]*3+[0xff800001]+[0]*3+[0x7f800123]+[0]*3
  anchor=(0x1f80,*mat,0x7f800000,0,0,*([0x7f800000]*3),0x1f81)
  (td/'hidden.bin').write_bytes(struct.pack('<23I',*anchor))
  for opt in ['-O0','-O2']:
   asm=td/(opt+'.s');run(common+[opt,'-S',str(artifact('src/0x002b7360.cpp')),'-o',str(asm)]);assembly=asm.read_text();codegen_check(assembly)
   print('Exact23-operation codegen/native pointer transport:',opt,flush=True)
   for extra in ['\tfldz\n','\taddss %xmm1,%xmm2\n','\tcallq helper\n','\tmovups (%rdi),%xmm0\n','\tmovq %rdi,%rbx\n']:
    negatives+=must_reject(codegen_check,assembly+'\n'+extra)
   for replacement in ['', '\tretq $12\n']:
    altered,n=re.subn(r'^\s+retq[ \t]*$',replacement,assembly,flags=re.M);assert n==1;negatives+=must_reject(codegen_check,altered)
   for injected in ['\tmovl $0, -4(%rsp)\n','\taddq $16,%rsp\n','\tmovq %rdi,(%rsp)\n','\tmovq %rdi,8(%rsp)\n','\tmovq %rsi,%rdx\n']:
    negatives+=must_reject(codegen_check,assembly.replace('\t#APP',injected+'\t#APP',1))
   for name,test in tests.items():
    exe=td/(name+opt);run(common+[opt,str(test)]+([] if name=='scalar' else [str(artifact('src/0x002b7360.cpp'))])+['-o',str(exe)]);print(run([str(exe)]+corpus_args(name)).stdout.strip(),flush=True)
    if name=='model':print('hidden-lane anchor:',run([str(exe),str(td/'hidden.bin'),'--single-anchor']).stdout.strip(),flush=True)
   bad=run(common+[opt,'-x','c++','-fsyntax-only','-'],False,before.decode());assert 'CONCAT requires integral bytes' in bad.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native SSE'),(['-U__SSE__'],'requires GNU/Clang x86-64 Linux SysV native SSE')]:
   bad=run(common+flags+['-x','c++','-fsyntax-only','-'],False,'#include "bf_002b7360_subtracted_three_term_operation.h"\n');assert marker in bad.stderr;negatives+=1
  mutants={
   'reverse_mul_x':header.replace('mulps %%xmm4, %%xmm0','mulps %%xmm0, %%xmm4\\n\\tmovaps %%xmm4, %%xmm0',1),
   'reverse_mul_y':header.replace('mulps %%xmm5, %%xmm1','mulps %%xmm1, %%xmm5\\n\\tmovaps %%xmm5, %%xmm1',1),
   'reverse_mul_z':header.replace('mulps %%xmm3, %%xmm2','mulps %%xmm2, %%xmm3\\n\\tmovaps %%xmm3, %%xmm2',1),
   'reverse_add_ab':header.replace('addps %%xmm1, %%xmm0','addps %%xmm0, %%xmm1\\n\\tmovaps %%xmm1, %%xmm0',1),
   'reverse_add_c':header.replace('addps %%xmm2, %%xmm0','addps %%xmm0, %%xmm2\\n\\tmovaps %%xmm2, %%xmm0',1),
   'wrong_x_broadcast':header.replace('shufps $0,','shufps $85,',1),
   'wrong_y_broadcast':header.replace('shufps $170,','shufps $85,',1),
   'wrong_z_broadcast':header.replace('shufps $255,','shufps $170,',1),
   'premature_store':header.replace('mulps %%xmm4, %%xmm0','mulps %%xmm4, %%xmm0\\n\\tmovss %%xmm0, 0(%[output])',1),
   'wide_read':header.replace('movss 48(%[terms]), %%xmm1','movups 48(%[terms]), %%xmm1\\n\\tmovss 48(%[terms]), %%xmm1',1),
   'wide_store':header.replace('movhps %%xmm0, 4(%[output])','movups %%xmm0, 4(%[output])',1),
   'hidden_lane':header.replace('    __asm__ volatile(', '    alignas(16) const unsigned mask[4]={0xffffffffu,0u,0xffffffffu,0xffffffffu};\n    __asm__ volatile(',1).replace('mulps %%xmm4, %%xmm0','andps %[mask], %%xmm4\\n\\tmulps %%xmm4, %%xmm0',1).replace('[output] "r"(output)','[output] "r"(output), [mask] "m"(mask)',1),
   'incoming_lane':header.replace('movss 0(%[terms]), %%xmm0','movss 0(%[terms]), %%xmm6\\n\\tmovss %%xmm6, %%xmm0',1).replace(': "xmm0",',': "xmm6", "xmm0",',1),
   'interleaved_scalars':header[:header.index('    __asm__ volatile(')]+'    const float x=vector[0]-terms[12],y=vector[1]-terms[13],z=vector[2]-terms[14];for(unsigned i=0;i<3;++i)output[i]=(terms[i]*x+terms[4+i]*y)+terms[8+i]*z;\n}\n#endif\n',
   'fused_scalars':'#include <cmath>\n'+header[:header.index('    __asm__ volatile(')]+'    const float x=vector[0]-terms[12],y=vector[1]-terms[13],z=vector[2]-terms[14];for(unsigned i=0;i<3;++i)output[i]=std::fma(terms[8+i],z,std::fma(terms[i],x,terms[4+i]*y));\n}\n#endif\n',
   'reassociated':header.replace('addps %%xmm1, %%xmm0','movaps %%xmm0, %%xmm4',1).replace('addps %%xmm2, %%xmm0','addps %%xmm2, %%xmm1\\n\\tmovaps %%xmm4, %%xmm0\\n\\taddps %%xmm1, %%xmm0',1),
  }
  mutants.update({
   'wrong_translation_offset':header.replace('48(%[terms])','44(%[terms])',1),
   'reverse_subtract':header.replace('subps %%xmm1, %%xmm3','subps %%xmm3, %%xmm1\\n\\tmovaps %%xmm1, %%xmm3',1),
   'omit_subtract':header.replace('        "subps %%xmm1, %%xmm3\\n\\t"\n','',1),
   'add_instead_subtract':header.replace('subps %%xmm1, %%xmm3','addps %%xmm1, %%xmm3',1),
   'negate_source_nan':header.replace('    __asm__ volatile(', '    alignas(16) const unsigned sign[4]={0x80000000u,0x80000000u,0x80000000u,0x80000000u};\n    __asm__ volatile(',1).replace('subps %%xmm1, %%xmm3','xorps %[sign], %%xmm1\\n\\taddps %%xmm1, %%xmm3',1).replace('[output] "r"(output)','[output] "r"(output), [sign] "m"(sign)',1),
  })
  for name,h in mutants.items():
   assert h!=header;md=td/name;md.mkdir();(md/'bf_002b7360_subtracted_three_term_operation.h').write_text(h);(md/'0x002b7360.cpp').write_bytes(source)
   test='rational' if name.startswith('reverse') or name=='negate_source_nan' else ('model' if name in ('hidden_lane','fused_scalars','reassociated') else 'native')
   (md/'test.cpp').write_bytes(tests[test].read_bytes());exe=md/'negative'
   # Local includes must select the mutant in both the wrapper and native test.
   run(common+['-O2',str(md/'test.cpp'),str(md/'0x002b7360.cpp'),'-o',str(exe)])
   args=[str(exe)]+([str(td/'hidden.bin'),'--single-anchor'] if name=='hidden_lane' else ([str(corpus)] if test=='model' else ([str(rational)] if test=='rational' else [])))
   bad=run(args,False);assert bad.returncode in (1,2,-11),bad.stdout+bad.stderr;negatives+=1
   if name=='hidden_lane':assert bad.returncode==1 and 'FAIL case=0' in bad.stderr
   asm=md/'negative.s';run(common+['-O2','-S',str(md/'0x002b7360.cpp'),'-o',str(asm)]);negatives+=must_reject(codegen_check,asm.read_text());print('Rejected behavior/codegen mutation:',name,flush=True)
  scalar_source=tests['scalar'].read_text()
  scalar_add=scalar_source.replace('subss %%xmm1,%%xmm0','addss %%xmm1,%%xmm0',1)
  scalar_flipped=scalar_add.replace('"r"(c[2])','"r"(c[2]^0x80000000u)',1)
  for name,changed in [('scalar_add',scalar_add),('scalar_nan_sign',scalar_flipped)]:
   assert changed!=scalar_source
   test=td/(name+'.cpp');test.write_text(changed);exe=td/name
   run(common+['-O2',str(test),'-o',str(exe)]);bad=run([str(exe),str(scalar)],False)
   assert bad.returncode==1 and 'scalar SUB failed' in bad.stderr;negatives+=1
   print('Rejected isolated subtraction mutation:',name,flush=True)
  moved=header.replace('        "mulps %%xmm5, %%xmm1\\n\\t"\n','',1).replace('        "shufps $255, %%xmm3, %%xmm3\\n\\t"','        "mulps %%xmm5, %%xmm1\\n\\t"\n        "shufps $255, %%xmm3, %%xmm3\\n\\t"',1)
  assert moved!=header
  md=td/'third_row_loaded_early';md.mkdir();(md/'bf_002b7360_subtracted_three_term_operation.h').write_text(moved);(md/'0x002b7360.cpp').write_bytes(source)
  asm=md/'negative.s';run(common+['-O2','-S',str(md/'0x002b7360.cpp'),'-o',str(asm)]);negatives+=must_reject(codegen_check,asm.read_text());print('Rejected exact-order mutation: third row loaded before second multiply',flush=True)
  altered=(artifact('tests/native_test.cpp')).read_text().replace('fxrstor (%rsp)\\n','',1);assert altered!=(artifact('tests/native_test.cpp')).read_text();(td/'restore.cpp').write_text(altered);exe=td/'restore'
  run(common+['-O2',str(td/'restore.cpp'),str(artifact('src/0x002b7360.cpp')),'-o',str(exe)]);bad=run([str(exe)],False);assert 'caller-state restoration failed' in bad.stderr;negatives+=1
  if a.sanitizers:
   g=shutil.which('g++-14');assert g;assert '14.' in run([g,'-dumpfullversion']).stdout
   for name,test in tests.items():
    exe=td/(name+'-san');run([g]+common[1:]+['-O1','-fsanitize=address,undefined','-fno-omit-frame-pointer','-fno-pie','-no-pie',str(test)]+([] if name=='scalar' else [str(artifact('src/0x002b7360.cpp'))])+['-o',str(exe)])
    args=['env','ASAN_OPTIONS=detect_leaks=0:halt_on_error=1','UBSAN_OPTIONS=halt_on_error=1',str(exe)]+corpus_args(name);print('GCC14 ASan+UBSan (leak detection disabled):',run(args).stdout.strip(),flush=True)
 print('Exact source reversal and',negatives,'negative controls passed')
 print('Bounded native memory operation only; no guest ABI/mapping or original-CPU equivalence claim')
if __name__=='__main__':main()
