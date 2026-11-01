#!/usr/bin/env python3
"""Verify 36 original XBE CALLs and narrow preceding byte windows.

The manifest records 16 raw bytes immediately before each original E8 CALL.
These windows are NOT complete instruction traces or verified parameter
producers. Source-arity labels describe C++ drafts only; they do not establish
Xbox calling conventions, return types, guest pointers or 1:1 behavior.
No copyrighted XBE bytes or full decompiler output belong in the repository.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import struct
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/cpp_20261101_36_call_windows.csv'
XBE_SHA256 = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
GATES = {'quarantine_arity_mismatch': 17,
         'arity_matches_only_not_abi': 16,
         'callee_source_not_found': 3}


def records():
    with MANIFEST.open(newline='', encoding='utf-8') as stream:
        rows = list(csv.DictReader(stream))
    if len(rows) != 36 or len({r['site'] for r in rows}) != 36:
        raise ValueError('expected 36 unique original E8 sites')
    if Counter(r['source_arity_gate'] for r in rows) != GATES:
        raise ValueError('draft-only arity triage drift')
    for row in rows:
        caller, site, target, prefix_va = (
            int(row[k], 16) for k in ('caller', 'site', 'target', 'prefix_va'))
        prefix, call = bytes.fromhex(row['prefix_hex']), bytes.fromhex(row['call_hex'])
        if not (caller <= site < caller + 0x2000 and prefix_va == site - 16):
            raise ValueError('invalid original-address window')
        if len(prefix) != 16 or len(call) != 5 or call[0] != 0xE8:
            raise ValueError('unexpected CALL/window encoding')
        if (site + 5 + struct.unpack_from('<i', call, 1)[0]) & 0xFFFFFFFF != target:
            raise ValueError('E8 displacement does not match original target')
    return rows


def sections(raw):
    if len(raw) < 0x124 or raw[:4] != b'XBEH':
        raise ValueError('not an XBE header')
    base = struct.unpack_from('<I', raw, 0x104)[0]
    count = struct.unpack_from('<I', raw, 0x11C)[0]
    table = struct.unpack_from('<I', raw, 0x120)[0]
    if base != 0x10000 or not 1 <= count <= 64 or table < base:
        raise ValueError('unexpected original XBE layout')
    result = []
    for i in range(count):
        pos = table - base + 0x38 * i
        if pos + 0x38 > len(raw):
            raise ValueError('truncated XBE section table')
        _, va, virtual_size, offset, size = struct.unpack_from('<5I', raw, pos)
        if offset + size > len(raw):
            raise ValueError('invalid XBE section extent')
        result.append((va, va + min(virtual_size, size), offset))
    return result


def file_offset(layout, address, size):
    for start, end, offset in layout:
        if start <= address and address + size <= end:
            return offset + address - start
    raise ValueError(f'original address unmapped: {address:#x}')


def verify(raw, *, require_hash=True):
    if require_hash and hashlib.sha256(raw).hexdigest() != XBE_SHA256:
        raise ValueError('retail XBE SHA-256 mismatch')
    layout = sections(raw)
    for row in records():
        site = int(row['site'], 16)
        prefix = bytes.fromhex(row['prefix_hex'])
        call = bytes.fromhex(row['call_hex'])
        prefix_offset = file_offset(layout, site - 16, 21)
        if raw[prefix_offset:prefix_offset + 16] != prefix:
            raise ValueError(f'original pre-CALL window changed: {site:#x}')
        if raw[prefix_offset + 16:prefix_offset + 21] != call:
            raise ValueError(f'original E8 CALL changed: {site:#x}')
    return len(records())


def self_test():
    rows = records()
    negative = 0
    for row in rows:
        site = int(row['site'], 16)
        target = int(row['target'], 16)
        original = bytes.fromhex(row['call_hex'])
        for index in range(1, 5):
            changed = bytearray(original)
            changed[index] ^= 1
            observed = (site + 5 + struct.unpack_from('<i', changed, 1)[0]) & 0xFFFFFFFF
            if observed == target:
                raise AssertionError('displacement mutation survived')
            negative += 1
        if original[0] != 0xE8:
            raise AssertionError('not a CALL')
    print(f'PASS: {len(rows)} source-arity-gated E8 fixtures, {negative} displacement negatives')


def original_negative_controls(raw):
    # With the hash check disabled, the independent byte-window checks must
    # still reject mutations of both the caller context and the E8 opcode.
    layout = sections(raw)
    row = records()[0]
    pos = file_offset(layout, int(row['site'], 16) - 16, 21)
    for index in (0, 16):
        changed = bytearray(raw)
        changed[pos + index] ^= 1
        try:
            verify(changed, require_hash=False)
        except ValueError:
            continue
        raise AssertionError('original-byte mutation was accepted')
    print('PASS: two actual-XBE mutation controls (pre-CALL context and opcode)')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--self-test', action='store_true')
    parser.add_argument('--xbe', type=Path, help='private original retail XBE; never commit')
    args = parser.parse_args()
    if not args.self_test and not args.xbe:
        parser.error('provide --self-test and/or --xbe')
    if args.self_test:
        self_test()
    if args.xbe:
        raw = args.xbe.read_bytes()
        print(f'PASS: authenticated original retail XBE, {verify(raw)} E8+16-byte windows')
        original_negative_controls(raw)
        print('ABI_UNVERIFIED: original register/stack contracts, outputs and behavior')


if __name__ == '__main__':
    main()
