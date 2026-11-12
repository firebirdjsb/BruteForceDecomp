#!/usr/bin/env python3
"""Authenticated original-XBE evidence gate for FUN_00015f80.

Checks original complete body hash, instruction boundaries, branch targets,
and mutation negatives. Does NOT certify host ABI or game behavior.
The user-owned retail XBE must not be committed.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

ENTRY = 0x00015F80
BODY_SHA = '46944bde93cacac236e2744f46ec746ca169dc29643cc7d75de51a78196c9659'
WINDOWS = {
    0x15F80: '8b11',          # mov edx,[ecx]
    0x15F82: '8b4808',        # mov ecx,[eax+8]
    0x15F85: '8b4004',        # mov eax,[eax+4]
    0x15F88: '3bc1',          # cmp eax,ecx
    0x15F8A: '740f',          # je exhausted
    0x15F8C: '8d642400',      # alignment nop: lea esp,[esp]
    0x15F90: '3910',          # cmp [eax],edx
    0x15F92: '7407',          # je matched
    0x15F94: '83c018',        # add eax,24
    0x15F97: '3bc1',          # cmp eax,ecx
    0x15F99: '75f5',          # jne next
    0x15F9B: '33d2',          # xor edx,edx
    0x15F9D: '3bc1',          # cmp eax,ecx
    0x15F9F: '0f94c2',        # sete dl
    0x15FA2: '4a',            # dec edx
    0x15FA3: '23c2',          # and eax,edx
    0x15FA5: 'c3',            # ret
}
BRANCHES = {0x15F8A: 0x15F9B, 0x15F92: 0x15F9B, 0x15F99: 0x15F90}


def check(data: bytes) -> dict[str, int | str]:
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError('Retail XBE authentication failed')
    layout = sections(data)
    body = data[file_offset(layout, ENTRY, 38):][:38]
    if hashlib.sha256(body).hexdigest() != BODY_SHA:
        raise ValueError('Original 0x00015f80 body mismatch')
    pos = ENTRY
    negative = 0
    for address, hexdump in WINDOWS.items():
        raw = bytes.fromhex(hexdump)
        if address != pos:
            raise AssertionError('Original instruction windows do not cover contiguous body')
        original = data[file_offset(layout, address, len(raw)):][:len(raw)]
        if original != raw:
            raise ValueError(f'Original opcode mismatch at {address:#x}')
        for byte_index in range(len(raw)):
            changed = bytearray(raw)
            changed[byte_index] ^= 1
            if changed == original:
                raise AssertionError('Mutation survived instruction comparison')
            negative += 1
        pos += len(raw)
    if pos != ENTRY + 38:
        raise AssertionError('Full original function length not covered')
    for site, target in BRANCHES.items():
        inst = data[file_offset(layout, site, 2):][:2]
        if inst[0] not in (0x74, 0x75):
            raise ValueError('Conditional x86 branch opcode changed')
        computed = (site + 2 + int.from_bytes(inst[1:2], 'little', signed=True)) & 0xffffffff
        if computed != target:
            raise ValueError(f'Branch destination differs at {site:#x}')
        mutated = bytes((inst[0], inst[1] ^ 1))
        changed_target = (site + 2 + int.from_bytes(mutated[1:], 'little', signed=True)) & 0xffffffff
        if changed_target == target:
            raise AssertionError('Wrong branch displacement was accepted')
        negative += 1
    for byte_index in range(len(body)):
        changed = bytearray(body)
        changed[byte_index] ^= 1
        if hashlib.sha256(changed).hexdigest() == BODY_SHA:
            raise AssertionError('Body-hash mutation was accepted')
        negative += 1
    return {'original_body_bytes': len(body), 'instruction_windows': len(WINDOWS),
            'branch_targets': len(BRANCHES), 'negative_controls': negative,
            'abi': 'ABI_UNVERIFIED; guest pointer mapping and register/flags/stack integration unverified'}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe', required=True, type=Path)
    args = parser.parse_args()
    for k, v in check(args.xbe.read_bytes()).items():
        print(f'{k}: {v}')


if __name__ == '__main__':
    main()
