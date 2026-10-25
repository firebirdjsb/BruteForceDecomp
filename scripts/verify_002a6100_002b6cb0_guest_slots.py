#!/usr/bin/env python3
"""Pin two isolated guest-local contracts to the original Xbox instruction bytes.

GitHub CI runs source mutation, host bit-mask, and Clang checks. Optional --xbe
proves the retail XBE SHA-256, complete contiguous original instruction-body
SHA-256 for both repairs and the 0x002A78B0 callee, plus instruction windows.
Native register ABI, guest pointer relocation, virtual calls, x87 and runtime
are not verified by this syntax/stack-storage check.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODIES = {
    0x002A6100: (243, '2e43187772aa754c8373efc1bd630f4e7bf98fc93e1762e117c70084e9cb4069'),
    0x002A78B0: (192, '8ce652adc4607b7f2e996ac141a26ff56040f056956871e4e8a0f6b8a09ecb78'),
    0x002B6CB0: (310, '64fe773443e59fe7f9864d88cebF9D799523137a0cd95243d8c44236092573d8'),
}
SITES = {
    0x002A6100:'83ec10',0x002A6104:'8b5c241c',0x002A6109:'8b6c241c',
    0x002A6113:'ff5010',0x002A611E:'8bf8',0x002A6173:'8938',
    0x002A6175:'8b06',0x002A6178:'ff5004',0x002A617B:'8b0e',
    0x002A617E:'897c2414',0x002A6182:'89742418',0x002A6186:'ff5104',
    0x002A6189:'8d542410',0x002A618D:'52',0x002A6191:'8d7c241c',
    0x002A6195:'e816170000',0x002A619A:'8a5804',0x002A61B0:'e81b180000',
    0x002A61F0:'c21000',
    0x002A78B0:'83ec08',0x002A78B3:'8b5304',0x002A78B9:'80781500',
    0x002A78C9:'8b4c2414',0x002A78CD:'8b29',0x002A78D0:'3b680c',
    0x002A78F7:'3b32',0x002A7919:'8bc7',0x002A796D:'c20400',
    0x002B6CB0:'83ec30',0x002B6CB3:'56',0x002B6CB4:'57',
    0x002B6CB5:'8d742414',0x002B6CB9:'bf03000000',
    0x002B6CBE:'8bff',0x002B6CC0:'c70600000000',0x002B6CC6:'83c610',
    0x002B6CC9:'4f',0x002B6CCA:'75f4',0x002B6CCC:'d900',
    0x002B6D0A:'d95c2410',0x002B6D23:'d95c2418',
    0x002B6D3D:'d95c241c',0x002B6D5B:'d94008',
    0x002B6DE2:'83c430',0x002B6DE5:'c3',
}
FLAGS=('-std=c11','-fsyntax-only','-ferror-limit=3',
       '-Wno-implicit-function-declaration','-Wno-int-conversion',
       '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
       '-Wno-int-to-pointer-cast','-Wno-return-type',
       '-Wno-deprecated-non-prototype')
PATH_A=Path('src/main_unclassified/band_002a/0x002a6100.c')
PATH_B=Path('src/main_unclassified/band_002b/0x002b6cb0.c')

def code_only(source: str) -> str:
    return re.sub(r'/\*.*?\*/|//[^\n]*', '', source, flags=re.S)

def check_source(name: str, source: str) -> None:
    entry=int(name,16)
    if ('Entry: 0x'+name+',' not in source or
        'Input x86 body SHA-256: '+BODIES[entry][1].upper() not in source or
        'ABI_UNVERIFIED' not in source):
        raise ValueError('Lost original C draft provenance or ABI warning for '+name)
    c=code_only(source)
    if re.search(r'\bstack0x[0-9a-fA-F]+\b', c):
        raise ValueError('Unresolved guest stack symbol in '+name)
    if name=='002a6100':
        required=(
            'uint32_t guest_lookup_key;',
            'uVar2 = (**(code **)(*param_1 + 0x10))();',
            'guest_lookup_key = (uint32_t)uVar2;',
            'iVar3 = FUN_002a78b0(&guest_lookup_key);',
        )
        for token in required:
            if c.count(token)!=1:raise ValueError('Lost key contract '+token)
        first='(**(code **)(*piStack_8 + 4))(piStack_8);'
        if c.count(first)!=2:
            raise ValueError('Original two virtual +4 calls changed')
        p=c.find(first);k=c.find('guest_lookup_key = (uint32_t)uVar2;')
        q=c.find(first,p+len(first));call=c.find('iVar3 = FUN_002a78b0(&guest_lookup_key);')
        if not (p < k < q < call):
            raise ValueError('Guest DWORD must be stored between the two calls')
        if len(re.findall(r'\bguest_lookup_key\s*=(?!=)',c))!=1:
            raise ValueError('Invented extra write to the guest lookup key')
        if re.search(r'\bguest_lookup_key\s*=(?!=)',c[:k]):
            raise ValueError('Invented earlier initialization of the guest lookup key')
    else:
        for token in (
            'undefined4 local_24 [9];',
            '_Static_assert(sizeof(local_24) == 9 * sizeof(uint32_t),',
            'local_24[0] = 0;',
            'local_24[4] = 0;',
            'local_24[8] = 0;',
        ):
            if c.count(token)!=1:raise ValueError('Incorrect x86 guest write '+token)
        indices=re.findall(r'\blocal_24\s*\[\s*(\d+)\s*\]\s*=(?!=)',c)
        if indices!=['0','4','8']:
            raise ValueError('Extra or reordered guest local writes '+str(indices))
        if c.index('local_24[8] = 0;')>c.index('fVar1 = *in_EAX;'):
            raise ValueError('Original zeroing must finish before x87 operations')
        if 'puVar49 = (undefined4 *)&stack' in c:
            raise ValueError('Unresolved Ghidra synthetic base pointer')

def check_mutations(a: str,b: str) -> int:
    mutations=[
        ('002a6100',a.replace('uint32_t guest_lookup_key;','uint16_t guest_lookup_key;')),
        ('002a6100',a.replace('guest_lookup_key = (uint32_t)uVar2;', 'guest_lookup_key = 0;')),
        ('002a6100',a.replace('FUN_002a78b0(&guest_lookup_key)', 'FUN_002a78b0(&uVar2)')),
        ('002a6100',a.replace('iVar3 = FUN_002a78b0(&guest_lookup_key);', 'iVar3 = FUN_002a78b0(guest_lookup_key);')),
        ('002a6100',a.replace('guest_lookup_key = (uint32_t)uVar2;', 'guest_lookup_key = (uint32_t)uVar2; guest_lookup_key = 0;')),
        ('002a6100',a.replace('  guest_lookup_key = (uint32_t)uVar2;\n  (**(code **)(*piStack_8 + 4))(piStack_8);', '  (**(code **)(*piStack_8 + 4))(piStack_8);\n  guest_lookup_key = (uint32_t)uVar2;')),
        ('002b6cb0',b.replace('local_24[0] = 0;', 'local_24[1] = 0;')),
        ('002b6cb0',b.replace('local_24[4] = 0;', 'local_24[5] = 0;')),
        ('002b6cb0',b.replace('local_24[8] = 0;', 'local_24[7] = 0;')),
        ('002b6cb0',b.replace('undefined4 local_24 [9];', 'undefined4 local_24 [8];')),
        ('002b6cb0',b.replace('local_24[0] = 0;', 'local_24[0] = 1;')),
        ('002b6cb0',b.replace('local_24[8] = 0;','local_24[8] = 0; local_24[1] = 0;')),
    ]
    for name,wrong in mutations:
        orig=a if name=='002a6100' else b
        if orig==wrong:raise ValueError('Mutation did not change source '+name)
        try:check_source(name,wrong)
        except ValueError:pass
        else:raise ValueError('Bad source mutation passed '+name)
    return len(mutations)

def xbe_reader(data:bytes):
    if data[:4]!=b'XBEH':raise ValueError('Invalid XBE header')
    base=struct.unpack_from('<I',data,0x104)[0]
    count,table=struct.unpack_from('<II',data,0x11c)
    t=table-base
    if not 0<count<128 or t<0 or t+56*count>len(data):raise ValueError('Invalid XBE section table')
    sections=[struct.unpack_from('<IIIII',data,t+56*i) for i in range(count)]
    def read(va:int,n:int)->bytes:
        for _,v,vs,raw,rs in sections:
            if v<=va and va+n<=v+min(vs,rs):
                offset=raw+va-v
                if offset+n<=len(data):return data[offset:offset+n]
        raise ValueError('Unmapped original VA '+hex(va))
    return read,sections

def check_xbe(data:bytes):
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise ValueError('Original retail XBE SHA mismatch')
    read,sec=xbe_reader(data)
    for va,(n,sha) in BODIES.items():
        if hashlib.sha256(read(va,n)).hexdigest()!=sha.lower():
            raise ValueError('Function body mismatch '+hex(va))
    for va,op in SITES.items():
        if read(va,len(op)//2)!=bytes.fromhex(op):
            raise ValueError('Unexpected original instruction at '+hex(va))
    for site,end,target in ((0x002A6195,0x002A619A,0x002A78B0),
                            (0x002A61B0,0x002A61B5,0x002A79D0)):
        if end+struct.unpack('<i',read(site+1,4))[0]!=target:
            raise ValueError('Direct original call target changed')
    # Original function starts with guest frame 0x30, saves two registers,
    # takes ESP+0x14 -> original entry ESP-0x24, writes three slots at stride 16.
    # That maps to local_24[0], local_24[4], local_24[8].
    for va,flip in ((0x002A617E,1),(0x002B6CC6,1)):
        bad=bytearray(data)
        for _,v,vs,raw,rs in sec:
            if v<=va<v+min(vs,rs):bad[raw+va-v]^=flip;break
        else:raise ValueError('Unable to locate mutation VA')
        r,_=xbe_reader(bad)
        try:
            if r(va,len(SITES[va])//2)!=bytes.fromhex(SITES[va]):
                raise ValueError('Negative instruction control activated')
        except ValueError:pass
        else:raise ValueError('Corrupted original x86 site unexpectedly accepted')

def host_lane_tests(clang:str):
    # Test only the three observed DWORD stores, not x87 or guest ABI.
    source='''#include <stdint.h>\n#include <assert.h>\nint main(void){
      for(unsigned v=0;v<65536;v+=257){
        uint32_t a[9];
        for(unsigned i=0;i<9;i++)a[i]=(0x88776655u ^ (uint32_t)v ^ (i*0x01010101u));
        uint32_t before[9];for(unsigned i=0;i<9;i++)before[i]=a[i];
        a[0]=0;a[4]=0;a[8]=0;
        for(unsigned i=0;i<9;i++)assert(a[i]==((i%4==0)?0:before[i]));
        uint32_t key=0x80000000u | (uint32_t)v;
        uint32_t *pointer=&key;
        assert(*pointer==(0x80000000u | (uint32_t)v));
      }return 0;}
'''
    with tempfile.TemporaryDirectory() as td:
        t=Path(td); src=t/'lanes.c';src.write_text(source)
        for opt in ('-O0','-O2'):
            exe=t/('lanes'+opt.replace('-',''))
            p=subprocess.run([clang,'-std=c11','-Wall','-Wextra','-Werror',opt,str(src),'-o',str(exe)],capture_output=True,text=True)
            if p.returncode:raise ValueError('Host lane model failed: '+p.stderr[-1000:])
            r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=10)
            if r.returncode:raise ValueError('Host lane model runtime failed at '+opt)

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe',type=Path)
    args=p.parse_args();root=args.root.resolve()
    a=(root/PATH_A).read_text();b=(root/PATH_B).read_text()
    check_source('002a6100',a);check_source('002b6cb0',b)
    n=check_mutations(a,b)
    clang=shutil.which('clang')
    if not clang:raise RuntimeError('Clang required')
    for file in (PATH_A,PATH_B):
        for opt in ('-O0','-O2'):
            cmd=[clang,*FLAGS,opt,'-I',str(root/'include'),str(root/file)]
            z=subprocess.run(cmd,text=True,capture_output=True,timeout=60)
            if z.returncode:raise ValueError(f'Clang {file} {opt}: '+z.stderr[-2000:])
    host_lane_tests(clang)
    if args.xbe:check_xbe(args.xbe.read_bytes())
    print(f'PASS: two original guest DWORD layouts, {len(SITES)} opcode sites, '
          f'3 full x86 body hashes, {n} mutation controls, Clang O0/O2 and host lane tests; '
          f'XBE {"verified" if args.xbe else "not supplied"}; '
          'native ABI, x87 behavior and runtime UNVERIFIED')

if __name__=='__main__':main()