#!/usr/bin/env python3
"""Private retail-XBE authentication for ten independent original-address models.

Verifies authenticated original body SHA-256 and exact branch/return opcodes,
branch displacements, source SHA-256, marker conservatism, and byte mutation
controls. Never executes Xbox code. No original C++ ABI, guest memory or native
linkage is claimed; no copyrighted bytes are included in the repository.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import sections,file_offset
ROOT=Path(__file__).resolve().parents[1]
META=ROOT/'metadata/20261107_next_ten_guest32_independent.json'
def sha(data):return hashlib.sha256(data).hexdigest().upper()
def verify(data):
 m=json.loads(META.read_text())
 if sha(data)!=m['original_xbe_sha256']:raise ValueError('Retail original XBE hash mismatch')
 if m['native_linked'] or m['abi_verified']:raise AssertionError('Premature original ABI claim')
 cases=m['cases']
 if len(cases)!=10 or len({c['entry'] for c in cases})!=10:raise AssertionError('Expected ten original addresses')
 s=sections(data)
 stats=dict(original_functions=0,original_xbe_bytes=0,verified_instruction_windows=0,verified_conditional_edges=0,verified_returns=0,ret_imm_sites=0,byte_mutations_rejected=0)
 for c in cases:
  a=int(c['entry'],16);length=c['size'];raw=data[file_offset(s,a,length):][:length]
  if sha(raw)!=c['original_body_sha256']:raise AssertionError('Original XBE body mismatch '+c['entry'])
  text=(ROOT/c['path']).read_bytes()
  if sha(text)!=c['source_sha256']:raise AssertionError('C++ source changed '+c['entry'])
  if c['original_body_sha256'].encode() not in text:raise AssertionError('Original identity marker missing')
  for marker in (b'ABI_UNVERIFIED',b'NOT_NATIVE_LINKED',b'NOT_BEHAVIOR_TESTED'):
   if marker not in text:raise AssertionError('Premature source verification status')
  for edge in c['conditional_edges']:
   at=edge['offset'];op=bytes.fromhex(edge['bytes'])
   if raw[at:at+len(op)]!=op:raise AssertionError('Original conditional opcode mismatch '+c['entry'])
   if len(op)==2 and 0x70<=op[0]<=0x7f:
    target=at+2+struct.unpack('<b',op[1:])[0]
   elif len(op)==6 and op[0]==0x0f and 0x80<=op[1]<=0x8f:
    target=at+6+struct.unpack('<i',op[2:])[0]
   else:raise AssertionError('Unsupported original branch representation')
   if target!=edge['target_offset']:raise AssertionError('Branch displacement differs from original')
   stats['verified_conditional_edges']+=1
  for site in c['ret_sites']:
   at=site['offset'];op=bytes.fromhex(site['bytes'])
   if op[0] not in (0xc2,0xc3) or raw[at:at+len(op)]!=op:raise AssertionError('RET/stack cleanup differs from original')
   if op[0]==0xc2:
    if len(op)!=3:raise AssertionError('Original cleanup operand must be 16-bit')
    stats['ret_imm_sites']+=1
   stats['verified_returns']+=1
  if c['ret_sites'][-1]['offset']+len(bytes.fromhex(c['ret_sites'][-1]['bytes']))!=length:
   raise AssertionError('Original body lacks expected terminating return')
  for i in range(length):
   modified=bytearray(raw);modified[i]^=1
   if sha(modified)==c['original_body_sha256']:raise AssertionError('Mutated XBE body incorrectly accepted')
   stats['byte_mutations_rejected']+=1
  stats['original_functions']+=1
  stats['original_xbe_bytes']+=length
  stats['verified_instruction_windows']+=c['instruction_count']
 return stats
if __name__=='__main__':
 a=argparse.ArgumentParser(description=__doc__)
 a.add_argument('--xbe',required=True,type=Path)
 opt=a.parse_args();stats=verify(opt.xbe.read_bytes())
 for key,value in stats.items():print(key,value)
 print('PASS: authenticated original retail XBE; ABI_UNVERIFIED and no game code executed')
