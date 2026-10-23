#!/usr/bin/env python3
"""Review the twelve directly observed x86 CALL edges to 0x00087630.

The optional local XBE must hash to the original Brute Force retail input.
This is an instruction/call-graph audit, NOT an integrated native C11 linker
or a claim that all indirect callers have been enumerated.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import struct
from pathlib import Path

EXPECTED_XBE = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE = 0x00087630
ORIGINAL_CALL_SITES = (
    0x000874EA, 0x00087569, 0x000875C2, 0x000875FB,
    0x0008761C, 0x0010B240, 0x0010B2DE, 0x0010B38A,
    0x0010BB9F, 0x001AA6DA, 0x001B6A3A, 0x001B6BD0,
)
REQUIRED_FIELDS = (
    "call_va", "callee_entry", "incoming_eax_start_first_observation",
    "first_stack_dword_end_observation", "register_and_stack_instruction_evidence",
    "caller_cleanup_observation", "callee_stack_cleanup", "abi_status", "notes",
)


def check_ledger(root: Path) -> None:
    path = root / "metadata/x86_callee_00087630_call_sites.csv"
    with path.open(encoding="utf-8", newline="") as file:
        reader = csv.DictReader(file)
        if tuple(reader.fieldnames or ()) != REQUIRED_FIELDS:
            raise ValueError("ABI ledger schema changed without audit")
        rows = list(reader)
    found = []
    for row in rows:
        va = int(row["call_va"], 16)
        found.append(va)
        if int(row["callee_entry"], 16) != CALLEE:
            raise ValueError(f"Unexpected callee for 0x{va:08x}")
        for field in REQUIRED_FIELDS:
            if not row[field].strip():
                raise ValueError(f"Missing {field} at 0x{va:08x}")
        if row["abi_status"] != "PARTIAL_X86_EVIDENCE":
            raise ValueError(f"Unjustified ABI promotion at 0x{va:08x}")
    if len(found) != len(set(found)) or set(found) != set(ORIGINAL_CALL_SITES):
        raise ValueError("Missing, duplicated, or invented x86 call site")
    recovered = next(row for row in rows if row["call_va"] == "0x0010b2de")
    provenance = recovered["incoming_eax_start_first_observation"]
    if not all(value in provenance for value in
               ("0x0010B213", "0x0010B228", "0x0010B27F",
                "0x0010B291", "0x0010B2D4")):
        raise ValueError("Evidence-backed EAX CFG chain at 0x0010B2DE was erased")
    print("PASS: twelve original call sites indexed with partial-ABI boundaries")


def check_xbe(xbe: Path) -> None:
    raw = xbe.read_bytes()
    if hashlib.sha256(raw).hexdigest() != EXPECTED_XBE:
        raise ValueError("Original Brute Force XBE SHA-256 mismatch")
    if raw[:4] != b"XBEH":
        raise ValueError("Invalid XBE magic")
    base = struct.unpack_from("<I", raw, 0x104)[0]
    count, section_va = struct.unpack_from("<II", raw, 0x11C)
    if not 0 < count < 128:
        raise ValueError("Invalid XBE section count")
    sections = []
    for i in range(count):
        pos = section_va - base + i * 0x38
        if not 0 <= pos <= len(raw) - 20:
            raise ValueError("XBE section table out of range")
        _, va, virtual_size, file_offset, file_size = struct.unpack_from(
            "<IIIII", raw, pos
        )
        sections.append((va, min(virtual_size, file_size), file_offset))

    def at(va: int, n: int) -> bytes:
        for begin, size, offset in sections:
            if begin <= va and va + n <= begin + size:
                pos = offset + va - begin
                if pos + n > len(raw):
                    raise ValueError(f"Unbacked original address 0x{va:08x}")
                return raw[pos:pos + n]
        raise ValueError(f"Unmapped original x86 address 0x{va:08x}")

    if at(CALLEE, 8) != bytes.fromhex("55 8b 6c 24 08 57 8b f8"):
        raise ValueError("Incoming EAX/stack contract at callee changed")
    if at(0x00087668, 1) != b"\xc3":
        raise ValueError("Callee RET no-cleanup contract changed")
    for va in ORIGINAL_CALL_SITES:
        instr = at(va, 5)
        if instr[0] != 0xE8:
            raise ValueError(f"Not a near call at 0x{va:08x}")
        relative = struct.unpack("<i", instr[1:])[0]
        if va + 5 + relative != CALLEE:
            raise ValueError(f"Incorrect direct target at 0x{va:08x}")

    # Inspect the file-backed main code range, counting raw E8+rel32
    # patterns that resolve to this callee. This does NOT prove that every
    # indirect call or validly decoded instruction was found.
    main_va, main_size, main_offset = next(
        (va, size, off) for va, size, off in sections if va == 0x00012000
    )
    data = raw[main_offset:main_offset + main_size]
    candidates = set()
    for index in range(len(data) - 4):
        if data[index] == 0xE8:
            relative = struct.unpack_from("<i", data, index + 1)[0]
            if main_va + index + 5 + relative == CALLEE:
                candidates.add(main_va + index)
    if candidates != set(ORIGINAL_CALL_SITES):
        raise ValueError("Main-code raw direct-call candidate inventory drifted")
    print("PASS: twelve original CALL rel32 destinations, callee EAX/stack prologue, "
          "RET and raw-code candidate scan; no indirect-call coverage claimed")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    check_ledger(args.root.resolve())
    if args.xbe is not None:
        check_xbe(args.xbe)


if __name__ == "__main__":
    main()
