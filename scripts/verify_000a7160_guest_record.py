#!/usr/bin/env python3
"""Verify observed 0x000A7160 local storage and 0x000A7810 guest-call writes.

Source/Clang tests run without the game binary. --xbe verifies a private,
hash-pinned original; neither path proves native virtual-call/register ABI.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
CALLER_SHA = '51b03fc229bc9b002c77a3efa792e4cec9984bca9cc2cea358db0e0933b2f11b'
CALLEE_SHA = '0a0b7e7ad6c8ff7b0bca27d7142b302d35f88ac1fe48b391ae08d1616200cf0f'
# Exact original instruction bytes (not guessed offsets or pseudo-C).
SITES = {
    0x000A7160:'83ec1c', 0x000A7165:'8b6c2428',
    0x000A716A:'8bf0', 0x000A716C:'33db',
    0x000A7179:'895c2414', 0x000A717D:'89742410',
    0x000A7183:'56ff5004', 0x000A7189:'56ff510c',
    0x000A7191:'8bf8', 0x000A7193:'8b442414',
    0x000A71A7:'8d4c2414', 0x000A71AB:'515356ff5030',
    0x000A71B1:'8b442410', 0x000A71B9:'89542420',
    0x000A71BD:'89442424', 0x000A71C9:'8b442414',
    0x000A71CF:'89442428', 0x000A71DB:'8d442420',
    0x000A71DF:'50', 0x000A71E0:'8d9d08010000',
    0x000A71E6:'8d7c241c', 0x000A71EA:'e821060000',
    0x000A71EF:'8a8514010000', 0x000A71F9:'8d742424',
    0x000A71FD:'888514010000', 0x000A7203:'e808feffff',
    0x000A7208:'8d742410', 0x000A720C:'e8fffdffff',
    0x000A7211:'8ac3', 0x000A721A:'c20400',
    0x000A7810:'83ec08', 0x000A7813:'8b5304',
    0x000A7829:'8b4c2414', 0x000A7873:'890f',
    0x000A7875:'c6470401', 0x000A787F:'c20400',
    0x000A78B1:'8917', 0x000A78B3:'c6470401',
    0x000A78C1:'8907', 0x000A78C3:'c6470400',
    0x000A78CD:'c20400',
}
FLAGS = ('-std=c11','-fsyntax-only','-ferror-limit=3',
         '-Wno-implicit-function-declaration','-Wno-int-conversion',
         '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast','-Wno-return-type',
         '-Wno-deprecated-non-prototype')

def check_source(source):
    if 'Entry: 0x000a7160,' not in source or ('Input x86 body SHA-256: ' + CALLER_SHA.upper()) not in source:
        raise ValueError('Caller provenance missing/changed')
    if 'ABI_UNVERIFIED' not in source:
        raise ValueError('Guest ABI caveat missing')
    body = re.sub(r'/\*.*?\*/|//[^\n]*', '', source, flags=re.S)
    required = (
        'uint32_t initial_esi;', 'uint32_t intermediate;',
        'uint32_t result_node;', 'uint8_t result_status;',
        'uint8_t result_unknown[3];', 'uint32_t key_words[3];',
        '_Static_assert(sizeof(bf_000a7160_guest_frame) == 28,',
        '_Static_assert(offsetof(bf_000a7160_guest_frame, intermediate) == 4,',
        '_Static_assert(offsetof(bf_000a7160_guest_frame, result_node) == 8,',
        '_Static_assert(offsetof(bf_000a7160_guest_frame, result_status) == 12,',
        '_Static_assert(offsetof(bf_000a7160_guest_frame, key_words) == 16,',
        'guest_frame.intermediate = 0;',
        'guest_frame.initial_esi = (uint32_t)(uintptr_t)in_EAX;',
        'guest_frame.key_words[0] = *second_call_result;',
        'guest_frame.key_words[1] = guest_frame.initial_esi;',
        'guest_frame.key_words[2] = guest_frame.intermediate;',
        'FUN_000a7810(guest_frame.key_words);',
        '(**(code **)(*in_EAX + 0x30))(in_EAX, 0, &guest_frame.intermediate);',
    )
    for item in required:
        if body.count(item) != (2 if item == 'guest_frame.intermediate = 0;' else 1):
            raise ValueError('Missing/duplicated stack contract: ' + item)
    if re.search(r'\bstack0x[0-9a-fA-F]+\b',body):
        raise ValueError('Unresolved stack pseudo-variable')
    if re.search(r'\bguest_frame\s*=\s*\{',body) or re.search(r'\bguest_frame\.result_status\s*=(?!=)',body):
        raise ValueError('Invented status initialization')
    if body.count('FUN_000a7010();') != 2:
        raise ValueError('Guest ESI release-call count changed')

def read_sections(data):
    if data[:4] != b'XBEH': raise ValueError('Not XBE')
    base, = struct.unpack_from('<I',data,0x104)
    count, table_va = struct.unpack_from('<II',data,0x11C)
    off = table_va-base
    if not 0<count<128 or off<0 or off+56*count>len(data):
        raise ValueError('Invalid XBE section mapping')
    sections = [struct.unpack_from('<IIIII',data,off+56*i) for i in range(count)]
    def locate(va,size):
        for _,start,vsize,raw,rsize in sections:
            if start<=va and va+size<=start+min(vsize,rsize):
                pos=raw+va-start
                if pos+size <= len(data): return pos
        raise ValueError('VA unmapped: '+hex(va))
    return locate

def check_xbe(data):
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        raise ValueError('Original XBE mismatch')
    locate=read_sections(data)
    for a,b,hash_ in ((0xA7160,0xA721D,CALLER_SHA),(0xA7810,0xA78D0,CALLEE_SHA)):
        if hashlib.sha256(data[locate(a,b-a):locate(a,b-a)+b-a]).hexdigest()!=hash_:
            raise ValueError('Original function body mismatch: '+hex(a))
    for a,ins in SITES.items():
        target=bytes.fromhex(ins)
        if data[locate(a,len(target)):locate(a,len(target))+len(target)]!=target:
            raise ValueError('Original instruction mismatch: '+hex(a))
    for site,expected in ((0xA71EA,0xA7810),(0xA7203,0xA7010),(0xA720C,0xA7010)):
        call=data[locate(site,5):locate(site,5)+5]
        disp,=struct.unpack('<i',call[1:])
        if call[0]!=0xE8 or site+5+disp!=expected:
            raise ValueError('Direct edge mismatch: '+hex(site))
    altered=bytearray(data)
    loc=locate(0xA71EA,5)
    altered[loc]^=1
    try: check_site_negative(altered,loc,bytes.fromhex(SITES[0xA71EA]))
    except ValueError: pass
    else: raise ValueError('Mutated call instruction was accepted')

def check_site_negative(data,loc,expected):
    if data[loc:loc+len(expected)]!=expected:
        raise ValueError('negative control rejected')

def main():
    p=argparse.ArgumentParser()
    p.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe', type=Path)
    a=p.parse_args()
    src=a.root/'src/main_unclassified/band_000a/0x000a7160.c'
    data=src.read_text()
    check_source(data)
    for before,after in (
        ('key_words[3]','key_words[2]'),
        ('result_status) == 12','result_status) == 8'),
        ('guest_frame.key_words[1] = guest_frame.initial_esi;', 'guest_frame.key_words[1] = 0;'),
        ('FUN_000a7810(guest_frame.key_words);','FUN_000a7810(guest_frame.key_words+1);'),
    ):
        bad=data.replace(before,after)
        if bad==data: raise ValueError('Mutation did not change source')
        try: check_source(bad)
        except ValueError: pass
        else: raise ValueError('Mutated source accepted: '+before)
    clang=shutil.which('clang')
    if not clang: raise RuntimeError('Clang required')
    for opt in ('-O0','-O2'):
        r=subprocess.run([clang,*FLAGS,opt,'-I',str(a.root/'include'),str(src)],capture_output=True,text=True,timeout=45)
        if r.returncode: raise ValueError('Clang '+opt+' failed: '+r.stderr[-2500:])
    if a.xbe: check_xbe(a.xbe.read_bytes())
    print('PASS: 0x000A7160 frame, 0x000A7810 output sites, negative controls, Clang -O0/-O2; XBE '+('verified' if a.xbe else 'not supplied')+'; native guest register ABI unverified')
if __name__=='__main__': main()