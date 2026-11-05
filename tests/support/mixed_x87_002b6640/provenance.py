"""Public source reversal/pins; optional private full-record replay as data only."""
import copy, hashlib, json, pathlib, re, subprocess, tempfile
SOURCE='src/main_unclassified/band_002b/0x002b6640.cpp'
SIGNATURE=b'void FUN_002b6640(float *param_1,float *param_2,float *param_3)'
ADDED=b'#include "bf_002b6640_mixed_operation.h"\n/* Isolated bounded-native proposal. Original draft status above is historical. */\n'
BODY_SHA='f6340c78d440c62731ea5178275001795009b2411379533260958d483f53376f'
RECORD_SHA='170ed6107d34d1fb6bfd01eb64ad47a859349058e2ccbdb03c44a5289d767a63'
def sha(data):return hashlib.sha256(data).hexdigest()
def blob(data):return hashlib.sha1(b'blob '+str(len(data)).encode()+b'\0'+data).hexdigest()
def source_check(source,before,m):
 assert sha(source)==m['artifacts'][SOURCE]
 assert sha(before)==m['source_before_sha256'] and blob(before)==m['source_before_git_blob']
 assert source.count(SIGNATURE)==before.count(SIGNATURE)==source.count(ADDED)==1
 assert source.replace(source[source.index(SIGNATURE):],before[before.index(SIGNATURE):],1).replace(ADDED,b'',1)==before
 assert BODY_SHA.upper().encode() in source and BODY_SHA.upper().encode() in before

def record_check(r):
 assert r['entry']=='002b6640' and r['name']=='FUN_002b6640' and not r['is_thunk']
 assert r['body_byte_count']==103 and r['instruction_count']==30 and len(r['body_ranges'])==1
 body=r['body_ranges'][0]
 assert body['start']=='002b6640' and body['end_inclusive']=='002b66a6' and body['length']==103
 raw=bytes.fromhex(body['bytes_hex']);assert len(raw)==103 and sha(raw)==BODY_SHA
 assert r['program_memory_body_sha256'].lower()==BODY_SHA and len(r['instructions'])==30
 cursor=0x002b6640;joined=bytearray()
 for i in r['instructions']:
  assert int(i['address'],16)==cursor
  data=bytes.fromhex(i['bytes_hex']);assert len(data)==i['length']==i['parsed_length']
  assert not i['is_length_overridden'] and not i['is_fallthrough_overridden'] and i['flow_override']=='NONE'
  assert not i['flows'];last=cursor+len(data)==0x002b66a7
  assert i['flow_type']==('TERMINATOR' if last else 'FALL_THROUGH')
  assert i['fallthrough']==(None if last else f'{cursor+len(data):08x}')
  joined.extend(data);cursor+=len(data)
 assert bytes(joined)==raw and cursor==0x002b66a7
 return raw

def verify(root,m,record=None):
 for name,digest in m['artifacts'].items():assert sha((root/name).read_bytes())==digest,('artifact',name)
 source=(root/SOURCE).read_bytes();before=(root/'tests/fixtures/002b6640_before.cpp.txt').read_bytes()
 source_check(source,before,m)
 header=(root/'include/bf_002b6640_mixed_operation.h').read_text()
 asm=header.split('__asm__ volatile(',1)[1].split(': [scratch]',1)[0]
 events=[json.loads('"'+x+'"').strip() for x in re.findall(r'"((?:\\.|[^"\\])*)"',asm)]
 assert events==m['ordered_fp_events'] and len(events)==20
 required=['[scratch] "=m"(scratch)','"st"','"st(1)"','"xmm1"','"xmm2"','"xmm3"','"memory"','__asm__ volatile']
 for token in required:assert token in header,token
 rejected=0
 def reject(fn,*args):
  nonlocal rejected
  try:fn(*args)
  except (AssertionError,ValueError,KeyError,IndexError):rejected+=1
  else:raise AssertionError('mutation accepted')
 reject(source_check,source+b' ',before,m);reject(source_check,source,before+b' ',m)
 bad=copy.deepcopy(m);bad['source_before_git_blob']='0'*40;reject(source_check,source,before,bad)
 # No private file is required by the public suite. Exact raw record identity
 # and a fresh whole-body static decode are additional opt-in evidence only.
 if record:
  raw_record=record.read_bytes();assert sha(raw_record)==RECORD_SHA
  r=json.loads(raw_record);raw=record_check(r)
  with tempfile.TemporaryDirectory(prefix='bf-002b6640-data-') as td:
   p=pathlib.Path(td)/'record-data.bin';p.write_bytes(raw);p.chmod(0o600)
   decoded=subprocess.check_output(['objdump','-D','-w','-b','binary','-m','i386','-Mintel','--adjust-vma=0x002b6640',str(p)],text=True)
  parsed=[]
  for line in decoded.splitlines():
   x=re.match(r'\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )+)\s+(\S+)\s*(.*)',line)
   if x:parsed.append((int(x[1],16),bytes.fromhex(x[2]),x[3]))
  assert len(parsed)==30
  for got,want in zip(parsed,r['instructions']):assert got==(int(want['address'],16),bytes.fromhex(want['bytes_hex']),want['mnemonic'].lower())
  for index in range(len(raw)):
   bad=copy.deepcopy(r);data=bytearray(raw);data[index]^=1;bad['body_ranges'][0]['bytes_hex']=data.hex();reject(record_check,bad)
  for name,value in [('entry','002b6641'),('instruction_count',29),('body_byte_count',104),('program_memory_body_sha256','0'*64)]:
   bad=copy.deepcopy(r);bad[name]=value;reject(record_check,bad)
  print('Optional private replay: 103 bytes/30 boundaries statically decoded; no original code executed.',flush=True)
 else:print('Private original-record replay not requested; public identity/source checks only.',flush=True)
 print('Public identity, unchanged signature, exact source reversal, dependencies and historical inventories passed;',rejected,'provenance mutations rejected.',flush=True)
 return rejected
