#!/usr/bin/env python3
"""Verify original 0x0023A790 two-slot guest stack lifetime and focused C11.

Source-only Clang and mutation checks run in CI. --xbe requires the locally
provided, SHA-256-pinned retail Xbox XBE. Virtual-call and guest-register ABI
and runtime behavior are not asserted.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA = 'b2f24405ce94ac8095d8823541380f0a123e38b41a3d67da576c2bb558ccf28b'
START, END = 0x0023A790, 0x0023A890
# Exact local instruction boundaries extracted from the pinned XBE.
SITES = {
    0x0023A790:'83ec08',           # sub esp,8: two local guest DWORDs
    0x0023A793:'53',               # push ebx
    0x0023A794:'56',               # push esi
    0x0023A797:'8d4c2408',         # &first local DWORD
    0x0023A79B:'51',               # first call out address pushed
    0x0023A79C:'68f8c44000',       # 32-bit imm for first virtual call
    0x0023A7A5:'56',               # guest object push
    0x0023A7A6:'c744241400000000', # first slot zeroed
    0x0023A7AE:'ff10',             # first virtual dispatch
    0x0023A7B2:'8b442408',         # loads first local DWORD
    0x0023A7BC:'8b08',             # second dispatch vtable load
    0x0023A7BE:'8d54240c',         # &second guest stack DWORD
    0x0023A7C2:'52',               # second output pointer pushed
    0x0023A7C3:'50',               # object pointer pushed
    0x0023A7C4:'ff510c',           # second virtual dispatch
    0x0023A7C7:'8b00',             # reads return-addressed word
    0x0023A7C9:'3b442414',         # compares against incoming guest word
    0x0023A7F7:'8a442418',         # reads a guest incoming byte
    0x0023A847:'e874f5ffff',       # direct 0x00239DC0
    0x0023A818:'5e',               # restores ESI
    0x0023A81B:'5b',               # restores EBX
    0x0023A81C:'83c408',          # discards two local DWORDs
    0x0023A81F:'c3',               # no callee-stack cleanup
}
FLAGS=('-std=c11','-fsyntax-only','-ferror-limit=3',
       '-Wno-implicit-function-declaration','-Wno-int-conversion',
       '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
       '-Wno-int-to-pointer-cast','-Wno-return-type',
       '-Wno-deprecated-non-prototype')


def check_source(s):
    if ('Entry: 0x0023a790,' not in s or
        'Input x86 body SHA-256: '+BODY_SHA.upper() not in s or
        'ABI_UNVERIFIED' not in s):
        raise ValueError('Source original-XBE provenance/ABI caveat changed')
    code = re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)
    for item in ('int32_t first_word;', 'uint32_t second_word;',
                 '_Static_assert(sizeof(bf_0023a790_guest_locals) == 8,',
                 '_Static_assert(offsetof(bf_0023a790_guest_locals, second_word) == 4,',
                 'guest_locals.first_word = 0;',
                 '(**(code **)*in_ECX)();',
                 '(**(code **)(guest_locals.first_word + 0xc))(&guest_locals.first_word,&guest_locals.second_word)',
                 'FUN_00239dc0();'):
        if code.count(item)!=1:
            raise ValueError('Missing/duplicated original local stack contract: '+item)
    if re.search(r'\bstack0x[0-9a-fA-F]+\b',code):
        raise ValueError('Unresolved synthetic guest address remains')
    if re.search(r'\bguest_locals\.second_word\s*=(?!=)',code):
        raise ValueError('Invented zero/other initialization of guest output')


def reader(data):
    if data[:4]!=b'XBEH': raise ValueError('Not an XBE')
    base=struct.unpack_from('<I',data,0x104)[0]
    count,table_va=struct.unpack_from('<II',data,0x11c)
    table=table_va-base
    if not 0<count<128 or table<0 or table+count*56>len(data):
        raise ValueError('Invalid XBE section table')
    secs=[struct.unpack_from('<IIIII',data,table+i*56) for i in range(count)]
    def read(va,n):
        for _,start,vsize,raw,rsize in secs:
            if start<=va and va+n<=start+min(vsize,rsize):
                off=raw+va-start
                if off+n<=len(data):return data[off:off+n]
        raise ValueError('XBE virtual address unmapped: '+hex(va))
    return read


def check_sites(read):
    for va,h in SITES.items():
        if read(va,len(h)//2)!=bytes.fromhex(h):
            raise ValueError('Original instruction mismatch '+hex(va))
    displacement=struct.unpack('<i',read(0x0023A848,4))[0]
    if 0x0023A84C+displacement!=0x00239DC0:
        raise ValueError('Original direct call target changed')


def check_xbe(data):
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        raise ValueError('Pinned retail XBE hash mismatch')
    read=reader(data)
    if hashlib.sha256(read(START,END-START)).hexdigest()!=BODY_SHA:
        raise ValueError('Original function body SHA-256 mismatch')
    check_sites(read)
    # Mutation check on a mapped, *independently verified* byte offset.
    base=struct.unpack_from('<I',data,0x104)[0]
    count,tbl=struct.unpack_from('<II',data,0x11c)
    target=0x0023A7BE
    for i in range(count):
        _,start,vsize,raw,rsize=struct.unpack_from('<IIIII',data,tbl-base+i*56)
        if start<=target<start+min(vsize,rsize):
            offset=raw+target-start
            break
    else:raise ValueError('Mutation address not mapped')
    altered=bytearray(data);altered[offset]^=1
    try:check_sites(reader(altered))
    except ValueError:pass
    else:raise ValueError('Original instruction mutation escaped detection')


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe',type=Path)
    a=ap.parse_args()
    root=a.root.resolve()
    p=root/'src/main_unclassified/band_0023/0x0023a790.c'
    source=p.read_text()
    check_source(source)
    for before,after in (
        ('uint32_t second_word;', 'uint64_t second_word;'),
        ('second_word) == 4,','second_word) == 8,'),
        ('&guest_locals.first_word,&guest_locals.second_word','&guest_locals.first_word,&guest_locals.first_word'),
        ('uint32_t second_word;', 'uint32_t second_word = 0;'),
        ('guest_locals.first_word = 0;','guest_locals.first_word = 1;'),
    ):
        mutated=source.replace(before,after)
        if mutated==source:raise ValueError('Negative control failed to mutate source')
        try:check_source(mutated)
        except ValueError:pass
        else:raise ValueError('Bad source mutation accepted: '+before)
    clang=shutil.which('clang')
    if not clang:raise RuntimeError('Clang missing')
    for opt in ('-O0','-O2'):
        out=subprocess.run([clang,*FLAGS,opt,'-I',str(root/'include'),str(p)],capture_output=True,text=True,timeout=60)
        if out.returncode:raise ValueError(f'Clang {opt} failed:\n{out.stderr[-2500:]}')
    if a.xbe:check_xbe(a.xbe.read_bytes())
    print('PASS: 0x0023A790 distinct guest outwords, source mutation negatives, '
          'Clang -O0/-O2; original XBE '+('verified' if a.xbe else 'not supplied')+
          '; virtual calls, guest register ABI and runtime UNVERIFIED')

if __name__=='__main__':main()