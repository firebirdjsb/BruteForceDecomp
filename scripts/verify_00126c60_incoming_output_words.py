#!/usr/bin/env python3
"""Instruction-backed two-DWORD incoming/callee-write contract at 0x00126C60.

CI checks source, mutation guards and Clang. The original XBE is never
included in git; --xbe adds SHA-pinned binary body/instruction/caller proofs.
The Xbox register ABI, virtual implementations and native memory remain
unverified by an isolated syntax check.
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
SOURCE=Path('src/main_unclassified/band_0012/0x00126c60.c')
CALLEE=Path('src/main_unclassified/band_0002/0x00022bc0.c')
BODIES={
  0x00126c60:(334,'4b2a688856774e0d76ae8b569b314b8d63c7b846812bd3ed05131353e4875a37'),
  0x00022bc0:(213,'e2021377f1d261dbbb2cfc9374efdda1e6292515390fe5eb7b513005bea4fb20'),
}
# Each site marks a complete original x86 instruction.
SITES={
  0x00126c60:'83ec18', # 24-byte local frame
  0x00126c63:'53',0x00126c64:'56',
  0x00126cb8:'8b4c2424', # first incoming DWORD, ESP+0x24
  0x00126cc3:'3bc1',     # signed threshold compare
  0x00126cc5:'7f16',     # signed JG
  0x00126cdA:'c20800',   # return pops two guest DWORDs
  0x00126cdd:'8a442428', # LOW BYTE of second DWORD
  0x00126ce9:'57',       # push EDI; changes stack origin
  0x00126cea:'8d44242c', # address second DWORD for FUN_00022bc0
  0x00126cee:'50',
  0x00126cef:'8d7c2410', # EDI -> scratch 12-byte output from callee
  0x00126cf3:'e8c8beefff',
  0x00126d1a:'8d442428', # address first DWORD for virtual +0x10
  0x00126d1e:'50',
  0x00126d1f:'ff5210',
  0x00126d4b:'8b4c242c', # second DWORD post FUN_00022bc0
  0x00126d51:'51',       # forwarded by value to virtual +0x50
  0x00126d59:'ff5050',
  0x00126d6c:'8d442428', # same first DWORD for virtual +0x14
  0x00126d70:'50',
  0x00126d71:'ff5214',
  0x00126da1:'c20800', 0x00126dab:'c20800',
  0x00022bcc:'8b6c241c',# callee's guest pointer argument -> EBP
  0x00022bf4:'895500',  # writes whole DWORD to pointed-to second slot
  0x00022bfe:'c20400',  # one guest pointer parameter
  0x00022c77:'8b4500',  # alternate path reads whole DWORD
  0x00022c88:'c20400',0x00022c92:'c20400',
  0x001192fb:'6a00',0x001192fd:'6a00',
  0x0022d9c2:'6a00',0x0022d9c4:'6a02',
  0x0022f2e3:'6a00',0x0022f2e5:'6a00',
  0x00231b79:'53',0x00231b7a:'6a02',
}
CALLS={
  0x00126cf3:0x00022bc0,
  0x00119301:0x00126c60,
  0x0022d9c6:0x00126c60,
  0x0022f2e7:0x00126c60,
  0x00231b7e:0x00126c60,
}
FLAGS=('-std=c11','-fsyntax-only','-ferror-limit=3',
       '-Wno-implicit-function-declaration','-Wno-int-conversion',
       '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
       '-Wno-int-to-pointer-cast','-Wno-return-type',
       '-Wno-deprecated-non-prototype')


def bare(s):
    return re.sub(r'/\*.*?\*/|//[^\n]*', '', s, flags=re.S)

FIRST='byte FUN_00126c60(int32_t guest_first_word,uint32_t guest_second_word)'
SIZE='_Static_assert(sizeof(guest_first_word) == 4 && sizeof(guest_second_word) == 4,'
COMPARE='if ((int)((uVar3 ^ uVar4) - uVar4) <= guest_first_word) {'
LOW='((uint8_t)guest_second_word == 0)'
WRITE='FUN_00022bc0(&guest_second_word)'
OUT1='(in_EAX + 8) + 0xbec) + 0x10))(&guest_first_word)'
OUT2='(in_EAX + 8) + 0xbec) + 0x14))(auStack_4);'
READ='(auStack_14,guest_second_word);'

def source_check(caller,callee):
    if ('Input x86 body SHA-256: '+BODIES[0x00126c60][1].upper() not in caller
      or 'Entry: 0x00126c60,' not in caller or 'ABI_UNVERIFIED' not in caller):
        raise ValueError('Caller XBE provenance/ABI warning missing')
    if ('Input x86 body SHA-256: '+BODIES[0x00022bc0][1].upper() not in callee
      or 'Entry: 0x00022bc0,' not in callee
      or 'uint FUN_00022bc0(int *param_1)' not in bare(callee)
      or '*param_1 = unaff_ESI[0xd];' not in bare(callee)):
        raise ValueError('Write-capable callee or original provenance altered')
    c=bare(caller)
    sequence=(FIRST,SIZE,COMPARE,LOW,WRITE,OUT1,READ,OUT2)
    for token in sequence:
        if c.count(token)!=1:raise ValueError('Missing/duplicate guest contract '+token)
    if [c.index(x) for x in sequence]!=sorted(c.index(x) for x in sequence):
        raise ValueError('Original compare/overwriting call/forwarding order changed')
    if len(re.findall(r'\bguest_first_word\b',c))!=4:
        raise ValueError('First guest word must be compared and forwarded by address once')
    if len(re.findall(r'\bguest_second_word\b',c))!=5:
        raise ValueError('Second word must be low-byte-tested, written, and re-read')
    if re.search(r'\bstack0x[0-9a-fA-F]+\b',c):
        raise ValueError('Ghidra synthetic guest stack slot remains')
    if re.search(r'\bunaff_retaddr\b',c):
        raise ValueError('Unverified retaddr alias remains')
    if 'FUN_00022bc0(&guest_first_word)' in c:
        raise ValueError('Input/output guest words swapped')
    if '(auStack_14,(uint8_t)guest_second_word)' in c:
        raise ValueError('Second full DWORD truncation')

def mutate(source,callee):
    replacements=[
        (FIRST,'byte FUN_00126c60(char guest_first_word,uint32_t guest_second_word)'),
        (FIRST,'byte FUN_00126c60(int32_t guest_first_word,uint8_t guest_second_word)'),
        (FIRST,'byte FUN_00126c60(uint32_t guest_first_word,uint32_t guest_second_word)'),
        (SIZE,'_Static_assert(sizeof(guest_first_word) == 2 && sizeof(guest_second_word) == 4,'),
        (COMPARE,COMPARE.replace('guest_first_word','guest_second_word')),
        (LOW, '(guest_second_word == 0)'),
        (WRITE,'FUN_00022bc0(&guest_first_word)'),
        (WRITE,'FUN_00022bc0(&guest_second_word); guest_second_word = 0'),
        (OUT1,OUT1.replace('guest_first_word','guest_second_word')),
        (OUT2,OUT2.replace('auStack_4','&guest_first_word')),
        (READ,'(auStack_14,guest_first_word);'),
        (READ,'(auStack_14,(uint8_t)guest_second_word);'),
        (READ,'(auStack_14,0);'),
        (READ,'(auStack_14,guest_second_word); guest_second_word = 0;'),
        (LOW+' &&\n      (cVar1',LOW.replace('second','first')+' &&\n      (cVar1'),
    ]
    for src,dst in replacements:
        changed=source.replace(src,dst,1)
        if changed==source:raise ValueError('No-op negative control: '+src)
        try:source_check(changed,callee)
        except ValueError:pass
        else:raise ValueError('Mutation incorrectly passed: '+src+' -> '+dst)
    return len(replacements)


def image_reader(data):
    if data[:4]!=b'XBEH':raise ValueError('Not an XBE')
    base=struct.unpack_from('<I',data,0x104)[0];num,table=struct.unpack_from('<II',data,0x11c)
    table-=base
    if not 0<num<128 or not 0<=table<=len(data)-56*num:raise ValueError('Bad XBE section table')
    sections=[struct.unpack_from('<IIIII',data,table+56*i) for i in range(num)]
    def location(va,size):
        for _,v,vs,r,rs in sections:
            if v<=va and va+size<=v+min(vs,rs) and r+va-v+size<=len(data):return r+va-v
        raise ValueError('Unmapped original guest virtual address '+hex(va))
    return lambda va,n: data[location(va,n):location(va,n)+n],location


def check_xbe(data):
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise ValueError('Wrong original XBE SHA')
    read,location=image_reader(data)
    for va,(size,sha) in BODIES.items():
        if hashlib.sha256(read(va,size)).hexdigest()!=sha:
            raise ValueError('Entire original function body drift at '+hex(va))
    for va,op in SITES.items():
        if read(va,len(op)//2)!=bytes.fromhex(op):
            raise ValueError('Original x86 instruction mismatch '+hex(va))
    for addr,target in CALLS.items():
        disp=struct.unpack('<i',read(addr+1,4))[0]
        if addr+5+disp!=target:raise ValueError('Incorrect original direct-call destination '+hex(addr))
    corrupted=bytearray(data);corrupted[location(0x00126d4b,1)]^=0x01
    bad,_=image_reader(corrupted)
    if bad(0x00126d4b,4)==bytes.fromhex(SITES[0x00126d4b]):
        raise ValueError('XBE negative instruction mutation accepted')


def host_test(cc):
    text=r'''#include <stdint.h>
#include <assert.h>
#include <stddef.h>
static void write_four_bytes(uint32_t *word,uint32_t replacement){*word=replacement;}
static void virtual_first(uint32_t *word,uint32_t replacement){*word=replacement;}
int main(void){
  uint32_t cases[]={0,1,2,0x7fffffff,0x80000000,0xffffffff,0x9abcdef0};
  _Static_assert(sizeof(uint32_t)==4,"guest DWORD width");
  for(size_t i=0;i<sizeof(cases)/sizeof(cases[0]);i++){
    int32_t first=(int32_t)cases[i];uint32_t second=cases[i];
    assert(((uint8_t)second)==(cases[i]&255));
    virtual_first((uint32_t *)&first,cases[(i+1)%7]);
    assert((uint32_t)first==cases[(i+1)%7]);
    write_four_bytes(&second,cases[(i+2)%7]);
    assert(second==cases[(i+2)%7]);
    assert((uint8_t)second==(cases[(i+2)%7]&255));
  }
  return 0;
}'''
    with tempfile.TemporaryDirectory() as td:
        src=Path(td)/'guest_model.c';src.write_text(text+'\n')
        for opt in ('-O0','-O2'):
            out=Path(td)/('guest_model_'+opt[1:]);p=subprocess.run(
                [cc,'-std=c11','-Wall','-Wextra','-Werror','-pedantic-errors',opt,str(src),'-o',str(out)],
                capture_output=True,text=True,timeout=40)
            if p.returncode:raise ValueError('Host model '+opt+' failed '+p.stderr)
            subprocess.run([str(out)],check=True,timeout=20)


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe',type=Path)
    args=ap.parse_args();root=args.root.resolve()
    caller=(root/SOURCE).read_text();callee=(root/CALLEE).read_text()
    source_check(caller,callee)
    neg=mutate(caller,callee)
    cc=shutil.which('clang')
    if not cc:raise ValueError('Clang required')
    for opt in ('-O0','-O2'):
        p=subprocess.run([cc,*FLAGS,opt,'-I',str(root/'include'),str(root/SOURCE)],capture_output=True,text=True,timeout=40)
        if p.returncode:raise ValueError('Clang '+opt+' failed: '+p.stderr[-2000:])
    host_test(cc)
    if args.xbe:check_xbe(args.xbe.read_bytes())
    print(f'PASS 0x00126C60 guest two-DWORD stack and 0x00022BC0 overwrite contract: {len(SITES)} instruction sites, {len(CALLS)} call edges, {neg} mutation negatives, Clang O0/O2; original XBE {"verified" if args.xbe else "not provided to CI"}; indirect virtual ABI and native runtime UNVERIFIED')

if __name__=='__main__':main()