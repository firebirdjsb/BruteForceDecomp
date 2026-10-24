#!/usr/bin/env python3
"""Verify six narrowly scoped original-XBE-backed C11 repairs.

Without --xbe, CI checks source identities, preserved guest-slot expressions,
and isolated Clang C11 syntax. With --xbe, validate the retail XBE digest,
original stack loads, LEA/near-call sequences and exception address store.
This does not verify caller ABI, host pointer validity, exception semantics,
linking, or executable runtime equivalence.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

EXPECTED_XBE = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
STACK_ENTRIES = (0x00136410, 0x001364E0, 0x001365B0, 0x00136680)
EXCEPTION_ENTRY = 0x002F4C4A
ONEXIT_ENTRY = 0x002EA4BF
FLAGS = (
    '-std=c11', '-fsyntax-only', '-ferror-limit=3',
    '-Wno-implicit-function-declaration', '-Wno-int-conversion',
    '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
    '-Wno-int-to-pointer-cast', '-Wno-return-type',
    '-Wno-deprecated-non-prototype',
)


def source_path(root: Path, entry: int) -> Path:
    return root / 'src' / 'main_unclassified' / f'band_{entry >> 16:04x}' / f'0x{entry:08x}.c'


def verify_source(root: Path, entry: int, clang: str) -> None:
    path = source_path(root, entry)
    text = path.read_text(encoding='utf-8')
    if f'Entry: 0x{entry:08x},' not in text or 'Input x86 body SHA-256:' not in text:
        raise ValueError(f'Original provenance missing: {path}')
    if entry in STACK_ENTRIES:
        if ('int in_stack_00000010;' not in text or
                text.count('FUN_00045180(&in_stack_00000010,iVar4 + 8);') != 1 or
                '&stack0x00000010' in text):
            raise ValueError(f'Guest stack slot not preserved: {path}')
    elif entry == EXCEPTION_ENTRY:
        if ('uint32_t local_48;' not in text or
                text.count('local_48 = UINT32_C(0x002f4c4a);') != 1 or
                'local_48 = RaiseException;' in text):
            raise ValueError(f'Guest exception address word not preserved: {path}')
    else:
        if ('int __cdecl _atexit(undefined4 callback_guest_word)' not in text or
                'iVar1 = __onexit(callback_guest_word);' not in text or
                '__func *__func' in text):
            raise ValueError(f'Unverified callback type reintroduced: {path}')
    p = subprocess.run([clang, *FLAGS, '-I', str(root/'include'), str(path)],
                       capture_output=True, text=True, timeout=60)
    if p.returncode:
        raise ValueError(f'Clang C11 failure for 0x{entry:08x}: {p.stderr[:1000]}')


def read_xbe(path: Path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != EXPECTED_XBE or data[:4] != b'XBEH':
        raise ValueError('Original XBE SHA256 or header mismatch')
    base = struct.unpack_from('<I', data, 0x104)[0]
    count, table = struct.unpack_from('<II', data, 0x11c)
    if not 0 < count < 128:
        raise ValueError('Invalid original XBE section count')
    sections = []
    for i in range(count):
        offset = table - base + i*0x38
        if not 0 <= offset <= len(data)-20:
            raise ValueError('Invalid section table offset')
        _, va, virtual_size, raw_offset, raw_size = struct.unpack_from('<IIIII', data, offset)
        sections.append((va, min(virtual_size, raw_size), raw_offset))

    def read(va: int, n: int) -> bytes:
        for start, size, raw in sections:
            if start <= va and va+n <= start+size:
                return data[raw+va-start:raw+va-start+n]
        raise ValueError(f'Original XBE virtual address unmapped: 0x{va:08x}')
    return read


def verify_xbe(read) -> None:
    for entry in STACK_ENTRIES:
        # Three original pushes make [ESP+0x1c] the incoming +0x10 word.
        if read(entry+3, 4) != bytes.fromhex('8b 74 24 1c'):
            raise ValueError(f'Original incoming stack load changed: 0x{entry:08x}')
        # At the LEA, the current ESP is entry-0x20, so ESP+0x30
        # is the same original incoming +0x10 stack word.
        call = read(entry+0x7e, 10)
        if call[:6] != bytes.fromhex('8d 44 24 30 50 e8'):
            raise ValueError(f'Original LEA/push/near-call changed: 0x{entry:08x}')
        destination = (entry + 0x88 + struct.unpack_from('<i', call, 6)[0]) & 0xffffffff
        if destination != 0x00045180:
            raise ValueError(f'Original near-call destination changed: 0x{entry:08x}')
    # Original wrapper forwards exactly one incoming stack DWORD to 0x002ea43d.
    onexit = read(ONEXIT_ENTRY, 9)
    if onexit[:5] != bytes.fromhex('ff 74 24 04 e8'):
        raise ValueError('Original atexit forwarding bytes changed')
    destination = (ONEXIT_ENTRY + 9 + struct.unpack_from('<i', onexit, 5)[0]) & 0xffffffff
    if destination != 0x002ea43d:
        raise ValueError('Original atexit call destination changed')
    if read(0x002f4c69, 7) != bytes.fromhex('c7 45 bc 4a 4c 2f 00'):
        raise ValueError('Original exception record guest address store changed')


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe', type=Path)
    args = ap.parse_args()
    clang = shutil.which('clang')
    if not clang:
        raise RuntimeError('Clang is required')
    root = args.root.resolve()
    for entry in (*STACK_ENTRIES, EXCEPTION_ENTRY, ONEXIT_ENTRY):
        verify_source(root, entry, clang)
    if args.xbe:
        verify_xbe(read_xbe(args.xbe))
    print('PASS: six scoped original-entry C11 sources compile; '
          f'original retail XBE instructions {"verified" if args.xbe else "not supplied"}. '
          'Guest ABI, host linkage, runtime and 1:1 behavior remain unverified.')


if __name__ == '__main__':
    main()
