#!/usr/bin/env python3
"""Two verified guest DWORD call-site contracts from the original Brute Force XBE.

Source+Clang checks run in public CI without redistributing the game XBE;
--xbe additionally pins original image, full function bodies and instruction sites.
This does not verify implicit register ABI, host pointers, C full-runtime behavior.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

IMAGE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
SOURCES = {
    '00126320': ('70e334e750c3a9da7dd27c51e7c703686a8965069150ff88c38654cadf9ee1b7',188),
    '001781c0': ('6f54a3a8c6dba33e01893a732d5fd1c1e7122d04b5c0f2744abc84d237258075',439),
}
SITES = {
    0x00126320:'83ec78',0x00126323:'57',0x00126339:'8d442410',
    0x00126361:'894c2408',0x00126365:'89442420',
    0x001263A3:'8d4c2404',0x001263B0:'51',0x001263B1:'8974240c',
    0x001263B5:'897c2408',0x001263B9:'e8f25a0500',
    0x001263C6:'8d542408',0x001263CA:'52',0x001263CB:'8d442408',
    0x001263CF:'e87c2a0500',0x001263D4:'83c404',
    0x001263D8:'83c478',0x001263DB:'c3',
    0x001781C0:'8a462c',0x001781C3:'83ec38',0x001781C6:'53',
    0x001781C7:'55',0x001781C8:'8b6c2444',0x001781D0:'57',
    0x001781D9:'b908000000',0x001781DE:'8d7c2424',
    0x001781E2:'895c2428',0x001781E6:'f3ab',
    0x001781ED:'895c2414',0x001781F1:'c744241801000000',
    0x001781F9:'c744241c02000000',0x001781C0:'8a462c',
    0x00178283:'8d44244c',0x00178287:'50',
    0x00178288:'8d44244c',0x0017828C:'895c244c',
    0x00178290:'895c2450',0x00178296:'50',0x00178297:'ff521c',
    0x0017829A:'8b4c2448',0x0017829E:'8b54244c',
    0x001782A2:'895c2430',0x001782A6:'895c2434',
    0x001782AA:'894c2438',0x001782AE:'8954243c',
    0x001782D3:'6a02',0x001782D5:'8d442410',
    0x001782DC:'895c241c',0x001782E0:'c744242001000000',
    0x001782E8:'e8030e1e00',
    0x001782ED:'6a01',0x001782EF:'8d4c2410',
    0x001782F7:'c744241c03000000',0x001782FF:'e8ec0d1e00',
    0x00178304:'6a02',0x00178306:'8d542410',
    0x0017830E:'896c241c',0x00178312:'c744242005000000',
    0x0017831A:'e8d10d1e00',
    0x0017831F:'8b4c2420',0x00178323:'6a01',0x00178325:'8d442410',
    0x0017832C:'c744241c02000000',0x00178334:'e8b70d1e00',
    0x00178358:'c20c00',0x00178374:'c20c00',
    0x001783FB:'8b442414',0x001783FF:'8b4c2410',
    0x00178E52:'8b6c240c',0x00178E59:'8b4500',
    0x00178EB8:'8a4d04',0x00178ECE:'8a5504',
    0x00178403:'50',0x00178404:'51',0x00178405:'57',
    0x00178406:'e8b5fdffff',0x0017840D:'c20c00',
}
FLAGS=('-std=c11','-fsyntax-only','-ferror-limit=3',
       '-Wno-implicit-function-declaration','-Wno-int-conversion',
       '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
       '-Wno-int-to-pointer-cast','-Wno-return-type',
       '-Wno-deprecated-non-prototype')

def uncomment(s):
    return re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)

def check_source(name,s):
    sha,_=SOURCES[name]
    if 'Entry: 0x'+name+',' not in s or 'Input x86 body SHA-256: '+sha.upper() not in s or 'ABI_UNVERIFIED' not in s:
        raise ValueError(name+': provenance or ABI caveat changed')
    c=uncomment(s)
    required1=(
        'uint32_t guest_stack_words[3];',
        '_Static_assert(sizeof(guest_stack_words) == 12,',
        'guest_stack_words[0] = *(undefined4 *)(iVar2 + 0x28);',
        'uStack_58 = guest_stack_words[0];',
        'FUN_0017beb0(&guest_stack_words[0]);',
        'FUN_00178e50(&guest_stack_words[1]);',
    )
    required2=(
        'undefined4 guest_second_word,',
        'uint32_t guest_transfer_words[2];',
        '_Static_assert(sizeof(guest_transfer_words) == 8,',
        'guest_second_word = 0;',
        '(&guest_second_word,&param_1);',
        'local_20[4] = param_1;',
        'local_20[5] = guest_second_word;',
        'guest_transfer_words[0] = 0;',
        'guest_transfer_words[1] = 1;',
        'FUN_003590f0(iVar2,0,guest_transfer_words,2);',
        'guest_transfer_words[0] = 3;',
        'FUN_003590f0(iVar2,1,guest_transfer_words,1);',
        'guest_transfer_words[0] = 4;',
        'guest_transfer_words[1] = 5;',
        'FUN_003590f0(iVar2,2,guest_transfer_words,2);',
        'guest_transfer_words[0] = 2;',
        'FUN_003590f0(iVar2,local_24,guest_transfer_words,1);',
    )
    req=required1 if name=='00126320' else required2
    for tok in req:
        if c.count(tok)!=1:raise ValueError(name+' missing/duplicated '+tok)
    if re.search(r'\bstack0x[0-9a-fA-F]+\b',c):
        raise ValueError(name+' left unresolved stack alias')
    if name=='00126320' and re.search(r'guest_stack_words\s*\[[12]\]\s*=',c):
        raise ValueError('invented adjacent guest outword initial value')
    if name=='001781c0':
        # Original x86 sequence: two incoming outslots cleared/forwarded,
        # then paired transfer words mutated between four direct calls.
        sequence=(
            'param_1 = 0;', 'guest_second_word = 0;',
            '(&guest_second_word,&param_1);',
            'local_20[4] = param_1;', 'local_20[5] = guest_second_word;',
            'guest_transfer_words[0] = 0;', 'guest_transfer_words[1] = 1;',
            'FUN_003590f0(iVar2,0,guest_transfer_words,2);',
            'guest_transfer_words[0] = 3;',
            'FUN_003590f0(iVar2,1,guest_transfer_words,1);',
            'guest_transfer_words[0] = 4;', 'guest_transfer_words[1] = 5;',
            'FUN_003590f0(iVar2,2,guest_transfer_words,2);',
            'guest_transfer_words[0] = 2;',
            'FUN_003590f0(iVar2,local_24,guest_transfer_words,1);',
        )
        positions=[c.index(token) for token in sequence]
        if positions!=sorted(positions):raise ValueError('guest output order was changed')
        if c.count('FUN_003590f0(')!=4:raise ValueError('wrong number of virtual guest transfer calls')
        if len(re.findall(r'guest_transfer_words\[1\]\s*=',c))!=2:
            raise ValueError('wrong number of high outword stores')

def mapped_reader(data):
    if data[:4]!=b'XBEH':raise ValueError('XBE signature mismatch')
    base=struct.unpack_from('<I',data,0x104)[0]
    count,t=struct.unpack_from('<II',data,0x11c);o=t-base
    if not 0<count<128 or o<0 or o+count*56>len(data):raise ValueError('Invalid XBE sections')
    sections=[struct.unpack_from('<IIIII',data,o+i*56) for i in range(count)]
    def locate(va,n):
        for _,v,vs,raw,rs in sections:
            if v<=va and va+n<=v+min(vs,rs) and raw+va-v+n<=len(data):return raw+va-v
        raise ValueError('Unmapped guest address '+hex(va))
    return (lambda va,n: data[locate(va,n):locate(va,n)+n]),locate

def check_xbe(raw):
    if hashlib.sha256(raw).hexdigest()!=IMAGE_SHA:raise ValueError('XBE SHA mismatch')
    read,locate=mapped_reader(raw)
    for name,(sha,length) in SOURCES.items():
        if hashlib.sha256(read(int(name,16),length)).hexdigest()!=sha:
            raise ValueError(name+' full original body mismatch')
    for addr,hexbytes in SITES.items():
        if read(addr,len(hexbytes)//2)!=bytes.fromhex(hexbytes):
            raise ValueError('Original instruction bytes mismatch at '+hex(addr))
    for addr,target in ((0x001263B9,0x0017BEB0),(0x001263CF,0x00178E50),
                        (0x001782E8,0x003590F0),(0x001782FF,0x003590F0),
                        (0x0017831A,0x003590F0),(0x00178334,0x003590F0),
                        (0x00178406,0x001781C0)):
        actual=addr+5+struct.unpack('<i',read(addr+1,4))[0]
        if actual!=target:raise ValueError('Wrong call target '+hex(addr))
    corrupt=bytearray(raw)
    corrupt[locate(0x0017831F,1)]^=1
    read_bad,_=mapped_reader(corrupt)
    try:
        for addr,hexbytes in SITES.items():
            if read_bad(addr,len(hexbytes)//2)!=bytes.fromhex(hexbytes):
                raise ValueError('Tampered byte')
    except ValueError:pass
    else:raise ValueError('XBE mutation unexpectedly accepted')

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe',type=Path)
    args=p.parse_args();root=args.root.resolve()
    for name in SOURCES:
        file=root/f'src/main_unclassified/band_{name[:4]}/0x{name}.c'
        s=file.read_text();check_source(name,s)
        changes={
            '00126320':[
                ('uint32_t guest_stack_words[3];','uint32_t guest_stack_words[1];'),
                ('&guest_stack_words[1]','&guest_stack_words[0]'),
                ('&guest_stack_words[0]','&guest_stack_words[1]'),
                ('uStack_58 = guest_stack_words[0]','uStack_58 = 0'),
                ('guest_stack_words[0] = *(undefined4 *)(iVar2 + 0x28);','guest_stack_words[0] = 0;'),
                ('FUN_00178e50(&guest_stack_words[1]);','guest_stack_words[1] = 0; FUN_00178e50(&guest_stack_words[1]);'),
            ],
            '001781c0':[
                ('undefined4 guest_second_word,',''),
                ('uint32_t guest_transfer_words[2];','uint32_t guest_transfer_words[3];'),
                ('&guest_second_word,&param_1','&param_1,&param_1'),
                ('guest_second_word = 0;','guest_second_word = 1;'),
                ('local_20[4] = param_1;','local_20[4] = 0;'),
                ('local_20[5] = guest_second_word;','local_20[5] = param_1;'),
                ('guest_transfer_words[1] = 1;','guest_transfer_words[1] = 0;'),
                ('guest_transfer_words[0] = 3;','guest_transfer_words[0] = 1;'),
                ('guest_transfer_words[0] = 4;','guest_transfer_words[0] = 3;'),
                ('guest_transfer_words[1] = 5;','guest_transfer_words[1] = 1;'),
                ('guest_transfer_words[0] = 2;','guest_transfer_words[0] = 4;'),
                ('FUN_003590f0(iVar2,local_24,guest_transfer_words,1);',
                 'FUN_003590f0(iVar2,local_28,guest_transfer_words,1);'),
            ]
        }[name]
        for old,new in changes:
            mutated=s.replace(old,new)
            if mutated==s:raise ValueError(name+' no source mutation')
            try:check_source(name,mutated)
            except ValueError:pass
            else:raise ValueError(name+' bad mutation accepted '+old)
        cc=shutil.which('clang')
        if not cc:raise RuntimeError('Clang missing')
        for opt in ('-O0','-O2'):
            check=subprocess.run([cc,*FLAGS,opt,'-I',str(root/'include'),str(file)],capture_output=True,text=True,timeout=60)
            if check.returncode:raise ValueError(name+' Clang '+opt+' failed: '+check.stderr[-2500:])
    if args.xbe:check_xbe(args.xbe.read_bytes())
    print('PASS: 0x00126320 and 0x001781C0 guest stack DWORD contracts, '
          f'{len(SITES)} x86 instruction sites, direct targets, negative controls, '
          'Clang O0/O2; original XBE '+('verified' if args.xbe else 'not supplied')+
          '; native register ABI and runtime UNVERIFIED')

if __name__=='__main__':main()