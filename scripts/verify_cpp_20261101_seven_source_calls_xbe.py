#!/usr/bin/env python3
"""Original Brute Force E8/RET/register evidence, not host or Xbox ABI equivalence."""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Original caller, E8 site, original target; no inferred C++ calling convention.
EDGES = [
  [
    1001456,
    1001477,
    1071168
  ],
  [
    1001456,
    1001494,
    981936
  ],
  [
    1001456,
    1001503,
    981824
  ],
  [
    1014048,
    1014067,
    1056976
  ],
  [
    1014048,
    1014079,
    566368
  ],
  [
    1014048,
    1014104,
    1099728
  ],
  [
    1039168,
    1039210,
    1039264
  ],
  [
    1039168,
    1039221,
    1096768
  ],
  [
    1090112,
    1090152,
    1091536
  ],
  [
    1090112,
    1090165,
    1091536
  ],
  [
    1113728,
    1113779,
    762176
  ],
  [
    1113728,
    1113788,
    762176
  ],
  [
    1907808,
    1907881,
    1096768
  ],
  [
    1907808,
    1907898,
    1096768
  ],
  [
    1967888,
    1967933,
    1914160
  ],
  [
    1967888,
    1967944,
    1096768
  ]
]
# Narrow original producer, destination and RET windows only.
WINDOWS = [
  [
    1090149,
    "8b7e64"
  ],
  [
    1090162,
    "8d7e64"
  ],
  [
    1090159,
    "c20400"
  ],
  [
    1090172,
    "c20400"
  ],
  [
    1907869,
    "8d8514010000"
  ],
  [
    1907875,
    "8d8b14010000"
  ],
  [
    1907886,
    "8d8524010000"
  ],
  [
    1907892,
    "8d8b24010000"
  ],
  [
    1907908,
    "c20400"
  ],
  [
    1967927,
    "8d4610"
  ],
  [
    1967930,
    "8d4f10"
  ],
  [
    1967938,
    "8d4620"
  ],
  [
    1967941,
    "8d4f20"
  ],
  [
    1967964,
    "c3"
  ],
  [
    1039215,
    "8d4518"
  ],
  [
    1039218,
    "8d4b18"
  ],
  [
    1039249,
    "c20400"
  ],
  [
    1113777,
    "33c0"
  ],
  [
    1113786,
    "8bc1"
  ]
]

def destination(site, encoded):
    if len(encoded) != 5 or encoded[0] != 0xe8:
        raise ValueError("not a direct E8 CALL")
    return (site + 5 + struct.unpack_from("<i", encoded, 1)[0]) & 0xffffffff

def sections(data):
    if data[:4] != b"XBEH" or len(data) < 0x124:
        raise ValueError("invalid XBE")
    base, = struct.unpack_from("<I", data, 0x104)
    count, = struct.unpack_from("<I", data, 0x11c)
    ptr, = struct.unpack_from("<I", data, 0x120)
    if base != 0x10000 or not 1 <= count <= 64 or ptr < base:
        raise ValueError("unexpected XBE section layout")
    out = []
    for i in range(count):
        pos = ptr - base + i * 0x38
        if pos + 0x38 > len(data):
            raise ValueError("truncated section header")
        _, va, vsize, raw, size = struct.unpack_from("<5I", data, pos)
        if raw + size > len(data):
            raise ValueError("section outside XBE")
        out.append((va, va + min(vsize, size), raw))
    return out

def at(data, layout, addr, size):
    for lo, hi, raw in layout:
        if lo <= addr and addr + size <= hi:
            return data[raw + addr - lo:raw + addr - lo + size]
    raise ValueError("unmapped XBE VA: %#x" % addr)

def self_test():
    seen = set()
    for caller, site, callee in EDGES:
        if site in seen or not caller <= site < caller + 0x1000:
            raise AssertionError("invalid or duplicate fixture")
        seen.add(site)
        raw = b"\xe8" + struct.pack("<i", callee - site - 5)
        assert destination(site, raw) == callee
        for byte in range(1, 5):
            mutant = bytearray(raw)
            mutant[byte] ^= 1
            assert destination(site, mutant) != callee
    assert len(EDGES) == 16 and len(WINDOWS) == 19
    return 4 * len(EDGES)

def verify(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("retail XBE SHA-256 mismatch")
    layout = sections(data)
    for caller, site, callee in EDGES:
        if destination(site, at(data, layout, site, 5)) != callee:
            raise ValueError("original CALL mismatch at %#x" % site)
    for site, hexbytes in WINDOWS:
        if at(data, layout, site, len(bytes.fromhex(hexbytes))) != bytes.fromhex(hexbytes):
            raise ValueError("original instruction mismatch at %#x" % site)
    changed = bytearray(data)
    site = EDGES[0][1]
    for lo, hi, raw in layout:
        if lo <= site < hi:
            changed[raw + site - lo + 1] ^= 1
            break
    else:
        raise ValueError("negative-control site unmapped")
    assert destination(site, at(changed, layout, site, 5)) != EDGES[0][2]

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--self-test", action="store_true")
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    if args.self_test:
        print("PASS: %d direct-call displacement mutation controls" % self_test())
    if args.xbe:
        verify(args.xbe.read_bytes())
        print("PASS: authenticated retail XBE, %d E8 edges, %d windows, modified CALL rejected" % (len(EDGES), len(WINDOWS)))
    if not args.self_test and not args.xbe:
        parser.error("use --self-test and/or --xbe")

if __name__ == "__main__":
    main()
