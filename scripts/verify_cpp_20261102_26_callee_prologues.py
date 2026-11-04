#!/usr/bin/env python3
"""Check 26 retail-XBE callee entry instruction windows, not C++ ABI prototypes.

The four complete entry instructions per callee were disassembled from the
SHA-pinned original XBE. No original binary bytes beyond these short windows
are stored. Binary-free tests verify manifest integrity and mutation rejection.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
BODY_MANIFEST = ROOT / "metadata/cpp_20261102_40_body_provenance.csv"
BODY_MANIFEST_SHA256 = "58cdb52e4b383142461ab83bd6ee8e146b629f0e772a83b2f861f53e039df38b"
RETAIL_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_COLUMNS = ("caller_entry", "callee_entry", "call_va", "caller_body_len",
                "callee_body_len", "caller_original_sha256", "callee_original_sha256")

# Four disassembler-aligned complete instructions from each distinct callee
# entry in the earlier 40-edge manifest. Entry facts only: no inferred ABI.
PROLOGUES = (
    (0x00038b70, "8b40048b48048a91a900000084d2"),
    (0x00075f00, "8b40048b48048a512984d2"),
    (0x000a0c60, "83ec0cd902d86124d95c2408"),
    (0x000a2840, "8b40048b48048a511584d2"),
    (0x000a7ba0, "8b40048b48048a511984d2"),
    (0x000cd9c0, "85ff5574218b96c0020000"),
    (0x000d0aa0, "8b472085c0751f6a0c"),
    (0x000de330, "83ec2cd90053d821"),
    (0x000fdc90, "558b6c24088b45008903"),
    (0x001209f0, "8b4c24048b814006000083ec2085c0"),
    (0x00144620, "558bec6aff6880843000"),
    (0x0016fb60, "558bec83e4f083ec30"),
    (0x0017beb0, "518b500c538b5808"),
    (0x001cc3b0, "558bec6aff68d07c3000"),
    (0x001cca00, "558bec6aff68a07d3000"),
    (0x001d1d40, "538bd88b0355"),
    (0x001d1e30, "8b03558b6c2408894500"),
    (0x001d2d60, "538bd88b0355"),
    (0x001d2de0, "8b03558b6c2408894500"),
    (0x001e0dd0, "558bec6aff68b07e3000"),
    (0x001e97c0, "51a1709946005556"),
    (0x001ed100, "53568bf08b4e18"),
    (0x00210740, "8b48088b5104558b6c2408"),
    (0x002334b0, "d94204d8490cd902d809"),
    (0x0027e580, "8b90b416000083fa08537e38"),
    (0x002e3ec0, "83ec0853568bf1"),
)


def manifest_signature() -> str:
    payload = "".join(f"{va:08x}:{code}\n" for va, code in PROLOGUES)
    return hashlib.sha256(payload.encode("ascii")).hexdigest()


# Frozen independently from the original XBE; prevents accidental CI-only drift.
PROLOGUE_MANIFEST_SHA256 = "511cc677d4a49c922303a4de85d396f91f53e643f16157670050f44550844ba9"


def load_body_manifest(path: Path = BODY_MANIFEST) -> dict[int, tuple[int, str]]:
    if hashlib.sha256(path.read_bytes()).hexdigest() != BODY_MANIFEST_SHA256:
        raise ValueError("Original 40-edge body provenance manifest drift")
    with path.open(newline="", encoding="utf-8") as handle:
        reader = csv.DictReader(handle)
        if tuple(reader.fieldnames or ()) != BODY_COLUMNS:
            raise ValueError("Unexpected original body manifest columns")
        rows = list(reader)
    if len(rows) != 40:
        raise ValueError("Expected exactly 40 authenticated call edges")
    bodies: dict[int, tuple[int, str]] = {}
    for row in rows:
        callee = int(row["callee_entry"], 16)
        length = int(row["callee_body_len"])
        digest = row["callee_original_sha256"].lower()
        if not 1 <= length <= 0x100000 or not re.fullmatch(r"[0-9a-f]{64}", digest):
            raise ValueError(f"Invalid original body identity: {callee:#x}")
        prior = bodies.setdefault(callee, (length, digest))
        if prior != (length, digest):
            raise ValueError(f"Conflicting original body identity: {callee:#x}")
    return bodies


def validate_manifest(path: Path = BODY_MANIFEST) -> dict[int, tuple[int, str]]:
    if len(PROLOGUES) != 26 or len({va for va, _ in PROLOGUES}) != 26:
        raise ValueError("Expected 26 unique original callee entries")
    if manifest_signature() != PROLOGUE_MANIFEST_SHA256:
        raise ValueError("Original callee entry window manifest drift")
    bodies = load_body_manifest(path)
    if set(bodies) != {va for va, _ in PROLOGUES}:
        raise ValueError("Callee entries differ from original 40-edge evidence")
    for va, code in PROLOGUES:
        raw = bytes.fromhex(code)
        if not 4 <= len(raw) <= 32 or len(raw) > bodies[va][0]:
            raise ValueError(f"Invalid four-instruction entry window at {va:#x}")
    return bodies


def sections(data: bytes) -> list[tuple[int, int, int]]:
    if len(data) < 0x124 or data[:4] != b"XBEH":
        raise ValueError("Invalid retail XBE header")
    base, count, table_va = (struct.unpack_from("<I", data, off)[0]
                             for off in (0x104, 0x11c, 0x120))
    if base != 0x10000 or not 1 <= count <= 64 or table_va < base:
        raise ValueError("Unexpected original XBE section layout")
    result = []
    for i in range(count):
        off = table_va - base + i * 0x38
        if off + 0x38 > len(data):
            raise ValueError("Truncated XBE section table")
        _, va, virtual_size, raw, raw_size = struct.unpack_from("<5I", data, off)
        if raw + raw_size > len(data):
            raise ValueError("Invalid raw section bounds")
        result.append((va, va + min(virtual_size, raw_size), raw))
    return result


def raw_offset(layout: list[tuple[int, int, int]], va: int, size: int) -> int:
    for low, high, raw in layout:
        if low <= va and va + size <= high:
            return raw + va - low
    raise ValueError(f"Unbacked original guest address {va:#010x}")


def check_bytes(data: bytes, layout: list[tuple[int, int, int]], va: int, expected: bytes) -> None:
    off = raw_offset(layout, va, len(expected))
    if data[off:off + len(expected)] != expected:
        raise ValueError(f"Original callee entry bytes differ at {va:#010x}")


def verify_private(data: bytes, path: Path = BODY_MANIFEST) -> dict[str, int]:
    bodies = validate_manifest(path)
    if hashlib.sha256(data).hexdigest() != RETAIL_SHA256:
        raise ValueError("Original retail XBE SHA-256 mismatch")
    layout = sections(data)
    for va, code in PROLOGUES:
        length, digest = bodies[va]
        off = raw_offset(layout, va, length)
        if hashlib.sha256(data[off:off + length]).hexdigest() != digest:
            raise ValueError(f"Complete original callee body differs at {va:#010x}")
        check_bytes(data, layout, va, bytes.fromhex(code))
    return {"original_callee_bodies": len(bodies), "entry_windows": len(PROLOGUES)}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="Private original XBE; never commit it")
    args = parser.parse_args()
    bodies = validate_manifest()
    if args.xbe:
        result = verify_private(args.xbe.read_bytes())
        print("PASS: retail SHA, {original_callee_bodies} complete bodies, "
              "{entry_windows} four-instruction entry windows".format(**result))
    else:
        print(f"PASS: {len(bodies)} original callee identities and entry-window manifest")
    print("ABI_UNVERIFIED: full argument/register/stack contracts, virtual dispatch, behavior")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
