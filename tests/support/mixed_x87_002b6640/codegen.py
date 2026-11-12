#!/usr/bin/env python3
"""Check compiled helper sequence, complete wrapper and authored capture bridge.
Protection/instrumentation calls outside the atomic 20-instruction block are
reported explicitly; ordinary wrappers cannot call helpers. Guard tests cover
inline-assembly accesses that sanitizers do not instrument.
"""
import hashlib,json,pathlib,re,subprocess,sys
OPS=['fld','fmul','fld','fmul','faddp','fld','fmul','faddp','fchs','fstp','movss','movss','movhps','shufps','movss','movhps','mulps','addps','movss','movhps']
def instructions(binary,name):
 text=subprocess.check_output(['objdump','-d','--no-show-raw-insn','-Mintel',str(binary)],text=True)
 match=re.search(r'^[0-9a-f]+ <'+re.escape(name)+r'>:\n(.*?)(?=\n\n|\Z)',text,re.M|re.S);assert match,name
 result=[]
 for line in match[1].splitlines():
  m=re.match(r'\s*[0-9a-f]+:\s+(\S+)\s*(.*?)\s*$',line)
  if m:result.append((m[1],m[2].split('#')[0].strip()))
 return result

def verify(ops):
 start=next(i for i,(op,_) in enumerate(ops) if op=='fld');block=ops[start:start+20]
 assert [op for op,_ in block]==OPS,block
 # Every x87 or SSE numerical/move instruction belongs to the exact block.
 for i,(op,arg) in enumerate(ops):
  if op.startswith('f') or 'xmm' in arg:assert start<=i<start+20,(i,op,arg)
 mem=lambda a:re.search(r'\[([a-z0-9]+)([+-]0x[0-9a-f]+)?\]',a).groups()
 b,_=mem(block[0][1]);c,_=mem(block[1][1]);o,_=mem(block[18][1]);scratch=block[9][1]
 expected=[f'DWORD PTR [{b}+0x8]',f'DWORD PTR [{c}+0x8]',f'DWORD PTR [{b}+0x4]',f'DWORD PTR [{c}+0x4]','st(1),st',f'DWORD PTR [{b}]',f'DWORD PTR [{c}]','st(1),st','',scratch,'xmm3,'+scratch,f'xmm2,DWORD PTR [{c}]',f'xmm2,QWORD PTR [{c}+0x4]','xmm3,xmm3,0x0',f'xmm1,DWORD PTR [{b}]',f'xmm1,QWORD PTR [{b}+0x4]','xmm2,xmm3','xmm1,xmm2',f'DWORD PTR [{o}],xmm1',f'QWORD PTR [{o}+0x4],xmm1']
 assert scratch.startswith('DWORD PTR ')
 assert mem(scratch)[0] not in (b,c,o),'private scratch base overlaps argument register'
 assert [a for _,a in block]==expected,(block,expected)
 depth=0;peak=0
 for op,_ in block[:10]:
  if op=='fld':depth+=1
  if op in ('faddp','fstp'):depth-=1
  peak=max(peak,depth);assert 0<=depth<=2
 assert peak==2 and depth==0
 calls=[a for op,a in ops if op=='call']
 return dict(start_index=start,fp_instructions=20,x87_instructions=10,sse_instructions=10,peak_x87_pushes=peak,net_x87_depth=depth,scratch=scratch,argument_registers=dict(out=o,b=b,c=c),calls_outside_atomic_block=calls)

def bridge(binary):
 ops=instructions(binary,'mixed_capture');names=[op for op,_ in ops]
 assert names.count('call')==1
 call=names.index('call')
 assert names[call+1:call+4]==['mov','fxsave','fnstenv'],ops[call:call+4]
 assert names.count('fxrstor')==2 and names.count('fxsave')==3
 assert not any(n in ('fld','fstp','fldcw','ldmxcsr','fninit') for n in names)
 return dict(measured_call_count=1,immediate_measurement=names[call+1:call+4],fxsave_count=3,fxrstor_count=2,full_tag_capture=True)

def mutation_checks(ops):
 changed=[]
 first=next(i for i,(op,_) in enumerate(ops) if op=='fld')
 for label,j,new in [('wrong_sum_order',0,('fld',ops[first+5][1])),('wide_load',0,('fld',ops[first][1].replace('DWORD','QWORD'))),('wrong_fadd_destination',4,('faddp','st(2),st')),('missing_pop',9,('fst',ops[first+9][1])),('wide_scratch',9,('fstp',ops[first+9][1].replace('DWORD','QWORD'))),('SSE_operand_swap',16,('mulps','xmm3,xmm2')),('omit_hidden_lane',16,('mulss','xmm2,xmm3')),('wide_store',18,('movups',ops[first+18][1])),('store_offset',19,('movhps',ops[first+19][1].replace('+0x4','+0x8')))]:
  m=list(ops);m[first+j]=new
  try:verify(m)
  except (AssertionError,StopIteration,AttributeError):changed.append(label)
  else:raise AssertionError('undetected mutation '+label)
 return changed
