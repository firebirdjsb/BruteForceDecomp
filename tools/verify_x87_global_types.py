#!/usr/bin/env python3
"""Verify narrow x87 type evidence against the user's local original XBE.

No XBE or game bytes are uploaded or copied to the repository.
Passing this check verifies cited instruction lanes, not whole-function semantics.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
FUNCTIONS = (
    (0x00022790, 1032, "0364BD7A70443AF264B4160D61090206B3F0D79744199DD3CF1D3D6631FB9E65"),
    (0x000DC510, 803, "7016E00C4E198173D11C4C91B58EFA1753B0E24A56226F189240ABF1F8D7C087"),
    (0x00372270, 358, "A5CD890106CCF4EEAE3F779FA3A20803299B681A9DFA1081A7D78CF760E2FFD0"),
)
# Small instruction windows verified independently, not full proprietary disassembly.
OPCODES = (
    (0x0002282B, "d9475c"), (0x000228A1, "d90548e74000"),
    (0x000228AE, "d80d48e74000"), (0x000DC5DA, "d81dc4d54000"),
    (0x000DC5E7, "d905c4d54000"), (0x000DC5ED, "8b0dc4d54000"),
    (0x000DC5F3, "d80dc4d54000"), (0x0037228A, "8b156cdf3700"),
    (0x00372294, "8b1584df3700"), (0x0037229E, "8b1568df3700"),
    (0x003722B4, "d9442408"), (0x003722FE, "8b0d78df3700"),
    (0x00372310, "8b0d7cdf3700"), (0x0037231A, "8b0d80df3700"),
    (0x0037236B, "d944240c"), (0x00372374, "d9442410"),
    (0x0037237D, "d84c2414"),
    (0x00372346, "c700300a2000"),
    (0x00372354, "894810"), (0x00372357, "894814"),
    (0x0037235A, "894818"), (0x00372361, "894820"),
    (0x00372371, "d95804"), (0x0037237A, "d95808"),
    (0x00372381, "d9580c"), (0x0037238E, "d9581c"),
    (0x0037239C, "c70118030800"),
    (0x003723C3, "c7410c3c040400"), (0x003723CD, "83c114"),
)
INITIAL_WORDS = (
    (0x003A551C, 0x42740000),  # 61.0f
    (0x003A53C0, 0x40100000),  # 2.25f
    (0x0040E748, 0x3F800000),  # 1.0f
    (0x0040D5C4, 0x3F000000),  # 0.5f
    (0x0037AF5C, 0x42800000),  # 64.0f
)


def verify(raw: bytes) -> None:
    if hashlib.sha256(raw).hexdigest().upper() != XBE_SHA256:
        raise ValueError("Wrong input: XBE SHA-256 differs from original")
    if raw[:4] != b"XBEH":
        raise ValueError("Not an XBE header")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11C)
    if count == 0 or count > 256:
        raise ValueError("Invalid section count")
    table = table_va - base
    if not (0 <= table and table + count * 56 <= len(raw)):
        raise ValueError("Section header table out of bounds")
    sections = [struct.unpack_from("<6I", raw, table + i * 56)
                for i in range(count)]

    def source_slice(va: int, size: int) -> bytes:
        for _flags, addr, virtual_size, offset, raw_size, _name in sections:
            delta = va - addr
            if 0 <= delta and delta + size <= min(virtual_size, raw_size):
                begin = offset + delta
                if 0 <= begin and begin + size <= len(raw):
                    return raw[begin:begin + size]
        raise ValueError(f"Unmapped or not file-backed original VA 0x{va:08X}")

    for entry, size, sha in FUNCTIONS:
        if hashlib.sha256(source_slice(entry, size)).hexdigest().upper() != sha:
            raise ValueError(f"Original function body mismatch: 0x{entry:08X}")
    for va, opcode in OPCODES:
        if source_slice(va, len(bytes.fromhex(opcode))) != bytes.fromhex(opcode):
            raise ValueError(f"Original instruction mismatch: 0x{va:08X}")
    for va, expected in INITIAL_WORDS:
        actual, = struct.unpack("<I", source_slice(va, 4))
        if actual != expected:
            raise ValueError(f"Original float initialization mismatch: 0x{va:08X}")
    print("Verified XBE SHA-256, 3 function bodies, 29 instruction windows,",
          "and 5 original f32 initializers.")
    print("C11 syntax, ABI compatibility and 1:1 behavior are NOT established.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True,
                        help="Local user-owned retail default.xbe; never uploaded")
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
