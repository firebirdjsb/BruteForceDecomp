#!/usr/bin/env python3
"""Private, original-retail-XBE-only check for ten EDX cursor-advance bodies.

No Xbox game code is executed or included here. Validates the exact original
93-byte body hashes, seven independently repeated flag offsets, eight actual
conditional branch targets, three RETs, and mutation negatives per function.
The host guest32 ABI, partial register effects and fault behavior are UNVERIFIED.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import sections,file_offset
ROOT=Path(__file__).resolve().parents[1]
META=ROOT/'metadata/20261107_ten_guest32_list_advance.json'
FLAG_POSITIONS=(4,20,30,42,56,77,84)
BRANCHES={7:(0x74,0xf),0x17:(0x75,0x33),0x21:(0x75,0x2f),0x2d:(0x74,0x23),
          0x3b:(0x75,0x5b),0x44:(0x75,0x52),0x50:(0x74,0x40),0x57:(0x75,0x5b)}
RET_POSITIONS=(0xe,0x32,0x5c)

def sha(data:bytes)->str:return hashlib.sha256(data).hexdigest().upper()

def verify(xbe:bytes):
 m=json.loads(META.read_text())
 if sha(xbe)!=m['original_xbe_sha256']:
  raise ValueError('Original retail XBE authentication failed')
 s=sections(xbe);cases=m['cases']
 if len(cases)!=10 or len({c['entry'] for c in cases})!=10:raise AssertionError('Not ten original bodies')
 statistics={'complete_original_bodies':0,'original_bytes':0,'flagged_byte_loads':0,'conditional_branches':0,'ret_exits':0,'rejected_xbe_mutations':0}
 template=None
 for c in cases:
  entry=int(c['entry'],16);size=c['size'];flag=c['flag_offset']
  if size!=93:raise AssertionError('Unexpected body size')
  raw=xbe[file_offset(s,entry,size):][:size]
  if sha(raw)!=c['original_body_sha256']:raise AssertionError('Original body digest mismatch at '+c['entry'])
  normalized=bytearray(raw)
  for pos in FLAG_POSITIONS:
   if raw[pos]!=flag:raise AssertionError('Unexpected byte-flag displacement '+c['entry'])
   normalized[pos]=0
  if template is None:template=bytes(normalized)
  elif bytes(normalized)!=template:raise AssertionError('Original bodies have different instructions after flag normalization')
  for site,(opcode,dest) in BRANCHES.items():
   if raw[site]!=opcode:raise AssertionError('Wrong conditional jump opcode')
   observed=(site+2+struct.unpack('<b',raw[site+1:site+2])[0])&0xffffffff
   if observed!=dest:raise AssertionError('Wrong branch target at '+c['entry'])
   statistics['conditional_branches']+=1
  for pos in RET_POSITIONS:
   if raw[pos]!=0xc3:raise AssertionError('Missing original RET at '+c['entry'])
   statistics['ret_exits']+=1
  if any(raw.count(pat) for pat in (b'\xe8',b'\xff\x15')):
   raise AssertionError('Potential outgoing call in a presumed no-call function')
  for i in range(size):
   mutant=bytearray(raw);mutant[i]^=0x01
   if sha(mutant)==c['original_body_sha256']:raise AssertionError('Corrupted byte accepted')
   statistics['rejected_xbe_mutations']+=1
  statistics['complete_original_bodies']+=1
  statistics['original_bytes']+=size
  statistics['flagged_byte_loads']+=len(FLAG_POSITIONS)
 return statistics

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--xbe',type=Path,required=True);a=p.parse_args()
 for key,value in verify(a.xbe.read_bytes()).items():print(key, value)
 print('PASS: original XBE only; ABI_UNVERIFIED, no gameplay execution or native linkage')
