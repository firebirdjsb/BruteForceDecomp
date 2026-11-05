#!/usr/bin/env python3
"""Pinned integer-index source repair: host syntax, bounded native and integer models.
Original machine bytes are decode-only data; no guest ABI or Xbox execution claim.
"""
from __future__ import annotations
import argparse,copy,hashlib,json,os,re,shutil,subprocess,tempfile
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
ENTRY='0x0034e2e0'
SOURCE='src/platform/network_xnet/0x0034e2e0.cpp'
PREIMAGE='tests/fixtures/0034e2e0_before.cpp.txt'
FIXTURE='tests/fixtures/0034e2e0_native_model.cpp'
MANIFEST='metadata/cpp_0034e2e0_integer_index.json'
MANIFEST_SHA='aaf3c1ea561d34d5d8cfe274e16810fb04aa9a7ee5745f55a4ebffba11934949'
FIXTURE_SHA='1e100144b0c15a3c3976e77f82c8473dfa64b337f7895a9b810499ca85960639'
BEFORE_SHA='5d4ef125f7a2d28cdc2bbb954dcb7a8b0be9013f6d1ac91959b8007f0b89305e'
AFTER_SHA='231736e862e008301dbc9e4278f2533ac265e60742776a2762fe1a0a81d5c4b9'
BODY_SHA='F45E327C8D4530CC3F5B923C289E0970FD0BF16A9AD45241EA440F3E5D4A6891'
PARTS='55 8bec 51 8b450c 56 6a09 99 5e f7fe 33c9 41 3bc1 7c0c 8d4c4901 3bc8 7ef8 85c9 7e59 8b7508 53 57 3b4d0c 894d08 7d3c 8975fc 8b4508 3bc1 8b1486 7c19 8b5dfc 8b3b 3bfa 7610 893c86 8bf9 c1e702 2bc1 2bdf 3bc1 7dea 014d08 891486 8bc1 c1e002 0145fc 8b4508 3b450c 7cc7 8bc1 6a03 99 59 f7f9 8bc8 85c9 7fae 5f 5b 5e c9 c20800'.split()
RAW=bytes.fromhex(''.join(PARTS))
DECODE=[('push','%ebp'),('mov','%esp,%ebp'),('push','%ecx'),('mov','0xc(%ebp),%eax'),('push','%esi'),('push','$0x9'),('cltd',''),('pop','%esi'),('idiv','%esi'),('xor','%ecx,%ecx'),('inc','%ecx'),('cmp','%ecx,%eax'),('jl','0x34e301'),('lea','0x1(%ecx,%ecx,2),%ecx'),('cmp','%eax,%ecx'),('jle','0x34e2f5'),('test','%ecx,%ecx'),('jle','0x34e35a'),('mov','0x8(%ebp),%esi'),('push','%ebx'),('push','%edi'),('cmp','0xc(%ebp),%ecx'),('mov','%ecx,0x8(%ebp)'),('jge','0x34e34a'),('mov','%esi,-0x4(%ebp)'),('mov','0x8(%ebp),%eax'),('cmp','%ecx,%eax'),('mov','(%esi,%eax,4),%edx'),('jl','0x34e334'),('mov','-0x4(%ebp),%ebx'),('mov','(%ebx),%edi'),('cmp','%edx,%edi'),('jbe','0x34e334'),('mov','%edi,(%esi,%eax,4)'),('mov','%ecx,%edi'),('shl','$0x2,%edi'),('sub','%ecx,%eax'),('sub','%edi,%ebx'),('cmp','%ecx,%eax'),('jge','0x34e31e'),('add','%ecx,0x8(%ebp)'),('mov','%edx,(%esi,%eax,4)'),('mov','%ecx,%eax'),('shl','$0x2,%eax'),('add','%eax,-0x4(%ebp)'),('mov','0x8(%ebp),%eax'),('cmp','0xc(%ebp),%eax'),('jl','0x34e311'),('mov','%ecx,%eax'),('push','$0x3'),('cltd',''),('pop','%ecx'),('idiv','%ecx'),('mov','%eax,%ecx'),('test','%ecx,%ecx'),('jg','0x34e306'),('pop','%edi'),('pop','%ebx'),('pop','%esi'),('leave',''),('ret','$0x8')]
EXPECTED='111008 initialized native cases; 444008 independent DWORD memory models; 2196 boundary arithmetic identities passed'
def need(ok,msg):
 if not ok:raise ValueError(msg)
