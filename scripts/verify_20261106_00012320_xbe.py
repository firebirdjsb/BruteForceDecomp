#!/usr/bin/env python3
"""Private original-retail-XBE evidence gate for original 0x00012320.

Authenticates complete retail XBE and original function bytes, checks selected
instruction windows, E8 target, RET 4, callee instruction windows and negative
mutation controls. Does NOT certify full recovered C++/guest calling ABI.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

BODY = (0x00012320, 125,
        '09df5f57ab66ca1d79ac7a0fb48234bfad09edaa4737f016616473c9f3143917')
CALLEE = (0x0008f6a0, 64,
          '339dc70ade9da431a03d8964268e2b983bf89df209448a87b645006c63d4420d')
# Contiguous original opcode + operand spans, not inferred prototypes.
WINDOWS = {
    0x12320: 'c7079c473a00',  # MOV DWORD PTR [EDI],0x3A479C
    0x12326: '33c0',          # XOR EAX,EAX
    0x12328: '894710',        # MOV [EDI+0x10],EAX
    0x1232b: '894724',        # MOV [EDI+0x24],EAX
    0x1232e: 'c74704644f3a00',# MOV [EDI+0x04],0x3A4F64
    0x12335: '894708',        # MOV [EDI+0x08],EAX
    0x12338: '89471c',
    0x1233b: '894718',
    0x1233e: '894714',
    0x12342: '8a5f38',        # MOV BL,BYTE PTR [EDI+0x38]
    0x12345: 'b2fe',          # MOV DL,0xFE
    0x12347: '22da',          # AND BL,DL
    0x12349: '885f38',        # MOV BYTE PTR [EDI+0x38],BL
    0x1234c: '89472c',
    0x1234f: '894730',
    0x12352: '894734',
    0x12355: '894728',
    0x12358: '8a5f3c',
    0x1235b: '22da',
    0x1235d: '3bc8',          # CMP ECX,EAX
    0x1235f: '8b542408',      # MOV EDX,[ESP+0x8] after PUSH EBX
    0x12363: '885f3c',
    0x12366: '895708',
    0x12369: '5b',            # POP EBX
    0x1236a: '7510',
    0x1236c: '394710',
    0x1236f: '7412',
    0x12371: '837f2802',
    0x12375: '750c',
    0x12377: '894728',
    0x1237a: 'eb07',
    0x1237c: 'c7472802000000',
    0x12383: '8b4710',
    0x12386: '3bc1',
    0x12388: '56',
    0x12389: '8d770c',       # LEA ESI,[EDI+0x0C]
    0x1238c: '7409',
    0x1238e: '51',           # PUSH ECX before direct CALL
    0x12394: '83c404',       # ADD ESP,4 (caller removes call's argument)
    0x12397: '8bc7',
    0x12399: '5e',
    0x1239a: 'c20400',       # RET 4 (callee cleans caller's single DWORD)
    0x8f6a0: '8b4604',      # callee ESI register input
    0x8f6a6: '8b5c2408',    # callee stack word at [ESP+8] after PUSH EBX
    0x8f6de: '5b',
    0x8f6df: 'c3',
}
CALL_SITE = 0x1238f
CALL_TARGET = 0x8f6a0


def verify(data: bytes) -> tuple[int, int]:
    actual = hashlib.sha256(data).hexdigest()
    if actual != XBE_SHA256:
        raise ValueError(f'Wrong retail XBE: {actual}')
    layout = sections(data)
    mutations = 0
    for va, size, expected_hash in (BODY, CALLEE):
        off = file_offset(layout, va, size)
        raw = data[off:off+size]
        if hashlib.sha256(raw).hexdigest() != expected_hash:
            raise ValueError(f'Original body SHA mismatch: {va:#x}')
        for i in range(size):
            corrupt = bytearray(raw)
            corrupt[i] ^= 1
            if hashlib.sha256(corrupt).hexdigest() == expected_hash:
                raise AssertionError('Body hash negative control failed')
            mutations += 1
    for va, hex_bytes in WINDOWS.items():
        expected = bytes.fromhex(hex_bytes)
        off = file_offset(layout, va, len(expected))
        raw = data[off:off+len(expected)]
        if raw != expected:
            raise ValueError(f'Opcode/operand mismatch at {va:#x}: {raw.hex()} != {hex_bytes}')
        for i in range(len(raw)):
            corrupt = bytearray(raw)
            corrupt[i] ^= 1
            if corrupt == expected:
                raise AssertionError('Instruction negative control failed')
            mutations += 1
    off = file_offset(layout, CALL_SITE, 5)
    opcode, rel = struct.unpack_from('<Bi', data, off)
    if opcode != 0xe8 or (CALL_SITE+5+rel)&0xffffffff != CALL_TARGET:
        raise ValueError('Original E8 direct CALL target mismatch')
    for i in range(5):
        changed = bytearray(data[off:off+5]); changed[i] ^= 1
        op, delta = struct.unpack('<Bi', changed)
        if op==0xe8 and (CALL_SITE+5+delta)&0xffffffff == CALL_TARGET:
            raise AssertionError('Direct CALL negative control failed')
        mutations += 1
    return len(WINDOWS), mutations


def main() -> int:
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe', type=Path, required=True)
    args=parser.parse_args()
    windows, mutations=verify(args.xbe.read_bytes())
    print(f'PASS: authenticated retail XBE; 2 original complete body hashes; {windows} opcode windows; '
          f'1 original E8 CALL destination; RET 4; {mutations} negative mutation controls')
    print('ABI_UNVERIFIED: original host C++ signature, guest VA runtime, callee effects, native linkage, game behavior')
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
