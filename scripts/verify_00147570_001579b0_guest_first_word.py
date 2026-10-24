#!/usr/bin/env python3
"""Verify two original incoming guest argument-slot address forwards.

Original XBE is private and optional. Source-only CI is not Xbox ABI proof.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
CASES = (
    (0x00147570, 0x00147617, '150e8e8f99636bd7147e831484040a643b00aa5b088a8cb3af83f8ef08802b48',
     0x001475E2, 0x001475DC, '8d4c2410', 0x00147614, 'c20800'),
    (0x001579B0, 0x00157A9D, 'cae842f6b6c3ca8d6a82da767ead255bb50aca7d2d770af66b15545c0cd75399',
     0x001579F0, 0x001579EA, '8d4c2424', 0x00157A9A, 'c20400'),
)
CALLEE = (0x000E0350, 0x000E039E, '282079256055a6be17c291e284511da7e0fa0cd1b23580552a79a34eec66d3fa')
OPCODES = (
    (0x00147570, '57'),         # save EDI
    (0x00147571, '8b7c2408'),   # first incoming argument -> EDI
    (0x0014759D, '56'),         # save ESI
    (0x001475DB, '56'),         # push ESI (third callee argument)
    (0x001475E0, '51'),         # address of first guest argument
    (0x001475E1, '50'),         # first callee argument
    (0x001579B0, '83ec10'),     # reserve 16 local bytes
    (0x001579B3, '535657'),     # save EBX, ESI, EDI
    (0x001579B6, '8b7c2420'),   # first incoming argument -> EDI
    (0x001579E9, '56'),         # push ESI (third callee argument)
    (0x001579EE, '51'),         # address of first guest argument
    (0x001579EF, '50'),         # first callee argument
    (0x000E0352, '8b6c2410'),   # callee reads second argument as pointer
    (0x000E0394, '895500'),     # callee writes a complete DWORD through it
    (0x000E0397, '8bc5'),       # callee returns pointer to that same slot
    (0x000E039B, 'c20c00'),     # callee pops three 32-bit arguments
)
FLAGS = ('-std=c11', '-fsyntax-only', '-ferror-limit=3',
         '-Wno-implicit-function-declaration', '-Wno-int-conversion',
         '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-Wno-return-type',
         '-Wno-deprecated-non-prototype')
WORD = 'uint32_t guest_first_arg_word = (uint32_t)(uintptr_t)param_1;'

def source_path(root, entry):
    return root / f'src/main_unclassified/band_{entry >> 16:04x}/0x{entry:08x}.c'

def source_check(root, overrides=None):
    overrides = overrides or {}
    for entry, *_ in CASES:
        src = overrides.get(entry, source_path(root, entry).read_text(encoding='utf-8'))
        if (src.count(WORD) != 1 or src.count('&guest_first_arg_word') != 1
                or ',&guest_first_arg_word,' not in src):
            raise ValueError(f'{entry:#x}: missing one guest 32-bit first-argument out-slot')
        if 'stack0x00000000' in src:
            raise ValueError(f'{entry:#x}: unresolved guest first-argument address')
        if 'ABI_UNVERIFIED' not in src or 'FUN_000e0350(' not in src:
            raise ValueError(f'{entry:#x}: missing callee or ABI caveat')

def xbe_check(data, check_identity=True):
    if check_identity and hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError('original XBE SHA-256 mismatch')
    def span(start, end):
        return data[start - 0x10000:end - 0x10000]
    for entry, end, digest, call, lea, lea_bytes, ret, ret_bytes in CASES:
        if hashlib.sha256(span(entry, end)).hexdigest() != digest:
            raise ValueError(f'{entry:#x}: function-body digest mismatch')
        for at, expected in ((lea, lea_bytes), (ret, ret_bytes)):
            if span(at, at + len(bytes.fromhex(expected))) != bytes.fromhex(expected):
                raise ValueError(f'{at:#x}: instruction mismatch')
        if span(call, call+1) != b'\xe8':
            raise ValueError(f'{call:#x}: not a near call')
        displacement = struct.unpack_from('<i', data, call - 0x10000 + 1)[0]
        if (call + 5 + displacement) & 0xffffffff != 0x000E0350:
            raise ValueError(f'{call:#x}: unexpected call destination')
    start, end, digest = CALLEE
    if hashlib.sha256(span(start, end)).hexdigest() != digest:
        raise ValueError('callee function-body digest mismatch')
    for at, expected in OPCODES:
        if span(at, at + len(bytes.fromhex(expected))) != bytes.fromhex(expected):
            raise ValueError(f'{at:#x}: original instruction mismatch')
    # First caller: 3 pushes (12 bytes), LEA ESP+16 => entry ESP+4.
    # Second caller: 16-byte locals + 4 pushes (32), LEA ESP+36 => ESP+4.
    assert 0x10 - 3*4 == 4 and 0x24 - (0x10 + 4*4) == 4

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--repo', type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe', type=Path)
    args = ap.parse_args()
    root = args.repo.resolve()
    source_check(root)
    entry = CASES[0][0]
    original = source_path(root, entry).read_text(encoding='utf-8')
    try:
        source_check(root, {entry: original.replace('&guest_first_arg_word', '&param_1')})
    except ValueError:
        pass
    else:
        raise ValueError('source mutation negative control failed')
    if args.xbe:
        data = args.xbe.read_bytes()
        xbe_check(data)
        damaged = bytearray(data)
        damaged[0x001475DC - 0x10000] ^= 1
        try:
            xbe_check(damaged, check_identity=False)
        except ValueError:
            pass
        else:
            raise ValueError('XBE mutation negative control failed')
    clang = shutil.which('clang')
    if clang is None:
        raise ValueError('clang is required')
    for entry, *_ in CASES:
        cmd = [clang, *FLAGS, '-I', str(root/'include'), str(source_path(root, entry))]
        result = subprocess.run(cmd, text=True, capture_output=True, check=False)
        if result.returncode:
            raise ValueError(f'{entry:#x}: C11 syntax failure:\n{result.stderr}')
    print('PASS: 2 guest first-argument DWORD out-slots, 3 original body hashes, '
          '16 instruction windows, 2 direct-call destinations, focused C11 and negative controls'
          if args.xbe else
          'PASS: source-only guest first-argument slots and focused C11; original XBE not checked')
    print('Guest32 pointer translation, indirect dispatch and caller-visible stack lifetime remain ABI_UNVERIFIED')

if __name__ == '__main__':
    main()
