#!/usr/bin/env python3
"""Verify original D3D 0x00377A50 EBP status and three callback stack DWORDs.

CI: python3 scripts/verify_00377a50_d3d_callback_words.py --root .
Local: python3 scripts/verify_00377a50_d3d_callback_words.py --root . --xbe /path/to/default.xbe

This does not establish a native callback ABI or guest EAX binding.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

ENTRY = 0x00377A50
BODY_SIZE = 0x10A  # through original RET at 0x00377B59
BODY_SHA = '81A1DB011AE5B989BEE2F130DF19A2B1F869DCBF49CB55A53DF8BB310ADAD991'
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
SOURCE = Path('src/platform/graphics_d3d/0x00377a50.c')
INSTRUCTIONS = {
    0x00377A50: '83ec0c',          # sub esp,12: three local DWORDs
    0x00377A8F: '33ed',            # xor ebp,ebp: status 0
    0x00377A98: 'b901000000',      # mov ecx,1
    0x00377A9F: '8be9',            # mov ebp,ecx: status 1
    0x00377AB8: 'bd02000000',      # mov ebp,2: status 2
    0x00377B28: '8b8ec0010000',    # mov ecx,[esi+0x1c0]: counter
    0x00377B2E: '8b96bc010000',    # mov edx,[esi+0x1bc]: second word
    0x00377B34: '894c2410',        # mov [esp+0x10],ecx: DWORD[0]
    0x00377B38: '8d4c2410',        # lea ecx,[esp+0x10]: base pointer
    0x00377B3C: '51',              # push ecx: callback argument
    0x00377B3D: '89542418',        # mov [esp+0x18],edx: DWORD[1]
    0x00377B41: '896c241c',        # mov [esp+0x1c],ebp: DWORD[2]
    0x00377B45: 'ffd0',            # call eax: indirect callback
    0x00377B47: '83c404',          # add esp,4
    0x00377B59: 'c3',              # ret
}


def guest_bytes(data, address, size):
    if data[:4] != b'XBEH':
        raise ValueError('Not an XBE')
    base, = struct.unpack_from('<I', data, 0x104)
    count, table_va = struct.unpack_from('<II', data, 0x11c)
    table_off = table_va - base
    if not 0 < count < 128 or not 0 <= table_off <= len(data) - count * 56:
        raise ValueError('Invalid XBE section table')
    for i in range(count):
        _, va, vsize, off, raw_size = struct.unpack_from('<IIIII', data, table_off + i * 56)
        if va <= address and address + size <= va + min(vsize, raw_size):
            start = off + address - va
            if start + size > len(data):
                raise ValueError('XBE section exceeds file')
            return data[start:start + size]
    raise ValueError('Unmapped guest address 0x%08x' % address)


def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError('Wrong original Xbox XBE')
    if hashlib.sha256(guest_bytes(data, ENTRY, BODY_SIZE)).hexdigest().upper() != BODY_SHA:
        raise ValueError('Original function-body hash mismatch')
    for va, encoding in INSTRUCTIONS.items():
        if guest_bytes(data, va, len(encoding) // 2) != bytes.fromhex(encoding):
            raise ValueError('Original x86 instruction mismatch at 0x%08x' % va)


def check_source(source):
    for marker in (f'Entry: 0x{ENTRY:08x}', 'Input x86 body SHA-256: ' + BODY_SHA,
                   'ABI_UNVERIFIED'):
        if marker not in source:
            raise ValueError('Missing original function provenance: ' + marker)
    body = re.sub(r'/\*.*?\*/|//[^\n]*', '', source, flags=re.S)
    required = (
        'undefined4 guest_callback_status = 0;',
        'undefined4 guest_callback_words[3];',
        'if (iVar4 != 0) {\n    guest_callback_status = 1;',
        'else if (in_EAX[0x70] == in_EAX[0x71]) {\n'
        '    in_EAX[0x71] = in_EAX[0x71] + 1;\n    guest_callback_status = 2;',
        'guest_callback_words[0] = (undefined4)in_EAX[0x70];',
        'guest_callback_words[1] = (undefined4)in_EAX[0x6f];',
        'guest_callback_words[2] = guest_callback_status;',
        '(*(code *)in_EAX[100])(guest_callback_words);',
    )
    for marker in required:
        if body.count(marker) != 1:
            raise ValueError('Guest callback storage/status mismatch: ' + marker)
    if 'stack0xffffffe8' in body:
        raise ValueError('Unresolved original guest stack reference')


def check_negative_controls(source):
    for old, new in (
        ('guest_callback_status = 1;', 'guest_callback_status = 2;'),
        ('guest_callback_status = 2;', 'guest_callback_status = 1;'),
        ('guest_callback_words[0] = (undefined4)in_EAX[0x70];',
         'guest_callback_words[0] = (undefined4)in_EAX[0x6f];'),
        ('guest_callback_words[2] = guest_callback_status;',
         'guest_callback_words[2] = 0;'),
        ('(guest_callback_words);', '(guest_callback_words + 1);'),
    ):
        changed = source.replace(old, new, 1)
        if changed == source:
            raise ValueError('Negative control did not change source')
        try:
            check_source(changed)
        except ValueError:
            continue
        raise ValueError('Incorrect callback status/storage passed negative control')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument('--xbe', type=Path)
    args = parser.parse_args()
    root = args.root.resolve()
    source = (root / SOURCE).read_text(encoding='utf-8')
    check_source(source)
    check_negative_controls(source)
    clang = shutil.which('clang')
    if not clang:
        raise RuntimeError('Clang required')
    for opt in ('-O0', '-O2'):
        r = subprocess.run((clang, '-std=c11', opt, '-fsyntax-only',
                            '-Wno-implicit-function-declaration', '-Wno-int-conversion',
                            '-Wno-int-to-pointer-cast', '-Wno-deprecated-non-prototype',
                            '-I', str(root / 'include'), str(root / SOURCE)),
                           capture_output=True, text=True, timeout=60)
        if r.returncode:
            raise ValueError('Clang C11 ' + opt + ' failed:\n' + r.stderr[:2500])
    if args.xbe:
        check_xbe(args.xbe)
    print('PASS: D3D 0x00377A50 callback guest DWORD[3] and EBP status; 15 x86 windows '
          'and full body ' + ('verified' if args.xbe else 'not supplied') + '; Clang O0/O2')
    print('LIMITATION: guest EAX, callback signature, guest pointer translation and runtime unverified')


if __name__ == '__main__':
    main()
