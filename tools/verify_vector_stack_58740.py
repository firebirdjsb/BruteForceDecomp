#!/usr/bin/env python3
"""Original-XBE evidence for the unresolved 0x00058740 vector stack output.

Usage: python3 tools/verify_vector_stack_58740.py /path/to/default.xbe

Checks only specific instruction encodings and direct call targets.
Does NOT supply a C replacement for stack0xffffffd8, determine the
indirect-call ABI, or certify reconstructed C runtime behavior.
Do not commit or distribute the copyrighted executable.
"""
from __future__ import annotations

import hashlib
import struct
import sys
from pathlib import Path

from verify_seh_stack_frames import EXPECTED_SHA256, file_offset

# Each entry is (guest virtual address, expected original x86 bytes).
SITES = (
    (0x00058740, "8b470883ec2453"),  # local allocation and saved EBX
    (0x0005874F, "8d54241c5232dbff5034"),  # pointer to indirect call
    (0x00058759, "8d44241050"),  # pointer to next direct-call output
    (0x0005875E, "8d442420e8c93dffff"),  # input pointer, call 4c530
    (0x0005876C, "83c404ff5240"),  # caller adjustment, indirect call
    (0x00058772, "8d4c240483c02451e8013dffff"),  # lea ecx,[esp+4]; push; call
    (0x0005877F, "d9442410d84c241c83c404d9442404d84c2410"),
    (0x0004C480, "83ec08d94608"),  # output routine entry
    (0x0004C486, "8b4c240c"),  # output pointer loaded from stack
    (0x0004C4A5, "d9118941048b442404894108"),  # writes 3 DWORDs
    (0x0004C50E, "8ac283c408c3"),  # return with no argument cleanup
    (0x0004C516, "c7410800000000c7410400000000c70100000000"),  # zero path
    (0x0004C52A, "32c083c408c3"),  # alternate return
    (0x0004C530, "83ec088b4c240c"),  # preceding vector routine
    (0x0004C5BA, "83c408c3"),
    (0x0004C5D6, "83c408c3"),
)
CALLS = ((0x00058762, 0x0004C530), (0x0005877A, 0x0004C480))


def verify(path: Path) -> None:
    data = path.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_SHA256:
        raise ValueError(f"unexpected XBE SHA-256 {digest}")
    if data[:4] != b"XBEH":
        raise ValueError("not an XBEH executable")
    for address, encoded in SITES:
        expected = bytes.fromhex(encoded)
        pos = file_offset(data, address)
        if data[pos:pos + len(expected)] != expected:
            raise ValueError(f"{address:#010x}: original instruction bytes differ")
    for address, target in CALLS:
        pos = file_offset(data, address)
        if data[pos] != 0xE8:
            raise ValueError(f"{address:#010x}: not CALL rel32")
        displacement = struct.unpack_from("<i", data, pos + 1)[0]
        if address + 5 + displacement != target:
            raise ValueError(f"{address:#010x}: unexpected call destination")
    print("PASS: 0x00058740 passes stack output address via LEA [ESP+4]")
    print("PASS: 0x0004C480 reads the output pointer and writes three DWORDs")
    print("PASS: direct calls to 0x0004C530 and 0x0004C480")
    print("UNRESOLVED: 0x00058740 synthetic C stack symbol, indirect-call ABI,")
    print("            exact host storage mapping and runtime equivalence")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        raise SystemExit("usage: verify_vector_stack_58740.py /path/to/default.xbe")
    try:
        verify(Path(sys.argv[1]))
    except (OSError, ValueError, struct.error) as exc:
        raise SystemExit(f"FAIL: {exc}") from exc
