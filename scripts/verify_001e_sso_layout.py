#!/usr/bin/env python3
"""Verify selected 0x001e1f40 SSO-layout bytes against the retail XBE.

This checks XBE provenance, file-backed address mapping, the grouped body
digest/ranges, and a narrow set of record/stack initialization, selection,
stride, helper-call, and cleanup windows. It does not verify C behavior or ABI.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path


XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "5dde41611cf58912127f7ebb5da80f5736ec6c8f424e8fa79dfe8dd9fd5992f3"
BODY_LENGTH = 946

# File-backed bytes exported for the grouped 0x001e1f40 body.
BODY_RANGES = (
    (0x001E1B30, 0xA4),
    (0x001E1BD7, 0x30),
    (0x001E1C10, 0xAD),
    (0x001E1CC0, 0x31),
    (0x001E1CF4, 0x08),
    (0x001E1DC0, 0xAA),
    (0x001E1E6D, 0x30),
    (0x001E1EA0, 0x86),
    (0x001E1F29, 0x08),
    (0x001E1F40, 0x90),
)

# Small instruction windows directly supporting the record geometry and
# stack-object initialization/selection/cleanup.  The bytes are x86 facts.
WINDOWS = (
    (0x001E1B48, "896c2428895c2424885c2414", "28-byte local field initialization"),
    (0x001E1B6A, "8d4c245c896c2474895c2470885c2460e871d9e3ff",
     "iteration object initialization and call to 0x0001f4f0"),
    (0x001E1BD7, "8b471433db3bc6896c2468895c2464885c245472048b37eb028bf7",
     "capacity-16 choice between DWORD at object+4 and inline address"),
    (0x001E1C51, "837c2430108b54241c73048d54241c",
     "stack-object capacity test and inline-address selection"),
    (0x001E1CC4, "83c71c8d4ffc3bc8", "0x1c record stride"),
    (0x001E1CDE, "837c2430105f5e720d8b54241452e827831000",
     "conditional cleanup of the persistent stack object"),
    (0x001E1DD8, "89742428895c2424885c2414",
     "second tail-entry local field initialization"),
    (0x001E1E6D, "8b471433db3bc58974244c895c2448885c243872048b37eb028bf7",
     "second loop capacity-16 pointer/inline choice"),
    (0x001E1E17, "e8d4d6e3ff", "call to 0x0001f4f0 helper family"),
    (0x001E1EE1, "396c24308b44241c73048d44241c",
     "second tail-entry stack-object pointer/inline selection"),
    (0x001E1F04, "83c71c8d4ffc3bc8", "second 0x1c record stride"),
    (0x001E1F12, "8b4424305f3bc55d720d8b54241452e8f2801000",
     "conditional cleanup before second tail-entry return"),
)


def xbe_sections(blob: bytes) -> tuple[int, list[tuple[int, int, int, int, int]]]:
    if len(blob) < 0x120:
        raise ValueError("file is too short to contain the XBE section table header")
    image_base, = struct.unpack_from("<I", blob, 0x104)
    section_count, section_table_va = struct.unpack_from("<II", blob, 0x11C)
    section_table_offset = section_table_va - image_base
    table_size = section_count * 56
    if section_count == 0 or section_table_offset < 0 or section_table_offset + table_size > len(blob):
        raise ValueError("XBE section table lies outside the file")

    sections = []
    for index in range(section_count):
        header_offset = section_table_offset + index * 56
        _flags, va, virtual_size, file_offset, file_size, _name = struct.unpack_from(
            "<6I", blob, header_offset
        )
        if file_offset + file_size > len(blob):
            raise ValueError(f"section {index} raw range lies outside the XBE")
        sections.append((va, virtual_size, file_offset, file_size, index))
    return image_base, sections


def read_va(blob: bytes, sections: list[tuple[int, int, int, int, int]],
            va: int, size: int) -> bytes:
    matches = []
    for section_va, virtual_size, file_offset, file_size, index in sections:
        available = min(virtual_size, file_size)
        if section_va <= va and va + size <= section_va + available:
            matches.append((file_offset + va - section_va, index))
    if len(matches) != 1:
        raise ValueError(f"VA 0x{va:08X}+0x{size:X} maps to {len(matches)} file-backed sections")
    offset, _section_index = matches[0]
    return blob[offset:offset + size]


def verify(xbe_path: Path) -> None:
    blob = xbe_path.read_bytes()
    digest = hashlib.sha256(blob).hexdigest()
    if digest != XBE_SHA256:
        raise ValueError(f"XBE SHA-256 mismatch: {digest}")

    image_base, sections = xbe_sections(blob)
    if sum(length for _start, length in BODY_RANGES) != BODY_LENGTH:
        raise ValueError("internal body-range length total is inconsistent")
    body = b"".join(read_va(blob, sections, start, length)
                     for start, length in BODY_RANGES)
    body_digest = hashlib.sha256(body).hexdigest()
    if len(body) != BODY_LENGTH or body_digest != BODY_SHA256:
        raise ValueError(
            f"grouped body mismatch: length={len(body)} sha256={body_digest}"
        )

    print(f"PASS XBE SHA-256 {digest}")
    print(f"PASS XBE section-map VA translation (image base 0x{image_base:08X})")
    print(f"PASS grouped body 0x001E1F40: {len(body)} bytes, SHA-256 {body_digest}")
    for va, hex_bytes, label in WINDOWS:
        expected = bytes.fromhex(hex_bytes)
        actual = read_va(blob, sections, va, len(expected))
        if actual != expected:
            raise ValueError(
                f"instruction-window mismatch at 0x{va:08X}: "
                f"got {actual.hex()}, expected {expected.hex()}"
            )
        print(f"PASS 0x{va:08X} {label}")
    print("Evidence verifies selected original bytes only; C behavior/ABI NOT verified.")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path, help="User-owned original default.xbe")
    args = parser.parse_args()
    try:
        verify(args.xbe)
    except (OSError, ValueError, struct.error) as error:
        parser.error(str(error))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
