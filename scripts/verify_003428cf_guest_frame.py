#!/usr/bin/env python3
"""XOnline 0x003428CF guest32 source guard; optional retail XBE verification."""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
import re
import shutil
import struct
import subprocess
from pathlib import Path

ENTRY = 0x3428cf
XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA = '75000006e229d98c19569a3e02b2d25240bc8a994f823cf6efc90ed0b6f7562d'
SRC = 'src/platform/online_xonline/0x003428cf.c'
WINDOWS = {
  0x3428cf:'55', 0x3429df:'c9',
  0x3428d2:'81ec2c040000', 0x3428de:'8bd9',
  0x3428e2:'b983000000', 0x3428e7:'8dbddcfdffff', 0x3428ed:'f3ab',
  0x3428ef:'6a06', 0x3428f1:'b982000000', 0x3428f6:'8dbdd4fbffff',
  0x3428fc:'f3ab', 0x3428fe:'59', 0x3428ff:'8d7de8', 0x342902:'f3ab',
  0x342904:'8d85d4fbffff', 0x34290a:'8945f0',
  0x342921:'c785e0fdffff01000000', 0x34292b:'c745e878763b00',
  0x342932:'c745ec08000000', 0x342939:'c745f40a000000',
  0x342913:'50', 0x342917:'50', 0x34291e:'50', 0x342940:'e81dfcffff',
  0x34294c:'8d4508', 0x34294f:'50', 0x342950:'8d45f0',
  0x342953:'50', 0x342954:'8d85e4fdffff', 0x34295a:'50',
  0x34295d:'e8ebf6ffff', 0x342966:'66397df2', 0x34296f:'660fb645f3',
  0x342974:'8a65f2', 0x342977:'66894642', 0x34297d:'8b45f4',
  0x3429e0:'c20400', 0x3428cc:'c20400', 0x34211d:'c20c00',
  0x342057:'8bfe', 0x342059:'ab', 0x34205a:'ab',
  0x34205b:'ab', 0x34205c:'ab', 0x34206a:'66c7060200',
  0x34206f:'66c746020050',
}
CONTRACT = [
 'undefined4 local_430[0x82];', 'undefined4 scratch_224[0x83];',
 'char *local_220 = (char *)&scratch_224[2];', 'uint32_t guest_frame[6];',
 'puVar6 = scratch_224;', 'puVar6 = local_430;', 'puVar6 = guest_frame;',
 'guest_frame[2] = (uint32_t)(uintptr_t)local_430;',
 'scratch_224[1] = 1;', 'guest_frame[0] = 0x003b7678u;',
 'guest_frame[1] = 8;', 'guest_frame[3] = 10;',
 'FUN_00342562(param_1 + 0x8dc,guest_frame,scratch_224);',
 'iVar4 = FUN_0034204d(local_220,&guest_frame[2],&param_1);',
 'if ((uint16_t)(guest_frame[2] >> 16) == 0)',
 '*(ushort *)(pcVar2 + 0x42) = (uint16_t)((guest_frame[2] >> 24) | ((guest_frame[2] >> 16) << 8));',
 'if (guest_frame[3] != *(uint32_t *)(pcVar2 + 0x38))',
]

def check_source(s):
 if 'Entry: 0x003428cf' not in s or BODY_SHA.upper() not in s or 'ABI_UNVERIFIED' not in s:
  raise ValueError('provenance/ABI label changed')
 c=re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)
 if any(c.count(v)!=1 for v in CONTRACT) or 'stack0x' in c or 'CONCAT11(' in c:
  raise ValueError('guest32 storage or overlapping output changed')
 if any(c.count('for (iVar4 = '+n+';')!=1 for n in ('0x83','0x82','6')):
  raise ValueError('REP STOSD counts changed')
 if not (c.index('puVar6 = scratch_224;') < c.index('puVar6 = local_430;') <
         c.index('puVar6 = guest_frame;') < c.index('FUN_00342562(') <
         c.index('FUN_0034204d(') < c.index('if ((uint16_t)(guest_frame[2] >> 16)')):
  raise ValueError('guest storage/call/read order changed')

def xbe_check(d):
 if d[:4]!=b'XBEH' or hashlib.sha256(d).hexdigest()!=XBE_SHA:
  raise ValueError('original user XBE identity mismatch')
 base=struct.unpack_from('<I',d,0x104)[0]
 n,tab=struct.unpack_from('<II',d,0x11c)
 if not 0<n<128 or not 0<=tab-base<=len(d)-n*56: raise ValueError('XBE sections invalid')
 secs=[struct.unpack_from('<IIIII',d,tab-base+i*56) for i in range(n)]
 def read(a,n):
  for _,va,sz,raw,rawsz in secs:
   if va<=a and a+n<=va+min(sz,rawsz) and raw+a-va+n<=len(d):
    return d[raw+a-va:raw+a-va+n]
  raise ValueError('unmapped original x86 address')
 if hashlib.sha256(read(ENTRY,276)).hexdigest()!=BODY_SHA:
  raise ValueError('original function-body digest mismatch')
 for a,h in WINDOWS.items():
  if read(a,len(h)//2)!=bytes.fromhex(h): raise ValueError('x86 opcode mismatch '+hex(a))
 return len(WINDOWS)

def main():
 p=argparse.ArgumentParser()
 p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
 p.add_argument('--xbe',type=Path)
 a=p.parse_args();root=a.root.resolve();s=(root/SRC).read_text()
 check_source(s)
 mutations=[('scratch_224[0x83]','scratch_224[0x82]'),
  ('local_430[0x82]','local_430[0x81]'),('guest_frame[6]','guest_frame[5]'),
  ('&scratch_224[2]','&scratch_224[1]'),('&guest_frame[2]','&guest_frame[1]'),
  ('guest_frame[2] >> 16','guest_frame[2] >> 8'),
  ('guest_frame[2] >> 24','guest_frame[2] >> 16'),
  ('guest_frame[3] !=','guest_frame[2] !='),
  ('0x003b7678u','0x003b7679u'),('for (iVar4 = 6;','for (iVar4 = 5;')]
 for old,new in mutations:
  if old not in s: raise ValueError('negative-control anchor missing')
  try: check_source(s.replace(old,new,1))
  except ValueError: pass
  else: raise ValueError('negative control was accepted')
 clang=shutil.which('clang')
 if not clang: raise ValueError('Clang missing')
 flags=['-std=c11','-fsyntax-only','-Wno-implicit-function-declaration',
  '-Wno-int-conversion','-Wno-incompatible-pointer-types',
  '-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast',
  '-Wno-return-type','-Wno-deprecated-non-prototype']
 for opt in ('-O0','-O2'):
  r=subprocess.run([clang,*flags,opt,'-I',str(root/'include'),str(root/SRC)],
                   capture_output=True,text=True,timeout=60)
  if r.returncode: raise ValueError('Clang C11 '+opt+' failed: '+r.stderr[-1200:])
 sites=xbe_check(a.xbe.read_bytes()) if a.xbe else 0
 print('PASS 0x003428CF: Clang C11 O0/O2; 10 negative controls; XBE windows %d (provided=%s); ABI UNVERIFIED'%(sites,bool(a.xbe)))
if __name__=='__main__':main()
