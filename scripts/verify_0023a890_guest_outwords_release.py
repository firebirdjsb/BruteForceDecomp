#!/usr/bin/env python3
"""XBE-backed adjacent outword and guarded release checks for 0x0023A890.

Original virtual target, EDI/ESI/EAX entry and host guest-address translation
remain unverified. Source-only regression and Clang execute in public CI;
private --xbe verifies the original retail instruction bytes locally.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA='b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA='911a766cf78a43154d14195066c433968c812fa466062fbfc662ec4ca37592b1'
START,END=0x0023A890,0x0023A965
SITES={
  0x0023A890:'83ec08',          # 2 adjacent local DWORDs
  0x0023A893:'53',              # save EBX
  0x0023A894:'56',              # save ESI
  0x0023A895:'8d4c2408',        # &first guest local
  0x0023A899:'51',              # first output pointer push
  0x0023A89A:'68f8c44000',      # imm for first virtual call
  0x0023A8A3:'57',              # implicit EDI object push
  0x0023A8A4:'c744241400000000',# initialize only first local
  0x0023A8AC:'ff10',            # first indirect call
  0x0023A8B2:'8b442408',        # read first local
  0x0023A8C0:'8b10',
  0x0023A8C2:'50',
  0x0023A8C3:'ff5208',       # early-error guarded release
  0x0023A8CE:'8b08',            # vtable of first object
  0x0023A8D0:'8d54240c',        # &second guest local
  0x0023A8D4:'52',              # output pointer push
  0x0023A8D5:'50',              # first local object pointer push
  0x0023A8D6:'ff510c',          # second indirect dispatch
  0x0023A8D9:'8b00',            # EAX-returned pointer dereference
  0x0023A8DB:'3b442414',
  0x0023A8E9:'8b08',
  0x0023A8EB:'50',
  0x0023A8EC:'ff5108',       # mismatch guarded release
  0x0023A913:'8b10',
  0x0023A915:'50',
  0x0023A916:'ff5208',       # action-failure guarded release        # compare incoming guest arg
  0x0023A94A:'e871f4ffff',      # direct 0x00239DC0
  0x0023A94F:'8b442408',        # reload first local guest pointer
  0x0023A953:'85c0',            # null test
  0x0023A955:'7406',            # skip release if null
  0x0023A957:'8b08',            # vtable load from nonnull object
  0x0023A959:'50',              # push object
  0x0023A95A:'ff5108',          # call virtual +8 (release)
  0x0023A95D:'5e',              # restore ESI
  0x0023A960:'5b',              # restore EBX
  0x0023A961:'83c408',          # discard two DWORDs
  0x0023A964:'c3',              # ret
}
FLAGS=('-std=c11','-fsyntax-only','-ferror-limit=3',
       '-Wno-implicit-function-declaration','-Wno-int-conversion',
       '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
       '-Wno-int-to-pointer-cast','-Wno-return-type',
       '-Wno-deprecated-non-prototype')

def check_source(s):
  if ('Entry: 0x0023a890,' not in s or
      'Input x86 body SHA-256: '+BODY_SHA.upper() not in s or
      'ABI_UNVERIFIED' not in s):
    raise ValueError('Source provenance/ABI caveat changed')
  code=re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)
  for token in ('int32_t local_8 [2];',
                '_Static_assert(sizeof(local_8) == 8,',
                '_Static_assert(sizeof(local_8[0]) == 4,',
                'local_8[0] = 0;',
                '(**(code **)(local_8[0] + 0xc))(local_8,&local_8[1]);',
                'FUN_00239dc0();'):
    if code.count(token)!=1:raise ValueError('Guest storage/call contract missing or duplicated: '+token)
  if code.count('if (local_8[0] != 0) {') != 4:
    raise ValueError('Original four release null guards changed')
  if code.count('(**(code **)(*(int *)(uintptr_t)(uint32_t)local_8[0] + 8))(local_8[0]);') != 4:
    raise ValueError('Original four vtable +8 releases changed')
  if re.search(r'\bstack0x[0-9a-fA-F]+\b|\biRam00000002\b',code):
    raise ValueError('Unresolved Ghidra stack or pseudo-data call remains')
  if re.search(r'\blocal_8\s*\[\s*1\s*\]\s*=(?!=)',code):
    raise ValueError('Invented initialization of second guest output')

def reader(data):
  if data[:4]!=b'XBEH':raise ValueError('Not an XBE')
  base=struct.unpack_from('<I',data,0x104)[0]
  count,tbl=struct.unpack_from('<II',data,0x11c)
  t=tbl-base
  if not 0<count<128 or t<0 or t+count*56>len(data):raise ValueError('Bad XBE table')
  secs=[struct.unpack_from('<IIIII',data,t+i*56) for i in range(count)]
  def read(va,n):
    for _,v,vs,raw,rs in secs:
      if v<=va and va+n<=v+min(vs,rs):
        off=raw+va-v
        if off+n<=len(data):return data[off:off+n]
    raise ValueError('Missing guest address '+hex(va))
  return read,secs

def check_sites(read):
  for va,opcode in SITES.items():
    if read(va,len(opcode)//2)!=bytes.fromhex(opcode):
      raise ValueError('Instruction mismatch at '+hex(va))
  disp=struct.unpack('<i',read(0x0023A94B,4))[0]
  if 0x0023A94F+disp != 0x00239DC0:
    raise ValueError('Unexpected direct callee')

def check_xbe(data):
  if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise ValueError('Retail XBE SHA mismatch')
  read,secs=reader(data)
  if hashlib.sha256(read(START,END-START)).hexdigest()!=BODY_SHA:
    raise ValueError('Original x86 body SHA mismatch')
  check_sites(read)
  for _,v,vs,raw,rs in secs:
    if v<=0x0023A8D0<v+min(vs,rs):
      offset=raw+0x0023A8D0-v;break
  else:raise ValueError('Mutation site unmapped')
  bad=bytearray(data);bad[offset]^=1
  try:check_sites(reader(bad)[0])
  except ValueError:pass
  else:raise ValueError('Corrupted original LEA passed')

def main():
  ap=argparse.ArgumentParser(description=__doc__)
  ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
  ap.add_argument('--xbe',type=Path)
  args=ap.parse_args();root=args.root.resolve()
  p=root/'src/main_unclassified/band_0023/0x0023a890.c'
  s=p.read_text();check_source(s)
  for old,new in (
      ('int32_t local_8 [2];','int32_t local_8 [1];'),
      ('local_8[0] = 0;','local_8[0] = 1;'),
      ('local_8,&local_8[1]','local_8,&local_8[0]'),
      ('if (local_8[0] != 0) {','if (local_8[0] == 0) {'),
      ('(uint32_t)local_8[0] + 8','(uint32_t)local_8[0] + 12'),
      ('local_8[0] = 0;','local_8[0] = 0; local_8[1] = 0;'),
  ):
    bad=s.replace(old,new)
    if bad==s:raise ValueError('Mutation did not change source')
    try:check_source(bad)
    except ValueError:pass
    else:raise ValueError('Bad source mutation unexpectedly passed: '+old)
  cc=shutil.which('clang')
  if not cc:raise RuntimeError('Clang unavailable')
  for opt in ('-O0','-O2'):
    result=subprocess.run([cc,*FLAGS,opt,'-I',str(root/'include'),str(p)],capture_output=True,text=True,timeout=60)
    if result.returncode:raise ValueError('Clang '+opt+' failed: '+result.stderr[-2000:])
  if args.xbe:check_xbe(args.xbe.read_bytes())
  print('PASS: 0x0023A890 two adjacent guest DWORDs, guarded virtual +8 release, '
        'negative controls and Clang O0/O2; XBE '+('verified' if args.xbe else 'not supplied')+
        '; guest ABI, pointer translation and runtime UNVERIFIED')

if __name__=='__main__':main()