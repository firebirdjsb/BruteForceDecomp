#!/usr/bin/env python3
"""Bounded native SSE/x87 operation gate; private program data is optional."""
import argparse, copy, hashlib, json, pathlib, re, shutil, subprocess, tempfile
MANIFEST_SHA='a96f9c7f05a9ee633f973ee52697b471c305fbfdc2a91acb1e5eaa97d15d0790'
BODY_SHA='8BAE330E7B50ADB10BCF5AD34FC3509582B231AEFF270E5F7550654F10706160'
CONTEXT_SHA='C04F18717657120105F71409BF6DB3130C02EE5D8D2F7351E512CE6046A9F973'
SIGNATURE=b'void FUN_00077eb0(int param_1,float param_2)'
INCLUDE=b'#include "bf_00077eb0_conversion_operation.h"\n'
WINDOWS={'0x00077eb5':'8b410c','0x00077ec1':'d944240c','0x00077ec5':'d9e1',
 '0x00077ec7':'d81db84f3a00','0x00077ecd':'dfe0','0x00077ecf':'f6c405',
 '0x00077ed2':'7a11','0x00077ede':'884104','0x00077ef7':'894c2400',
 '0x00077efb':'f30f2c442400','0x00077f05':'894204','0x00077f10':'894104','0x00077f14':'c20800'}

def sha(data):return hashlib.sha256(data).hexdigest()
def blob(data):return hashlib.sha1(b'blob '+str(len(data)).encode()+b'\0'+data).hexdigest()
def run(args,ok=True,stdin=None):
 p=subprocess.run(args,input=stdin,text=True,capture_output=True)
 if ok:assert p.returncode==0,p.stdout+p.stderr
 else:assert p.returncode!=0,'negative unexpectedly passed'
 return p

def source_check(source,before,m):
 assert sha(source)==m['artifacts']['0x00077eb0.cpp']
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(INCLUDE)==1
 old=before[before.index(SIGNATURE):];new=source[source.index(SIGNATURE):]
 assert source.replace(new,old,1).replace(INCLUDE,b'',1)==before
 assert BODY_SHA.encode() in source and BODY_SHA.encode() in before

def native_sequence_check(header):
 assert '"flds %1\\n\\tfabs\\n\\tfcomps %2\\n\\tfnstsw %%ax"' in header
 assert '"cvttss2sil %1, %0\\n\\tmovl %0, (%2)"' in header
 assert 'threshold_word = UINT32_C(0x358637bd)' in header

def window_check(windows):
 assert {w['va']:w['bytes'] for w in windows}==WINDOWS

def record_check(record):
 assert record['entry']=='00077eb0'
 assert record['body_byte_count']==103 and record['instruction_count']==38
 assert record['program_memory_body_sha256']==BODY_SHA
 ranges=record['body_ranges'];assert len(ranges)==1
 raw=bytes.fromhex(ranges[0]['bytes_hex']);assert sha(raw).upper()==BODY_SHA
 assert int(ranges[0]['start'],16)==0x77eb0 and int(ranges[0]['end_inclusive'],16)==0x77f16
 cursor=0x77eb0;assembled=bytearray()
 for i in record['instructions']:
  assert int(i['address'],16)==cursor
  assert i['flow_override']=='NONE' and not i['is_length_overridden'] and not i['is_fallthrough_overridden']
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length']
  assembled.extend(data);cursor+=len(data)
 assert bytes(assembled)==raw and cursor==0x77f17
 for va,hexdata in WINDOWS.items():
  off=int(va,16)-0x77eb0;assert raw[off:off+len(bytes.fromhex(hexdata))]==bytes.fromhex(hexdata)
 return raw

