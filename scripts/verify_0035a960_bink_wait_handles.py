#!/usr/bin/env python3
"""Pin the two guest DWORDs passed by 0x0035A960 to Xbox WaitForMultipleObjects.

CI: python3 scripts/verify_0035a960_bink_wait_handles.py --root .
Local: python3 scripts/verify_0035a960_bink_wait_handles.py --root . --xbe /path/to/default.xbe

Checks only the observed storage/branch contract, not incoming ESI/EDI or
Xbox HANDLE/native-host API equivalence. Never add the XBE to Git.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

ENTRY = 0x0035A960
BODY_SIZE = 0x3B  # last RET at 0x0035A99A; next function at 0x0035A9A0
BODY_SHA = 'E82BB7C73AAF2197FDBB2195F7B3B8A7A5DC64AF2FD81F1CE39DCA69D5C0CB9B'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
SOURCE = Path('src/video_bink/bink/0x0035a960.c')
INSTRUCTIONS = {
    0x0035A960: '83ec08',        # sub esp,8: two local DWORDs
    0x0035A963: '6aff',          # push INFINITE
    0x0035A965: '6a00',          # push FALSE
    0x0035A967: '8d442408',      # lea eax,[esp+8]: local DWORD[0]
    0x0035A96B: '50',            # push pointer to DWORD[0]
    0x0035A96C: '6a02',          # push count 2
    0x0035A96E: '897c2410',      # mov [esp+0x10],edi => DWORD[0]
    0x0035A972: '89742414',      # mov [esp+0x14],esi => DWORD[1]
    0x0035A976: 'e8f7a1f9ff',    # call 0x002F4B72
    0x0035A97E: '740f',          # result 0 branch
    0x0035A981: '7514',          # result 1 branch
    0x0035A985: '57',            # result 1: push EDI
    0x0035A991: '56',            # result 0: push ESI
    0x0035A99A: 'c3',            # ret
}


def guest_bytes(data, address, size):
    if data[:4] != b'XBEH':
        raise ValueError('Not an Xbox XBE')
    base, = struct.unpack_from('<I', data, 0x104)
    count, table_va = struct.unpack_from('<II', data, 0x11c)
    table_off = table_va - base
    if not 0 < count < 128 or not 0 <= table_off <= len(data) - count * 56:
        raise ValueError('Invalid XBE section table')
    for i in range(count):
        _, section_va, vsize, raw_off, raw_size = struct.unpack_from(
            '<IIIII', data, table_off + i * 56)
        if section_va <= address and address + size <= section_va + min(vsize, raw_size):
            off = raw_off + address - section_va
            if off + size > len(data):
                raise ValueError('XBE section exceeds file')
            return data[off:off + size]
    raise ValueError('Unmapped original x86 address 0x%08x' % address)


def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError('Original XBE SHA-256 mismatch')
    if hashlib.sha256(guest_bytes(data, ENTRY, BODY_SIZE)).hexdigest().upper() != BODY_SHA:
        raise ValueError('Original function body SHA-256 mismatch')
    for va, hex_bytes in INSTRUCTIONS.items():
        if guest_bytes(data, va, len(hex_bytes) // 2) != bytes.fromhex(hex_bytes):
            raise ValueError('Original x86 instruction mismatch at 0x%08x' % va)


def check_source(source):
    for marker in (f'Entry: 0x{ENTRY:08x}', 'Input x86 body SHA-256: ' + BODY_SHA,
                   'ABI_UNVERIFIED'):
        if marker not in source:
            raise ValueError('Missing provenance/ABI marker: ' + marker)
    body = re.sub(r'/\*.*?\*/|//[^\n]*', '', source, flags=re.S)
    required = (
        'undefined4 guest_wait_handles[2];',
        'guest_wait_handles[0] = unaff_EDI;',
        'guest_wait_handles[1] = unaff_ESI;',
        'XAPILIB__WaitForMultipleObjects(2,guest_wait_handles,0,0xffffffff)',
        'if (iVar1 == 0) {\n    XAPILIB__WaitForSingleObject(unaff_ESI,0xffffffff);',
        'else if (iVar1 == 1) {\n    XAPILIB__WaitForSingleObject(unaff_EDI,0xffffffff);',
    )
    for marker in required:
        if body.count(marker) != 1:
            raise ValueError('Original handle order/count/dispatch changed: ' + marker)
    if 'stack0xfffffff8' in body:
        raise ValueError('Unresolved Ghidra guest stack pointer remains')


def check_negative_controls(source):
    mutations = (
        ('guest_wait_handles[0] = unaff_EDI;', 'guest_wait_handles[0] = unaff_ESI;'),
        ('guest_wait_handles[1] = unaff_ESI;', 'guest_wait_handles[1] = unaff_EDI;'),
        ('WaitForMultipleObjects(2,guest_wait_handles', 'WaitForMultipleObjects(1,guest_wait_handles'),
        ('WaitForSingleObject(unaff_ESI,0xffffffff)', 'WaitForSingleObject(unaff_EDI,0xffffffff)'),
    )
    for original, wrong in mutations:
        mutated = source.replace(original, wrong, 1)
        if mutated == source:
            raise ValueError('Negative control failed to modify source')
        try:
            check_source(mutated)
        except ValueError:
            continue
        raise ValueError('Incorrect guest wait contract passed negative control')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument('--xbe', type=Path)
    args = parser.parse_args()
    root = args.root.resolve()
    source_path = root / SOURCE
    source = source_path.read_text(encoding='utf-8')
    check_source(source)
    check_negative_controls(source)
    clang = shutil.which('clang')
    if clang is None:
        raise RuntimeError('Clang is required')
    for opt in ('-O0', '-O2'):
        result = subprocess.run((clang, '-std=c11', opt, '-fsyntax-only',
                                 '-Wno-implicit-function-declaration', '-Wno-int-conversion',
                                 '-I', str(root / 'include'), str(source_path)),
                                capture_output=True, text=True, timeout=60)
        if result.returncode:
            raise ValueError('Focused C11 check failed (' + opt + '):\n' + result.stderr[:2500])
    if args.xbe:
        check_xbe(args.xbe)
    print('PASS: Bink 0x0035A960 EDI/ESI guest DWORD[2] storage, count, branch order, '
          'negative controls, Clang C11 O0/O2; XBE ' +
          ('hash and 14 instruction windows verified' if args.xbe else 'not supplied'))
    print('LIMITATION: incoming register state, guest HANDLE mapping, host API and runtime unverified')


if __name__ == '__main__':
    main()
