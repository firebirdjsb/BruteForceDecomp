#!/usr/bin/env python3
"""Native binary80 norm/return-boundary gate; private body record optional."""
import argparse,copy,hashlib,json,pathlib,re,shutil,subprocess,tempfile
MANIFEST_SHA='d4e4768db5b965c3f84f1d6f75f300dc77b08021d84a751f5d1680816dcc1db2'
BODY_SHA='5F4549C0BEC7A3DC6CC1E1BCD1796F1271D397160F7620A1898D617AA5B1EB2B'
SIGNATURE=b'float10 FUN_00314c76(float *param_1)'
INCLUDE=b'#include "bf_00314c76_norm_operation.h"\n'
WINDOWS={'0x00314c7a':'d94008','0x00314c80':'d900','0x00314c84':'d8c9',
 '0x00314c8a':'dec1','0x00314c92':'d9fa','0x00314c94':'dddb','0x00314c9a':'c20400'}

def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed'
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['0x00314c76.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def sequence_check(header):
 expected=['flds 8(%1)\\n\\tflds 4(%1)\\n\\tflds (%1)',
   'fld %%st(0)\\n\\tfmul %%st(1), %%st(0)',
   'fld %%st(2)\\n\\tfmul %%st(3), %%st(0)\\n\\tfaddp %%st(0), %%st(1)',
   'fld %%st(3)\\n\\tfmul %%st(4), %%st(0)\\n\\tfaddp %%st(0), %%st(1)',
   'fsqrt\\n\\tfstp %%st(3)\\n\\tfstp %%st(0)\\n\\tfstp %%st(0)']
 positions=[header.index(fragment) for fragment in expected]
 assert positions==sorted(positions)
 assert ': "=t"(result)' in header

def capture_check(oracle):
 expected=['"pushq %rbx\\n"','"subq $512,%rsp\\n"','"fxsave (%rsp)\\n"',
   '"fxrstor (%rcx)\\n"\n    "call *%rax\\n"\n    "fxsave (%rbx)\\n"',
   '"fxrstor (%rsp)\\n"','"addq $512,%rsp\\n"','"popq %rbx\\n"']
 positions=[oracle.index(fragment) for fragment in expected]
 assert positions==sorted(positions)
 assert 'capture_preserves_caller()' in oracle

def window_check(w):assert {x['va']:x['bytes'] for x in w}==WINDOWS

def record_check(r):
 assert r['entry']=='00314c76' and r['body_byte_count']==39 and r['instruction_count']==17
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==39
 assert int(b['start'],16)==0x314c76 and int(b['end_inclusive'],16)==0x314c9c
 cursor=0x314c76;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x314c9d
 for va,data in WINDOWS.items():
  offset=int(va,16)-0x314c76;chunk=bytes.fromhex(data);assert raw[offset:offset+len(chunk)]==chunk
 return raw

def codegen_check(assembly):
 calls=re.findall(r'^\s*callq?\s+(.+)',assembly,re.M)
 assert all('bf_00314c76_norm_operation' in call for call in calls),'external FP/library call'
 assert not re.search(r'^\s*(?:callq?|jmp)\s+.*(?:sqrt|memcpy|memmove|memset)',assembly,re.M)
 assert not re.search(r'^\s*(?:sqrt|add|mul)(?:ss|sd|ps|pd)\s',assembly,re.M)
 outside=re.sub(r'#APP.*?#NO_APP','',assembly,flags=re.S)
 for line in outside.splitlines():
  match=re.match(r'^\s+(f[a-z0-9]+)\s+(.*)',line)
  if match:
   op,arg=match.groups();assert op in ('fld','fstp','fldt','fstpt'),line
   if op in ('fld','fstp'):assert arg.strip()=='%st(0)',line

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1])
 ap.add_argument('--candidate-dir',type=pathlib.Path);ap.add_argument('--program-record',type=pathlib.Path);a=ap.parse_args();d=a.candidate_dir
 mp=d/'manifest.json' if d else a.root/'metadata/cpp_20261104_00314c76_norm_operation.json'
 mb=mp.read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb);paths=m['artifact_source_paths']
 source_path=d/'0x00314c76.cpp' if d else a.root/paths['wrapper']
 before_path=d/'source_before.cpp.txt' if d else a.root/paths['preimage']
 hp=d/'bf_00314c76_norm_operation.h' if d else a.root/paths['header']
 tp=d/'test.cpp' if d else a.root/paths['oracle']
 source=source_path.read_bytes();before=before_path.read_bytes();header=hp.read_text();oracle=tp.read_text()
 source_check(source,before,m);sequence_check(header);capture_check(oracle);window_check(m['narrow_opcode_windows'])
 assert sha(header.encode())==m['artifacts']['bf_00314c76_norm_operation.h']
 assert sha(oracle.encode())==m['artifacts']['test.cpp']
 negatives=0
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
 for text,old,new,check in [
  (header,'flds 8(%1)\\n\\tflds 4(%1)\\n\\tflds (%1)','flds (%1)\\n\\tflds 4(%1)\\n\\tflds 8(%1)',sequence_check),
  (oracle,'"fxrstor (%rsp)\\n"','',capture_check),
  (oracle,'"call *%rax\\n"\n    "fxsave (%rbx)\\n"','"fxsave (%rbx)\\n"\n    "call *%rax\\n"',capture_check)]:
  assert old in text
  try:check(text.replace(old,new,1))
  except (AssertionError,ValueError):negatives+=1
  else:raise AssertionError('sequence corruption accepted')
 if a.program_record:
  r=json.loads(a.program_record.read_text());raw=record_check(r)
  for idx in range(len(raw)):
   bad=copy.deepcopy(r);b=bytearray(raw);b[idx]^=1;bad['body_ranges'][0]['bytes_hex']=b.hex()
   try:record_check(bad)
   except AssertionError:negatives+=1
   else:raise AssertionError('body-byte corruption accepted')
  print('Private body: 39 hash-matched bytes, not whole-XBE authentication')
 else:print('Private body not re-read; source/body/window pins checked')
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(a.root/'include'),'-I'+str(hp.parent)]
 with tempfile.TemporaryDirectory(prefix='bf-314c76-gate-') as td:
  td=pathlib.Path(td)
  for opt in ['-O0','-O2']:
   assembly=td/(opt+'.s');run(common+[opt,'-S',str(source_path),'-o',str(assembly)]);codegen_check(assembly.read_text())
   print('Return codegen uses only original operation and native80 copies:',opt)
   exe=td/('positive'+opt);run(common+[opt,str(tp),str(source_path),'-o',str(exe)]);print(run([str(exe)]).stdout.strip())
   old=run(common+[opt,'-x','c++','-fsyntax-only','-'],ok=False,stdin=before.decode())
   assert "undeclared identifier 'SQRT'" in old.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),
       (['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native x87'),
       (['-mlong-double-64'],'requires native binary80 long double'),
       (['-mlong-double-128'],'requires native binary80 long double')]:
   bad=run(common+flags+['-x','c++','-fsyntax-only','-'],ok=False,stdin='#include "bf_00314c76_norm_operation.h"\n')
   assert marker in bad.stderr;negatives+=1
  changes=[('reversed_order','flds 8(%1)\\n\\tflds 4(%1)\\n\\tflds (%1)','flds (%1)\\n\\tflds 4(%1)\\n\\tflds 8(%1)'),
           ('missing_sqrt','fsqrt\\n\\t','fnop\\n\\t'),
           ('wrong_cleanup','fstp %%st(3)','fstp %%st(2)'),
           ('narrowed_return','return result;','return static_cast<float>(result);')]
  for name,old,new in changes:
   md=td/name;md.mkdir();assert old in header
   (md/hp.name).write_text(header.replace(old,new,1));(md/'test.cpp').write_text(oracle);(md/'0x00314c76.cpp').write_bytes(source)
   exe=md/'negative';run(common+['-O2',str(md/'test.cpp'),str(md/'0x00314c76.cpp'),'-o',str(exe)])
   bad=run([str(exe)],ok=False);assert bad.returncode in (1,2,3),bad.stdout+bad.stderr
   negatives+=1;print('Rejected behavior mutation:',name)
  md=td/'capture_restore';md.mkdir();old='"fxrstor (%rsp)\\n"';assert old in oracle
  (md/'test.cpp').write_text(oracle.replace(old,'',1));(md/'0x00314c76.cpp').write_bytes(source);(md/hp.name).write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'test.cpp'),str(md/'0x00314c76.cpp'),'-o',str(exe)])
  bad=run([str(exe)],ok=False);assert bad.returncode==2
  negatives+=1;print('Rejected harness mutation: lost caller FP-state restore')
 print('Exact source reversal and',negatives,'negative controls passed')
 print('Host binary80 operation only; guest ABI/FIP/FDP/FOP/unmasked/fault limits remain')
if __name__=='__main__':main()
