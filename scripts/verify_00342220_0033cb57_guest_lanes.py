#!/usr/bin/env python3
"""Verify two retail-XBE-backed scalar-lane repairs; runtime ABI unverified."""
import argparse,hashlib,re,shutil,struct,subprocess,tempfile
from pathlib import Path
XBE_SHA='b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
T={
 0x342220:('src/platform/online_xonline/0x00342220.c',437,'c81a6698d627a1851c02c85ef92cb5662d16764134c6a4f25235b3e3dd413d38',
  '*(ushort *)(pcVar2 + 0x40) = (uint16_t)(((uint16_t)local_16 << 8) | ((uint16_t)local_16 >> 8));',
  {0x342220:'55',0x342221:'8bec',0x342368:'8b4dfc',0x34236b:'8d4508',0x342373:'ff759c',0x342376:'e8d2fcffff',0x34238c:'663975ee',0x342390:'7438',0x3423ba:'660fb645ef',0x3423bf:'8a65ee',0x3423c2:'66894340',0x3423c6:'33c0',0x3423d2:'c20400'}),
 0x33cb57:('src/platform/online_xonline/0x0033cb57.c',404,'07d58216a4b2287b66bffb4b4eae6664b43be447f6ea3fbd252a94ba982c0ffd',
  'if (((uint32_t)param_1 >> 24) != ((uint32_t)uStack_8 >> 24)) {',
  {0x33cb57:'55',0x33cb58:'8bec',0x33cb5a:'51',0x33cb5b:'51',0x33cb5f:'8b7d0c',0x33cb69:'8945f8',0x33cc9f:'8d45ff',0x33cca2:'50',0x33ccb0:'8a450b',0x33ccb3:'3a45ff',0x33ccb6:'7422',0x33ccb8:'832700',0x33cce8:'c20800'})
}
FLAGS=['-std=c11','-fsyntax-only','-Wno-implicit-function-declaration','-Wno-int-conversion',
'-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast',
'-Wno-return-type','-Wno-deprecated-non-prototype']
def pure(s):
 return re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)
def check_source(s,addr,cfg):
 path,n,dig,patch,sites=cfg;c=pure(s)
 if ('Entry: 0x%08x'%addr) not in s or dig.upper() not in s or 'ABI_UNVERIFIED' not in s:
  raise ValueError('Original body provenance/ABI missing '+hex(addr))
 if c.count(patch)!=1:raise ValueError('Missing or duplicated exact source lane '+hex(addr))
 if addr==0x342220:
  if 'CONCAT11((undefined1)local_16,local_16._1_1_)' in c or 'undefined2 local_16;' not in c:
   raise ValueError('Invalid 16-bit slot identity')
  if c.count('*(ushort *)(pcVar2 + 0x40)')!=1:raise ValueError('Invalid output WORD location')
  if not c.index('FUN_0034204d(')<c.index(patch)<c.index('return 0;'):
   raise ValueError('Guest port output order changed')
 else:
  for q in ('int FUN_0033cb57(int param_1,int *param_2)','uStack_8 = in_ECX;',
            'FUN_0033c0d7(in_ECX[3],piVar1,1,(int)&uStack_8 + 3);',
            '*piVar7 = 0;','return *piVar7;'):
   if c.count(q)!=1:raise ValueError('Saved guest ECX/output contract differs '+q)
  if 'param_1._3_1_' in c or 'uStack_8._3_1_' in c:raise ValueError('Invalid original high-byte members')
  if not c.index('uStack_8 = in_ECX;') < c.index(patch) < c.index('*piVar7 = 0;'):
   raise ValueError('Saved ECX compare order differs')
def negatives(s,addr,cfg):
 p=cfg[3]
 if addr==0x342220:
  xs=[p.replace('<< 8','<< 7'),p.replace('>> 8','>> 7'),
      p.replace(' | ',' & '),p.replace('pcVar2 + 0x40','pcVar2 + 0x41'),
      p.replace('*(ushort *)','*(uint32_t *)'),
      p.replace('((uint16_t)local_16 << 8) | ((uint16_t)local_16 >> 8)','(uint16_t)local_16')]
 else:
  xs=[p.replace('>> 24','>> 16'),p.replace('>> 24','>> 23'),
      p.replace('!=','=='),p.replace('(uint32_t)param_1','(uint32_t)param_2'),
      p.replace('(uint32_t)uStack_8','(uint32_t)param_1'),
      p.replace('uStack_8','local_8')]
 xs+=[p+'\n'+p,'',p.replace('uint16_t','uint8_t') if addr==0x342220 else p.replace('uint32_t','uint16_t')]
 for x in xs:
  bad=s.replace(p,x,1)
  if bad==s:raise ValueError('Mutation was no-op')
  try:check_source(bad,addr,cfg)
  except ValueError:pass
  else:raise ValueError('Incorrect guest lane passed source mutation '+hex(addr))
 return len(xs)
