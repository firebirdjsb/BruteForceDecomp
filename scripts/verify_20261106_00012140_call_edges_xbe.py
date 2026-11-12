#!/usr/bin/env python3
"""Private, bounded retail-XBE check of 0x00012140's outgoing call edges.

This is instruction evidence, NOT reconstruction of 0x000E1150's entire
function body, nor a verified C++ signature, runtime guest stack, or behavior.
Do not commit the private original XBE.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

ENTRY = 0x00012140
BODY_BYTES = 36
BODY_SHA256 = 'b41f5e57dd95d9d7fd50c405664c79d502ad2c419bae3759363645d2fe195a73'
WINDOWS = {
    0x12140: '51',       # PUSH ECX: outgoing local stack cell
    0x12141: '8b4604',   # MOV EAX,[ESI+4]
    0x12144: '85c0',     # TEST EAX,EAX
    0x12146: '7504',     # JNE 1214C
    0x12148: '33c9',     # XOR ECX,ECX
    0x1214a: 'eb02',     # JMP 1214E
    0x1214c: '8b08',     # MOV ECX,[EAX]
    0x1214e: '50',       # PUSH EAX
    0x1214f: '51',       # PUSH ECX
    0x12150: '8d442408', # LEA EAX,[ESP+8]: points to saved entry ECX
    0x12154: '50',       # PUSH EAX
    0x12155: '56',       # PUSH ESI
    0x1215b: '8b4e04',   # MOV ECX,[ESI+4] (post call)
    0x1215e: '51',       # PUSH ECX
    # Only this callee *instruction*, not its complete body SHA, is asserted.
    0xe11dc: 'c21000',  # RET 16, original FUN_000E1150 stack cleanup
}
EDGES = {0x12156: 0x000e1150, 0x1215f: 0x002ea018}


def verify(xbe: bytes) -> tuple[int, int, int]:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError('Retail XBE SHA-256 mismatch')
    layout = sections(xbe)
    offset = file_offset(layout, ENTRY, BODY_BYTES)
    body = xbe[offset:offset + BODY_BYTES]
    if hashlib.sha256(body).hexdigest() != BODY_SHA256:
        raise ValueError('Original 0x00012140 complete function body SHA-256 mismatch')
    negatives = 0
    for index in range(len(body)):
        corrupted = bytearray(body)
        corrupted[index] ^= 1
        if hashlib.sha256(corrupted).hexdigest() == BODY_SHA256:
            raise AssertionError('Mutated caller body accepted')
        negatives += 1
    for va, encoded in WINDOWS.items():
        expected = bytes.fromhex(encoded)
        off = file_offset(layout, va, len(expected))
        if xbe[off:off + len(expected)] != expected:
            raise ValueError(f'Unexpected instruction bytes at 0x{va:08X}')
        for index in range(len(expected)):
            altered = bytearray(expected)
            altered[index] ^= 1
            if altered == xbe[off:off + len(expected)]:
                raise AssertionError('Mutated instruction window accepted')
            negatives += 1
    for site, target in EDGES.items():
        off = file_offset(layout, site, 5)
        opcode = xbe[off]
        displacement = struct.unpack_from('<i', xbe, off + 1)[0]
        actual = (site + 5 + displacement) & 0xffffffff
        if opcode != 0xe8 or actual != target:
            raise ValueError(f'Unexpected x86 CALL at 0x{site:08X}: 0x{actual:08X}')
        for index in range(5):
            changed = bytearray(xbe[off:off + 5])
            changed[index] ^= 1
            if changed[0] == 0xe8 and (site + 5 + struct.unpack_from('<i', changed, 1)[0]) & 0xffffffff == target:
                raise AssertionError('Mutated x86 call destination accepted')
            negatives += 1
    return len(WINDOWS), len(EDGES), negatives


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe', required=True, type=Path, help='private authenticated retail executable')
    args = parser.parse_args()
    windows, calls, negatives = verify(args.xbe.read_bytes())
    print(f'PASS: original 0x00012140 body SHA; {windows} instruction windows; '
          f'{calls} direct CALLs; {negatives} mutation controls')
    print('ABI_UNVERIFIED: 0x000E1150 full body digest, guest stack, indirect side effects, native linkage')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
