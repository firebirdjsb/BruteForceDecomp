#!/usr/bin/env python3
"""Verify original XBE 0x0033DFD1 halfword time-record layout.

Source-only CI checks isolated host C11 and negative controls; --xbe adds
retail XBE SHA, full function body, instruction bytes and direct call target.
This does not prove guest/host ABI, Xbox API or runtime equivalence.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

SOURCE = Path('src/platform/online_xonline/0x0033dfd1.c')
XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
BODY_SHA = '8bbbd50961933b28b7b2bf912860a36d84cf76c3a1e84f8a2e61baaa76f87faa'
START, END = 0x0033DFD1, 0x0033E13A
SITES = {
    0x0033E064: '33c0', 0x0033E066: '8d7df0',
    0x0033E069: 'ab', 0x0033E06A: 'ab',
    0x0033E06B: 'ab', 0x0033E06C: 'ab',
    0x0033E0A5: '668945f4',  # word[2]
    0x0033E0B6: '668945f6',  # word[3]
    0x0033E0E2: '668945f2',  # word[1]
    0x0033E0EF: '668945f0',  # word[0]
    0x0033E0FC: '668945f8',  # word[4]
    0x0033E109: '668945fa',  # word[5]
    0x0033E11C: '668945fc',  # word[6]
    0x0033E119: 'ff750c',    # second argument
    0x0033E120: '8d45f0',    # record base
    0x0033E123: '50',        # first argument
    0x0033E124: 'e8f548fbff',
    0x0033E137: 'c20800',
}
FLAGS = ('-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype')

def verify_source(s: str) -> None:
    if 'Entry: 0x0033dfd1' not in s or 'Input x86 body SHA-256: ' + BODY_SHA.upper() not in s:
        raise ValueError('Original entry or body provenance changed')
    if 'ABI_UNVERIFIED' not in s:
        raise ValueError('ABI limitation removed')
    c = re.sub(r'/\*.*?\*/|//[^\n]*', '', s, flags=re.S)
    required = (
        'uint16_t word[8];',
        '_Static_assert(sizeof(bf_0033dfd1_guest_time) == 16,',
        'bf_0033dfd1_guest_time guest_time;',
        'guest_time = (bf_0033dfd1_guest_time){{0}};',
        'guest_time.word[2] = uVar2;',
        'guest_time.word[3] = (uint16_t)lVar4;',
        'guest_time.word[1] = uVar2;',
        'guest_time.word[0] = (uint16_t)lVar4;',
        'guest_time.word[4] = (uint16_t)lVar4;',
        'guest_time.word[5] = (uint16_t)lVar4;',
        'guest_time.word[6] = (uint16_t)lVar4;',
        'XAPILIB__SystemTimeToFileTime(&guest_time,param_2);',
    )
    for token in required:
        if c.count(token) != 1:
            raise ValueError('Original halfword storage or call changed: ' + token)
    ordered = (
        'guest_time = (bf_0033dfd1_guest_time){{0}};',
        'guest_time.word[2] = uVar2;',
        'guest_time.word[3] = (uint16_t)lVar4;',
        'guest_time.word[1] = uVar2;',
        'guest_time.word[0] = (uint16_t)lVar4;',
        'guest_time.word[4] = (uint16_t)lVar4;',
        'guest_time.word[5] = (uint16_t)lVar4;',
        'guest_time.word[6] = (uint16_t)lVar4;',
        'XAPILIB__SystemTimeToFileTime(&guest_time,param_2);',
    )
    if [c.index(x) for x in ordered] != sorted(c.index(x) for x in ordered):
        raise ValueError('Original record write/call order changed')
    if re.search(r'guest_time\.word\s*\[\s*7\s*\]', c):
        raise ValueError('Invented access to zero final halfword')
    if 'CONCAT22' in c or re.search(r'\._[0-9]+_[0-9]+_', c):
        raise ValueError('Unreconstructed Ghidra pseudo-member remains')

def negative_controls(s: str) -> int:
    changes = (
        ('uint16_t word[8];', 'uint32_t word[8];'),
        ('== 16,', '== 20,'),
        ('{{0}};', '{{1}};'),
        ('guest_time.word[2] = uVar2;', 'guest_time.word[3] = uVar2;'),
        ('guest_time.word[3] = (uint16_t)lVar4;', 'guest_time.word[3] = (uint32_t)lVar4;'),
        ('guest_time.word[1] = uVar2;', 'guest_time.word[0] = uVar2;'),
        ('guest_time.word[0] = (uint16_t)lVar4;', 'guest_time.word[1] = (uint16_t)lVar4;'),
        ('guest_time.word[4] = (uint16_t)lVar4;', 'guest_time.word[7] = (uint16_t)lVar4;'),
        ('guest_time.word[5] = (uint16_t)lVar4;', 'guest_time.word[4] = (uint16_t)lVar4;'),
        ('guest_time.word[6] = (uint16_t)lVar4;', 'guest_time.word[5] = (uint16_t)lVar4;'),
        ('SystemTimeToFileTime(&guest_time,param_2)', 'SystemTimeToFileTime(&guest_time.word[1],param_2)'),
    )
    for old, new in changes:
        if old not in s:
            raise ValueError('Missing mutation anchor: ' + old)
        try:
            verify_source(s.replace(old, new, 1))
        except ValueError:
            continue
        raise ValueError('Incorrect source mutation escaped check: ' + old)
    return len(changes)

def reader(data: bytes):
    if data[:4] != b'XBEH':
        raise ValueError('Invalid XBE header')
    base = struct.unpack_from('<I', data, 0x104)[0]
    count, table_va = struct.unpack_from('<II', data, 0x11C)
    if not 0 < count < 128 or table_va < base:
        raise ValueError('Invalid section table')
    table = table_va - base
    if table + count * 56 > len(data):
        raise ValueError('Section table outside XBE')
    sections = [struct.unpack_from('<5I', data, table + i*56) for i in range(count)]
    def read(va: int, n: int) -> bytes:
        for _, start, virtual_size, raw, raw_size in sections:
            if start <= va and va + n <= start + min(virtual_size, raw_size):
                off = raw + va - start
                if off + n <= len(data):
                    return data[off:off+n]
        raise ValueError(f'XBE VA not file-backed: {va:#x}')
    return read

def verify_xbe(data: bytes, *, identity: bool = True) -> None:
    if identity and hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError('Retail XBE SHA-256 mismatch')
    read = reader(data)
    if hashlib.sha256(read(START, END-START)).hexdigest() != BODY_SHA:
        raise ValueError('Original complete function-body SHA-256 mismatch')
    for va, opcode in SITES.items():
        if read(va, len(opcode)//2).hex() != opcode:
            raise ValueError(f'Original instruction mismatch at {va:#x}')
    call = read(0x0033E124, 5)
    if 0x0033E129 + struct.unpack('<i', call[1:])[0] != 0x002F2A1E:
        raise ValueError('Original SystemTimeToFileTime call edge changed')

def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe', type=Path, help='Private retail XBE, never commit')
    args = ap.parse_args()
    root = args.root.resolve()
    s = (root/SOURCE).read_text(encoding='utf-8')
    verify_source(s)
    mutations = negative_controls(s)
    clang = shutil.which('clang')
    if not clang:
        raise ValueError('Clang unavailable')
    for opt in ('-O0', '-O2'):
        subprocess.run([clang, *FLAGS, opt, '-I', str(root/'include'), str(root/SOURCE)],
                       check=True, capture_output=True, text=True, timeout=60)
    if args.xbe:
        data = args.xbe.read_bytes()
        verify_xbe(data)
        changed = bytearray(data)
        base = struct.unpack_from('<I', data, 0x104)[0]
        count, table_va = struct.unpack_from('<II', data, 0x11C)
        for i in range(count):
            _, start, virtual_size, raw, raw_size = struct.unpack_from(
                '<5I', data, table_va-base+i*56)
            if start <= 0x0033E0E2 < start + min(virtual_size, raw_size):
                changed[raw + 0x0033E0E2 - start] ^= 1
                break
        else:
            raise ValueError('XBE mutation VA not mapped')
        try:
            verify_xbe(changed, identity=False)
        except ValueError:
            pass
        else:
            raise ValueError('Original XBE mutation escaped verification')
    print(f'PASS 0x0033DFD1: Clang C11 O0/O2, {mutations} source mutations rejected; '
          f'{len(SITES)} XBE instruction sites, complete body SHA, call edge and '
          + ('XBE mutation checked' if args.xbe else 'original XBE not supplied'))
    print('LIMITATION: host syntax/record layout only; guest ABI, API and runtime UNVERIFIED')
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
