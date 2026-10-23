#!/usr/bin/env python3
"""Verify five C11 repair evidence sites in the local, original Brute Force XBE.

Checks only original body identity, scalar instruction windows and a jump table.
This is not an ABI, runtime, or byte-identical C rebuild check. No game bytes are
written or uploaded. See docs/C11_SCALAR_DISPATCH_REPAIRS_2026-10-23.md.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
# All five Ghidra bodies have one contiguous range. Sizes are original bytes.
FUNCTIONS = (
    (0x00027490, 176, "046191D73265E5050B743C7B2303C56EDD1B8F986D3E61C2226484C79AA78F75"),
    (0x000279D0, 1025, "36C296C21B9F455A2BAEF4F56A332D0E3C1106C3359F875C2D418016ED5C8476"),
    (0x000339C0, 191, "64931A14C63F1A1B1E36135CBF137515C284A96D3A61F34EB06F00BEBFAD94D5"),
    (0x002C3CF0, 148, "28957EF453601522FA48B9AAADF33586695CB61BE1F7C588ED244EDFB460AA4F"),
    (0x002C68A0, 347, "9126D1CF6B41B1D9E0B3AF8CA89B1F166506674D5B63A3630CF49297BA48FB39"),
)
# Focused x87 operand-order/f32-store and RSQRTSS/MOVSS evidence, not full bodies.
OPCODES = (
    (0x000274C3, "d9442410d84c2410d9442408d84c2408dec1d95c2404"),
    (0x000274D9, "f30f52442404f30f11442400"),
    (0x00033A15, "d9442410d84c2410d944240cd84c240cdec1d9442408d84c2408dec1d95c2404"),
    (0x00033A35, "f30f52442404f30f11442400"),
    (0x002C3CF7, "d9403cd94038d9c0d8c9d9c2d8cbdec1d95c2400"),
    (0x002C3D28, "8b44240089442408f30f52442408f30f11442404"),
    (0x002C68A7, "d94008d94004d900d9c0d8c9d9c2d8cbdec1d9c3d8ccdec1d95c2404"),
    (0x002C68DE, "8b44240489442408f30f52442408f30f11442400"),
    # Both unsigned bounds checks and the 4-byte indexed indirect jump.
    (0x000279FD, "83f804"), (0x00027A04, "0f87b9030000"),
    (0x00027A13, "ff2485d47d0200"),
    (0x00027BAD, "83f8040f8659feffff"),
)
TABLE_VA = 0x00027DD4
TABLE_DESTINATIONS = (0x00027BC4, 0x00027A1A, 0x00027CEA, 0x00027D49, 0x00027D9F)


def verify(raw: bytes) -> None:
    if hashlib.sha256(raw).hexdigest().upper() != XBE_SHA256:
        raise ValueError("Wrong input: XBE SHA-256 differs from original")
    if raw[:4] != b"XBEH":
        raise ValueError("Not an XBE header")
    # XBE header: image base at file +0x104; section count/table VA at +0x11c.
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11C)
    table = table_va - base
    # Each section header is 56 bytes; read its first six 32-bit fields.
    if not (0 < count <= 256 and 0 <= table and table + count * 56 <= len(raw)):
        raise ValueError("Invalid section header table")
    sections = [struct.unpack_from("<6I", raw, table + i * 56) for i in range(count)]

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
        expected = bytes.fromhex(opcode)
        if source_slice(va, len(expected)) != expected:
            raise ValueError(f"Original instruction mismatch: 0x{va:08X}")
    # Jump table lies outside the recorded function body; verify it separately.
    actual = struct.unpack("<5I", source_slice(TABLE_VA, 5 * 4))
    if actual != TABLE_DESTINATIONS:
        raise ValueError("Original five-entry dispatch table mismatch")
    print(f"Verified XBE SHA-256, {len(FUNCTIONS)} function bodies, "
          f"{len(OPCODES)} instruction windows and five jump-table destinations.")
    print("C11 syntax, ABI compatibility and 1:1 behavior are NOT established.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True,
                        help="Local user-owned retail default.xbe; never uploaded")
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
