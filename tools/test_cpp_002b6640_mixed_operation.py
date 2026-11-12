#!/usr/bin/env python3
"""Public installed-layout gate for the bounded 002b6640 native operation.
Only authored C++/assembly executes. Private original evidence is optional.
Compilers, output directory and TMPDIR are caller-selected; no local paths.
"""
import argparse, hashlib, importlib, json, os, pathlib, shutil, subprocess, sys, tempfile
sys.dont_write_bytecode=True
from source_layout import source_path
MANIFEST_SHA='e5da0e58376bdf6ad970298a4651a39f95401328e92cbe3ea3cfb6d2f071e285'
META='metadata/cpp_20261105_002b6640_mixed_operation.json'

def run(command,env,**kw):
 p=subprocess.run([str(x) for x in command],env=env,text=True,capture_output=True,**kw)
 assert p.returncode==0,(command,p.returncode,p.stdout,p.stderr)
 return p

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]);ap.add_argument('--compiler',action='append',help='C++ compiler executable; repeat to test more toolchains');ap.add_argument('--sanitizers',action='store_true');ap.add_argument('--sanitizer-compiler',default='g++');ap.add_argument('--build-dir',type=pathlib.Path,help='retain generated outputs here, outside source paths');ap.add_argument('--program-record',type=pathlib.Path,help='optional exact private original record; read/static decode only');a=ap.parse_args()
 root=a.root.resolve();support=root/'tests/support/mixed_x87_002b6640'
 mb=(root/META).read_bytes();assert hashlib.sha256(mb).hexdigest()==MANIFEST_SHA;m=json.loads(mb)
 sys.path.insert(0,str(support))
 import provenance,codegen,end_to_end,mutations,review_numerical,review_mutations,scalar_review_codegen
 provenance.verify(root,m,a.program_record)
 source=source_path(root,'0x002b6640');assert source.relative_to(root).as_posix()==provenance.SOURCE
 assert list((root/'src').rglob('0x002b6640.cpp'))==[source]
 native=root/'tests/test_002b6640_mixed_operation.cpp';header=(root/'include/bf_002b6640_mixed_operation.h').read_text();harness=native.read_text()
 compilers=a.compiler or [os.environ.get('CXX') or shutil.which('clang++') or shutil.which('g++')]
 assert all(compilers),'GNU/Clang x86-64 C++ compiler required'
 assert shutil.which('objdump'),'GNU objdump required'
 env=dict(os.environ,PYTHONDONTWRITEBYTECODE='1',ASAN_OPTIONS='detect_leaks=0:halt_on_error=1',UBSAN_OPTIONS='halt_on_error=1')
 common=['-std=c++17','-Wall','-Wextra','-Werror','-fno-fast-math','-ffp-contract=off','-I'+str(root/'include')]
 temporary=None
 if a.build_dir:build=a.build_dir.resolve();build.mkdir(parents=True,exist_ok=True)
 else:temporary=tempfile.TemporaryDirectory(prefix='bf-002b6640-gate-');build=pathlib.Path(temporary.name)
 try:
  # The reviewed fragment is the exact pre-main author harness, not an
  # independently authored capture. Generate it outside the source tree.
  fragment=harness.split('int main(int argc,char**argv){')[0]
  assert hashlib.sha256(fragment.encode()).hexdigest()==m['reviewer_harness_fragment_sha256']
  (build/'harness_fragment.hpp').write_text(fragment)
  records=end_to_end.generate();review_records=review_numerical.records();results=[]
  def codecheck(exe):
   ops=codegen.instructions(exe,'_Z12FUN_002b6640PfS_S_');result=codegen.verify(ops)
   assert all('__stack_chk_fail' in x or '__asan_stack_malloc_0' in x for x in result['calls_outside_atomic_block'])
   result['capture']=codegen.bridge(exe);result['reference']=codegen.verify(codegen.instructions(exe,'mixed_reference'));result['negative_controls']=codegen.mutation_checks(ops)
   return result
  def build_run(compiler,label,flags,extra_probes):
   exe=build/label;command=[compiler,*common,*flags,str(source),str(native),'-o',str(exe)]
   run(command,env);test=run([exe],env);print(label,test.stdout.strip(),flush=True)
   (build/(label+'.log')).write_text(test.stdout+test.stderr)
   code=codecheck(exe)
   if '-fcf-protection=full' in flags:assert codegen.instructions(exe,'_Z12FUN_002b6640PfS_S_')[0]==('endbr64','')
   model=end_to_end.run(exe,records)
   review=review_numerical.run(exe,review_records);anchors=review_numerical.anchors(exe)
   print(label,'PASS',model['cases'],'model cases,',review,'reviewer cases,',anchors,'literal anchors.',flush=True)
   result=dict(label=label,compiler=run([compiler,'--version'],env).stdout.splitlines()[0],command=command,codegen=code,model=model,reviewer_cases=review,literal_anchors=anchors)
   if extra_probes:
    state=build/(label+'-state')
    run([compiler,*common,*flags,'-Wno-unused-function','-I'+str(build),str(support/'review_state.cpp'),str(source),'-o',str(state)],env)
    output=run([state],env).stdout;print(label,output.strip(),flush=True);result['reviewer_state']=output
    scalar=build/(label+'-scalar')
    run([compiler,*common,*flags,str(support/'scalar_review_native.cpp'),str(support/'scalar_review_capture.S'),'-o',str(scalar)],env)
    result['scalar_codegen']=scalar_review_codegen.check(scalar)
    output=run([sys.executable,support/'scalar_review_models.py',scalar,build/(label+'-scalar-results')],env).stdout
    result['scalar_review']=json.loads(output);print(label,'PASS',result['scalar_review']['cases'],'independent per-stage scalar reviewer cases.',flush=True)
   results.append(result);return exe
  baseline=None
  for index,compiler in enumerate(compilers):
   for opt in ('-O0','-O2'):
    exe=build_run(compiler,f'compiler{index}-{opt[1:]}',[opt],opt=='-O2')
    if baseline is None and opt=='-O2':baseline=exe
  # Explicitly keep compiler protections enabled, even where the selected
  # system compiler does not enable them by default. Never use disabling flags.
  protection=build_run(compilers[0],'protected',['-O2','-fcf-protection=full','-fstack-protector-strong'],False)
  if a.sanitizers:
   sanitizer_flags=['-O2','-fcf-protection=full','-fstack-protector-strong','-fsanitize=address,undefined','-fno-sanitize-recover=all','-fno-omit-frame-pointer']
   san=build_run(a.sanitizer_compiler,'sanitize',sanitizer_flags,True)
   output=run([san],dict(env,ASAN_OPTIONS='detect_leaks=0:halt_on_error=1:detect_stack_use_after_return=1')).stdout
   (build/'sanitize-fake-stack.log').write_text(output);print('Enabled ASan fake stack:',output.strip(),flush=True)
  # Every mutant must compile before a behavioral failure can count.
  mutant_results=[];binaries={}
  def mutant_binary(name,h,test=harness):
   d=build/'mutations'/name;d.mkdir(parents=True,exist_ok=True)
   (d/'bf_002b6640_mixed_operation.h').write_text(h);ss=d/'source.cpp';ss.write_bytes(source.read_bytes());tt=d/'test.cpp';tt.write_text(test)
   exe=d/'mutant';run([compilers[0],'-I'+str(d),*common,'-O2','-fcf-protection=full','-fstack-protector-strong',str(ss),str(tt),'-o',str(exe)],env);return exe
  for name,h,test in mutations.changes(header,harness):
   exe=mutant_binary(name,h,test);binaries[name]=exe
   q=subprocess.run([str(exe)],env=env,text=True,capture_output=True,timeout=30)
   assert q.returncode!=0,('undetected native mutant',name)
   result=dict(name=name,exit=q.returncode)
   if name in ('wide_input','wide_output'):
    guard=subprocess.run([str(exe),'--guards-only'],env=env,text=True,capture_output=True,timeout=30)
    assert guard.returncode==-11,('missing protected-page fault',name,guard.returncode);result['guard_exit']=guard.returncode
   mutant_results.append(result);print('Rejected native mutation:',name,flush=True)
  distinguishing=review_mutations.check(header,mutant_binary,baseline,binaries['force_final_C1_zero'])
  for flags,marker in [(['-ffast-math'],'must not be compiled with fast math'),(['-U__x86_64__'],'requires GNU/Clang x86-64 Linux SysV native x87/SSE'),(['-U__SSE__'],'requires GNU/Clang x86-64 Linux SysV native x87/SSE')]:
   q=subprocess.run([compilers[0],*common,*flags,'-fsyntax-only','-x','c++','-'],input='#include "bf_002b6640_mixed_operation.h"\n',env=env,text=True,capture_output=True)
   assert q.returncode and marker in q.stderr,(flags,q.returncode,q.stderr)
  report=dict(builds=results,native_mutations=mutant_results,distinguishing_mutations=distinguishing,private_evidence_requested=bool(a.program_record),scope='bounded native only; no original executable bytes')
  (build/'results.json').write_text(json.dumps(report,indent=2)+'\n')
  provenance.verify(root,m,a.program_record)
  print('All installed-layout gates passed; bounded native operation only. No guest/original-CPU claim.',flush=True)
 finally:
  if temporary:temporary.cleanup()
if __name__=='__main__':main()
