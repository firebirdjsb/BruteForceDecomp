#!/usr/bin/env python3
"""Verify two recovered recursive-call contracts against the user's original XBE.

Evidence only: checks source identity, complete two body SHA256s, original
push/store/call instruction windows, and exact recursive CALL targets.
It does NOT validate Xbox ABI integration or native-PC runtime.
"""
from __future__ import annotations
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODIES = (
    (0x0004e150, 257, "0EF2072CD3DB1F1C9CA772FCD776609B5488FB8AA5E4454465B359D504AACA54"),
    (0x00050980, 257, "C12F9E2C002541B33746FFB69322F86EE74A02944DC9D96E09B6365B5738AD63"),
)
WINDOWS = (
    (0x0004e1ba, "56517d128bcc8901518bc48918e884ffffff"),
    (0x0004e1d0, "8bc48938518bc48928e872ffffff"),
    (0x000509ea, "56517d128bcc8901518bc48918e884ffffff"),
    (0x00050a00, "8bc48938518bc48928e872ffffff"),
)
CALLS = (
    (0x0004e1c7, 0x0004e150), (0x0004e1d9, 0x0004e150),
    (0x000509f7, 0x00050980), (0x00050a09, 0x00050980),
)

def verify(raw: bytes) -> None:
    if raw[:4] != b"XBEH" or hashlib.sha256(raw).hexdigest().upper() != XBE_SHA256:
        raise ValueError("Not the original retail XBE")
    image_base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11c)
    table = table_va - image_base
    if not (1 <= count <= 256 and 0 <= table <= len(raw) - count * 56):
        raise ValueError("Invalid XBE section table")
    sections = [struct.unpack_from("<6I", raw, table+i*56) for i in range(count)]

    def va_bytes(va: int, length: int) -> bytes:
        for _flags, base, virtual_size, offset, raw_size, _name in sections:
            delta = va - base
            if 0 <= delta and delta + length <= min(virtual_size, raw_size):
                start = offset + delta
                if start + length <= len(raw):
                    return raw[start:start+length]
        raise ValueError(f"Unmapped VA 0x{va:08X}")

    for entry, length, expected_hash in BODIES:
        if hashlib.sha256(va_bytes(entry, length)).hexdigest().upper() != expected_hash:
            raise ValueError(f"Original function-body digest mismatch: 0x{entry:08X}")
    for va, encoded in WINDOWS:
        if va_bytes(va, len(encoded)//2) != bytes.fromhex(encoded):
            raise ValueError(f"Original argument-setup bytes mismatch: 0x{va:08X}")
    for va, expected_destination in CALLS:
        instruction = va_bytes(va, 5)
        if instruction[0] != 0xe8:
            raise ValueError(f"Expected near relative call: 0x{va:08X}")
        displacement, = struct.unpack_from("<i", instruction, 1)
        if va + 5 + displacement != expected_destination:
            raise ValueError(f"Wrong recursive target: 0x{va:08X}")
    print("PASS: original XBE; 2 full bodies, 4 argument windows and 4 self-call targets.")
    print("C11 parsing, ABI linkage and 1:1 behavior remain distinct requirements.")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
