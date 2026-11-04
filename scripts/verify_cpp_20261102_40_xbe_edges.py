#!/usr/bin/env python3
"""Read-only XBE byte checks for forty direct calls from the exact-tree C++17 audit.

Establishes E8 destinations and selected RET opcodes only. Does NOT prove
C++ signatures, register/stack contracts, linkage, or game behavior.
The private original XBE is never written or committed. Caller and callee body SHA-256 labels were checked separately against the authenticated retail bytes at audit SHA e14f3b1c2c103e7af7b9dbc7a5cf8913b18d96f3; this script pins direct E8 and selected terminal RET sites only.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"

# (caller entry, original E8 instruction VA, target guest VA)
CALL_EDGES = (
    (0x000BB600, 0x000BB63C, 0x000CD9C0),
    (0x0010AD40, 0x0010AD7A, 0x000CD9C0),
    (0x0017E200, 0x0017E43B, 0x000A0C60),
    (0x001EDCC0, 0x001EDCF3, 0x001E97C0),
    (0x00232290, 0x00232445, 0x002334B0),
    (0x0027E5F0, 0x0027E5F7, 0x0027E580),
    (0x002E2D40, 0x002E2D54, 0x002E3EC0),
    (0x00038B00, 0x00038B07, 0x00038B70),
    (0x00074AD0, 0x00074AE7, 0x00075F00),
    (0x00075380, 0x00075387, 0x00075F00),
    (0x000A2090, 0x000A20A0, 0x000A2840),
    (0x000A7220, 0x000A7230, 0x000A7BA0),
    (0x000F4830, 0x000F484A, 0x001ED100),
    (0x00106600, 0x0010661A, 0x001ED100),
    (0x0010C280, 0x0010C2A3, 0x001E0DD0),
    (0x001209C0, 0x001209C1, 0x001209F0),
    (0x001353C0, 0x001353CA, 0x000A2840),
    (0x00144CA0, 0x00144CAF, 0x00144620),
    (0x00148100, 0x00148170, 0x000DE330),
    (0x0015FD80, 0x0015FD8D, 0x000A7BA0),
    (0x00170E50, 0x00170EC1, 0x0016FB60),
    (0x00174420, 0x00174427, 0x000A2840),
    (0x001744F0, 0x00174506, 0x000A2840),
    (0x0017C1E0, 0x0017C1EB, 0x0017BEB0),
    (0x0017D9B0, 0x0017D9BF, 0x001CC3B0),
    (0x001CACC0, 0x001CAD07, 0x001CCA00),
    (0x001CF810, 0x001CF823, 0x001D1D40),
    (0x001D0400, 0x001D0412, 0x001D1E30),
    (0x001D10B0, 0x001D10C3, 0x001D2D60),
    (0x001D1310, 0x001D1322, 0x001D2DE0),
    (0x001D71E0, 0x001D7201, 0x001D1D40),
    (0x001D81D0, 0x001D81EF, 0x001D1E30),
    (0x001D8FE0, 0x001D9001, 0x001D2D60),
    (0x001D92A0, 0x001D92BF, 0x001D2DE0),
    (0x001DCFE0, 0x001DCFE8, 0x000FDC90),
    (0x001F3840, 0x001F3848, 0x000D0AA0),
    (0x001F7430, 0x001F74B9, 0x000D0AA0),
    (0x00210840, 0x00210852, 0x00210740),
    (0x00225D20, 0x00225D27, 0x000A2840),
    (0x002481A0, 0x00248234, 0x001CCA00),
)

# These are specific return sites, not exhaustive callee exit inventories.
RET_WINDOWS = (
    (0x000CD9F6, bytes.fromhex("c3")),
    (0x000A0CE1, bytes.fromhex("c3")),
    (0x001E98B8, bytes.fromhex("c3")),
    (0x0023358A, bytes.fromhex("c3")),
    (0x0027E5EC, bytes.fromhex("c3")),
    (0x002E3F18, bytes.fromhex("c3")),
    (0x00038BC6, bytes.fromhex("c20400")),
    (0x00075F2A, bytes.fromhex("c20400")),
    (0x000A286A, bytes.fromhex("c20400")),
    (0x000A7BCA, bytes.fromhex("c20400")),
    (0x001ED158, bytes.fromhex("c20400")),
    (0x001E0E81, bytes.fromhex("c20400")),
    (0x00120ABF, bytes.fromhex("c20400")),
    (0x001446CE, bytes.fromhex("c20400")),
    (0x000DE3E6, bytes.fromhex("c20400")),
    (0x0016FDF6, bytes.fromhex("c20400")),
    (0x0017BF31, bytes.fromhex("c20400")),
    (0x001CC45E, bytes.fromhex("c20400")),
    (0x001CCAB1, bytes.fromhex("c20400")),
    (0x001D1DB4, bytes.fromhex("c20400")),
    (0x001D1F35, bytes.fromhex("c20400")),
    (0x001D2DD6, bytes.fromhex("c20400")),
    (0x001D2E85, bytes.fromhex("c20400")),
    (0x000FDCD6, bytes.fromhex("c20400")),
    (0x000D0B13, bytes.fromhex("c20400")),
    (0x002107C2, bytes.fromhex("c20400")),
)


def sections(data: bytes) -> list[tuple[int, int, int]]:
    if len(data) < 0x124 or data[:4] != b"XBEH":
        raise ValueError("Missing or invalid XBE header")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11C)[0]
    table_va = struct.unpack_from("<I", data, 0x120)[0]
    if base != 0x10000 or not 1 <= count <= 64 or table_va < base:
        raise ValueError("Unexpected retail XBE section layout")
    table = table_va - base
    result = []
    for i in range(count):
        off = table + i * 0x38
        if off + 0x38 > len(data):
            raise ValueError("Truncated XBE section table")
        _, va, vsize, raw, size = struct.unpack_from("<5I", data, off)
        if raw + size > len(data):
            raise ValueError("Invalid raw-backed section bounds")
        result.append((va, va + min(vsize, size), raw))
    return result


def file_offset(layout, address: int, length: int) -> int:
    for low, high, raw in layout:
        if low <= address and address + length <= high:
            return raw + address - low
    raise ValueError(f"Guest VA {address:#010x} is not raw-file-backed")


def verify(data: bytes, *, require_hash: bool = True) -> dict:
    digest = hashlib.sha256(data).hexdigest()
    if require_hash and digest != XBE_SHA256:
        raise ValueError(f"Retail XBE hash mismatch: {digest}")
    layout = sections(data)
    seen = set()
    observed = []
    for caller, site, expected in CALL_EDGES:
        if site in seen:
            raise ValueError(f"Duplicated call-site VA: {site:#010x}")
        seen.add(site)
        off = file_offset(layout, site, 5)
        if data[off] != 0xE8:
            raise ValueError(f"At {site:#010x}: expected E8 near direct CALL")
        displacement = struct.unpack_from("<i", data, off + 1)[0]
        actual = (site + 5 + displacement) & 0xFFFFFFFF
        if actual != expected:
            raise ValueError(f"At {site:#010x}: target {actual:#010x}, expected {expected:#010x}")
        observed.append({"caller_entry": f"0x{caller:08x}", "call_va": f"0x{site:08x}",
                         "callee_entry": f"0x{actual:08x}",
                         "e8_bytes": data[off:off+5].hex(),
                         "status": "DIRECT_TARGET_BYTES_VERIFIED_ABI_UNVERIFIED"})
    for site, expected in RET_WINDOWS:
        off = file_offset(layout, site, len(expected))
        if data[off:off+len(expected)] != expected:
            raise ValueError(f"Unexpected RET instruction at {site:#010x}")
    return {"source": "hash-pinned original retail Xbox Brute Force XBE",
            "xbe_sha256": digest, "checked_direct_calls": len(observed),
            "checked_return_windows": len(RET_WINDOWS),
            "not_verified": ["complete x86 register and stack ABI", "C++ prototypes",
                             "guest memory translation", "linkage", "behavior"],
            "edges": observed}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", required=True, type=Path,
                        help="Private original retail XBE, outside Git")
    parser.add_argument("--self-test", action="store_true",
                        help="Test rejection of a modified CALL destination")
    parser.add_argument("--json-out", type=Path,
                        help="Optional PRIVATE evidence JSON outside the repo")
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    result = verify(data)
    if args.self_test:
        mutated = bytearray(data)
        off = file_offset(sections(data), CALL_EDGES[0][1], 5)
        mutated[off + 1] ^= 1
        try:
            verify(bytes(mutated), require_hash=False)
        except ValueError:
            print("PASS: altered direct-CALL destination rejected")
        else:
            raise AssertionError("Failed to reject altered E8 displacement")
    if args.json_out:
        args.json_out.parent.mkdir(parents=True, exist_ok=True)
        args.json_out.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(f"PASS: authenticated retail XBE, {result['checked_direct_calls']} original direct-call targets, "
          f"{result['checked_return_windows']} specific RET opcodes")
    print("UNVERIFIED: full native ABI, guest register/stack interfaces, 1:1 behavior")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
