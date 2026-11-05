#!/usr/bin/env python3
"""Native FRNDINT/binary64 scratch/return-boundary gate; private record optional."""
import argparse,copy,hashlib,json,pathlib,re,shutil,subprocess,tempfile
MANIFEST_SHA='84487d0be27a870008e3eea52926294ecfa1edbf917525fd4dc7b58247572742'
BODY_SHA='B2ACFB60D9432E4AD64781AC801918ADA55D9C22650B1504C4EE039ED85DA31F'
SIGNATURE=b'float10 FUN_002eca8b(double param_1)'
INCLUDE=b'#include "bf_002eca8b_round_operation.h"\n'
WINDOWS={'0x002eca91':'d9fc','0x002eca93':'dd5c2400','0x002eca97':'dd442400','0x002eca9d':'c3'}
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b'blob '+str(len(b)).encode()+b'\0'+b).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed'
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['0x002eca8b.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def sequence_check(header):
 assert '"fldl %2\\n\\tfrndint\\n\\tfstpl %1\\n\\tfldl %1"' in header
 assert '__attribute__((always_inline)) static inline long double' in header
 assert ': "=t"(result), "=m"(rounded) : "m"(*input) : "memory"' in header

def capture_check(oracle):
 assert 'using Function=long double(*)(double);' in oracle
 assert 'round_capture(FUN_002eca8b,' in oracle
 assert '"fxrstor (%rcx)\\nmovsd (%rsi),%xmm0\\ncall *%rax\\nfxsave (%rbx)\\n"' in oracle
 assert oracle.count('"fxrstor (%rsp)\\naddq $512,%rsp\\npopq %rbx\\nret\\n')==2
 assert 'restored_caller()' in oracle and 'one_empty_slot()' in oracle and 'pattern<128' in oracle

def window_check(w):assert {x['va']:x['bytes'] for x in w}==WINDOWS

def record_check(r):
 assert r['entry']=='002eca8b' and r['body_byte_count']==19 and r['instruction_count']==9
 assert r['program_memory_body_sha256']==BODY_SHA and len(r['body_ranges'])==1
 b=r['body_ranges'][0];raw=bytes.fromhex(b['bytes_hex'])
 assert sha(raw).upper()==BODY_SHA and len(raw)==19
 assert int(b['start'],16)==0x2eca8b and int(b['end_inclusive'],16)==0x2eca9d
 cursor=0x2eca8b;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length'];joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x2eca9e
 for va,data in WINDOWS.items():
  off=int(va,16)-0x2eca8b;chunk=bytes.fromhex(data);assert raw[off:off+len(chunk)]==chunk
 return raw

def codegen_check(assembly):
 assert not re.search(r'^\s*(?:callq?|jmp)\s',assembly,re.M),'call or tail-call not allowed'
 apps=re.findall(r'#APP(.*?)#NO_APP',assembly,re.S);assert len(apps)==1
 instructions=[s.strip().split()[0] for s in apps[0].splitlines() if s.strip()]
 assert instructions==['fldl','frndint','fstpl','fldl'],instructions
 outside=re.sub(r'#APP.*?#NO_APP','',assembly,flags=re.S)
 for line in outside.splitlines():
  match=re.match(r'^\s+([a-z0-9]+)\s*(.*)',line)
  if not match:continue
  op,arg=match.groups()
  if op.startswith('f'):assert op in ('fldt','fstpt'),line
  if re.search(r'%(?:xmm|ymm|zmm)[0-9]+',arg):assert op in ('movsd','movq'),line
 # Binary80 copies must be paired spill then reload, never duplicate FLD ST0.
 copies=re.findall(r'^\s+(f(?:ld|stp)t)\s',outside,re.M)
 assert copies in ([],['fstpt','fldt']),copies

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--candidate-dir',type=pathlib.Path);ap.add_argument('--program-record',type=pathlib.Path);a=ap.parse_args();d=a.candidate_dir
 mp=d/'manifest.json' if d else a.root/'metadata/cpp_20261105_002eca8b_round_operation.json'
 mb=mp.read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb);paths=m['artifact_source_paths']
 source_path=d/'0x002eca8b.cpp' if d else a.root/paths['wrapper'];before_path=d/'source_before.cpp.txt' if d else a.root/paths['preimage']
 hp=d/'bf_002eca8b_round_operation.h' if d else a.root/paths['header'];tp=d/'test.cpp' if d else a.root/paths['oracle']
 ip=d/'integer_model.cpp' if d else a.root/paths['integer_model']
 source=source_path.read_bytes();before=before_path.read_bytes();header=hp.read_text();oracle=tp.read_text()
 source_check(source,before,m);sequence_check(header);capture_check(oracle);window_check(m['narrow_opcode_windows'])
 assert sha(header.encode())==m['artifacts'][hp.name] and sha(oracle.encode())==m['artifacts']['test.cpp']
 assert sha(ip.read_bytes())==m['artifacts']['integer_model.cpp']
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
 for text,old,new,check in [(header,'frndint','fnop',sequence_check),(header,'__attribute__((always_inline)) ','',sequence_check),
  (oracle,'fxrstor (%rsp)\\n','',capture_check),(oracle,'call *%rax\\nfxsave (%rbx)\\n','fxsave (%rbx)\\ncall *%rax\\n',capture_check)]:
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
  print('Private body: 19 hash-matched bytes, not whole-XBE authentication',flush=True)
 else:print('Private body not re-read; source/body/window pins checked',flush=True)
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(a.root/'include'),'-I'+str(hp.parent)]
 with tempfile.TemporaryDirectory(prefix='bf-2eca8b-gate-') as td:
  td=pathlib.Path(td)
  for opt in ['-O0','-O2']:
   assembly=td/(opt+'.s');run(common+[opt,'-S',str(source_path),'-o',str(assembly)]);codegen_check(assembly.read_text());print('One-slot native80 return codegen:',opt,flush=True)
   codegen_check(assembly.read_text()+'\n\tsubq $16, %rsp\n\taddq $16, %rsp\n')
   for extra in ['\tfld %st(0)\n','\tucomisd %xmm0, %xmm1\n','\tmaxsd %xmm0, %xmm1\n','\tvfmadd132sd %xmm0, %xmm1, %xmm2\n']:
    try:codegen_check(assembly.read_text()+'\n'+extra)
    except AssertionError:negatives+=1
    else:raise AssertionError('unexpected FP codegen accepted')
   exe=td/('positive'+opt);run(common+[opt,str(tp),str(source_path),'-o',str(exe)]);print(run([str(exe)]).stdout.strip(),flush=True)
   model_exe=td/('integer_model'+opt);run(common+[opt,str(ip),str(source_path),'-o',str(model_exe)]);print(run([str(model_exe)]).stdout.strip(),flush=True)
   old=run(common+[opt,'-x','c++','-fsyntax-only','-'],ok=False,stdin=before.decode());assert "undeclared identifier 'ROUND'" in old.stderr;negatives+=1
  for flags,marker in [(['-ffast-math'],'must not be built with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native x87'),(['-mlong-double-64'],'requires native binary80 long double'),(['-mlong-double-128'],'requires native binary80 long double')]:
   bad=run(common+flags+['-x','c++','-fsyntax-only','-'],ok=False,stdin='#include "bf_002eca8b_round_operation.h"\n');assert marker in bad.stderr;negatives+=1
  changes=[('missing_round','frndint','fnop','-O2'),('missing_scratch','fstpl %1\\n\\tfldl %1','fnop','-O2'),('narrowed_return','return result;','return static_cast<float>(result);','-O2'),('missing_inline','__attribute__((always_inline)) ','','-O0')]
  for name,old,new,opt in changes:
   md=td/name;md.mkdir();assert old in header;(md/hp.name).write_text(header.replace(old,new,1));(md/'test.cpp').write_text(oracle);(md/'0x002eca8b.cpp').write_bytes(source)
   exe=md/'negative';run(common+[opt,str(md/'test.cpp'),str(md/'0x002eca8b.cpp'),'-o',str(exe)]);bad=run([str(exe)],ok=False);assert bad.returncode in (1,2,3),bad.stdout+bad.stderr
   assembly=md/'negative.s';run(common+[opt,'-S',str(md/'0x002eca8b.cpp'),'-o',str(assembly)])
   try:codegen_check(assembly.read_text())
   except AssertionError:negatives+=1
   else:raise AssertionError('bad operation codegen accepted: '+name)
   negatives+=1;print('Rejected behavior/codegen mutation:',name,flush=True)
  md=td/'capture_restore';md.mkdir();old='fxrstor (%rsp)\\n';assert old in oracle;(md/'test.cpp').write_text(oracle.replace(old,'',1));(md/'0x002eca8b.cpp').write_bytes(source);(md/hp.name).write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'test.cpp'),str(md/'0x002eca8b.cpp'),'-o',str(exe)]);bad=run([str(exe)],ok=False);assert bad.returncode==2
  negatives+=1;print('Rejected harness mutation: lost caller FP-state restore',flush=True)
 print('Exact source reversal and',negatives,'negative controls passed')
 print('Host binary80 operation only; guest ABI/FIP/FDP/FOP/unmasked/fault limits remain')
if __name__=='__main__':main()
