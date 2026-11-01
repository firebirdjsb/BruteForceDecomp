#!/usr/bin/env python3
"""Hash-pinned Xbox CALL/output evidence; NOT a complete C++ ABI or behavior test.

No XBE is stored in this repository. --self-test uses synthetic byte mutations.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import struct

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE = 0x001013D0
CALLS = (0x0010151C, 0x0010159C)
# Narrow, instruction-aligned original retail XBE windows; no copyrighted binary embedded.
WINDOWS = {
    0x00101510: "83ec208d442410508b442428e8affeffff",
    0x00101590: "83ec108d442400508b442418e82ffeffff",
    0x00101521: "db442410",  # signed FILD DWORD at first caller
    0x00101543: "db442414",  # signed FILD second DWORD
    0x001014EB: "8b4424288b5424188bc889395f8951048b54241c5e8969085d89510c5b83c414",
    0x0010150B: "c20400",  # callee RET 4
    0x00101582: "83c420c20800",  # first caller RET 8
    0x001015A1: "8b4c2404b824000000894424143bc8",  # second caller signed compare
}


def sections(data: bytes) -> list[tuple[int, int, int]]:
    if len(data) < 0x124 or data[:4] != b"XBEH":
        raise ValueError("not an XBE header")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11C)[0]
    table = struct.unpack_from("<I", data, 0x120)[0] - base
    if count > 128 or table < 0 or table + count * 0x38 > len(data):
        raise ValueError("invalid XBE section table")
    result = []
    for index in range(count):
        _, va, _, raw, raw_size = struct.unpack_from("<IIIII", data, table + index * 0x38)
        if raw + raw_size > len(data):
            raise ValueError("invalid XBE raw section bounds")
        result.append((va, va + raw_size, raw))
    return result


def offset_for(address: int, section_table: list[tuple[int, int, int]], size: int) -> int:
    for start, end, raw in section_table:
        if start <= address and address + size <= end:
            return raw + address - start
    raise ValueError(f"unmapped instruction address {address:08x}")


def verify_windows(read_at) -> None:
    for address, hex_bytes in WINDOWS.items():
        expected = bytes.fromhex(hex_bytes)
        if read_at(address, len(expected)) != expected:
            raise ValueError(f"XBE instruction mismatch at {address:08x}")
    for address in CALLS:
        raw = read_at(address, 5)
        if raw[0] != 0xE8 or address + 5 + struct.unpack_from("<i", raw, 1)[0] != CALLEE:
            raise ValueError(f"XBE direct CALL target mismatch at {address:08x}")


def verify_xbe(path: Path) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("retail XBE SHA-256 mismatch")
    table = sections(data)
    verify_windows(lambda address, size: data[offset_for(address, table, size):
                                              offset_for(address, table, size) + size])


def self_test() -> int:
    # Synthetic instruction map only. Each altered byte must be rejected.
    fixture = {address: bytes.fromhex(value) for address, value in WINDOWS.items()}

    def read_at(address, size):
        for start, raw in fixture.items():
            if start <= address and address + size <= start + len(raw):
                return raw[address - start:address - start + size]
        raise ValueError("unmapped fixture")

    verify_windows(read_at)
    mutations = 0
    for address, raw in list(fixture.items()):
        for index in range(len(raw)):
            corrupted = bytearray(raw)
            corrupted[index] ^= 1
            fixture[address] = bytes(corrupted)
            try:
                verify_windows(read_at)
            except ValueError:
                mutations += 1
            else:
                raise AssertionError(f"mutation accepted at {address:08x}+{index}")
        fixture[address] = raw
    # An incorrect relative CALL displacement is independently rejected.
    for address in CALLS:
        call = bytearray(read_at(address, 5))
        call[1] ^= 1
        assert address + 5 + struct.unpack_from("<i", call, 1)[0] != CALLEE
    return mutations + len(CALLS)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--self-test", action="store_true")
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    if not args.self_test and args.xbe is None:
        parser.error("specify --self-test or --xbe PATH")
    if args.self_test:
        print(f"PASS: {self_test()} synthetic mutation controls")
    if args.xbe:
        verify_xbe(args.xbe)
        print(f"PASS: authenticated XBE, {len(WINDOWS)} instruction windows, "
              f"{len(CALLS)} direct CALL destinations; ABI_UNVERIFIED")


if __name__ == "__main__":
    main()
