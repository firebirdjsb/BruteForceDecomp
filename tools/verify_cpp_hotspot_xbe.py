#!/usr/bin/env python3
"""Recheck C++ cross-function hot spots against the user's original XBE.

Only exact x86 bytes and direct branch targets are authenticated here.
Never infer a native C++ signature, guest-memory translation, or object class.
The copyrighted XBE is an external CLI input; do not commit it.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SAMPLES = {
    0x002EA01D: "6a 01 ff 74 24 08 e8 a8 dc d7 ff 59 59 c3",
    0x00067CD0: "8b 44 24 04 50 ff 15 50 c6 3b 00 83 c4 04 c3",
    0x002EA018: "e9 d3 db d7 ff",
    0x00067BF0: "ff 25 54 c6 3b 00",
    0x0001700F: "6a 18",
    0x0001702C: "8b e8 83 c4 04",
    0x00015F40: "50",
    0x00023134: "5e b0 01 c3",
    0x00023138: "5e 32 c0 c3",
    0x000120F0: "83 ec 08 33 c9 89 4c 24 00 8b 50 08",
    # Complete original x86 allocator caller 0x00058D40.
    0x00058D40: "6a 10 e8 d6 12 29 00 33 c9 83 c4 04",
    0x00058D4C: "3b c1 74 1d 89 48 04 89 48 08 89 48 0c",
    0x00058D59: "8b 4c 24 04 89 01 8b 4c 24 08 8b d0",
    0x00058D6A: "c2 08 00",
    0x00058D6D: "8b 4c 24 04 33 c0 89 01 8b 4c 24 08 8b d0",
    0x00058D80: "c2 08 00",
    0x001AAAB1: "8b f9 8b f2",
    # Four further size-specific callers, all original return EAX consumers.
    0x00059D5F: "6a 38 e8 b7 02 29 00 83 c4 04 85 c0",
    0x0005B9E6: "6a 24 e8 30 e6 28 00 83 c4 04 3b c6",
    0x0005D222: "6a 44 8b f0 e8 f2 cd 28 00 83 c4 04",
    0x0005EE52: "6a 0c c7 44 24 08 00 00 00 00 e8 bc b1 28 00",

}
DIRECT_CALLS = {
    0x00017027: 0x002EA01D,
    0x0001B6B6: 0x002EA01D,
    0x00015F41: 0x002EA018,
    0x00058D42: 0x002EA01D,
    0x00058D65: 0x001AAA90,
    0x00058D7B: 0x001AAA90,
    0x00059D61: 0x002EA01D,
    0x0005B9E8: 0x002EA01D,
    0x0005D226: 0x002EA01D,
    0x0005EE5C: 0x002EA01D,

}
DIRECT_JUMPS = {0x002EA018: 0x00067BF0}


def check_bytes(data: bytes) -> None:
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_SHA256:
        raise ValueError(f"Wrong XBE digest: {digest}")
    if data[:4] != b"XBEH":
        raise ValueError("Not an XBE header")
    image_base = struct.unpack_from("<I", data, 0x104)[0]
    sections_va = struct.unpack_from("<I", data, 0x120)[0]
    section_count = struct.unpack_from("<I", data, 0x11C)[0]
    section_start = sections_va - image_base
    if section_count < 1 or section_count > 64:
        raise ValueError("Unexpected section count")
    spans = []
    for index in range(section_count):
        section = section_start + index * 56
        _, va, _, raw, raw_size = struct.unpack_from("<5I", data, section)
        if raw + raw_size > len(data):
            raise ValueError("Invalid raw XBE section")
        spans.append((va, raw, raw_size))

    def read(guest_va: int, n: int) -> bytes:
        for va, raw, size in spans:
            if va <= guest_va and guest_va + n <= va + size:
                return data[raw + guest_va - va: raw + guest_va - va + n]
        raise ValueError(f"VA not file-backed: 0x{guest_va:08X}")

    for va, expected in SAMPLES.items():
        needle = bytes.fromhex(expected)
        if read(va, len(needle)) != needle:
            raise ValueError(f"Instruction fingerprint failed at 0x{va:08X}")
    for sites, opcode in ((DIRECT_CALLS, 0xE8), (DIRECT_JUMPS, 0xE9)):
        for instruction_va, target in sites.items():
            op, displacement = struct.unpack("<Bi", read(instruction_va, 5))
            resolved = (instruction_va + 5 + displacement) & 0xFFFFFFFF
            if op != opcode or resolved != target:
                raise ValueError(f"Direct branch mismatch at 0x{instruction_va:08X}")
    print(f"Verified {len(SAMPLES)} original byte fingerprints and "
          f"{len(DIRECT_CALLS) + len(DIRECT_JUMPS)} direct branch targets.")
    print("The 0x002EA01D allocation wrapper leaves the indirect allocator EAX intact.")
    print("0x002EA018 is a tail jump to an import, not a direct call to 0x00237EC0.")
    print("No native host ABI, C++ class layout or playable code is established.")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    args = parser.parse_args()
    check_bytes(args.xbe.read_bytes())
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