def context_check(record):
 assert int(record['start'],16)==0x3a4fa8 and int(record['end_inclusive'],16)==0x3a4fc7
 assert record['length']==32 and record['stored_original_filebytes_count']==0
 raw=bytes.fromhex(record['bytes_hex']);assert len(raw)==32
 assert record['program_memory_context_sha256']==CONTEXT_SHA==sha(raw).upper()
 assert raw[16:20]==bytes.fromhex('bd378635')
 return raw

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1])
 ap.add_argument('--candidate-dir',type=pathlib.Path);ap.add_argument('--program-record',type=pathlib.Path)
 ap.add_argument('--constant-context',type=pathlib.Path);a=ap.parse_args();d=a.candidate_dir
 manifest_path=d/'manifest.json' if d else a.root/'metadata/cpp_20261104_00077eb0_conversion_operation.json'
 mb=manifest_path.read_bytes();assert sha(mb)==MANIFEST_SHA;m=json.loads(mb)
 paths=m['artifact_source_paths']
 source_path=d/'0x00077eb0.cpp' if d else a.root/paths['wrapper']
 before_path=d/'source_before.cpp.txt' if d else a.root/paths['preimage']
 header_path=d/'bf_00077eb0_conversion_operation.h' if d else a.root/paths['header']
 oracle_path=d/'test.cpp' if d else a.root/paths['oracle']
 source=source_path.read_bytes();before=before_path.read_bytes();header=header_path.read_text();oracle=oracle_path.read_bytes()
 source_check(source,before,m);native_sequence_check(header);window_check(m['narrow_opcode_windows'])
 assert sha(header.encode())==m['artifacts']['bf_00077eb0_conversion_operation.h']
 assert sha(oracle)==m['artifacts']['test.cpp']
 assert m['constant_evidence']['program_memory_context_sha256']==CONTEXT_SHA
 assert m['constant_evidence']['little_endian_bytes']=='bd378635'
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
 for old,new in [('flds %1\\n\\tfabs\\n\\tfcomps %2','flds %1\\n\\tfcomps %2\\n\\tfabs'),
                 ('cvttss2sil %1, %0\\n\\tmovl %0, (%2)','movl %0, (%2)\\n\\tcvttss2sil %1, %0')]:
  assert old in header
  try:native_sequence_check(header.replace(old,new,1))
  except AssertionError:negative+=1
  else:raise AssertionError('native operation order corruption was accepted')
 if a.program_record:
  r=json.loads(a.program_record.read_bytes());raw=record_check(r)
  for index in range(len(raw)):
   bad=copy.deepcopy(r);corrupt=bytearray(raw);corrupt[index]^=1;bad['body_ranges'][0]['bytes_hex']=corrupt.hex()
   try:record_check(bad)
   except AssertionError:negative+=1
   else:raise AssertionError('body corruption was accepted')
  print('Private program body: 103 hash-matched bytes; full original XBE not reauthenticated')
 else:print('Private program body not re-read; canonical body/source/window pins checked')
 if a.constant_context:
  r=json.loads(a.constant_context.read_bytes());raw=context_check(r)
  for index in range(len(raw)):
   bad=copy.deepcopy(r);corrupt=bytearray(raw);corrupt[index]^=1;bad['bytes_hex']=corrupt.hex()
   try:context_check(bad)
   except AssertionError:negative+=1
   else:raise AssertionError('context corruption was accepted')
  print('Private 32-byte data context hash checked; target DWORD 0x358637bd')
 else:print('Private constant context not re-read; proven target bytes and context hash pinned')
 c=shutil.which('clang++');assert c
 common=[c,'-std=c++17','-Wall','-Wextra','-Werror','-ffp-contract=off','-I'+str(header_path.parent)]
 with tempfile.TemporaryDirectory(prefix='bf-77eb0-gate-') as temp:
  tmp=pathlib.Path(temp);codegen=tmp/'codegen.cpp'
  codegen.write_text('#include "bf_00077eb0_conversion_operation.h"\nextern "C" std::uint32_t bf_probe(std::uint32_t k,std::uint32_t w,void *p){return bf_00077eb0_conversion_operation(k,w,p);}\n')
  for opt in ['-O0','-O2']:
   assembly=tmp/('codegen'+opt+'.s');run(common+[opt,'-S',str(codegen),'-o',str(assembly)])
   generated=assembly.read_text();calls=re.findall(r'^\s*callq?\s+(.+)',generated,re.M)
   assert all('bf_00077eb0_' in target for target in calls),'uncontrolled call in operation'
   assert not re.search(r'^\s*(?:callq?|jmp)\s+.*(?:memcpy|memmove|memset)',generated,re.M)
   print('Operation codegen has no external calls:',opt)
   exe=tmp/('positive'+opt);run(common+[opt,str(oracle_path),'-o',str(exe)])
   print(run([str(exe)]).stdout.strip())
   run([c,'-std=c++17',opt,'-w','-fsyntax-only','-I'+str(a.root/'include'),'-I'+str(header_path.parent),str(source_path)])
   old=run([c,'-std=c++17',opt,'-w','-fsyntax-only','-I'+str(a.root/'include'),'-x','c++','-'],ok=False,stdin=before.decode())
   assert "undeclared identifier 'ABS'" in old.stderr;negative+=1
  for options,marker in [(['-ffast-math'],'must not be built with fast math'),
                         (['-U__x86_64__','-U__i386__'],'requires GNU/Clang native x86 SSE and x87'),
                         (['-U__SSE__'],'requires GNU/Clang native x86 SSE and x87')]:
   bad=run(common+options+['-x','c++','-fsyntax-only','-'],ok=False,stdin='#include "bf_00077eb0_conversion_operation.h"\n')
   assert marker in bad.stderr;negative+=1
  mutations=[
    ('rounded_conversion','cvttss2sil','cvtss2sil'),
    ('missing_fabs','\\n\\tfabs',''),
    ('wrong_threshold','0x358637bd','0x358637bc'),
    ('wrong_selector','case 1:','case 9:'),
    ('wrong_raw_bits','"r"(raw_word)','"r"(raw_word ^ 0x80000000u)'),
    ('wide_boolean_store','*static_cast<unsigned char *>(output_bytes) = static_cast<unsigned char>(result);',
     '__asm__ volatile("movl %1, (%0)" : : "r"(output_bytes), "r"(result) : "memory");')]
  for name,old,new in mutations:
   md=tmp/name;md.mkdir();(md/'test.cpp').write_bytes(oracle)
   assert old in header;(md/'bf_00077eb0_conversion_operation.h').write_text(header.replace(old,new))
   exe=md/'negative';run(common+['-O2',str(md/'test.cpp'),'-o',str(exe)])
   bad=run([str(exe)],ok=False)
   assert bad.returncode in (1,2,3,-11),bad.stdout+bad.stderr
   negative+=1;print('Rejected behavioral mutation:',name)
  md=tmp/'fxrestore-clobber';md.mkdir()
  broken=oracle.decode().replace(': BF_TEST_XMM_CLOBBERS, BF_TEST_X87_CLOBBERS, "memory");', ': "memory");')
  assert broken!=oracle.decode();(md/'test.cpp').write_text(broken)
  (md/'bf_00077eb0_conversion_operation.h').write_text(header)
  exe=md/'negative';run(common+['-O2',str(md/'test.cpp'),'-o',str(exe)])
  bad=run([str(exe)],ok=False);assert bad.returncode==2
  negative+=1;print('Rejected harness mutation: missing FXRSTOR register clobbers')
 print('Exact source reversal and',negative,'negative controls passed')
 print('Captured-word operation only; guest ABI/EFLAGS/FIP/FDP/FOP, unmasked traps and fault recovery excluded')
if __name__=='__main__':main()