def sha(raw):return hashlib.sha256(raw).hexdigest()
def reject(fn,label):
 try:fn()
 except (ValueError,KeyError,TypeError):return
 raise ValueError('negative control accepted: '+label)
def run(cmd,env=None):return subprocess.run(cmd,text=True,capture_output=True,timeout=180,env=env)
def success(cmd,env=None):
 p=run(cmd,env);need(p.returncode==0,'failed: '+' '.join(map(str,cmd))+'\n'+p.stdout+p.stderr);return p

def windows():
 at=int(ENTRY,16);out=[]
 for part in PARTS:out.append({'address':f'0x{at:08x}','bytes':part});at+=len(bytes.fromhex(part))
 need(at==0x34e35f and len(out)==61 and len(RAW)==127 and sha(RAW).upper()==BODY_SHA,'immutable raw body')
 starts={int(w['address'],16) for w in out};targets=[]
 for w in out:
  raw=bytes.fromhex(w['bytes']);at=int(w['address'],16)
  if raw[0] in (0x76,0x7c,0x7d,0x7e,0x7f):
   dest=at+2+int.from_bytes(raw[1:],'little',signed=True);need(dest in starts,'closed conditional CFG');targets.append(dest)
 need(targets==[0x34e301,0x34e2f5,0x34e35a,0x34e34a,0x34e334,0x34e334,0x34e31e,0x34e311,0x34e306],'exact branch targets')
 return out

def validate_body(ranges,count,ins):
 need(ranges==[{'start':'0034e2e0','end_inclusive':'0034e35e','length':127,'bytes_hex':RAW.hex()}] and count==61 and ins==windows(),'complete byte and boundary proof')
def validate_manifest(doc):
 need(sha((json.dumps(doc,indent=2)+'\n').encode())==MANIFEST_SHA,'whole manifest pin')
 need(doc['entry']==ENTRY and doc['source']==SOURCE and doc['original_body_sha256']==BODY_SHA,'identity')
 need(doc['source_before_sha256']==BEFORE_SHA and doc['source_after_sha256']==AFTER_SHA,'source pins')
 need(doc['canonical_functions_executed'] is False and doc['original_machine_code_executed'] is False and doc['original_xbe_reauthenticated'] is False,'boundaries')
 validate_body(doc['body_ranges'],doc['instruction_count'],doc['instruction_windows'])
def validate_source(doc,before,after):
 need(sha(before)==BEFORE_SHA and sha(after)==AFTER_SHA,'immutable source pins')
 need(hashlib.sha1(b'blob '+str(len(before)).encode()+b'\0'+before).hexdigest()==doc['preimage_git_blob'],'historical Git blob')
 old,new=before.decode(),after.decode();forward=old;reverse=new
 for r in doc['replacements']:
  need(r['count']==1 and forward.count(r['before'])==1 and reverse.count(r['after'])==1,'unique exact replacement')
  forward=forward.replace(r['before'],r['after']);reverse=reverse.replace(r['after'],r['before'])
 need(forward==new and reverse==old,'reversible source transformation')
 sig='void FUN_0034e2e0(uint *param_1,int param_2)'
 need(old.count(sig)==new.count(sig)==1,'unchanged signature')
 need(old[old.index('        for (puVar5'):old.index('        param_1 = (uint *)((int)param_1')]==new[new.index('        for (puVar5'):new.index('        local_index = local_index')],'unchanged pointer loop')
 need('Input x86 body SHA-256: '+BODY_SHA in new and 'ABI_UNVERIFIED' in new,'provenance and boundary retained')
def independent_decode(work):
 path=work/'0034e2e0.decode-only.bin';path.write_bytes(RAW)
 p=success([shutil.which('objdump') or 'objdump','-D','-b','binary','-m','i386','--adjust-vma='+ENTRY,str(path)])
 found=[]
 for line in p.stdout.splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2}\s+)+)\s*(\S+)\s*(.*?)\s*$',line)
  if m:found.append((int(m[1],16),''.join(m[2].split()),m[3],m[4].replace(' ','')))
 expected=[(int(w['address'],16),w['bytes'],*d) for w,d in zip(windows(),DECODE)]
 need(found==expected,'independent i386 full-body decode')
 print('Independent raw decode: 127 bytes, 61 instructions, nine closed conditional edges; no original bytes executed.')
