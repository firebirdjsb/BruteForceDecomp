#!/usr/bin/env python3
"""Verify 0x00175090 guest output slot against original CALL and callee writes.

This is an isolated C11 stack-storage repair; not Xbox ABI equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "1de3394f83b1c178827366d655f3a85736f4acc9c3d2ced9674b501f6fb7c409"
BODY_SIZE = 0x20b
WINDOWS = {
    0x00175090: "83 ec 0c 53 57",   # reserve 12; save EBX, EDI
    0x001750b0: "55 56",             # loop saves EBP, ESI
    0x00175102: "52 53 57 8d 44 24 20 8b d6 e8 30 9c f6 ff",
    0x0017520c: "50 53 52 8b 54 24 30 8d 44 24 20 e8 24 9b f6 ff",
    0x00175262: "50 53 52 8b 54 24 30 8d 44 24 20 e8 ce 99 f6 ff",
    0x000dec4e: "8b f8 8b da 56 c7 07 00 00 00 00",  # EDI = EAX; output = 0
    0x000ded4e: "8b f8 8b da 56 c7 07 00 00 00 00",
    0x000decf1: "c2 0c 00",
    0x000dedf1: "c2 0c 00",
}


def guest(image: bytes, address: int, count: int) -> bytes:
    if image[:4] != b'XBEH':
        raise ValueError('Not an original Xbox XBE')
    base = int.from_bytes(image[0x104:0x108], 'little')
    sections = int.from_bytes(image[0x11c:0x120], 'little')
    table = int.from_bytes(image[0x120:0x124], 'little') - base
    if sections > 128 or table < 0:
        raise ValueError('Invalid section table')
    for i in range(sections):
        at = table + i * 56
        va = int.from_bytes(image[at+4:at+8], 'little')
        raw = int.from_bytes(image[at+12:at+16], 'little')
        size = int.from_bytes(image[at+16:at+20], 'little')
        offset = raw + address - va
        if va <= address and address + count <= va + size and offset + count <= len(image):
            return image[offset:offset+count]
    raise ValueError(f'No backed guest bytes at {address:08x}')


def verify_original(image: bytes) -> None:
    assert hashlib.sha256(image).hexdigest() == XBE_SHA, 'XBE hash mismatch'
    assert hashlib.sha256(guest(image, 0x00175090, BODY_SIZE)).hexdigest() == BODY_SHA, 'Original 0x00175090 body mismatch'
    for va, hex_bytes in WINDOWS.items():
        expected = bytes.fromhex(hex_bytes)
        assert guest(image, va, len(expected)) == expected, f'Original opcode mismatch at {va:08x}'
    # Original CALL frame: entry ESP=E, SUB 12; PUSH EBX,EDI,EBP,ESI;
    # before each LEA there are exactly three 4-byte pushes.
    for e in (0x00012000, 0x7fff0000, 0x00000004, 0xfffffff0):
        after_three_pushes = (e - 12 - 4*4 - 3*4) & 0xffffffff
        assert (after_three_pushes + 0x20) & 0xffffffff == (e - 8) & 0xffffffff
    print(f'PASS: original XBE, 523-byte caller digest, {len(WINDOWS)} instruction windows, E-8 guest slot')


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument('--xbe', type=Path)
    ap.add_argument('--clang', default=shutil.which('clang'))
    ap.add_argument('--xbox-only', action='store_true', help='Authenticate private XBE without local repository checkout')
    a = ap.parse_args()
    if a.xbe:
        verify_original(a.xbe.read_bytes())
    else:
        print('NOTE: Original XBE not provided; no new binary authentication in CI')
    if a.xbox_only:
        if not a.xbe: ap.error('--xbox-only requires --xbe')
        return
    src = a.root / 'src/main_unclassified/band_0017/0x00175090.c'
    code = src.read_text(encoding='utf8')
    assert 'Input x86 body SHA-256: ' + BODY_SHA.upper() in code
    assert code.count('&caller_stack_output_word') == 3
    assert code.count('undefined4 caller_stack_output_word;') == 1
    assert 'stack0xfffffff0' not in code
    assert 'ABI_UNVERIFIED' in code
    if not a.clang: ap.error('Clang is required')
    from_flags = ['-std=c11', '-fsyntax-only', '-ferror-limit=3',
          '-Wno-implicit-function-declaration', '-Wno-int-conversion',
          '-Wno-incompatible-pointer-types', '-Wno-pointer-to-int-cast',
          '-Wno-int-to-pointer-cast', '-Wno-return-type',
          '-Wno-deprecated-non-prototype', '-I', str(a.root/'include')]
    subprocess.run([a.clang, *from_flags, str(src)], check=True)
    print('PASS: 0x00175090 patched source passes same host Clang C11 flags as full sweep')


if __name__ == '__main__':
    main()
