#!/usr/bin/env python3
"""Read-only retail-XBE proof of the 0x000E1150 Ghidra body gap.

A Ghidra body digest matching *selected blocks* does not establish that the
excluded bytes are dead. Runtime/return semantics, ABI and behavior are NOT
verified. Never commit or copy the original retail XBE into the repository.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

ENTRY = 0x000E1150
END_EXCLUSIVE = 0x000E11DF  # original RET 0x10 ends at 0xE11DE
GAP_START = 0x000E11BF
GAP_END_EXCLUSIVE = 0x000E11CD
GHIDRA_BODY_SHA256 = "94550006c05dab3359545d334eef7c4a9b9012cb7ba6f1d6190b74825471b53b"
# 14 original bytes are not represented in the recorded Ghidra body hash.
GAP_BYTES = bytes.fromhex("8b4424148b480883c40449894808")
CALLS = ((0x000E118C, 0x0008F690), (0x000E11BA, 0x002EA018))
RET_SITE = 0x000E11DC
CALLER_ENTRY = 0x00012140
CALLER_GHIDRA_END = 0x00012164
CALLER_EXEC_END = 0x00012176
CALLER_GHIDRA_SHA = "b41f5e57dd95d9d7fd50c405664c79d502ad2c419bae3759363645d2fe195a73"
CALLER_TAIL_BYTES = bytes.fromhex("c7460400000000c746080000000083c408c3")
CALLER_EDGES = ((0x00012156, 0x000E1150), (0x0001215F, 0x002EA018))
FREE_THUNK_ENTRY = 0x002EA018
FREE_FORWARD_ENTRY = 0x00067BF0
FREE_INDIRECT_JMP = bytes.fromhex("ff2554c63b00")


def check(data: bytes) -> dict:
    actual_xbe = hashlib.sha256(data).hexdigest()
    if actual_xbe != XBE_SHA256:
        raise ValueError(f"Retail XBE authentication failed: {actual_xbe}")
    layout = sections(data)

    def read(va: int, size: int) -> bytes:
        offset = file_offset(layout, va, size)
        return data[offset:offset + size]

    prefix = read(ENTRY, GAP_START - ENTRY)
    omitted = read(GAP_START, GAP_END_EXCLUSIVE - GAP_START)
    suffix = read(GAP_END_EXCLUSIVE, END_EXCLUSIVE - GAP_END_EXCLUSIVE)
    if omitted != GAP_BYTES or len(omitted) != 14:
        raise ValueError("Expected 14-byte original guest counter adjustment missing")
    original_full = prefix + omitted + suffix
    ghidra_ranges = prefix + suffix
    if len(original_full) != 0x8F or len(ghidra_ranges) != 0x81:
        raise AssertionError("Unexpected function-body lengths")
    if hashlib.sha256(ghidra_ranges).hexdigest() != GHIDRA_BODY_SHA256:
        raise ValueError("The two selected XBE ranges no longer match Ghidra's original body digest")
    if hashlib.sha256(original_full).hexdigest() == GHIDRA_BODY_SHA256:
        raise AssertionError("Historical Ghidra digest falsely covers the omitted bytes")
    if read(RET_SITE, 3) != bytes.fromhex("c21000"):
        raise ValueError("Original RET 16 exit changed")
    edges = []
    for site, expected_target in CALLS:
        inst = read(site, 5)
        if inst[0] != 0xE8:
            raise ValueError(f"Original site 0x{site:08x} is no longer E8 CALL")
        target = (site + 5 + struct.unpack_from("<i", inst, 1)[0]) & 0xFFFFFFFF
        if target != expected_target:
            raise ValueError(f"At 0x{site:08x}: CALL 0x{target:08x} != 0x{expected_target:08x}")
        edges.append((site, target))

    caller_selected = read(CALLER_ENTRY, CALLER_GHIDRA_END - CALLER_ENTRY)
    caller_tail = read(CALLER_GHIDRA_END, CALLER_EXEC_END - CALLER_GHIDRA_END)
    if len(caller_selected) != 36 or len(caller_tail) != 18 or caller_tail != CALLER_TAIL_BYTES:
        raise ValueError("Original 0x12140 guest-memory cleanup tail missing")
    if hashlib.sha256(caller_selected).hexdigest() != CALLER_GHIDRA_SHA:
        raise ValueError("Original caller 36-byte Ghidra prefix hash mismatch")
    caller_full = caller_selected + caller_tail
    if hashlib.sha256(caller_full).hexdigest() == CALLER_GHIDRA_SHA:
        raise AssertionError("The Ghidra caller digest unexpectedly covers its omitted tail")
    for site, expected_target in CALLER_EDGES:
        raw = read(site, 5)
        if raw[0] != 0xE8:
            raise ValueError("Original caller call opcode changed")
        target = (site + 5 + struct.unpack_from("<i", raw, 1)[0]) & 0xFFFFFFFF
        if target != expected_target:
            raise ValueError(f"Wrong original caller destination at {site:#x}")
    jmp = read(FREE_THUNK_ENTRY, 5)
    if jmp[0] != 0xE9:
        raise ValueError("Original intermediary is not a near JMP")
    forward = (FREE_THUNK_ENTRY + 5 + struct.unpack_from("<i", jmp, 1)[0]) & 0xFFFFFFFF
    if forward != FREE_FORWARD_ENTRY or read(forward, 6) != FREE_INDIRECT_JMP:
        raise ValueError("External import thunk forwarding chain changed")

    negative_controls = 0
    # Every original function-body byte must change on mutation under a *full*
    # byte-range hash. The historically recorded Ghidra hash alone misses 14.
    full_digest = hashlib.sha256(original_full).digest()
    for i in range(len(original_full)):
        modified = bytearray(original_full)
        modified[i] ^= 1
        if hashlib.sha256(modified).digest() == full_digest:
            raise AssertionError("Mutated full original function was accepted")
        negative_controls += 1
    for i in range(len(ghidra_ranges)):
        modified = bytearray(ghidra_ranges)
        modified[i] ^= 1
        if hashlib.sha256(modified).hexdigest() == GHIDRA_BODY_SHA256:
            raise AssertionError("Mutated Ghidra-selected range was accepted")
        negative_controls += 1
    for i in range(len(omitted)):
        # Proven blind spot: changing omitted bytes does not change the *two*
        # ranges which were used to hash the archived Ghidra function body.
        modified_gap = bytearray(omitted)
        modified_gap[i] ^= 1
        if hashlib.sha256(prefix + suffix).hexdigest() != GHIDRA_BODY_SHA256:
            raise AssertionError("Unexpected Ghidra selected-range change")
        if hashlib.sha256(prefix + modified_gap + suffix).digest() == full_digest:
            raise AssertionError("Ghidra omission not detected by full-body hash")
        negative_controls += 1
    for site, expected_target in CALLS:
        raw = read(site, 5)
        for i in range(1, 5):
            changed = bytearray(raw)
            changed[i] ^= 1
            new_target = (site + 5 + struct.unpack_from("<i", changed, 1)[0]) & 0xFFFFFFFF
            if new_target == expected_target:
                raise AssertionError("CALL displacement negative failed")
            negative_controls += 1

    for i in range(len(caller_full)):
        altered = bytearray(caller_full)
        altered[i] ^= 1
        if hashlib.sha256(altered).digest() == hashlib.sha256(caller_full).digest():
            raise AssertionError("Caller full-span mutation not rejected")
        negative_controls += 1
    for i in range(len(caller_selected)):
        altered = bytearray(caller_selected)
        altered[i] ^= 1
        if hashlib.sha256(altered).hexdigest() == CALLER_GHIDRA_SHA:
            raise AssertionError("Caller archived-body mutation not rejected")
        negative_controls += 1
    for site, expected_target in CALLER_EDGES:
        raw = read(site, 5)
        for i in range(1, 5):
            altered = bytearray(raw)
            altered[i] ^= 1
            new_target = (site + 5 + struct.unpack_from("<i", altered, 1)[0]) & 0xFFFFFFFF
            if new_target == expected_target:
                raise AssertionError("Caller original near CALL displacement negative failed")
            negative_controls += 1

    return {
        "original_xbe_authenticated": True,
        "original_function_bytes": len(original_full),
        "ghidra_selected_bytes": len(ghidra_ranges),
        "archived_ghidra_body_sha256": GHIDRA_BODY_SHA256,
        "omitted_original_bytes": len(omitted),
        "omitted_range": "0x000e11bf..0x000e11cc",
        "original_e8_targets": [f"0x{target:08x}" for _, target in edges],
        "caller_original_executable_bytes": len(caller_full),
        "caller_ghidra_recorded_bytes": len(caller_selected),
        "caller_omitted_cleanup_bytes": len(caller_tail),
        "caller_original_e8_targets": [f"0x{x:08x}" for _, x in CALLER_EDGES],
        "common_import_chain": "0x002ea018 -> 0x00067bf0 -> indirect JMP [0x003bc654]",
        "original_ret_cleanup_bytes": 16,
        "negative_controls": negative_controls,
        "abi_status": "ABI_UNVERIFIED; the excluded path's runtime reachability and the call's return contract remain unresolved",
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", required=True, type=Path, help="private retail default.xbe (never committed)")
    args = parser.parse_args()
    report = check(args.xbe.read_bytes())
    for k, v in report.items():
        print(f"{k}: {v}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
