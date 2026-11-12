#!/usr/bin/env python3
"""Private original-XBE instruction evidence for two guest32 record drafts.

Only full body SHA, exact selected operands, direct E8/E9 destinations, and
mutation controls are verified. This does not verify native C++/Xbox ABI,
callee memory effects, or full-game behavior. Never add the XBE to Git.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

BODIES = {
    0x00012540: (0x16, "17ecdf624151aa6a24020748fa3d463dcb4eb707ea1e78cb6d33999629ee9522"),
    0x0001d470: (0x4a, "9d9a8eba1ff910609abde98c000b99e3ae58251e5ffedcee9e1768d7710c511e"),
    0x0008f6e0: (0x3d, "c83564b5bd0c213ea1598c92023cbe67820b89831fc3f077ebe732522791c80e"),
}
# Exact instruction windows, section-backed; starts are instruction boundaries.
WINDOWS = {
    0x00012540: "8d5110",       # lea edx,[ecx+0x10]
    0x00012543: "c701684f3a00", # mov [ecx],0x003a4f68
    0x00012549: "8b4204",       # mov eax,[edx+4]
    0x0001254c: "85c0",         # test eax,eax
    0x0001254e: "7405",         # je 0x12555
    0x00012555: "c3",           # ret
    0x0001d470: "8b4658",       # mov eax,[esi+0x58]
    0x0001d473: "85c0",         # test eax,eax
    0x0001d475: "8d5654",       # lea edx,[esi+0x54]
    0x0001d478: "7405",
    0x0001d47f: "8d5638",
    0x0001d482: "c7461c644f3a00",  # mov [esi+0x1c],0x003a4f64
    0x0001d489: "8b4204",
    0x0001d48c: "85c0",
    0x0001d48e: "7405",
    0x0001d495: "8b4628",
    0x0001d498: "85c0",
    0x0001d49a: "8d5624",
    0x0001d49d: "7405",
    0x0001d4a4: "8d5610",
    0x0001d4a7: "c706684f3a00",
    0x0001d4ad: "8b4204",
    0x0001d4b0: "85c0",
    0x0001d4b2: "7405",
    0x0001d4b9: "c3",
}
# The last site in each function is a tail transfer, *not* a CALL.
EDGES = {
    0x00012550: (0xE9, 0x0008f6e0),
    0x0001d47a: (0xE8, 0x0008f6e0),
    0x0001d490: (0xE8, 0x0008f6e0),
    0x0001d49f: (0xE8, 0x0008f6e0),
    0x0001d4b4: (0xE9, 0x0008f6e0),
}


def check(data: bytes) -> tuple[int, int, int]:
    actual = hashlib.sha256(data).hexdigest()
    if actual != XBE_SHA256:
        raise ValueError(f"XBE authentication failed: {actual}")
    layout = sections(data)
    mutation_count = 0
    for va, (size, expected_hash) in BODIES.items():
        off = file_offset(layout, va, size)
        raw = data[off:off + size]
        if hashlib.sha256(raw).hexdigest() != expected_hash:
            raise ValueError(f"Original body digest mismatch at 0x{va:08x}")
        for i in range(size):
            changed = bytearray(raw)
            changed[i] ^= 1
            if hashlib.sha256(changed).hexdigest() == expected_hash:
                raise AssertionError(f"Mutation incorrectly accepted: 0x{va:08x}+{i}")
            mutation_count += 1
    for va, expected in WINDOWS.items():
        raw = bytes.fromhex(expected)
        off = file_offset(layout, va, len(raw))
        if data[off:off + len(raw)] != raw:
            raise ValueError(f"Unexpected x86 operand/window at 0x{va:08x}")
        for i in range(len(raw)):
            changed = bytearray(raw)
            changed[i] ^= 1
            if changed == data[off:off + len(raw)]:
                raise AssertionError("Failed instruction mutation control")
            mutation_count += 1
    for site, (opcode, expected) in EDGES.items():
        off = file_offset(layout, site, 5)
        raw = data[off:off+5]
        if raw[0] != opcode:
            raise ValueError(f"Wrong x86 direct transfer kind at 0x{site:08x}")
        target = (site + 5 + struct.unpack_from('<i', raw, 1)[0]) & 0xffffffff
        if target != expected:
            raise ValueError(f"Wrong direct transfer at 0x{site:08x}: 0x{target:08x}")
        for i in range(5):
            changed = bytearray(raw)
            changed[i] ^= 1
            if changed[0] == opcode and (site + 5 + struct.unpack_from('<i', changed, 1)[0]) & 0xffffffff == expected:
                raise AssertionError("Failed transfer target negative control")
            mutation_count += 1
    return len(BODIES), len(EDGES), mutation_count


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe', required=True, type=Path)
    args = p.parse_args()
    bodies, edges, negatives = check(args.xbe.read_bytes())
    print(f"PASS: authenticated XBE; {bodies} complete body hashes; {len(WINDOWS)} operand windows; {edges} original direct transfers; {negatives} mutation controls")
    print("ABI_UNVERIFIED: host entry signatures, guest-memory translation, callee side effects, native linkage, game behavior")
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