def xbe_test(data):
 if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise ValueError('Original XBE SHA mismatch')
 if data[:4]!=b'XBEH':raise ValueError('XBE header invalid')
 base=struct.unpack_from('<I',data,0x104)[0]
 n,tab=struct.unpack_from('<II',data,0x11c);off=tab-base
 if not 0<n<128 or not 0<=off<=len(data)-n*56:raise ValueError('XBE section header invalid')
 sections=[struct.unpack_from('<IIIII',data,off+i*56) for i in range(n)]
 def read(addr,size):
  for _,va,virtual,raw,rawsize in sections:
   if va<=addr and addr+size<=va+min(virtual,rawsize) and raw+addr-va+size<=len(data):
    return data[raw+addr-va:raw+addr-va+size]
  raise ValueError('Unmapped guest address '+hex(addr))
 sites=0
 for addr,cfg in T.items():
  _,length,digest,_,opcodes=cfg
  if hashlib.sha256(read(addr,length)).hexdigest()!=digest:
   raise ValueError('Original full function body hash differs '+hex(addr))
  for ip,b in opcodes.items():
   if read(ip,len(b)//2)!=bytes.fromhex(b):
    raise ValueError('Original instruction disagrees '+hex(ip))
   sites+=1
 return sites
def compile_test(root,clang):
 for addr,cfg in T.items():
  for opt in ('-O0','-O2'):
   p=subprocess.run([clang,*FLAGS,opt,'-I',str(root/'include'),str(root/cfg[0])],capture_output=True,text=True,timeout=60)
   if p.returncode:raise ValueError('C11 syntax failed '+hex(addr)+' '+opt+': '+p.stderr[-1100:])
 model=r'''#include <stdint.h>
#include <assert.h>
int main(void) {
 for (uint32_t i=0;i<65536;i++) {
  uint16_t x=(uint16_t)i;
  uint16_t y=(uint16_t)(((uint16_t)x<<8)|((uint16_t)x>>8));
  assert(y==(uint16_t)(((x&255u)<<8)|(x>>8)));
  assert((uint16_t)((y<<8)|(y>>8))==x);
 }
 for(uint32_t a=0;a<256;a++)for(uint32_t b=0;b<256;b++){
  uint32_t pa=(a<<24)|0x00aabbccu,ec=(b<<24)|0x00112233u;
  assert(((pa>>24)!=(ec>>24))==(a!=b));
 }
 return 0;
}'''
 with tempfile.TemporaryDirectory() as td:
  file=Path(td)/'model.c';file.write_text(model)
  for opt in ('-O0','-O2'):
   exe=Path(td)/('model'+opt)
   p=subprocess.run([clang,'-std=c11','-Wall','-Wextra','-Werror','-pedantic-errors',opt,str(file),'-o',str(exe)],capture_output=True,text=True,timeout=60)
   if p.returncode:raise ValueError('Strict host model failed '+p.stderr[-1200:])
   subprocess.run([str(exe)],check=True,timeout=30)
def main():
 ap=argparse.ArgumentParser(description=__doc__)
 ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
 ap.add_argument('--xbe',type=Path)
 args=ap.parse_args();root=args.root.resolve()
 total=0
 for a,c in T.items():
  s=(root/c[0]).read_text();check_source(s,a,c);total+=negatives(s,a,c)
 clang=shutil.which('clang')
 if clang is None:raise ValueError('Host Clang required')
 compile_test(root,clang)
 sites=xbe_test(args.xbe.read_bytes()) if args.xbe else 0
 print('PASS two guest scalar lanes; %d source mutations; C11 O0/O2; XBE instruction sites %d (XBE provided=%s). ABI UNVERIFIED'%(total,sites,bool(args.xbe)))
if __name__=='__main__':main()
