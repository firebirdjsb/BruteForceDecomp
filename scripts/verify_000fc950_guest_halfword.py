#!/usr/bin/env python3
"""Audit 0x000FC950's original two byte writes to a 32-bit float slot.

CI verifies C source, negative controls, and Clang C11 word model. An original
retail XBE supplied with --xbe additionally pins every instruction site and
complete x86 body; the XBE is never distributed in the repository.
Passing does not establish native x87, Xbox guest stack or virtual ABI.
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
import tempfile

XBE_SHA='b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA='27206a165ae502ac87afcd51db466703998ef8426ceb733c609d4bb657de54d7'
BODY_ENTRY=0x000fc950
BODY_LENGTH=776
SITES={
 0x000fc950:'81ec94000000',  # original scratch frame
 0x000fc972:'33db',          # EBX=0, so the second byte write stores zero
 0x000fca3c:'8b0e',
 0x000fca3e:'89442410',      # old integer result saved in 32-bit slot
 0x000fca42:'db442410',      # fild signed DWORD
 0x000fca47:'d95c2420',      # fstp float for adjacent scalar
 0x000fca4e:'89442410',
 0x000fca52:'db442410',
 0x000fca66:'d95c2410',
 0x000fca72:'d9442418',
 0x000fca82:'c644241401',    # *BYTE [ESP+0x14]=0x01
 0x000fca87:'885c2415',      # *BYTE [ESP+0x15]=BL=0
 0x000fca91:'33ed',          # index starts at zero
 0x000fcafa:'8a4c2c14',      # read subsequent indexed byte from same slot
 0x000fcb15:'884c244d',      # forward observed byte to outgoing record
}
PATH=Path('src/main_unclassified/band_000f/0x000fc950.c')
INIT='uint32_t guest_fstack_94_bits;'
READ='memcpy(&guest_fstack_94_bits, &fStack_94, sizeof guest_fstack_94_bits);'
SET='guest_fstack_94_bits = (guest_fstack_94_bits & UINT32_C(0xffff0000)) | UINT32_C(0x00000001);'
WRITE='memcpy(&fStack_94, &guest_fstack_94_bits, sizeof guest_fstack_94_bits);'
FIRST_USE='uStack_5b = *(undefined1 *)((int)&fStack_94 + iVar6);'

def code(s):return re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)

def check_source(src):
 if 'Entry: 0x000fc950,' not in src or ('Input x86 body SHA-256: '+BODY_SHA.upper()) not in src or 'ABI_UNVERIFIED' not in src:raise ValueError('XBE provenance caveat missing')
 c=code(src)
 for p in (INIT,READ,SET,WRITE,FIRST_USE,'fStack_94 = (float)iVar6;'):
  if c.count(p)!=1:raise ValueError('missing or repeated guest word operation: '+p)
 pos=[c.index(p) for p in ('fStack_94 = (float)iVar6;',READ,SET,WRITE,FIRST_USE)]
 if pos!=sorted(pos):raise ValueError('changed 16-bit guest slot update order')
 if 'fStack_94._2_2_' in c or 'CONCAT22(' in c:raise ValueError('invalid decompiler subpiece retained')
 if len(re.findall(r'\bguest_fstack_94_bits\s*=(?!=)',c))!=1:raise ValueError('unexpected guest word mutation')
 if c.count('&guest_fstack_94_bits')!=2 or c.count('&fStack_94')<3:raise ValueError('guest source/target pointer identity changed')

def mutations(src):
 changes=[
  (INIT,'uint16_t guest_fstack_94_bits;'),
  (INIT,'uint64_t guest_fstack_94_bits;'),
  (READ,'guest_fstack_94_bits = (uint32_t)fStack_94;'),
  (READ,'memcpy(&guest_fstack_94_bits, &fStack_90, sizeof guest_fstack_94_bits);'),
  (SET,'guest_fstack_94_bits = 1;'),
  (SET,'guest_fstack_94_bits = (guest_fstack_94_bits & UINT32_C(0x0000ffff)) | UINT32_C(0x00000001);'),
  (SET,'guest_fstack_94_bits = (guest_fstack_94_bits & UINT32_C(0xffff0000)) | UINT32_C(0x00000100);'),
  (SET,'guest_fstack_94_bits = (guest_fstack_94_bits & UINT32_C(0xffff0000)) | UINT32_C(0x00010001);'),
  (WRITE,'fStack_94 = (float)guest_fstack_94_bits;'),
  (WRITE,'memcpy(&fStack_90, &guest_fstack_94_bits, sizeof guest_fstack_94_bits);'),
  (FIRST_USE,'uStack_5b = *(undefined1 *)((int)&fStack_90 + iVar6);'),
  (READ,SET),
 ]
 for left,right in changes:
  tampered=src.replace(left,right)
  if tampered==src:raise ValueError('no-op mutation '+left)
  try:check_source(tampered)
  except ValueError:pass
  else:raise ValueError('regression mutation escaped check: '+left)
 return len(changes)

def read_image(data):
 if data[:4]!=b'XBEH':raise ValueError('invalid XBE header')
 base=struct.unpack_from('<I',data,0x104)[0]
 count,table=struct.unpack_from('<II',data,0x11c)
 if not 0<count<128:raise ValueError('invalid XBE section count')
 start=table-base
 if not 0<=start<=len(data)-count*56:raise ValueError('invalid section table')
 sections=[struct.unpack_from('<IIIII',data,start+i*56) for i in range(count)]
 def locate(va,size):
  for _,v,vs,raw,rs in sections:
   if v<=va and va+size<=v+min(vs,rs) and raw+va-v+size<=len(data):return raw+va-v
  raise ValueError('unmapped original XBE VA '+hex(va))
 return lambda va,size:data[locate(va,size):locate(va,size)+size],locate

def check_xbe(data):
 if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise ValueError('original XBE SHA mismatch')
 read,locate=read_image(data)
 if hashlib.sha256(read(BODY_ENTRY,BODY_LENGTH)).hexdigest()!=BODY_SHA:raise ValueError('complete function body digest mismatch')
 for va,hexbytes in SITES.items():
  b=bytes.fromhex(hexbytes)
  if read(va,len(b))!=b:raise ValueError('x86 instruction mismatch at '+hex(va))
 wrong=bytearray(data);wrong[locate(0x000fca82,1)]^=1
 read_bad,_=read_image(wrong)
 if all(read_bad(va,len(bytes.fromhex(b)))==bytes.fromhex(b) for va,b in SITES.items()):
  raise ValueError('bad original instruction erroneously passed')
 return len(SITES)

def host_model(clang):
 s=r'''#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>
static float patch_guest_halfword(float f) {
    uint32_t guest_fstack_94_bits;
    _Static_assert(sizeof(float)==4 && sizeof(uint32_t)==4,"guest DWORD");
    memcpy(&guest_fstack_94_bits,&f,sizeof guest_fstack_94_bits);
    guest_fstack_94_bits = (guest_fstack_94_bits & UINT32_C(0xffff0000)) | UINT32_C(0x00000001);
    memcpy(&f,&guest_fstack_94_bits,sizeof guest_fstack_94_bits);
    return f;
}
int main(void) {
 uint32_t inputs[]={0,1,0xffffffff,0x3f800000,0x80000000,0x7fc01234,0x12345678,0xff800000,0x0000ffff};
 for(size_t i=0;i<sizeof inputs/sizeof inputs[0];i++){
    float f,out;uint32_t got;
    memcpy(&f,&inputs[i],sizeof f);
    out=patch_guest_halfword(f);
    memcpy(&got,&out,sizeof got);
    assert(got==((inputs[i]&UINT32_C(0xffff0000))|UINT32_C(1)));
    assert(((unsigned char *)&out)[0]==1 && ((unsigned char *)&out)[1]==0);
 }
 return 0;
}'''
 with tempfile.TemporaryDirectory() as tmp:
  src=Path(tmp)/'halfword.c';src.write_text(s+'\n')
  for opt in ('-O0','-O2'):
   exe=Path(tmp)/('halfword_'+opt[1:])
   p=subprocess.run([clang,'-std=c11','-Wall','-Wextra','-Werror','-pedantic-errors',opt,str(src),'-o',str(exe)],capture_output=True,text=True,timeout=40)
   if p.returncode:raise ValueError('host C11 model compile '+opt+' '+p.stderr)
   subprocess.run([str(exe)],timeout=15,check=True)

def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1]);p.add_argument('--xbe',type=Path)
 p.add_argument('--x86-only',action='store_true',help='local XBE opcode validation without a staged source tree')
 a=p.parse_args()
 if a.x86_only and not a.xbe:raise ValueError('--x86-only requires --xbe')
 cc=shutil.which('clang');
 if not cc:raise ValueError('clang required')
 if not a.x86_only:
  source=(a.root/PATH).read_text();check_source(source);n=mutations(source)
  flags=('-std=c11','-fsyntax-only','-ferror-limit=3','-Wno-implicit-function-declaration','-Wno-int-conversion','-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast','-Wno-return-type','-Wno-deprecated-non-prototype')
  for opt in ('-O0','-O2'):
   proc=subprocess.run([cc,*flags,opt,'-I',str(a.root/'include'),str(a.root/PATH)],capture_output=True,text=True,timeout=50)
   if proc.returncode:raise ValueError('full source does not pass isolated Clang '+opt+': '+proc.stderr[-1600:])
 else:n=0
 host_model(cc)
 sites=check_xbe(a.xbe.read_bytes()) if a.xbe else 0
 print(f'PASS 0x000FC950 guest 16-bit low word and preserved high half: {n} mutation controls, Clang O0/O2; {sites} original x86 opcode sites; complete XBE body checked={bool(a.xbe)}; Xbox runtime/stack ABI unverified')

if __name__=='__main__':main()