def validate_private(status,r):
 need(status['entry']==r['entry']=='0034e2e0' and r['name']=='FUN_0034e2e0' and r['is_thunk'] is False,'private identity')
 need(status['program_memory_body_sha256']==status['canonical_body_sha256']==r['program_memory_body_sha256']==BODY_SHA,'private body hashes')
 need(status['body_byte_count']==r['body_byte_count']==127 and status['instruction_count']==r['instruction_count']==61,'private sizes')
 need(status['canonical_hash_match'] is True and status['byte_and_instruction_validation_pass'] is True and status['issues']==[] and status['uncovered_body_byte_count']==0 and status['first_uncovered_addresses']==[] and status['prefetch_listing_disagreements']==[],'private validation')
 validate_body(r['body_ranges'],r['instruction_count'],[{'address':'0x'+i['address'],'bytes':i['bytes_hex']} for i in r['instructions']])
 for i,w in zip(r['instructions'],windows()):
  raw=bytes.fromhex(w['bytes']);at=int(w['address'],16)
  need(i['length']==i['parsed_length']==len(raw) and i['flow_override']=='NONE' and i['is_length_overridden'] is False and i['is_fallthrough_overridden'] is False and i['listing_metadata_is_analyzed_not_byte_proof'] is True,'private boundaries/overrides')
  typ,flows,fall='FALL_THROUGH',[],f'{at+len(raw):08x}'
  if raw[0] in (0x76,0x7c,0x7d,0x7e,0x7f):typ,flows='CONDITIONAL_JUMP',[f"{at+2+int.from_bytes(raw[1:],'little',signed=True):08x}"]
  if raw[0]==0xc2:typ,fall='TERMINATOR',None
  need(i['flow_type']==typ and i['flows']==flows and i['fallthrough']==fall,'raw-derived full flow')
def private_replay(folder,doc):
 v=json.loads((folder/'validation.json').read_text());matches=[s for s in v['functions'] if s['entry']=='0034e2e0'];need(len(matches)==1,'one private record');s=matches[0]
 need((s['jsonl_byte_offset'],s['jsonl_byte_length'])==(288035292,21497),'indexed range')
 with (folder/'functions.jsonl').open('rb') as f:f.seek(s['jsonl_byte_offset']);raw=f.read(s['jsonl_byte_length'])
 need(sha(raw)==doc['private_record_sha256'],'selected private record pin');r=json.loads(raw);validate_private(s,r);count=0
 for field,value in [('entry','0'),('canonical_body_sha256','0'*64),('body_byte_count',126),('instruction_count',60),('issues',['bad']),('canonical_hash_match',False),('byte_and_instruction_validation_pass',False),('uncovered_body_byte_count',1)]:
  b=copy.deepcopy(s);b[field]=value;reject(lambda:validate_private(b,r),field);count+=1
 for n in range(61):
  for field,value in [('address','00000000'),('bytes_hex','90'),('length',0),('parsed_length',0),('flow_override','CALL_RETURN'),('is_length_overridden',True),('is_fallthrough_overridden',True),('flow_type','BAD'),('flows',['ffffffff']),('fallthrough','ffffffff')]:
   b=copy.deepcopy(r);b['instructions'][n][field]=value;reject(lambda:validate_private(s,b),f'{n}:{field}');count+=1
 print(f'Private selected-record replay passed; {count} corruptions rejected. No whole-XBE reauthentication.')
