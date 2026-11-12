#!/usr/bin/env python3
"""Private XBE-only evidence gate for ten guest32 record initializer drafts.

Checks original retail image and 10 complete bodies, original linked-record
write opcodes, both exits and branch destinations, and negative byte flips.
No guest Xbox code is executed; this DOES NOT verify native calling convention,
register liveness, guest mapping, or complete gameplay behavior.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import sections, file_offset

ROOT=Path(__file__).resolve().parents[1]
MANIFEST=ROOT/'metadata/20261107_ten_guest32_record_initializers.json'

def sha(raw:bytes)->str:
    return hashlib.sha256(raw).hexdigest().upper()

def check(xbe:bytes):
    meta=json.loads(MANIFEST.read_text())
    if sha(xbe)!=meta['original_xbe_sha256']:
        raise ValueError('Wrong original XBE SHA-256')
    blocks=sections(xbe)
    cases=meta['cases']
    if len(cases)!=10 or len({c['entry'] for c in cases})!=10:
        raise ValueError('Expected ten unique original-address XBE functions')
    stats={'bodies':0,'body_bytes':0,'selected_windows':0,'branches':0,'ret_exits':0,'mutation_controls':0}
    for c in cases:
        address=int(c['entry'],16)
        size=c['size']
        raw=xbe[file_offset(blocks,address,size):][:size]
        if len(raw)!=size or sha(raw)!=c['sha256']:
            raise ValueError(f'Original function body mismatch at {address:08x}')
        stats['bodies']+=1;stats['body_bytes']+=size
        for idx in range(size):
            mutation=bytearray(raw);mutation[idx]^=1
            if sha(mutation)==c['sha256']:
                raise AssertionError('A mutated original body was accepted')
            stats['mutation_controls']+=1
        # These original instruction patterns establish three *separate*
        # linked-record guest DWORD writes and two source-structure DWORD reads.
        required=[bytes.fromhex('c7010c0f3a00'),bytes.fromhex('c7410401000000'),
                  bytes.fromhex('894108'),bytes.fromhex('890ac3')]
        srcreg=c['reg']
        required.extend([bytes.fromhex('8b5608' if srcreg=='esi' else '8b5708'),
                         bytes.fromhex('8b560c' if srcreg=='esi' else '8b570c')])
        link=int(c['link']);tail=int(c['tail'])
        required.append(bytes([0x8d,0x48,link]) if link<=0x7f else
                        bytes.fromhex('8d88')+struct.pack('<I',link))
        required.append(bytes([0x89,0x50,tail]) if tail<=0x7f else
                        bytes.fromhex('8990')+struct.pack('<I',tail))
        required.append(bytes([0x89,0x48,tail]) if tail<=0x7f else
                        bytes.fromhex('8988')+struct.pack('<I',tail))
        for window in required:
            if raw.count(window)!=1:
                raise ValueError(f'Unexpected instruction window at {address:08x}: {window.hex()}')
            stats['selected_windows']+=1
        baddr=int(c['branch_site'],16)
        target=int(c['branch_target'],16)
        at=baddr-address
        if not(0<=at<size-2) or raw[at]!=0x75:
            raise ValueError(f'JNE branch boundary mismatch for {address:08x}')
        displacement=struct.unpack('<b',raw[at+1:at+2])[0]
        if (baddr+2+displacement)&0xffffffff != target:
            raise ValueError(f'JNE branch target mismatch for {address:08x}')
        if raw.count(b'\xc3')<2 or not raw.endswith(b'\x89\x0a\xc3'):
            raise ValueError(f'Expected two original RET exits at {address:08x}')
        stats['branches']+=1
        stats['ret_exits']+=2
    return stats

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe',type=Path,required=True)
    opts=p.parse_args()
    for key,value in check(opts.xbe.read_bytes()).items():
        print(f'{key}: {value}')
    print('PASS: authenticated original XBE bytes, full bodies, and selected instruction contracts')
    print('ABI_UNVERIFIED: guest-mapped memory, x86 flags, complete registers, native linker/runtime/gameplay')
