#!/usr/bin/env python3
"""Private retail-XBE-only authentication for ten no-call guest32 models.

This checks complete original instruction bytes, conditional branch destinations,
RET/RET 4 sites, source-label continuity and mutation negatives. It does not
execute original Xbox code or claim a recovered calling convention, EFLAGS,
heap mapping, guest stack translation or 1:1 runtime equivalence.
"""
from __future__ import annotations
import argparse, hashlib, json, struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import sections, file_offset
ROOT = Path(__file__).resolve().parents[1]
META = ROOT / 'metadata/20261107_ten_short_guest32_models.json'

def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest().upper()

def verify(xbe: bytes) -> dict[str, int]:
    m=json.loads(META.read_text())
    if sha(xbe)!=m['original_xbe_sha256']:raise ValueError('Original retail XBE SHA mismatch')
    if m['native_linked'] or m['original_abi_verified']:raise ValueError('Unsupported status elevation')
    cases=m['cases']
    if len(cases)!=10 or len({x['entry'] for x in cases})!=10:
        raise AssertionError('Exactly ten unique original entries required')
    layout=sections(xbe)
    stats=dict(bodies=0, original_bytes=0, conditional_branches=0, return_sites=0, corrupted_xbe_bytes_rejected=0)
    for case in cases:
        entry=int(case['entry'],16);size=case['size']
        raw=xbe[file_offset(layout,entry,size):][:size]
        if sha(raw)!=case['original_body_sha256']:
            raise AssertionError('Complete original body changed: '+case['entry'])
        original_source=(ROOT/case['source']).read_bytes()
        if sha(original_source)!=case['source_sha256'].upper():
            raise AssertionError('Live C++ source differs from tested source: '+case['entry'])
        if case['original_body_sha256'].encode() not in original_source:
            raise AssertionError('Original body SHA label missing from source')
        if b'ABI_UNVERIFIED' not in original_source or b'NOT_NATIVE_LINKED' not in original_source:
            raise AssertionError('Unverified ABI must stay explicit')
        for branch in case['conditional_edges']:
            off=branch['offset'];bytes_=bytes.fromhex(branch['bytes'])
            if raw[off:off+len(bytes_)]!=bytes_:
                raise AssertionError('Conditional x86 opcode changed')
            if 0x70<=bytes_[0]<=0x7f and len(bytes_)==2:
                rel=struct.unpack('<b',bytes_[1:])[0];target=off+2+rel
            elif bytes_[0]==0x0f and 0x80<=bytes_[1]<=0x8f and len(bytes_)==6:
                target=off+6+struct.unpack('<i',bytes_[2:])[0]
            else:raise AssertionError('Unknown conditional displacement')
            if target!=branch['target_offset']:
                raise AssertionError('Conditional target changed')
            stats['conditional_branches']+=1
        for ret in case['ret_sites']:
            b=bytes.fromhex(ret['bytes']);i=ret['offset']
            if raw[i:i+len(b)]!=b or b[0] not in (0xc2,0xc3):
                raise AssertionError('Original RET/RET 4 changed')
            stats['return_sites']+=1
        for i in range(size):
            corrupted=bytearray(raw);corrupted[i]^=1
            if sha(corrupted)==case['original_body_sha256']:
                raise AssertionError('Corrupt original XBE byte accepted')
            stats['corrupted_xbe_bytes_rejected']+=1
        stats['bodies']+=1;stats['original_bytes']+=size
    return stats

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe',type=Path,required=True)
    args=p.parse_args()
    for k,v in verify(args.xbe.read_bytes()).items():print(k, v)
    print('PASS: original Xbox x86 evidence; ABI_UNVERIFIED, not native linked')
