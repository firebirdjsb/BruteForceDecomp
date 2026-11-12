#!/usr/bin/env python3
"""Audit the canonical 002b3cc0 source and bounded native-operation artifacts."""
import argparse,copy,hashlib,json,pathlib,re,shutil,subprocess,tempfile
from source_layout import source_path
MANIFEST_SHA='3cad7e8096a7d3772b6c4b60ef1ad4cebcdf2153f9f040dc7306885226fa99c8'
BODY_SHA='A8EC695777DE4EF1C9E6389D84A07A1AF70D214CF5A961E877EEB5DFA8A3374F'
SIGNATURE=b'void FUN_002b3cc0(float *param_1,float *param_2)'
INCLUDE=b'#include "bf_002b3cc0_add_operation.h"\n'
WINDOWS={'0x002b3ccd':'f30f1008','0x002b3cd9':'f30f1012','0x002b3ce1':'0f58ca','0x002b3cf0':'59c20800'}
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed'
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['0x002b3cc0.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def window_check(w):assert {x['va']:x['bytes'] for x in w}==WINDOWS

def record_check(r):
 assert r['entry']=='002b3cc0' and r['body_byte_count']==52 and r['instruction_count']==15
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==52
 assert int(b['start'],16)==0x2b3cc0 and int(b['end_inclusive'],16)==0x2b3cf3
 cursor=0x2b3cc0;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x2b3cf4
 for va,data in WINDOWS.items():
  off=int(va,16)-0x2b3cc0;chunk=bytes.fromhex(data);assert raw[off:off+len(chunk)]==chunk
 return raw

def codegen_check(assembly):
 assert not re.search(r'^\s*(?:callq?|jmp)\s',assembly,re.M),'call/tail-call forbidden'
 apps=re.findall(r'#APP(.*?)#NO_APP',assembly,re.S);assert len(apps)==1
 lines=[line.split('#')[0].strip() for line in apps[0].splitlines() if line.split('#')[0].strip()]
 ops=[line.split()[0] for line in lines]
 assert ops==['movss','movhps','movss','movhps','addps','movss','movhps'],ops
 def norm(s):return re.sub(r'\s+','',s)
 args=[norm(line[len(op):]) for line,op in zip(lines,ops)]
 a=re.fullmatch(r'\((%[a-z0-9]+)\),%xmm1',args[0]);b=re.fullmatch(r'\((%[a-z0-9]+)\),%xmm2',args[2]);assert a and b
 ar=a[1];br=b[1]
 assert args==[f'({ar}),%xmm1',f'4({ar}),%xmm1',f'({br}),%xmm2',f'4({br}),%xmm2','%xmm2,%xmm1',f'%xmm1,({ar})',f'%xmm1,4({ar})'],args
 outside=re.sub(r'#APP.*?#NO_APP','',assembly,flags=re.S)
 returns=re.findall(r'^\s+(ret[a-z]*)([^\n]*)$',outside,re.M)
 assert [(op,arg.split('#')[0].strip()) for op,arg in returns]==[('retq','')],returns
 for line in outside.splitlines():
  match=re.match(r'^\s+([a-z0-9]+)\s*(.*)',line)
  if not match:continue
  op,arg=match.groups()
  assert not op.startswith('f'),line
  assert not re.search(r'%(?:xmm|ymm|zmm|mm)[0-9]+',arg),line

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--program-record',type=pathlib.Path);a=ap.parse_args();a.root=a.root.resolve()
 paths={
  '0x002b3cc0.cpp':source_path(a.root,'0x002b3cc0'),
  'bf_002b3cc0_add_operation.h':a.root/'include/bf_002b3cc0_add_operation.h',
  'native_test.cpp':a.root/'tests/test_002b3cc0_add_operation.cpp',
  'model_test.cpp':a.root/'tests/test_002b3cc0_add_integer_model.cpp',
  'generate_model.py':a.root/'tests/generate_002b3cc0_add_integer_model.py',
  'source_before.cpp.txt':a.root/'tests/fixtures/002b3cc0_before.cpp.txt',
  'README.md':a.root/'docs/evidence/002b3cc0_add_operation_reviewed_proposal.md',
 }
 mb=(a.root/'metadata/cpp_20261105_002b3cc0_add_operation.json').read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 assert set(m['artifacts'])==set(paths)-{'source_before.cpp.txt'}
 for name,digest in m['artifacts'].items():assert sha(paths[name].read_bytes())==digest,name
 source=paths['0x002b3cc0.cpp'].read_bytes();before=paths['source_before.cpp.txt'].read_bytes();header=paths['bf_002b3cc0_add_operation.h'].read_text()
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
  print('Private body: 52 hash-matched bytes; not whole-XBE authentication',flush=True)
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(a.root/'include')]
 with tempfile.TemporaryDirectory(prefix='bf-2b3cc0-gate-') as td:
  td=pathlib.Path(td);fixture=td/'model.bin';print(run(['python3',str(paths['generate_model.py']),str(fixture)]).stdout.strip(),flush=True)
  for opt in ['-O0','-O2']:
   assembly=td/(opt+'.s');run(common+[opt,'-S',str(paths['0x002b3cc0.cpp']),'-o',str(assembly)]);codegen_check(assembly.read_text());print('Exact seven-operation codegen:',opt,flush=True)
   for extra in ['\tfldz\n','\taddss %xmm1,%xmm2\n','\tcallq helper\n','\tmovups (%rdi),%xmm0\n']:
    try:codegen_check(assembly.read_text()+'\n'+extra)
    except AssertionError:negatives+=1
    else:raise AssertionError('unexpected codegen accepted')
   for replacement in ['', '\tretq $8\n']:
    altered,count=re.subn(r'^\s+retq[ \t]*$',replacement,assembly.read_text(),flags=re.M);assert count==1
    try:codegen_check(altered)
    except AssertionError:negatives+=1
    else:raise AssertionError('missing return or guest RET8 accepted')
   for test in ['native_test','model_test']:
    exe=td/(test+opt);run(common+[opt,str(paths[test+'.cpp']),str(paths['0x002b3cc0.cpp']),'-o',str(exe)]);args=[str(exe)]+([str(fixture)] if test=='model_test' else []);print(run(args).stdout.strip(),flush=True)
   bad=run(common+[opt,'-x','c++','-fsyntax-only','-'],ok=False,stdin=before.decode());assert 'error:' in bad.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native SSE'),(['-U__SSE__'],'requires GNU/Clang x86-64 Linux SysV native SSE')]:
   bad=run(common+flags+['-I'+str(a.root/'include'),'-x','c++','-fsyntax-only','-'],ok=False,stdin='#include "bf_002b3cc0_add_operation.h"\n');assert marker in bad.stderr;negatives+=1
  changes={
   'missing_add':header.replace('addps %%xmm2, %%xmm1','movaps %%xmm2, %%xmm1',1),
   'reverse_operands':header.replace('addps %%xmm2, %%xmm1','addps %%xmm1, %%xmm2\\n\\tmovaps %%xmm2, %%xmm1',1),
   'incoming_lane':header.replace('movss 0(%[destination]), %%xmm1','movss 0(%[destination]), %%xmm0\\n\\tmovss %%xmm0, %%xmm1',1).replace(': "xmm1",',': "xmm0", "xmm1",',1),
   'wide_read':header.replace('movss 0(%[destination]), %%xmm1','movups 0(%[destination]), %%xmm1\\n\\tmovss 0(%[destination]), %%xmm1',1),
   'interleaved_scalars':header[:header.index('    __asm__ volatile(')]+'    for (unsigned i = 0; i < 3; ++i) destination[i] += source[i];\n}\n#endif\n'
  }
  for name,h in changes.items():
   assert h!=header;md=td/name;md.mkdir();(md/'bf_002b3cc0_add_operation.h').write_text(h);(md/'0x002b3cc0.cpp').write_bytes(source);(md/'native_test.cpp').write_bytes(paths['native_test.cpp'].read_bytes())
   test='model_test' if name=='reverse_operands' else 'native_test'
   (md/(test+'.cpp')).write_bytes(paths[test+'.cpp'].read_bytes())
   exe=md/'negative';run(common+['-O2',str(md/(test+'.cpp')),str(md/'0x002b3cc0.cpp'),'-o',str(exe)]);args=[str(exe)]+([str(fixture)] if test=='model_test' else []);bad=run(args,ok=False);assert bad.returncode in (1,2,-11),bad.stdout+bad.stderr;negatives+=1
   assembly=md/'negative.s';run(common+['-O2','-S',str(md/'0x002b3cc0.cpp'),'-o',str(assembly)])
   try:codegen_check(assembly.read_text())
   except AssertionError:negatives+=1
   else:raise AssertionError('bad operation codegen accepted: '+name)
   print('Rejected behavior/codegen mutation:',name,flush=True)
  md=td/'capture_restore';md.mkdir();oracle=paths['native_test.cpp'].read_text();assert 'fxrstor (%rsp)\\n' in oracle
  (md/'native_test.cpp').write_text(oracle.replace('fxrstor (%rsp)\\n','',1));(md/'0x002b3cc0.cpp').write_bytes(source);(md/'bf_002b3cc0_add_operation.h').write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'native_test.cpp'),str(md/'0x002b3cc0.cpp'),'-o',str(exe)]);bad=run([str(exe)],ok=False);assert 'caller-state restoration failed' in bad.stderr;negatives+=1
 print('Exact source reversal and',negatives,'negative controls passed')
 print('Bounded native memory operation only; guest ABI/stack aliasing/fault/original-CPU limits remain')
if __name__=='__main__':main()
