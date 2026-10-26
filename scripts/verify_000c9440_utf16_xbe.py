#!/usr/bin/env python3
"""Optional private original-XBE proof for two Xbox UTF-16 source contracts.

Requires user-owned original XBE; public CI never receives the game binary.
Does not prove guest memory mapping, virtual ABI, or native runtime.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODIES = {
    (0x000C9440, 359): "5B3ED6018FBCF52BD2CC33F82B683E1C49A3E82621920D5E6B4EC7443E871A0B",
    (0x002EA96C, 61): "35235FB5A6F350890633579106299EB2564E42C7F667B4A02839FBBA3E31CB39",
}
OPCODES = {
    0xC9440: "81ec00020000", 0xC9498: "6800010000",
    0xC94A9: "8d542418", 0xC94B3: "8d44241c",
    0xC94CC: "8d7c2410", 0xC94FD: "8d442410",
    0xC957E: "c20800", 0xC95A4: "c20800",
    0x2EA980: "668b02", 0x2EA983: "668907",
    0x2EA986: "4747", 0x2EA988: "4242",
    0x2EA99D: "f3ab", 0x2EA9A1: "66f3ab", 0x2EA9A8: "c3",
}

def mapped_bytes(data, va, length):
    if data[:4] != b"XBEH":
        raise ValueError("not an Xbox XBE")
    base, count, table = (struct.unpack_from("<I", data, offset)[0]
                          for offset in (0x104, 0x11C, 0x120))
    if not 1 <= count <= 128:
        raise ValueError("invalid section count")
    for i in range(count):
        p = table - base + i * 0x38
        if p < 0 or p + 20 > len(data):
            raise ValueError("invalid section table")
        _, addr, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, p)
        if addr <= va and va + length <= addr + min(virtual_size, raw_size):
            offset = raw + va - addr
            if offset + length > len(data):
                raise ValueError("invalid section bounds")
            return data[offset:offset + length]
    raise ValueError("unmapped guest VA " + hex(va))

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path, help="private user-provided XBE")
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError("original XBE SHA-256 mismatch")
    for (va, length), digest in BODIES.items():
        if hashlib.sha256(mapped_bytes(data, va, length)).hexdigest().upper() != digest:
            raise ValueError("original function-body SHA mismatch " + hex(va))
    for va, raw in OPCODES.items():
        expected = bytes.fromhex(raw)
        if mapped_bytes(data, va, len(expected)) != expected:
            raise ValueError("original opcode mismatch " + hex(va))
    print("PASS: SHA-pinned original XBE, 2 full bodies, 15 instruction windows")
    print("Guest pointer translation, callback ABI and native runtime remain unverified")

if __name__ == "__main__":
    main()
