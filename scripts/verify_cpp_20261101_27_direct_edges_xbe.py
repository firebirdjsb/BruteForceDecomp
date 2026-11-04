#!/usr/bin/env python3
"""Original Brute Force XBE E8 destinations; syntax declarations != Xbox ABI."""
from __future__ import annotations
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# (caller entry, E8 site, original callee entry, exact five-byte CALL encoding)
EDGES = (
    (0x000E45F0, 0x000E45FE, 0x000E6CC0, "e8bd260000"),
    (0x000EBB70, 0x000EBB82, 0x00059A80, "e8f9def6ff"),
    (0x000EC230, 0x000EC242, 0x00059A80, "e839d8f6ff"),
    (0x000EC510, 0x000EC523, 0x00059A80, "e858d5f6ff"),
    (0x000EFC40, 0x000EFC5D, 0x00103000, "e89e330100"),
    (0x000F0050, 0x000F007C, 0x0010C7D0, "e84fc70100"),
    (0x000F0270, 0x000F02CE, 0x00100F90, "e8bd0c0100"),
    (0x000F0A30, 0x000F0D08, 0x001039B0, "e8a32c0100"),
    (0x000F13C0, 0x000F13C7, 0x000FFB00, "e834e70000"),
    (0x000F1990, 0x000F1A03, 0x00103000, "e8f8150100"),
    (0x000F2A30, 0x000F2AD1, 0x000EFAB0, "e8dacfffff"),
    (0x000F3FB0, 0x000F3FC1, 0x00103000, "e83af00000"),
    (0x000F4320, 0x000F4340, 0x0010C850, "e80b850100"),
    (0x000F5050, 0x000F5071, 0x001039B0, "e83ae90000"),
    (0x000F52F0, 0x000F530F, 0x00103000, "e8ecdc0000"),
    (0x000F55B0, 0x000F55B8, 0x00103000, "e843da0000"),
    (0x000F6890, 0x000F68BB, 0x0010C7D0, "e8105f0100"),
    (0x000F6890, 0x000F68C0, 0x000F6850, "e88bffffff"),
    (0x000F7610, 0x000F763F, 0x00100F90, "e84c990000"),
    (0x000F7670, 0x000F76BA, 0x00100F90, "e8d1980000"),
    (0x000F7ED0, 0x000F7EEB, 0x0010C850, "e860490100"),
    (0x000FB580, 0x000FB5C7, 0x00100F90, "e8c4590000"),
    (0x001001A0, 0x001001A4, 0x000FFB00, "e857f9ffff"),
    (0x00100D10, 0x00100D1C, 0x000FFB00, "e8dfedffff"),
    (0x001050A0, 0x001050A6, 0x00103000, "e855dfffff"),
    (0x001050A0, 0x001050D2, 0x00101C80, "e8a9cbffff"),
    (0x001050A0, 0x001050DB, 0x00101D30, "e850ccffff"),
)
# Narrow instruction windows; no claim of complete calling-convention recovery.
WINDOWS = (
    (0x000F68B2, "33d2"),       # XOR EDX,EDX
    (0x000F68B6, "0f94c2"),     # SETE DL
    (0x000F68B9, "8bc7"),       # MOV EAX,EDI
    (0x000F6851, "8b8eec0b0000"),  # MOV ECX,[ESI+0xBEC]
    (0x0010C7D0, "85d2"),       # TEST EDX,EDX
    (0x000F6886, "c3"),         # RET without immediate
    (0x000F688B, "c3"),         # RET without immediate
    (0x0010C84E, "c3"),         # RET without immediate
)

def destination(site, encoded):
    if len(encoded) != 5 or encoded[0] != 0xE8:
        raise ValueError("not an E8 near direct CALL")
    return (site + 5 + struct.unpack_from("<i", encoded, 1)[0]) & 0xffffffff

def sections(data):
    if len(data) < 0x124 or data[:4] != b"XBEH":
        raise ValueError("invalid XBE header")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11c)[0]
    table_va = struct.unpack_from("<I", data, 0x120)[0]
    if base != 0x10000 or not 1 <= count <= 64 or table_va < base:
        raise ValueError("unexpected retail XBE layout")
    result = []
    for i in range(count):
        pos = table_va - base + i * 0x38
        if pos + 0x38 > len(data):
            raise ValueError("truncated XBE section table")
        _, va, vsize, raw, size = struct.unpack_from("<5I", data, pos)
        if raw + size > len(data):
            raise ValueError("invalid raw section")
        result.append((va, va + min(vsize, size), raw))
    return result

def file_offset(layout, va, size):
    for lo, hi, raw in layout:
        if lo <= va and va + size <= hi:
            return raw + va - lo
    raise ValueError(f"unmapped original address {va:#x}")

def self_test():
    sites = set()
    for caller, site, callee, encoded in EDGES:
        if site in sites or not caller <= site < caller + 0x2000:
            raise ValueError("duplicate or invalid CALL site")
        sites.add(site)
        original = bytes.fromhex(encoded)
        if destination(site, original) != callee:
            raise ValueError("fixture destination mismatch")
        for i in range(1, 5):
            changed = bytearray(original)
            changed[i] ^= 1
            if destination(site, changed) == callee:
                raise ValueError("mutation not rejected")
    for site, encoded in WINDOWS:
        if not bytes.fromhex(encoded):
            raise ValueError(f"empty instruction fixture at {site:#x}")
    return len(EDGES) * 4

def verify_xbe(data, *, require_hash=True):
    digest = hashlib.sha256(data).hexdigest()
    if require_hash and digest != XBE_SHA256:
        raise ValueError(f"retail XBE hash mismatch: {digest}")
    layout = sections(data)
    for caller, site, callee, encoded in EDGES:
        start = file_offset(layout, site, 5)
        observed = data[start:start + 5]
        if observed != bytes.fromhex(encoded) or destination(site, observed) != callee:
            raise ValueError(f"CALL evidence mismatch at {site:#x}")
    for site, encoded in WINDOWS:
        expected = bytes.fromhex(encoded)
        start = file_offset(layout, site, len(expected))
        if data[start:start + len(expected)] != expected:
            raise ValueError(f"instruction evidence mismatch at {site:#x}")

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail XBE, never committed")
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    negatives = self_test()
    if args.xbe:
        data = args.xbe.read_bytes()
        verify_xbe(data)
        if args.self_test:
            altered = bytearray(data)
            altered[file_offset(sections(data), EDGES[0][1], 5) + 1] ^= 1
            try:
                verify_xbe(bytes(altered), require_hash=False)
            except ValueError:
                pass
            else:
                raise AssertionError("modified-XBE negative control not rejected")
        print(f"PASS: authenticated XBE, {len(EDGES)} original E8 edges, {len(WINDOWS)} windows")
    if args.self_test:
        print(f"PASS: {negatives} displacement negatives and fixture validation")
    if not args.xbe and not args.self_test:
        parser.error("specify --self-test and/or --xbe")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