def public_negatives(doc,before,after):
 count=0
 for n in range(len(RAW)):
  ranges=copy.deepcopy(doc['body_ranges']);b=bytearray(RAW);b[n]^=1;ranges[0]['bytes_hex']=b.hex();reject(lambda:validate_body(ranges,61,doc['instruction_windows']),str(n));count+=1
 for n in range(61):
  w=copy.deepcopy(doc['instruction_windows']);w[n]['address']='0x00000000';reject(lambda:validate_body(doc['body_ranges'],61,w),str(n));count+=1
 for field,value in [('entry','0x0'),('source_after_sha256','0'*64),('native_contract',['arbitrary native arrays allowed']),('original_machine_code_executed',True)]:
  b=copy.deepcopy(doc);b[field]=value;reject(lambda:validate_manifest(b),field);count+=1
 for old,new in [(b'local_index = iVar4;',b'local_index = 0;'),(b'local_index + iVar4;',b'local_index + 1;'),(b'local_index < param_2',b'local_index <= param_2'),(b'uVar1 < *puVar5',b'uVar1 > *puVar5'),(b'void FUN_0034e2e0(uint *param_1,int param_2)',b'void FUN_0034e2e0(uint *param_1,unsigned int param_2)')]:
  need(after.count(old)==1,'mutation point');reject(lambda:validate_source(doc,before,after.replace(old,new)),old.decode());count+=1
 print(f'Public source/body/manifest negative controls: {count} rejected.')
def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--root',type=Path,default=ROOT);p.add_argument('--include-root',type=Path);p.add_argument('--private-export',type=Path);p.add_argument('--sanitize',action='store_true');a=p.parse_args()
 root=a.root.resolve();inc=(a.include_root or root)/'include';compiler=shutil.which('clang++');need(compiler,'clang++ required')
 raw=(root/MANIFEST).read_bytes();need(sha(raw)==MANIFEST_SHA,'manifest pin');doc=json.loads(raw);validate_manifest(doc)
 before=(root/PREIMAGE).read_bytes();after=(root/SOURCE).read_bytes();validate_source(doc,before,after)
 fixture=(root/FIXTURE).read_bytes();need(sha(fixture)==FIXTURE_SHA,'fixture pin');public_negatives(doc,before,after)
 if a.private_export:private_replay(a.private_export,doc)
 with tempfile.TemporaryDirectory(prefix='bf-0034e2e0-gate-') as temp:
  work=Path(temp);independent_decode(work)
  seam=after.decode().replace('FUN_0034e2e0','bounded_native_0034e2e0');need(after.count(b'FUN_0034e2e0')==2,'renamed label and symbol only')
  (work/'0034e2e0.test-seam.inc').write_text(seam);(work/'native.cpp').write_bytes(fixture)
  for opt in ('-O0','-O2'):
   flags=[compiler,'-std=c++17',opt,'-x','c++','-fsyntax-only','-I',str(inc)]
   old=run(flags+[str(root/PREIMAGE)]);need(old.returncode!=0 and old.stderr.count('error: cast from pointer to smaller type')==4,'exact four historical truncation errors')
   success(flags+[str(root/SOURCE)])
   exe=work/('native'+opt);success([compiler,'-std=c++17',opt,'-Wall','-Wextra','-Werror','-I',str(inc),str(work/'native.cpp'),'-o',str(exe)])
   result=success([str(exe)]);need(result.stdout.strip()==EXPECTED,'native/model coverage');print(opt+': '+result.stdout.strip())
  # This mutation stays memory-safe in the contract but reverses ordering.
  (work/'0034e2e0.test-seam.inc').write_text(seam.replace('uVar1 < *puVar5','uVar1 > *puVar5'))
  exe=work/'behavioral-negative';success([compiler,'-std=c++17','-O2','-I',str(inc),str(work/'native.cpp'),'-o',str(exe)]);bad=run([str(exe)]);need(bad.returncode!=0 and 'failure:' in bad.stderr,'independent oracle must reject reversed comparison');print('Compiled behavioral negative rejected by independent oracle.')
  (work/'0034e2e0.test-seam.inc').write_text(seam)
  if a.sanitize:
   gcc=shutil.which('g++-14') or shutil.which('g++');need(gcc,'GCC required');exe=work/'sanitized';success([gcc,'-std=c++17','-O1','-g','-fno-omit-frame-pointer','-fsanitize=address,undefined','-Wall','-Wextra','-Werror','-I',str(inc),str(work/'native.cpp'),'-o',str(exe)])
   env=os.environ.copy();env['ASAN_OPTIONS']='detect_leaks=0:halt_on_error=1';env['UBSAN_OPTIONS']='halt_on_error=1';result=success([str(exe)],env);need(result.stdout.strip()==EXPECTED,'sanitizer coverage');print('GCC ASan/UBSan: '+result.stdout.strip())
 print('Bounded native operation only; guest ABI, caller allocation, guest mapping/wrap and Xbox execution remain unverified.')
if __name__=='__main__':main()
