#!/usr/bin/env python3
"""Evidence-only XBE gate for 36 one-diagnostic C++17 direct-call candidates.

These addresses come from exact-tree audit 2bf14b8db4431b8f1e7efd95df994adc9d9766c8.
RET windows are byte patterns observed by linear disassembly within the next
known function-entry boundary; they are not exhaustive control-flow exits.
No C++ prototype, implicit register input, stack ABI or behavior is verified.
The original retail XBE remains private and must never be committed.
"""
import argparse
import hashlib
import struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, sections, file_offset

EDGES = """1b750,1b76e,1bd90;1c250,1c2bc,1c930;230a0,230b1,23010;38b00,38b07,38b70;38c30,38c49,39270;3c650,3c675,3cec0;3c6b0,3c6d5,3ca80;42620,42668,24540;464d0,46517,1a4e0;493e0,49405,49880;4b6a0,4b6c1,4b760;50880,508a1,50d40;544e0,5452f,545f0;545f0,5467c,543e0;58160,58179,58430;581c0,581e1,582f0;61b30,61b44,61c40;61eb0,61f38,3d6c0;6ed80,6ed90,2337a0;74ad0,74ae7,75f00;75380,75387,75f00;76570,76591,76280;777f0,77811,778f0;7c2a0,7c2b1,2f418b;837b0,83800,2eaa19;83d10,83d8d,2eaa19;83fb0,83ffd,2eaa19;854b0,8552a,857a0;85540,8556a,86990;86870,86891,86c00;86910,86931,86cd0;8ace0,8ad85,8ada0;8b190,8b1a9,8b130;9db20,9db97,3d6c0;a2090,a20a0,a2840;a7220,a7230,a7ba0"""
RET_WINDOWS = """1a4e0,1a735,c3;1a4e0,1a755,c3;1bd90,1c118,c20c00;1c930,1c978,c21000;23010,23061,c20800;23010,2308a,c20800;23010,23096,c20800;24540,245ad,c21c00;24540,24946,c21c00;38b70,38bc6,c20400;39270,39333,c3;3ca80,3cafb,c3;3cec0,3cf4b,c3;3d6c0,3d721,c20c00;49880,49913,c3;4b760,4b794,c3;4b760,4b7a1,c3;50d40,50d7e,c3;50d40,50d8b,c3;543e0,544d2,c3;545f0,54685,c3;582f0,58324,c3;582f0,58331,c3;58430,58500,c3;61c40,61c80,c3;75f00,75f2a,c20400;76280,762b7,c3;76280,762c4,c3;778f0,77923,c3;778f0,77930,c3;857a0,8580c,c20c00;857a0,85822,c20400;86990,86a09,c3;86990,86a16,c3;86c00,86c79,c3;86c00,86c86,c3;86cd0,86d19,c3;86cd0,86d26,c3;86cd0,86d52,c20400;8ada0,8adc9,c20800;8ada0,8aefe,c20800;8ada0,8af11,c20800;8b130,8b183,c3;8b130,8b189,c3;a2840,a286a,c20400;a7ba0,a7bca,c20400;2337a0,2338bd,c3;2eaa19,2eaa6f,c3;2f418b,2f427c,c21000"""

def records(data):
    return [tuple(int(v, 16) for v in line.split(',')) for line in data.split(';')]

def target(site, raw):
    if len(raw) != 5 or raw[0] != 0xe8:
        raise ValueError('not a direct E8 call')
    return (site + 5 + struct.unpack_from('<i', raw, 1)[0]) & 0xffffffff

def self_test():
    edges = records(EDGES)
    assert len(edges) == 36 and len({site for _, site, _ in edges}) == 36
    assert len(RET_WINDOWS.split(';')) == 49
    for caller, site, callee in edges:
        assert caller <= site < caller + 0x2000
        raw = b'\xe8' + struct.pack('<i', callee - site - 5)
        assert target(site, raw) == callee
        for i in range(1, 5):
            mutant = bytearray(raw)
            mutant[i] ^= 1
            assert target(site, mutant) != callee
    print('PASS: 36 direct-call fixtures, 144 displacement negative controls')

def verify(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError('retail XBE hash mismatch')
    layout = sections(data)
    for caller, site, callee in records(EDGES):
        raw = data[file_offset(layout, site, 5):][:5]
        if target(site, raw) != callee:
            raise ValueError(f'original E8 target mismatch at {site:#010x}')
    for row in RET_WINDOWS.split(';'):
        callee, site, encoded = row.split(',')
        expected = bytes.fromhex(encoded)
        address = int(site, 16)
        pos = file_offset(layout, address, len(expected))
        if data[pos:pos + len(expected)] != expected:
            raise ValueError(f'RET byte-window mismatch at {address:#010x} (callee {callee})')
    # An altered original call opcode is rejected independently of its rel32.
    _, site, _ = records(EDGES)[0]
    pos = file_offset(layout, site, 5)
    mutant = bytearray(data[pos:pos + 5]); mutant[0] = 0x90
    try:
        target(site, mutant)
    except ValueError:
        pass
    else:
        raise AssertionError('opcode negative control failed')
    print('PASS: retail XBE SHA-256, 36 original E8 targets, 49 narrow RET windows')
    print('ABI_UNVERIFIED: register/stack inputs, outputs, C++ linkage and behavior')

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--self-test', action='store_true')
    p.add_argument('--xbe', type=Path)
    args = p.parse_args()
    if not args.self_test and not args.xbe:
        p.error('provide --self-test and/or --xbe')
    if args.self_test:
        self_test()
    if args.xbe:
        verify(args.xbe.read_bytes())

if __name__ == '__main__':
    main()
