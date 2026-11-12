#!/usr/bin/env python3
"""Audit canonical 002b8d10 source and bounded native operation artifacts."""
import argparse,copy,hashlib,json,pathlib,re,shutil,struct,subprocess,tempfile
from source_layout import source_path
MANIFEST_SHA='1bbd4cae6f6665297ccf86971a07b73889e1e4222adb600c4f19a6a16943e44c'
PROGRAM_RECORD_SHA='6db4d227e76ce94d120271cca770a5e7577a0042b030f750fb2fd52aae101c37'
BODY_SHA='51CED97F607CBAA8833A6E2C7597C524B12F22852A55832D95D6C575CA7AC49D'
SIGNATURE=b'void FUN_002b8d10(float *param_1,float *param_2,float param_3)'
INCLUDE=b'#include "bf_002b8d10_multiply_add_operation.h"\n'
WINDOWS={'0x002b8d10': '83ec08', '0x002b8d23': 'f30f105c2404', '0x002b8d2d': 'f30f1010', '0x002b8d35': '0fc6db00', '0x002b8d45': '0f59d30f58ca', '0x002b8d4f': 'f30f11080f174804', '0x002b8d57': '83c408c20c00'}
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed'
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['0x002b8d10.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def window_check(w):assert len(w)==len(WINDOWS) and {x['va']:x['bytes'] for x in w}==WINDOWS

def record_check(r):
 assert sha(json.dumps(r,sort_keys=True,separators=(',',':')).encode())==PROGRAM_RECORD_SHA
 assert r['entry']=='002b8d10' and r['body_byte_count']==77 and r['instruction_count']==20
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==77 and b['length']==77
 assert len(r['instructions'])==20 and not r['is_thunk'] and r['name']=='FUN_002b8d10'
 assert int(b['start'],16)==0x2b8d10 and int(b['end_inclusive'],16)==0x2b8d5c
 cursor=0x2b8d10;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor and not i['flows']
  last=cursor+i['length']==0x2b8d5d
  assert i['flow_type']==('TERMINATOR' if last else 'FALL_THROUGH')
  assert i['fallthrough']==(None if last else f"{cursor+i['length']:08x}")
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x2b8d5d
 for va,data in WINDOWS.items():
  off=int(va,16)-0x2b8d10;chunk=bytes.fromhex(data);assert raw[off:off+len(chunk)]==chunk
 return raw

def codegen_check(assembly):
 assert not re.search(r'^\s*(?:callq?|jmp)\s',assembly,re.M),'call/tail-call forbidden'
 apps=re.findall(r'#APP(.*?)#NO_APP',assembly,re.S);assert len(apps)==1
 lines=[line.split('#')[0].strip() for line in apps[0].splitlines() if line.split('#')[0].strip()]
 ops=[line.split()[0] for line in lines]
 assert ops==['movss','movss','movhps','shufps','movss','movhps','mulps','addps','movss','movhps'],ops
 def norm(s):return re.sub(r'\s+','',s)
 args=[norm(line[len(op):]) for line,op in zip(lines,ops)]
 scalar=re.fullmatch(r'(-?[0-9]+\(%r(?:sp|bp)\)),%xmm3',args[0]);assert scalar
 v=re.fullmatch(r'\((%[a-z0-9]+)\),%xmm2',args[1]);b=re.fullmatch(r'\((%[a-z0-9]+)\),%xmm1',args[4]);d=re.fullmatch(r'%xmm1,\((%[a-z0-9]+)\)',args[8]);assert v and b and d
 vr,br,dr=v[1],b[1],d[1]
 assert args==[f'{scalar[1]},%xmm3',f'({vr}),%xmm2',f'4({vr}),%xmm2','$0,%xmm3,%xmm3',f'({br}),%xmm1',f'4({br}),%xmm1','%xmm3,%xmm2','%xmm2,%xmm1',f'%xmm1,({dr})',f'%xmm1,4({dr})'],args
 before,after=re.split(r'#APP.*?#NO_APP',assembly,flags=re.S);outside=before+after
 returns=re.findall(r'^\s+(ret[a-z]*)([^\n]*)$',outside,re.M)
 assert [(op,arg.split('#')[0].strip()) for op,arg in returns]==[('retq','')],returns
 # Trace complete allowed native transport, including integer stack writes.
 # Byte-level symbolic storage detects any overlap with the scalar spill;
 # symbolic stack offsets detect altered bases or incorrect argument pointers.
 registers={'%rdi':'destination','%rsi':'vector','%rbp':'saved_rbp','%rsp':('stack',0),'%xmm0':'scalar'}
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
   assert registers.get(dr)=='destination' and registers.get(br)=='destination' and br==dr and registers.get(vr)=='vector','wrong argument transport'
   assert read_mem(mem_address(scalar[1]),4)=='scalar','packed scalar load lacks initialized input'
 assert pushes==pops

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--program-record',type=pathlib.Path);ap.add_argument('--sanitizers',action='store_true');a=ap.parse_args();a.root=a.root.resolve()
 paths={
  '0x002b8d10.cpp':source_path(a.root,'0x002b8d10'),
  'bf_002b8d10_multiply_add_operation.h':a.root/'include/bf_002b8d10_multiply_add_operation.h',
  'native_test.cpp':a.root/'tests/test_002b8d10_multiply_add_operation.cpp',
  'model_test.cpp':a.root/'tests/test_002b8d10_multiply_add_integer_model.cpp',
  'generate_model.py':a.root/'tests/generate_002b3e60_multiply_add_integer_model.py',
  'source_before.cpp.txt':a.root/'tests/fixtures/002b8d10_before.cpp.txt',
  'README.md':a.root/'docs/evidence/002b8d10_multiply_add_operation.md',
 }
 assert paths['0x002b8d10.cpp'].relative_to(a.root)==pathlib.Path('src/main_unclassified/band_002b/0x002b8d10.cpp'),'unapproved alias route'
 assert list((a.root/'src').rglob('0x002b8d10.cpp'))==[paths['0x002b8d10.cpp']],'duplicate or noncanonical source'
 mb=(a.root/'metadata/cpp_20261105_002b8d10_multiply_add_operation.json').read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 assert set(m['artifacts'])==set(paths)-{'source_before.cpp.txt'}
 for name,digest in m['artifacts'].items():assert sha(paths[name].read_bytes())==digest,name
 source=paths['0x002b8d10.cpp'].read_bytes();before=paths['source_before.cpp.txt'].read_bytes();header=paths['bf_002b8d10_multiply_add_operation.h'].read_text()
 source_check(source,before,m);window_check(m['narrow_opcode_windows']);negatives=0
 for bs,bb in [(source+b' ',before),(source,before+b' ')]:
  try:source_check(bs,bb,m)
  except AssertionError:negatives+=1
  else:raise AssertionError('source corruption accepted')
 for n,w in enumerate(m['narrow_opcode_windows']):
  for idx in range(len(bytes.fromhex(w['bytes']))):
   bad=copy.deepcopy(m['narrow_opcode_windows']);raw=bytearray.fromhex(w['bytes']);raw[idx]^=1;bad[n]['bytes']=raw.hex()
   try:window_check(bad)
   except AssertionError:negatives+=1
   else:raise AssertionError('opcode corruption accepted')
 if a.program_record:
  r=json.loads(a.program_record.read_text());raw=record_check(r)
  for idx in range(len(raw)):
   bad=copy.deepcopy(r);b=bytearray(raw);b[idx]^=1;bad['body_ranges'][0]['bytes_hex']=b.hex()
   try:record_check(bad)
   except AssertionError:negatives+=1
   else:raise AssertionError('body-byte corruption accepted')
  fields={'mnemonic':'NOP','operands':[], 'text':'corrupt', 'flow_type':'COMPUTED_JUMP','flows':['00000000'],'fallthrough':'00000000','flow_override':'CALL','is_length_overridden':True,'is_fallthrough_overridden':True,'parsed_length':0,'length':0,'address':'00000000','bytes_hex':'90'}
  for idx in range(len(r['instructions'])):
   for field,value in fields.items():
    bad=copy.deepcopy(r);assert bad['instructions'][idx][field]!=value;bad['instructions'][idx][field]=value
    try:record_check(bad)
    except AssertionError:negatives+=1
    else:raise AssertionError('private instruction metadata corruption accepted')
  print('Private body: 77 hash-matched bytes; not whole-XBE authentication',flush=True)
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(a.root/'include')]
 with tempfile.TemporaryDirectory(prefix='bf-2b8d10-gate-') as td:
  td=pathlib.Path(td);fixture=td/'model.bin';print(run(['python3',str(paths['generate_model.py']),str(fixture)]).stdout.strip(),flush=True)
  anchors={
   'hidden_lane':(0x1f80,*([0x3f800000]*3),*([0x3f800000]*3),0x7f800000,*([0x7f800000]*3),0x1f81),
   'fused_scalars':(0x1f80,*([0xbf800000]*3),*([0x3f800001]*3),0x3f7ffffe,0,0,0,0x1fa0),
  }
  for name,record in anchors.items():(td/(name+'.bin')).write_bytes(struct.pack('<12I',*record))
  for opt in ['-O0','-O2']:
   assembly=td/(opt+'.s');run(common+[opt,'-S',str(paths['0x002b8d10.cpp']),'-o',str(assembly)]);codegen_check(assembly.read_text());print('Exact ten-operation codegen and initialized scalar:',opt,flush=True)
   for extra in ['\tfldz\n','\taddss %xmm1,%xmm2\n','\tcallq helper\n','\tmovups (%rdi),%xmm0\n']:
    try:codegen_check(assembly.read_text()+'\n'+extra)
    except AssertionError:negatives+=1
    else:raise AssertionError('unexpected codegen accepted')
   for replacement in ['', '\tretq $12\n']:
    altered,count=re.subn(r'^\s+retq[ \t]*$',replacement,assembly.read_text(),flags=re.M);assert count==1
    try:codegen_check(altered)
    except AssertionError:negatives+=1
    else:raise AssertionError('missing return or guest RET12 accepted')
   altered,count=re.subn(r'^\s+movss\s+%xmm0, -?[0-9]+\(%r(?:sp|bp)\)[^\n]*$', '',assembly.read_text(),count=1,flags=re.M);assert count==1
   try:codegen_check(altered)
   except AssertionError:negatives+=1
   else:raise AssertionError('uninitialized scalar accepted')
   for injected in ['\tmovl $0, -4(%rsp)\n','\taddq $16, %rsp\n','\tmovq %rdi, -4(%rsp)\n','\tmovq %rdi, (%rsp)\n','\tmovq %rdi, 8(%rsp)\n','\tmovq %rdi, %rbx\n','\tmovq %rdi, %r12\n']:
    altered=assembly.read_text().replace('\t#APP',injected+'\t#APP',1)
    try:codegen_check(altered)
    except AssertionError:negatives+=1
    else:raise AssertionError('integer scalar overwrite or stack-base change accepted')
   for test in ['native_test','model_test']:
    exe=td/(test+opt);run(common+[opt,str(paths[test+'.cpp']),str(paths['0x002b8d10.cpp']),'-o',str(exe)]);args=[str(exe)]+([str(fixture)] if test=='model_test' else []);print(run(args).stdout.strip(),flush=True)
    if test=='model_test':
     for name in anchors:print(name+':',run([str(exe),str(td/(name+'.bin')),'--single-anchor']).stdout.strip(),flush=True)
   bad=run(common+[opt,'-x','c++','-fsyntax-only','-'],ok=False,stdin=before.decode());assert 'CONCAT requires integral bytes' in bad.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native SSE'),(['-U__SSE__'],'requires GNU/Clang x86-64 Linux SysV native SSE')]:
   bad=run(common+flags+['-x','c++','-fsyntax-only','-'],ok=False,stdin='#include "bf_002b8d10_multiply_add_operation.h"\n');assert marker in bad.stderr;negatives+=1
  changes={
   'wrong_source_pointer':header.replace('0(%[vector])','0(%[destination])',1).replace('4(%[vector])','4(%[destination])',1),
   'wrong_store_pointer':header.replace('%%xmm1, 0(%[destination])','%%xmm1, 0(%[vector])',1).replace('%%xmm1, 4(%[destination])','%%xmm1, 4(%[vector])',1),
   'missing_multiply':header.replace('mulps %%xmm3, %%xmm2','movaps %%xmm3, %%xmm2',1),
   'missing_add':header.replace('addps %%xmm2, %%xmm1','movaps %%xmm2, %%xmm1',1),
   'reverse_multiply':header.replace('mulps %%xmm3, %%xmm2','mulps %%xmm2, %%xmm3\\n\\tmovaps %%xmm3, %%xmm2',1),
   'reverse_add':header.replace('addps %%xmm2, %%xmm1','addps %%xmm1, %%xmm2\\n\\tmovaps %%xmm2, %%xmm1',1),
   'wrong_broadcast':header.replace('shufps $0,','shufps $85,',1),
   'incoming_lane':header.replace('movss 0(%[vector]), %%xmm2','movss 0(%[vector]), %%xmm0\\n\\tmovss %%xmm0, %%xmm2',1).replace(': "xmm1",',': "xmm0", "xmm1",',1),
   'wide_read':header.replace('movss 0(%[destination]), %%xmm1','movups 0(%[destination]), %%xmm1\\n\\tmovss 0(%[destination]), %%xmm1',1),
   'hidden_lane':header.replace('    __asm__ volatile(', '    alignas(16) const unsigned lane_mask[4] = {0xffffffffu, 0u, 0xffffffffu, 0xffffffffu};\n    __asm__ volatile(',1).replace('mulps %%xmm3, %%xmm2', 'andps %[lane_mask], %%xmm3\\n\\tmulps %%xmm3, %%xmm2',1).replace('[scalar] \"m\"(scalar)', '[scalar] \"m\"(scalar), [lane_mask] \"m\"(lane_mask)',1),
   'interleaved_scalars':header[:header.index('    __asm__ volatile(')]+'    for (unsigned i = 0; i < 3; ++i) destination[i] = destination[i] + vector[i] * scalar;\n}\n#endif\n',
   'fused_scalars':'#include <cmath>\n'+header[:header.index('    __asm__ volatile(')]+'    for (unsigned i = 0; i < 3; ++i) destination[i] = std::fma(vector[i], scalar, destination[i]);\n}\n#endif\n',
  }
  for name,h in changes.items():
   assert h!=header;md=td/name;md.mkdir();(md/'bf_002b8d10_multiply_add_operation.h').write_text(h);(md/'0x002b8d10.cpp').write_bytes(source)
   test='model_test' if name in ('reverse_multiply','reverse_add','fused_scalars','hidden_lane') else 'native_test'
   (md/(test+'.cpp')).write_bytes(paths[test+'.cpp'].read_bytes())
   exe=md/'negative';run(common+['-O2',str(md/(test+'.cpp')),str(md/'0x002b8d10.cpp'),'-o',str(exe)]);args=[str(exe)]+(([str(td/(name+'.bin')),'--single-anchor'] if name in anchors else [str(fixture)]) if test=='model_test' else []);bad=run(args,ok=False);assert bad.returncode in (1,2,-11),bad.stdout+bad.stderr;negatives+=1
   if name in anchors:assert bad.returncode==1 and 'FAIL case=0' in bad.stderr,bad.stdout+bad.stderr
   assembly=md/'negative.s';run(common+['-O2','-S',str(md/'0x002b8d10.cpp'),'-o',str(assembly)])
   try:codegen_check(assembly.read_text())
   except AssertionError:negatives+=1
   else:raise AssertionError('bad operation codegen accepted: '+name)
   print('Rejected behavior/codegen mutation:',name,flush=True)
  md=td/'capture_restore';md.mkdir();oracle=paths['native_test.cpp'].read_text();assert 'fxrstor (%rsp)\\n' in oracle
  (md/'native_test.cpp').write_text(oracle.replace('fxrstor (%rsp)\\n','',1));(md/'0x002b8d10.cpp').write_bytes(source);(md/'bf_002b8d10_multiply_add_operation.h').write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'native_test.cpp'),str(md/'0x002b8d10.cpp'),'-o',str(exe)]);bad=run([str(exe)],ok=False);assert 'caller-state restoration failed' in bad.stderr;negatives+=1
  if a.sanitizers:
   g=shutil.which('g++');assert g
   for test in ['native_test','model_test']:
    exe=td/(test+'-san');run([g]+common[1:]+['-O2','-fsanitize=address,undefined','-fno-omit-frame-pointer','-fno-pie','-no-pie',str(paths[test+'.cpp']),str(paths['0x002b8d10.cpp']),'-o',str(exe)])
    args=['env','ASAN_OPTIONS=detect_leaks=0:halt_on_error=1','UBSAN_OPTIONS=halt_on_error=1',str(exe)]+([str(fixture)] if test=='model_test' else []);print('GCC ASan+UBSan:',run(args).stdout.strip(),flush=True)
 print('Exact source reversal and',negatives,'negative controls passed')
 print('Bounded native memory operation only; guest ABI/stack aliasing/fault/original-CPU limits remain')
if __name__=='__main__':main()
