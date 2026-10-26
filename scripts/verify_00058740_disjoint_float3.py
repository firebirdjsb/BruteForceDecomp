#!/usr/bin/env python3
"""Fail closed on original 0x00058740's three disjoint guest F32 vectors.

Source-only CI checks are possible without shipping the private XBE.
With --xbe, validate opcode bytes against the user's original SHA256-matched
Xbox executable; this is not a claim of native host ABI equivalence.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0005/0x00058740.c"
SITES = (
    (0x58743, "83ec2453", "allocate 0x24 and push EBX"),
    (0x5874f, "8d54241c", "first 12-byte virtual output at entry ESP-0x0c"),
    (0x58759, "8d442410", "first normalised float3 at entry ESP-0x18"),
    (0x5875e, "8d442420", "pass original virtual output in EAX"),
    (0x58772, "8d4c2404", "second normalised float3 at entry ESP-0x24"),
    (0x5877f, "d9442410", "x87 load relative float3 Z"),
    (0x58783, "d84c241c", "x87 multiply reference float3 Z"),
    (0x58787, "83c404", "restore argument stack after vector helper"),
    (0x5878a, "d9442404", "x87 load relative float3 X"),
    (0x5878e, "d84c2410", "x87 multiply reference float3 X"),
    (0x4c4a5, "d911", "FUN_0004c480 writes float3 X"),
    (0x4c4a7, "894104", "FUN_0004c480 writes float3 Y"),
    (0x4c4ae, "894108", "FUN_0004c480 writes float3 Z"),
    (0x4c4b8, "c7410400000000", "FUN_0004c480 forces Y=0"),
    (0x4c544, "8901", "FUN_0004c530 writes float3 X"),
    (0x4c548, "894104", "FUN_0004c530 writes float3 Y"),
    (0x4c54f, "894108", "FUN_0004c530 writes float3 Z"),
    (0x4c561, "c7410400000000", "FUN_0004c530 forces Y=0"),
)

def validate_source(root):
    source = (root / SOURCE).read_text(encoding="utf-8")
    assert "Entry: 0x00058740," in source
    assert "ABI_UNVERIFIED" in source
    required = (
        "float relative_direction[3];",
        "float reference_direction[3];",
        "undefined1 local_c[12];",
        "FUN_0004c530(reference_direction);",
        "FUN_0004c480(relative_direction);",
        "fVar1 = relative_direction[2] * reference_direction[2] +",
        "relative_direction[0] * reference_direction[0];",
    )
    for value in required:
        if value not in source:
            raise AssertionError(f"lost original x87 vector contract: {value}")
    assert "FUN_0004c480(local_c)" not in source
    regions = {
        "relative_direction": (-0x24, -0x18),
        "reference_direction": (-0x18, -0x0c),
        "local_c": (-0x0c, 0x00),
    }
    entries = list(regions.items())
    for i, (left_name, (l_start, l_end)) in enumerate(entries):
        assert l_end - l_start == 12
        for right_name, (r_start, r_end) in entries[i + 1:]:
            if max(l_start, r_start) < min(l_end, r_end):
                raise AssertionError(f"overlap: {left_name} and {right_name}")
    print("PASS 0x00058740: disjoint float3 storage and x87 X/Z products (source-only)")

def validate_binary(path):
    data = path.read_bytes()
    sha = hashlib.sha256(data).hexdigest()
    if sha != XBE_SHA256:
        raise AssertionError(f"wrong original XBE SHA256: {sha}")
    for va, expected_hex, description in SITES:
        expected = bytes.fromhex(expected_hex)
        start = va - 0x10000
        if data[start:start + len(expected)] != expected:
            raise AssertionError(f"{va:#x}: original instruction mismatch ({description})")
        print(f"PASS {va:#010x}: {description}")
    print(f"PASS: all {len(SITES)} original XBE instruction checks")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, default=None)
    args = parser.parse_args()
    validate_source(args.root)
    if args.xbe:
        validate_binary(args.xbe)
    else:
        print("NOTE: original XBE not present; byte verification deferred to local execution")

if __name__ == "__main__":
    main()
