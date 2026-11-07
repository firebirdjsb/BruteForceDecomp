#!/usr/bin/env python3
"""Authenticate the original XBE instructions behind two guest32 source drafts.

Private, read-only evidence gate. Full body SHA, instruction windows, branch
and tail-JMP destinations, and byte-mutation controls are validated. It is
NOT a proof of x86 stack/register ABI, cross-function linkage or gameplay.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, sections, file_offset

BODIES = {
    0x0001C550: (31, 'fb37ffc1e06f452e2078cd0faff8d2311a1b497ff5217baf6d02c19b0cd7e67b'),
    0x0001FE80: (13, '42b19d2afe0357444371c9ebd7f904aa9001c35470ed9825e9767f3a5c05cd32'),
}
INSTRUCTIONS = {
    0x0001C550: '8b08',
    0x0001C552: '8a91a9000000',
    0x0001C558: '84d2',
    0x0001C55A: '7512',
    0x0001C55C: '8d642400',
    0x0001C560: '8bc1',
    0x0001C562: '8b08',
    0x0001C564: '8a91a9000000',
    0x0001C56A: '84d2',
    0x0001C56C: '74f2',
    0x0001C56E: 'c3',
    0x0001FE80: '8b4204',
    0x0001FE83: '85c0',
    0x0001FE85: '7405',
    0x0001FE87: 'e954f80600',
    0x0001FE8C: 'c3',
}
EDGES = {
    0x0001C55A: (0x75, 0x0001C56E),
    0x0001C56C: (0x74, 0x0001C560),
    0x0001FE85: (0x74, 0x0001FE8C),
    0x0001FE87: (0xE9, 0x0008F6E0),
}


def check(data: bytes) -> dict:
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError('Original retail XBE SHA-256 mismatch')
    layout = sections(data)
    controls = 0
    for addr,(length,digest) in BODIES.items():
        off = file_offset(layout, addr, length)
        raw = data[off:off+length]
        if hashlib.sha256(raw).hexdigest() != digest:
            raise ValueError(f'Original function body changed: {addr:#x}')
        for i in range(length):
            mutant = bytearray(raw)
            mutant[i] ^= 1
            if hashlib.sha256(mutant).hexdigest() == digest:
                raise AssertionError('Original body mutation accepted')
            controls += 1
    for addr,hexcode in INSTRUCTIONS.items():
        expected=bytes.fromhex(hexcode)
        off = file_offset(layout,addr,len(expected))
        if data[off:off+len(expected)] != expected:
            raise ValueError(f'Instruction window mismatch at {addr:#x}')
        for i in range(len(expected)):
            mutant = bytearray(expected)
            mutant[i] ^= 1
            if mutant == data[off:off+len(expected)]:
                raise AssertionError('Mutated original opcode accepted')
            controls += 1
    for at,(opcode,target) in EDGES.items():
        length=5 if opcode==0xE9 else 2
        off=file_offset(layout,at,length)
        actual=data[off:off+length]
        if actual[0]!=opcode:
            raise ValueError(f'Original transfer opcode mismatch {at:#x}')
        displacement = struct.unpack_from('<i',actual,1)[0] if length==5 else struct.unpack_from('<b',actual,1)[0]
        arrived=(at+length+displacement)&0xffffffff
        if arrived!=target:
            raise ValueError(f'Original transfer destination mismatch at {at:#x}: {arrived:#x}')
    return {
        'original_retail_xbe_authenticated': True,
        'complete_function_body_digests': len(BODIES),
        'body_bytes_total': sum(x[0] for x in BODIES.values()),
        'opcode_windows': len(INSTRUCTIONS),
        'branch_and_tail_jump_destinations': len(EDGES),
        'mutated_byte_controls': controls,
        'abi': 'ABI_UNVERIFIED (register live-outs, guest memory mapping and tail-JMP), no native/gameplay claim',
    }


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe',required=True,type=Path)
    for name,val in check(p.parse_args().xbe.read_bytes()).items():
        print(f'{name}: {val}')


if __name__=='__main__':
    main()
