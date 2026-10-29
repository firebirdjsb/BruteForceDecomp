#!/usr/bin/env python3
"""Read-only original-XBE check for 0x00155840 construction and x87 frame writes."""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
INSTRUCTIONS = {
    0x0022D3A3: "c7 46 48 ec ad 39 00",
    0x0014A02C: "c7 46 48 ec ad 39 00",
    0x00162ED4: "c7 46 48 ec ad 39 00",
    0x00059A50: "8b 01 ff 60 04",
    0x0010F890: "8d 41 b8 c3",
    0x00155BF8: "d9 45 d4",
    0x00155BFB: "d8 4d fc",
    0x00155BFE: "d8 45 98",
    0x00155C01: "d9 5d 98",
    0x00155C04: "d9 45 d8",
    0x00155C07: "d8 4d fc",
    0x00155C0A: "d8 45 9c",
    0x00155C0D: "d9 5d 9c",
    0x00155C10: "d9 45 dc",
    0x00155C13: "d8 4d fc",
    0x00155C16: "d8 45 a0",
    0x00155C19: "d9 5d a0",
}

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path, help="Private, uncommitted original default.xbe")
    args = parser.parse_args()
    image = args.xbe.read_bytes()
    if hashlib.sha256(image).hexdigest() != XBE_SHA:
        parser.error("Original XBE SHA-256 mismatch")
    def u32(offset):
        return struct.unpack_from("<I", image, offset)[0]
    base = u32(0x104)
    count = u32(0x11c)
    table_off = u32(0x120) - base
    sections = []
    for i in range(count):
        va, virtual_size, raw_off, raw_size = struct.unpack_from(
            "<4I", image, table_off + 56*i + 4
        )
        sections.append((va, raw_off, raw_size))
    def read_va(addr, size):
        for va, raw_off, raw_size in sections:
            offset = addr - va
            if 0 <= offset and offset + size <= raw_size:
                return image[raw_off + offset:raw_off + offset + size]
        raise ValueError(f"Unmapped original VA 0x{addr:08X}")
    for va, expected in INSTRUCTIONS.items():
        raw = bytes.fromhex(expected)
        if read_va(va, len(raw)) != raw:
            raise ValueError(f"Original instruction changed at 0x{va:08X}")
    def dword(addr):
        return struct.unpack("<I", read_va(addr, 4))[0]
    if dword(0x0039ADEC+0x14) != 0x00059A50:
        raise ValueError("Concrete vtable method entry mismatch")
    if dword(0x0039ADEC+4) != 0x0010F890:
        raise ValueError("Concrete thunk destination mismatch")
    needle = struct.pack("<I", 0x00155840)
    slots = []
    for va, raw_off, raw_size in sections:
        for i in range(raw_size - 3):
            if image[raw_off+i:raw_off+i+4] == needle:
                slots.append(va+i)
    print(f"PASS: {len(INSTRUCTIONS)} XBE instruction windows and concrete table chain")
    print(f"Found {len(slots)} original-image pointers to 0x00155840.")
    print("Pointers alone do not identify every runtime object or virtual target.")

if __name__ == "__main__":
    main()
