#!/usr/bin/env python3
"""Bounded native x87 operation gate; private program records are optional data."""
import argparse, copy, hashlib, json, pathlib, re, shutil, subprocess, tempfile

MANIFEST_SHA='ffb20cf5decb187374af8b19d5fb3254996f54274cea5e11853a73f9e2e92432'
BODY_SHA='5E5BB17FE34459DC784761E327D05E19B70925A191BC5665096D992CE7496333'
SIGNATURE=b'undefined4 FUN_0023c0e0(uint *param_1)'
INCLUDE=b'#include "bf_0023c0e0_storage_operation.h"\n'
WINDOWS={
 '0x0023c0e1':'8b08','0x0023c0ee':'894c2400','0x0023c10d':'890a',
 '0x0023c111':'db442400','0x0023c117':'d95a0c','0x0023c11a':'db442400',
 '0x0023c11e':'d95a08','0x0023c121':'db442400','0x0023c125':'d95204',
 '0x0023c128':'d91a','0x0023c136':'880a','0x0023c138':'b001',
 '0x0023c14a':'db442400','0x0023c14e':'d95a08','0x0023c151':'db442400',
 '0x0023c155':'d95204','0x0023c158':'d91a'}

def sha(data):return hashlib.sha256(data).hexdigest()
def blob(data):return hashlib.sha1(b'blob '+str(len(data)).encode()+b'\0'+data).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed'
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['0x0023c0e0.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 restored=source.replace(new,old,1).replace(INCLUDE,b'',1)
 assert restored==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def order_check(header):
 pair='"fildl %1\\n\\tfsts 4(%0)\\n\\tfstps (%0)"'
 assert pair in header,'pair must keep one FILD then FST+4/FSTP+0'
 four='''case UINT32_C(0x1d3e389e):
        bf_0023c0e0_store_one(word, output + 12);
        bf_0023c0e0_store_one(word, output + 8);
        bf_0023c0e0_store_pair(word, output);'''
 assert four in header,'four-output write/load order'
 three='''case UINT32_C(0xf95aad3d):
        bf_0023c0e0_store_one(word, output + 8);
        bf_0023c0e0_store_pair(word, output);'''
 assert three in header,'three-output write/load order'

def window_check(windows):
 assert {w['va']:w['bytes'] for w in windows}==WINDOWS

def record_check(record):
 assert record['entry']=='0023c0e0'
 assert record['body_byte_count']==126 and record['instruction_count']==49
 assert record['program_memory_body_sha256']==BODY_SHA
 ranges=record['body_ranges'];assert len(ranges)==1
 raw=bytes.fromhex(ranges[0]['bytes_hex']);assert sha(raw).upper()==BODY_SHA
 assert int(ranges[0]['start'],16)==0x23c0e0 and int(ranges[0]['end_inclusive'],16)==0x23c15d
 cursor=0x23c0e0;assembled=bytearray()
 for i in record['instructions']:
  assert int(i['address'],16)==cursor
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length']
  assembled.extend(data);cursor+=len(data)
 assert bytes(assembled)==raw and cursor==0x23c15e
 for va,hexdata in WINDOWS.items():
  off=int(va,16)-0x23c0e0;assert raw[off:off+len(bytes.fromhex(hexdata))]==bytes.fromhex(hexdata)
 return raw

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1])
 ap.add_argument('--candidate-dir',type=pathlib.Path)
 ap.add_argument('--program-record',type=pathlib.Path);a=ap.parse_args();d=a.candidate_dir
 manifest_path=d/'manifest.json' if d else a.root/'metadata/cpp_20261104_0023c0e0_storage_operation.json'
 mb=manifest_path.read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 paths=m['artifact_source_paths']
 source_path=d/'0x0023c0e0.cpp' if d else a.root/paths['wrapper']
 before_path=d/'source_before.cpp.txt' if d else a.root/paths['preimage']
 header_path=d/'bf_0023c0e0_storage_operation.h' if d else a.root/paths['header']
 oracle_path=d/'test.cpp' if d else a.root/paths['oracle']
 source=source_path.read_bytes();before=before_path.read_bytes()
 header=header_path.read_text();oracle=oracle_path.read_bytes()
 source_check(source,before,m);order_check(header);window_check(m['narrow_opcode_windows'])
 assert sha(header.encode())==m['artifacts']['bf_0023c0e0_storage_operation.h']
 assert sha(oracle)==m['artifacts']['test.cpp']
 negative=0
 for bad_source,bad_before in [(source+b' ',before),(source,before+b' ')]:
  try:source_check(bad_source,bad_before,m)
  except AssertionError:negative+=1
  else:raise AssertionError('source corruption was accepted')
 for n,w in enumerate(m['narrow_opcode_windows']):
  for index in range(len(bytes.fromhex(w['bytes']))):
   bad=copy.deepcopy(m['narrow_opcode_windows']);data=bytearray.fromhex(w['bytes']);data[index]^=1
   bad[n]['bytes']=data.hex()
   try:window_check(bad)
   except AssertionError:negative+=1
   else:raise AssertionError('instruction-window corruption was accepted')
 for old,new in [('output + 12);\n        bf_0023c0e0_store_one(word, output + 8)',
                  'output + 8);\n        bf_0023c0e0_store_one(word, output + 12)'),
                 ('fsts 4(%0)\\n\\tfstps (%0)','fsts (%0)\\n\\tfstps 4(%0)')]:
  assert old in header
  try:order_check(header.replace(old,new,1))
  except AssertionError:negative+=1
  else:raise AssertionError('write-order corruption was accepted')
 if a.program_record:
  r=json.loads(a.program_record.read_bytes());raw=record_check(r)
  for index in range(len(raw)):
   bad=copy.deepcopy(r);corrupt=bytearray(raw);corrupt[index]^=1;bad['body_ranges'][0]['bytes_hex']=corrupt.hex()
   try:record_check(bad)
   except AssertionError:negative+=1
   else:raise AssertionError('body corruption was accepted')
  print('Private program body: 126 hash-matched bytes; full original XBE not reauthenticated')
 else:print('Private program body not re-read; canonical body/source/window pins checked')
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(header_path.parent)]
 with tempfile.TemporaryDirectory(prefix='bf-23c0e0-gate-') as tmp:
  tmp=pathlib.Path(tmp)
  codegen=tmp/'codegen.cpp'
  codegen.write_text('#include "bf_0023c0e0_storage_operation.h"\nextern "C" std::uint32_t bf_probe(std::uint32_t w,std::uint32_t k,void *p){return bf_0023c0e0_storage_operation(w,k,p); }\n')
  for opt in ['-O0','-O2']:
   assembly=tmp/('codegen'+opt+'.s')
   run(common+[opt,'-S',str(codegen),'-o',str(assembly)])
   generated=assembly.read_text()
   calls=re.findall(r'^\s*callq?\s+(.+)',generated,re.M)
   assert all('bf_0023c0e0_' in target for target in calls),'uncontrolled call in operation'
   assert not re.search(r'^\s*(?:callq?|jmp)\s+.*(?:memcpy|memmove|memset)',generated,re.M)
   print('Native operation codegen has no external calls:',opt)
   exe=tmp/('positive'+opt)
   run(common+[opt,str(oracle_path),'-o',str(exe)])
   print(run([str(exe)]).stdout.strip())
   run([c,'-std=c++17',opt,'-w','-fsyntax-only','-I'+str(a.root/'include'),'-I'+str(header_path.parent),str(source_path)])
   old=run([c,'-std=c++17',opt,'-w','-fsyntax-only','-I'+str(a.root/'include'),'-x','c++','-'],ok=False,stdin=before.decode())
   assert "undeclared identifier 'SUB41'" in old.stderr;negative+=1
  for options,marker in [(['-ffast-math'],'must not be built with fast math'),
                          (['-U__x86_64__','-U__i386__'],'requires GNU/Clang native x86 x87')]:
   bad=run(common+options+['-I'+str(header_path.parent),'-x','c++','-fsyntax-only','-'],ok=False,
           stdin='#include "bf_0023c0e0_storage_operation.h"\n')
   assert marker in bad.stderr;negative+=1
  for name,old,new in [
    ('float_interpretation','fildl','flds'),
    ('wrong_selector','case UINT32_C(0xeee373be):','case UINT32_C(0xeee373bf):'),
    ('wrong_byte','static_cast<unsigned char>(word)','static_cast<unsigned char>(word >> 8)'),
    ('lost_return_upper','(selector & UINT32_C(0xffffff00)) | UINT32_C(1)','UINT32_C(1)')]:
   md=tmp/name;md.mkdir();(md/'test.cpp').write_bytes(oracle)
   assert old in header;(md/'bf_0023c0e0_storage_operation.h').write_text(header.replace(old,new))
   exe=md/'negative';run(common+['-O2',str(md/'test.cpp'),'-o',str(exe)])
   bad=run([str(exe)],ok=False);assert bad.returncode in [1,2]
   negative+=1;print('Rejected behavioral mutation:',name)
  # A permanent regression for the reviewer-found compiler clobber defect.
  md=tmp/'fxrestore-clobber';md.mkdir()
  broken=oracle.decode().replace(': BF_TEST_XMM_CLOBBERS, BF_TEST_X87_CLOBBERS, "memory");', ': "memory");')
  assert broken!=oracle.decode()
  (md/'test.cpp').write_text(broken);(md/'bf_0023c0e0_storage_operation.h').write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'test.cpp'),'-o',str(exe)])
  bad=run([str(exe)],ok=False);assert bad.returncode==2
  negative+=1;print('Rejected harness mutation: missing FXRSTOR register clobbers')
 print('Exact source reversal and',negative,'negative controls passed')
 print('Logical captured-word operation only; guest ABI/EFLAGS/FIP/FDP and unmasked/fault recovery excluded')
if __name__=='__main__':main()
