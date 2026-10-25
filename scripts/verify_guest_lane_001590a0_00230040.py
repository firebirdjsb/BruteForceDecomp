#!/usr/bin/env python3
"""Evidence-backed x86 byte and high-DWORD guest-lane C11 regression.

Without --xbe the full-audit CI checks source contracts and focused Clang.
With --xbe it checks the private original Xbox bytes (never added to Git).
The host C11 pointer/register ABI and gameplay behavior remain unverified.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
SOURCES = {
    '001590a0': ('fcc5c328faa497a2f92e73cdc7352a5259dbf13aa029364b584b7d5e268b30e0', 912),
    '00230040': ('9f8a8074180d4b6da94fa0e4710021fd54bb507f3f86b52b1f648393cc4e0d24', 956),
}
# Original game instruction encodings, not host-compiler guesses.
SITES = {
    0x001590A0:'81ec44010000', # 0x144-byte frame
    0x001590CF:'53', 0x001590D0:'56', 0x001590D1:'57',
    0x00159110:'8974241c',     # earlier full-DWORD store to local E-0x138
    0x00159212:'b301', 0x00159216:'32db',
    0x0015921B:'57', 0x0015921C:'52', 0x0015921D:'6874c84000',
    0x00159222:'8d442460', 0x00159226:'68ff000000', 0x0015922B:'50',
    0x0015922C:'885c2430',     # low BYTE only at guest E-0x138
    0x00159230:'e8e4171900',   # direct FUN_002eaa19 call
    0x00159239:'83c414',       # caller reclaims 5 DWORD arguments
    0x00159268:'50', 0x00159269:'8b442424', 0x00159272:'8b4c2424',
    0x00159427:'81c444010000',
    0x00230040:'81ec70010000', # 0x170-byte frame
    0x0023004D:'53', 0x0023004E:'56', 0x00230058:'57',
    0x002301B6:'8b54241c',     # upper 32 bits of E-0x164 local
    0x002301C4:'8b4c2418',     # lower 32 bits of same local
    0x002301C8:'894808',       # output param_5[2] = lower DWORD
    0x002301CB:'83c004',       # eax = param_5 + 4
    0x002301CE:'8954240c',     # save high 32 bits
    0x002301D2:'8b542414',     # different 32-bit local
    0x002301D6:'8910',
    0x002301D8:'8b54240c',     # reload high 32 bits
    0x002301DC:'895008',       # output param_5[3] = upper DWORD
    0x002303BA:'81c470010000',
    0x002303C0:'c21800',       # callee cleans six 32-bit arguments
}
FLAGS = ('-std=c11','-fsyntax-only','-ferror-limit=3',
         '-Wno-implicit-function-declaration','-Wno-int-conversion',
         '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast','-Wno-return-type',
         '-Wno-deprecated-non-prototype')


def strip_comments(source):
    return re.sub(r'/\*.*?\*/|//[^\n]*','',source,flags=re.S)


def check_source(address, source):
    sha,_ = SOURCES[address]
    if (f'Entry: 0x{address},' not in source or f'Input x86 body SHA-256: {sha.upper()}' not in source):
        raise ValueError(address+': source provenance changed')
    if 'ABI_UNVERIFIED' not in source:
        raise ValueError(address+': guest ABI caveat lost')
    body=strip_comments(source)
    if address=='001590a0':
        required=('uStack_138 = (uStack_138 & UINT32_C(0xffffff00)) | (uint32_t)(uint8_t)cVar2;',
                  '(**(code **)(*in_ECX + 0x154))',
                  'iVar1,uStack_138,fStack_134,auStack_100,piVar3 + 5)')
        forbidden=('CONCAT31(uStack_138._1_3_', 'uStack_138 = (uint32_t)(uint8_t)cVar2;')
    else:
        required=('param_5[2] = (undefined4)local_164;',
                  'param_5[3] = (uint32_t)((uint64_t)local_164 >> 32);',
                  'param_5[4] = local_15c;')
        forbidden=('local_164._4_4_', 'param_5[3] = (uint32_t)local_164;')
    for token in required:
        if body.count(token)!=1:raise ValueError(address+': missing/duplicated guest-lane contract '+token)
    for token in forbidden:
        if token in body:raise ValueError(address+': forbidden pseudo-field or wrong width '+token)


def mapped_reader(data):
    if data[:4]!=b'XBEH':raise ValueError('XBEH signature absent')
    base=struct.unpack_from('<I',data,0x104)[0]
    count, tableva=struct.unpack_from('<II',data,0x11c)
    off=tableva-base
    if count<=0 or count>=128 or off<0 or off+56*count>len(data):
        raise ValueError('Invalid XBE section layout')
    sections=[struct.unpack_from('<IIIII',data,off+i*56) for i in range(count)]
    def locate(va,n):
        for _,v,vs,raw,rs in sections:
            if v<=va and va+n<=v+min(vs,rs):
                o=raw+va-v
                if o+n<=len(data):return o
        raise ValueError('Unmapped Xbox VA '+hex(va))
    return lambda va,n:data[locate(va,n):locate(va,n)+n],locate


def check_xbe(data):
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise ValueError('Wrong original Xbox XBE SHA-256')
    read,locate=mapped_reader(data)
    for addr,(digest,n) in SOURCES.items():
        if hashlib.sha256(read(int(addr,16),n)).hexdigest()!=digest:
            raise ValueError('Original body digest mismatch at '+addr)
    for va,expected in SITES.items():
        if read(va,len(expected)//2)!=bytes.fromhex(expected):
            raise ValueError('Original instruction mismatch at '+hex(va))
    disp=struct.unpack('<i',read(0x00159231,4))[0]
    if 0x00159235+disp!=0x002EAA19:raise ValueError('Original format call destination wrong')
    # Negative control: altered opcode must be rejected independently of whole-file SHA.
    for va in (0x0015922C,0x002301CE):
        bad=bytearray(data);bad[locate(va,1)]^=1
        altered_read,_=mapped_reader(bad)
        if altered_read(va,len(SITES[va])//2)==bytes.fromhex(SITES[va]):
            raise ValueError('Corrupt x86 opcode was accepted')


def host_lane_tests(clang):
    code = r'''
#include <stdint.h>
#include <string.h>
int main(void) {
  for (uint32_t v=0;v<65536;v++) {
    uint32_t original = 0xA1B20000u | v;
    for (uint32_t b=0;b<256;b++) {
      uint32_t got = (original & UINT32_C(0xffffff00)) | (uint32_t)(uint8_t)b;
      if ((got & 0xffffff00u)!=(original & 0xffffff00u) || (got & 255u)!=b)return 1;
    }
  }
  const uint32_t hi[]={0,1,0x80000000u,0x7fffffffu,0xffffffffu,0xdeadbeefu};
  const uint32_t lo[]={0,1,0x12345678u,0xffffffffu,0x87654321u,0xff00ff00u};
  for (int i=0;i<6;i++)for(int j=0;j<6;j++) {
    uint64_t words=((uint64_t)hi[i]<<32)|lo[j];
    uint32_t upper=(uint32_t)(words>>32), lower=(uint32_t)words;
    if (upper!=hi[i] || lower!=lo[j])return 2;
  }
  return 0;
}
'''
    with tempfile.TemporaryDirectory() as tmp:
        p=Path(tmp)/'test.c';p.write_text(code)
        for opt in ('-O0','-O2'):
            exe=Path(tmp)/('lanes'+opt[2:])
            z=subprocess.run([clang,'-std=c11','-Wall','-Wextra','-Werror',opt,str(p),'-o',str(exe)],capture_output=True,text=True)
            if z.returncode:raise ValueError('Clang host lanes '+opt+': '+z.stderr)
            q=subprocess.run([str(exe)],capture_output=True,text=True,timeout=25)
            if q.returncode:raise ValueError('Host byte/DWORD lane regression failed '+opt)


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe',type=Path)
    ap.add_argument('--xbe-only',action='store_true',help='Local binary/host lane verification without source mirror')
    args=ap.parse_args();root=args.root.resolve()
    clang=shutil.which('clang')
    if not clang:raise RuntimeError('Clang is required')
    host_lane_tests(clang)
    if not args.xbe_only:
        for address in SOURCES:
            source_path=root/f'src/main_unclassified/band_{address[:4]}/0x{address}.c'
            s=source_path.read_text();check_source(address,s)
            changes = [('001590a0','0xffffff00','0xffff0000'),
                       ('001590a0','(uint8_t)cVar2','(uint16_t)cVar2'),
                       ('00230040','>> 32','>> 16'),
                       ('00230040','(uint64_t)local_164','(uint32_t)local_164')]
            for entry,old,new in changes:
                if entry != address:continue
                mutant=s.replace(old,new)
                if mutant==s:raise ValueError('Mutation did not change '+address+': '+old)
                try:check_source(address,mutant)
                except ValueError:pass
                else:raise ValueError('Invalid mutation passed '+address+': '+old)
            for opt in ('-O0','-O2'):
                q=subprocess.run([clang,*FLAGS,opt,'-I',str(root/'include'),str(source_path)],capture_output=True,text=True,timeout=60)
                if q.returncode:raise ValueError(f'Clang {opt} {address}: {q.stderr[-2400:]}')
    if args.xbe:check_xbe(args.xbe.read_bytes())
    print(f'PASS: verified original instructions ({len(SITES)} sites), 912-/956-byte hashes, direct call, '
          'source mutation controls and Clang host bit-lane tests; '
          'original XBE '+('verified' if args.xbe else 'not supplied')+
          '; virtual ABI, guest memory and game runtime unverified')

if __name__=='__main__':main()