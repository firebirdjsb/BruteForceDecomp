#!/usr/bin/env python3
"""Read-only XBE byte checks for nine direct calls related to C++ diagnostics.

Establishes E8 destinations and selected RET opcodes only. Does NOT prove
C++ signatures, register/stack contracts, linkage, or game behavior.
The private original XBE is never written or committed.
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
    (0x0024A600, 0x0024A635, 0x00071D20),
    (0x0010B1E0, 0x0010B240, 0x00087630),
    (0x0010B1E0, 0x0010B2DE, 0x00087630),
    (0x0010BB70, 0x0010BB9F, 0x00087630),
    (0x00147570, 0x001475E2, 0x000E0350),
    (0x001579B0, 0x001579F0, 0x000E0350),
    (0x0010BB70, 0x0010BB8D, 0x0024A840),
    (0x0007B4D0, 0x0007B57F, 0x002EAA19),
    (0x0007B4D0, 0x0007B5B1, 0x002EAA19),
)

# These are specific return sites, not exhaustive callee exit inventories.
RET_WINDOWS = (
    (0x00071D97, bytes.fromhex("c20c00")),
    (0x00087668, bytes.fromhex("c3")),
    (0x000E039B, bytes.fromhex("c20c00")),
    (0x0024A846, bytes.fromhex("c3")),
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
