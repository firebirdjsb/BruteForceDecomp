#!/usr/bin/env python3
"""Verify original Xbox 0x001EE060 forwarded guest formatter argument DWORDs.

The source-only CI lane checks syntax and literal storage contracts; --xbe
checks the hash-pinned original and the two direct caller push sequences.
This is NOT proof of host varargs layout, native pointer binding or runtime.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA = 'd72ae38f7ce2f3f326324830f1d48f4bf6f6d2c90af6f0d8ea14af07d2262fc4'
START, END = 0x001EE060, 0x001EE0DC
SITES = {
    0x001EE060: 'a15c994600',  # global condition
    0x001EE068: '81ec1c010000', # 0x11c guest stack allocation
    0x001EE072: '8d4c2400',  # local object
    0x001EE07B: '8b8c2424010000', # incoming second argument
    0x001EE084: '8b8c2428010000', # incoming third argument
    0x001EE08B: '8d84242c010000', # &incoming fourth argument
    0x001EE092: '50',
    0x001EE093: '51',
    0x001EE098: '8d542424', # local buffer after two pushes
    0x001EE09C: '6880000000', # 0x80 capacity
    0x001EE0A1: '52',
    0x001EE0AA: 'e804d20f00', # direct formatter callee
    0x001EE0B9: '83c410', # caller cleans four formatter arguments
    0x001EE0D5: '81c41c010000', # stack restore
    0x001EE0DB: 'c3',
    0x000F2A04: '8b4c2418',
    0x000F2A08: '51',  # fifth guest argument
    0x000F2A09: '50',  # fourth guest argument
    0x000F2A0A: '57',  # third guest argument
    0x000F2A0B: '8d542418', # &second word
    0x000F2A0F: '52',
    0x000F2A10: '56',  # first guest argument
    0x000F2A19: 'e842b60f00',
    0x000F2A1E: '83c414', # five DWORDs cleaned
    0x000F2E14: '8b4c2418',
    0x000F2E18: '51',
    0x000F2E19: '50',
    0x000F2E1A: '57',
    0x000F2E1B: '8d542418',
    0x000F2E1F: '52',
    0x000F2E20: '56',
    0x000F2E29: 'e832b20f00',
    0x000F2E2E: '83c414',
}
FLAGS = ('-std=c11','-fsyntax-only','-ferror-limit=3',
         '-Wno-implicit-function-declaration','-Wno-int-conversion',
         '-Wno-incompatible-pointer-types','-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast','-Wno-return-type',
         '-Wno-deprecated-non-prototype')


def check_source(s):
    if ('Entry: 0x001ee060,' not in s or
        'Input x86 body SHA-256: '+BODY_SHA.upper() not in s or
        'ABI_UNVERIFIED' not in s):
        raise ValueError('Provenance or unverified ABI qualifier changed')
    code = re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S)
    required = (
        'uint32_t format_word_0, uint32_t format_word_1)',
        'uint32_t guest_format_words[2] = {format_word_0, format_word_1};',
        '_Static_assert(sizeof(guest_format_words) == 8,',
        'FUN_002eb2b3(local_100,0x80,param_3,guest_format_words);',
        'FUN_002e7f50(0xfffffffc,local_11c,1,1);',
    )
    for phrase in required:
        if code.count(phrase) != 1:
            raise ValueError('Absent or duplicated verified source contract: '+phrase)
    if re.search(r'\bstack0x[0-9a-fA-F]+\b',code):
        raise ValueError('Synthetic guest stack alias remains')
    if re.search(r'\bguest_format_words\s*\[\s*2\s*\]\s*=\s*\{0\s*,\s*0\}',code):
        raise ValueError('Invented guest format word initialization')


def mapped_reader(blob):
    if blob[:4] != b'XBEH':
        raise ValueError('Not an XBE')
    base, = struct.unpack_from('<I',blob,0x104)
    count,table_va = struct.unpack_from('<II',blob,0x11c)
    table = table_va-base
    if not 0<count<128 or table<0 or table+count*56>len(blob):
        raise ValueError('Invalid XBE sections')
    entries = [struct.unpack_from('<IIIII',blob,table+56*i) for i in range(count)]
    def rd(va,n):
        for _,v,sz,off,raw_size in entries:
            if v<=va and va+n<=v+min(sz,raw_size):
                ix=off+va-v
                if ix+n<=len(blob):
                    return blob[ix:ix+n]
        raise ValueError('Original XBE VA not mapped: '+hex(va))
    return rd, entries


def check_sites(read):
    for va,code in SITES.items():
        if read(va,len(code)//2) != bytes.fromhex(code):
            raise ValueError('Original instruction mismatch '+hex(va))
    for call,callee in ((0x001EE0AA,0x002EB2B3),
                        (0x000F2A19,0x001EE060),
                        (0x000F2E29,0x001EE060)):
        rel, = struct.unpack('<i',read(call+1,4))
        if call+5+rel != callee:
            raise ValueError('Wrong direct edge '+hex(call))


def check_xbe(blob):
    if hashlib.sha256(blob).hexdigest() != XBE_SHA:
        raise ValueError('Original retail XBE hash mismatch')
    rd,sections = mapped_reader(blob)
    if hashlib.sha256(rd(START,END-START)).hexdigest() != BODY_SHA:
        raise ValueError('Original function body hash mismatch')
    check_sites(rd)
    for _,v,sz,off,raw_size in sections:
        if v<=0x001EE08B<v+min(sz,raw_size):
            corrupt_at=off+0x001EE08B-v
            break
    else:
        raise ValueError('No mutation site')
    bad=bytearray(blob)
    bad[corrupt_at]^=1
    try: check_sites(mapped_reader(bad)[0])
    except ValueError: pass
    else: raise ValueError('Corrupted LEA instruction incorrectly accepted')


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe',type=Path)
    args=ap.parse_args()
    root=args.root.resolve()
    source_path=root/'src/main_unclassified/band_001e/0x001ee060.c'
    original=source_path.read_text()
    check_source(original)
    mutations=(
        ('guest_format_words[2]', 'guest_format_words[1]'),
        ('{format_word_0, format_word_1}', '{format_word_1, format_word_0}'),
        ('format_word_0, uint32_t format_word_1', 'format_word_0, uint64_t format_word_1'),
        ('sizeof(guest_format_words) == 8', 'sizeof(guest_format_words) == 4'),
        ('param_3,guest_format_words', 'param_3,&format_word_0'),
        ('local_100,0x80', 'local_100,0x100'),
    )
    for old,new in mutations:
        changed=original.replace(old,new)
        if changed==original:raise ValueError('Negative control did not mutate '+old)
        try:check_source(changed)
        except ValueError:pass
        else:raise ValueError('Source mutation accepted '+old)
    clang=shutil.which('clang')
    if not clang:raise RuntimeError('Clang not available')
    for opt in ('-O0','-O2'):
        cp=subprocess.run((clang,*FLAGS,opt,'-I',str(root/'include'),str(source_path)),
                          capture_output=True,text=True,timeout=60)
        if cp.returncode:
            raise ValueError('Clang '+opt+' failed: '+cp.stderr[-2500:])
    if args.xbe:check_xbe(args.xbe.read_bytes())
    print('PASS: 0x001EE060 adjacent input format DWORDs; two direct caller '+
          'push sequences, source negative controls, Clang O0/O2; retail XBE '+
          ('verified' if args.xbe else 'not supplied')+
          '; native formatter ABI, guest pointer binding and runtime unverified')


if __name__ == '__main__':main()