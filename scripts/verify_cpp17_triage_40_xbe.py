#!/usr/bin/env python3
"""Read-only original-XBE verification of 40 C++17 first-error CALL edges.

These are narrow E8 destinations and selected x86 windows, not C++ prototype,
complete ABI, cross-function host linkage, or 1:1 behavioral verification.
Never commit the retail executable or raw extracted game code.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
AUDITED_SHA = "74304f6d3137eb1c336387ac3e4ddcd3c23278f9"
# (caller entry, E8 site, callee entry, five original instruction bytes)
CALL_EDGES = (
    (0x0001C250, 0x0001C2BC, 0x0001C930, "e86f060000"),
    (0x000230A0, 0x000230B1, 0x00023010, "e85affffff"),
    (0x00038B00, 0x00038B07, 0x00038B70, "e864000000"),
    (0x00061EB0, 0x00061F38, 0x0003D6C0, "e883b7fdff"),
    (0x00075380, 0x00075387, 0x00075F00, "e8740b0000"),
    (0x0008ACE0, 0x0008AD85, 0x0008ADA0, "e816000000"),
    (0x0009DB20, 0x0009DB97, 0x0003D6C0, "e824fbf9ff"),
    (0x000A2090, 0x000A20A0, 0x000A2840, "e89b070000"),
    (0x000A7220, 0x000A7230, 0x000A7BA0, "e86b090000"),
    (0x000B2CA0, 0x000B2CB4, 0x000B2970, "e8b7fcffff"),
    (0x00101510, 0x0010151C, 0x001013D0, "e8affeffff"),
    (0x00104B60, 0x00104B92, 0x0008E620, "e8899af8ff"),
    (0x00106600, 0x0010661A, 0x001ED100, "e8e16a0e00"),
    (0x0010AD40, 0x0010AD7A, 0x000CD9C0, "e8412cfcff"),
    (0x0010C280, 0x0010C2A3, 0x001E0DD0, "e8284b0d00"),
    (0x0010CBB0, 0x0010CBC2, 0x000EE5C0, "e8f919feff"),
    (0x0010F7E0, 0x0010F818, 0x000E4190, "e87349fdff"),
    (0x00112D90, 0x00112D9C, 0x0025AE60, "e8bf801400"),
    (0x001171D0, 0x001171FA, 0x0023D240, "e841601200"),
    (0x001209C0, 0x001209C1, 0x001209F0, "e82a000000"),
    (0x00210840, 0x00210852, 0x00210740, "e8e9feffff"),
    (0x002185B0, 0x00218606, 0x00218790, "e885010000"),
    (0x00219010, 0x00219026, 0x00218B00, "e8d5faffff"),
    (0x00225060, 0x00225098, 0x00223780, "e8e3e6ffff"),
    (0x00225C90, 0x00225CE6, 0x002B3590, "e8a5d80800"),
    (0x00225D20, 0x00225D27, 0x000A2840, "e814cbe7ff"),
    (0x00231FF0, 0x0023204C, 0x0003D7A0, "e84fb7e0ff"),
    (0x00232290, 0x00232445, 0x002334B0, "e866100000"),
    (0x002389C0, 0x002389D8, 0x00238960, "e883ffffff"),
    (0x0023D150, 0x0023D18F, 0x0001FC70, "e8dc2adeff"),
    (0x003158C4, 0x003158D0, 0x0031B1CD, "e8f8580000"),
    (0x003158D8, 0x003158E7, 0x0031B1CD, "e8e1580000"),
    (0x0031A81C, 0x0031A836, 0x0031A72F, "e8f4feffff"),
    (0x0031AE9C, 0x0031AEAC, 0x003118C0, "e80f6affff"),
    (0x0031C11A, 0x0031C120, 0x0031C0FD, "e8d8ffffff"),
    (0x0031C960, 0x0031C9CC, 0x003158C4, "e8f38effff"),
    (0x003718C0, 0x003719EC, 0x00375A20, "e82f400000"),
    (0x0034C812, 0x0034C81C, 0x0034C7E5, "e8c4ffffff"),
    (0x0034E276, 0x0034E27C, 0x00352E4C, "e8cb4b0000"),
    (0x0034E296, 0x0034E2B5, 0x00352E5E, "e8a44b0000"),
)
# Precisely scoped instructions in two network timer call families.
ABI_WINDOWS = (
    (0x0034E27B, "56"),        # caller push ESI
    (0x00352E52, "8b4c2404"),  # callee load stack pointer
    (0x00352E56, "8901"),      # store low EAX DWORD
    (0x00352E58, "895104"),    # store high EDX DWORD
    (0x00352E5B, "c20400"),    # callee RET 4
    (0x0034E293, "c20400"),    # caller RET 4
    (0x0034E2B1, "8d45f8"),    # LEA local buffer
    (0x0034E2B4, "50"),        # caller push EAX
    (0x00352E6A, "8b442410"),  # callee stack load after saved registers
    (0x00352E8A, "c20400"),    # callee RET 4
    (0x0034E2BB, "c20800"),    # caller RET 8
)

def section_map(data: bytes) -> list[tuple[int, int, int]]:
    if len(data) < 0x124 or data[:4] != b"XBEH":
        raise ValueError("Invalid XBE header")
    base, count, table_va = (struct.unpack_from("<I", data, p)[0]
                             for p in (0x104, 0x11C, 0x120))
    if base != 0x10000 or not 1 <= count <= 64 or table_va < base:
        raise ValueError("Unexpected XBE section metadata")
    layout = []
    for i in range(count):
        off = table_va - base + i * 0x38
        if off + 0x38 > len(data):
            raise ValueError("Truncated section table")
        _, va, vsize, raw, size = struct.unpack_from("<5I", data, off)
        if raw + size > len(data):
            raise ValueError("Section outside file")
        layout.append((va, va + min(vsize, size), raw))
    return layout

def at_va(data: bytes, layout: list[tuple[int, int, int]], va: int, n: int) -> bytes:
    for lo, hi, raw in layout:
        if lo <= va and va + n <= hi:
            start = raw + va - lo
            return data[start:start+n]
    raise ValueError(f"VA 0x{va:08x} is not raw-backed")

def check_call(site: int, target: int, raw: str, actual: bytes) -> None:
    expected = bytes.fromhex(raw)
    if len(expected) != 5 or expected[0] != 0xE8 or actual != expected:
        raise ValueError(f"CALL bytes mismatch at 0x{site:08x}")
    relative = struct.unpack_from("<i", actual, 1)[0]
    if (site + 5 + relative) & 0xFFFFFFFF != target:
        raise ValueError(f"CALL destination mismatch at 0x{site:08x}")

def check_inventory() -> None:
    if len(CALL_EDGES) != 40 or len({x[1] for x in CALL_EDGES}) != 40:
        raise ValueError("Expected 40 distinct E8 sites")
    if len({x[0] for x in CALL_EDGES}) != 40:
        raise ValueError("Expected 40 distinct caller entries")
    if len({x[0] for x in ABI_WINDOWS}) != len(ABI_WINDOWS):
        raise ValueError("Repeated instruction evidence VA")
    for caller, site, target, raw in CALL_EDGES:
        if not caller <= site < caller + 0x1000:
            raise ValueError("E8 site outside conservative caller window")
        check_call(site, target, raw, bytes.fromhex(raw))

def verify(data: bytes) -> dict:
    digest = hashlib.sha256(data).hexdigest()
    if digest != XBE_SHA256:
        raise ValueError("Retail XBE SHA-256 mismatch")
    layout = section_map(data)
    check_inventory()
    for _, site, target, raw in CALL_EDGES:
        check_call(site, target, raw, at_va(data, layout, site, 5))
    for site, raw in ABI_WINDOWS:
        if at_va(data, layout, site, len(bytes.fromhex(raw))) != bytes.fromhex(raw):
            raise ValueError(f"Instruction mismatch at 0x{site:08x}")
    return {
        "original_xbe_sha256": digest,
        "audit_source_commit": AUDITED_SHA,
        "direct_call_windows_verified": len(CALL_EDGES),
        "selected_abi_windows_verified": len(ABI_WINDOWS),
        "verified_scope": "E8 destinations and selected instruction windows only",
        "xbox_abi": "PARTIAL; full register/stack/outputs/SEH unknown",
        "cpp_prototypes": "ABI_UNVERIFIED",
        "host_linkage": "NOT_TESTED",
        "behavioral_1_to_1": "NOT_TESTED",
    }

def self_test() -> None:
    check_inventory()
    rejected = 0
    for _, site, target, raw in CALL_EDGES:
        correct = bytes.fromhex(raw)
        check_call(site, target, raw, correct)
        changed = bytearray(correct)
        changed[1] ^= 1
        for t, h, actual in ((target, raw, bytes(changed)),
                             (target ^ 1, raw, correct),
                             (target, "90" + raw[2:], correct)):
            try:
                check_call(site, t, h, actual)
            except ValueError:
                rejected += 1
            else:
                raise AssertionError("Negative control accepted")
    print(f"PASS: 40 CALL fixtures and {rejected} negative controls")

def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--xbe", type=Path, help="Private retail XBE, outside Git")
    p.add_argument("--self-test", action="store_true")
    p.add_argument("--json-out", type=Path, help="Private evidence result, outside Git")
    args = p.parse_args()
    if not args.self_test and args.xbe is None:
        p.error("Supply --xbe and/or --self-test")
    if args.self_test:
        self_test()
    if args.xbe:
        data = args.xbe.read_bytes()
        result = verify(data)
        if args.self_test:
            modified = bytearray(data)
            site = CALL_EDGES[0][1]
            for lo, hi, raw in section_map(data):
                if lo <= site and site + 5 <= hi:
                    modified[raw + site - lo + 1] ^= 1
                    break
            else:
                raise AssertionError("CALL site unmapped")
            try:
                verify(bytes(modified))
            except ValueError:
                print("PASS: modified original XBE rejected")
            else:
                raise AssertionError("Modified XBE accepted")
        if args.json_out:
            args.json_out.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
        print(json.dumps(result, indent=2))
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
