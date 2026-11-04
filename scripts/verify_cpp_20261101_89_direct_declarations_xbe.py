#!/usr/bin/env python3
"""Authenticate original call evidence, not C++ ABI or behavioral equivalence."""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, sections, file_offset

ROOT = Path(__file__).resolve().parents[1]

def manifest():
    data = json.loads((ROOT / 'metadata/cpp_20261101_89_direct_declarations.json').read_text())
    if data['original_xbe_sha256'] != XBE_SHA256:
        raise ValueError('original XBE identity drift')
    rows = data['callers']
    assert len(rows) == len({r['caller'] for r in rows}) == 89
    assert sum(len(r['calls']) for r in rows) == 217
    assert sum(len(r['declarations']) for r in rows) == 168
    assert len(data['authenticated_contiguous_body_sizes']) == 190
    for row in rows:
        assert {c['callee'] for c in row['calls']} == {t['entry'] for t in row['callees']}
    return data

def target(site, raw):
    if len(raw) != 5 or raw[0] != 0xe8:
        raise ValueError('expected direct E8 call')
    return (site + 5 + struct.unpack_from('<i', raw, 1)[0]) & 0xffffffff

def self_test():
    data = manifest()
    for row in data['callers']:
        for call in row['calls']:
            site, callee = int(call['site'], 16), int(call['callee'], 16)
            raw = bytes([0xe8]) + struct.pack('<i', callee - site - 5)
            assert target(site, raw) == callee
            for index in range(1, 5):
                mutant = bytearray(raw); mutant[index] ^= 1
                assert target(site, mutant) != callee
            try:
                target(site, bytes([0xe9]) + raw[1:])
            except ValueError:
                pass
            else:
                raise AssertionError('non-CALL opcode accepted')
    print('PASS: 217 E8 fixtures; 868 displacement and 217 opcode negatives')

def verify(raw):
    if hashlib.sha256(raw).hexdigest() != XBE_SHA256:
        raise ValueError('retail XBE SHA-256 mismatch')
    data, digests = manifest(), {}
    layout = sections(raw)
    for row in data['callers']:
        digests[row['caller']] = row['body_sha256']
        for callee in row['callees']:
            old = digests.setdefault(callee['entry'], callee['body_sha256'])
            assert old == callee['body_sha256']
        for call in row['calls']:
            site = int(call['site'], 16)
            offset = file_offset(layout, site, 5)
            if target(site, raw[offset:offset + 5]) != int(call['callee'], 16):
                raise ValueError('original call target mismatch at ' + call['site'])
    for entry, size in data['authenticated_contiguous_body_sizes'].items():
        offset = file_offset(layout, int(entry, 16), size)
        if hashlib.sha256(raw[offset:offset + size]).hexdigest().upper() != digests[entry].upper():
            raise ValueError('original function body digest mismatch: ' + entry)
    print('PASS: retail XBE SHA-256; 217 original E8 targets; 190 full contiguous body digests')
    print('ABI_UNVERIFIED: implicit inputs, outputs, guest32, exceptions, dispatch and behavior')

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--self-test', action='store_true')
    parser.add_argument('--xbe', type=Path)
    args = parser.parse_args()
    if not args.self_test and not args.xbe:
        parser.error('supply --self-test and/or --xbe')
    if args.self_test:
        self_test()
    if args.xbe:
        verify(args.xbe.read_bytes())

if __name__ == '__main__':
    main()
