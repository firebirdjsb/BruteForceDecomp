#!/usr/bin/env python3
"""Authenticate bounded original-x86 evidence for 0x120F0 and 0x8F690.

Requires the user's private original retail XBE as an explicit argument.
Does NOT prove cross-function linkage, original calling convention or behavior.
Never put original executable bytes in a repository artifact.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

BODIES = {
    0x000120F0: (71, "9fefe68c61cec0943a913b1988495825bfd1e3f128e1f92db0a3da5d8376bb9c"),
    0x0008F690: (15, "a2e7b7d3a7dd6a4f5f264c6debd3a89e8588eca8f90b3ed3fe84637f77145138"),
}
# Entire bodies are checked above; these specifically identify the host model's
# original operands, branches and return behavior, NOT the unseen machine ABI.
WINDOWS = {
    0x000120F0: "83ec08",               # sub esp,8
    0x000120F3: "33c9",                 # xor ecx,ecx
    0x000120F5: "894c2400",             # mov [esp],ecx
    0x000120F9: "8b5008",               # mov edx,[eax+8]
    0x000120FC: "85d2",                 # test edx,edx
    0x000120FE: "7505",                 # jne 0x12105
    0x00012100: "83c00c",               # add eax,0xc
    0x00012103: "eb11",                 # jmp 0x12116
    0x00012105: "b901000000",           # mov ecx,1
    0x0001210A: "c744240400000000",     # mov [esp+4],0
    0x00012112: "8d442400",             # lea eax,[esp]
    0x00012116: "f6c101",               # test cl,1
    0x00012119: "56",                   # push esi
    0x0001211A: "8b7004",               # mov esi,[eax+4]
    0x0001211D: "7411",                 # je 0x12130
    0x0001211F: "8b442408",             # mov eax,[esp+8]
    0x00012123: "85c0",                 # test eax,eax
    0x00012125: "7409",                 # je 0x12130
    0x00012127: "8d542404",             # lea edx,[esp+4]
    0x00012130: "8bc6",                 # mov eax,esi
    0x00012132: "5e",                   # pop esi
    0x00012133: "83c408",               # add esp,8
    0x00012136: "c3",                   # ret
    0x0008F690: "69c00d661900",        # imul eax,eax,0x19660d
    0x0008F696: "055ff36e3c",          # add eax,0x3c6ef35f
    0x0008F69B: "c1e815",              # shr eax,21 (logical)
    0x0008F69E: "c3",                   # ret
}
DIRECT_EDGES = {0x0001212B: (0xE8, 0x0008F6E0)}


def verify(data: bytes) -> dict:
    digest = hashlib.sha256(data).hexdigest()
    if digest != XBE_SHA256:
        raise ValueError(f"XBE hash mismatch: {digest}")
    layout = sections(data)
    mutations = 0
    for va, (size, expected_digest) in BODIES.items():
        off = file_offset(layout, va, size)
        raw = data[off:off + size]
        if hashlib.sha256(raw).hexdigest() != expected_digest:
            raise ValueError(f"Original body mismatch at {va:#010x}")
        for i in range(size):
            bad = bytearray(raw)
            bad[i] ^= 1
            if hashlib.sha256(bad).hexdigest() == expected_digest:
                raise AssertionError("Mutated body accepted")
            mutations += 1
    for va, expected_hex in WINDOWS.items():
        expected = bytes.fromhex(expected_hex)
        off = file_offset(layout, va, len(expected))
        if data[off:off + len(expected)] != expected:
            raise ValueError(f"Instruction/operand mismatch at {va:#010x}")
        for i in range(len(expected)):
            bad = bytearray(expected)
            bad[i] ^= 1
            if bad == data[off:off + len(expected)]:
                raise AssertionError("Mutated operand accepted")
            mutations += 1
    for va, (opcode, target) in DIRECT_EDGES.items():
        off = file_offset(layout, va, 5)
        raw = data[off:off + 5]
        actual = (va + 5 + struct.unpack_from('<i', raw, 1)[0]) & 0xffffffff
        if raw[0] != opcode or actual != target:
            raise ValueError(f"Original transfer mismatch at {va:#010x}")
        for i in range(5):
            bad = bytearray(raw)
            bad[i] ^= 1
            new_target = (va + 5 + struct.unpack_from('<i', bad, 1)[0]) & 0xffffffff
            if bad[0] == opcode and new_target == target:
                raise AssertionError("Mutated transfer accepted")
            mutations += 1
    return {"xbe_sha256": digest, "body_hashes": len(BODIES),
            "opcode_windows": len(WINDOWS), "direct_edges": len(DIRECT_EDGES),
            "negative_controls": mutations}


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe', type=Path, required=True)
    args = p.parse_args()
    result = verify(args.xbe.read_bytes())
    print("PASS: original retail XBE;", result)
    print("ABI_UNVERIFIED: native entry/exit register/stack contract, guest stack aliasing, linkage, game behavior")
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
