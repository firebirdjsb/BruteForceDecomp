#!/usr/bin/env python3
"""Audit the 12 evidenced 0x00087630 caller ABI observations.

Without --xbe this validates the public per-callsite evidence and reports a
PARTIAL_X86_EVIDENCE status; it does not claim actual original bytes were
read. With --xbe it validates the pinned private retail Xbox executable and
the direct CALL rel32 to 0x00087630 at all 12 original instruction addresses.

The callee consumes start from original EAX and end from entry [ESP+4].
There is no callee stack argument pop (RET, not RET n). Caller cleanup
counts include surrounding calls and must NOT be treated as this callee's
formal parameter count. Guest memory mapping remains ABI_UNVERIFIED.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
METADATA = ROOT / "metadata/x86_callee_00087630_call_sites.csv"
PINNED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE_VA = 0x00087630
RET_VA = 0x00087668
EXPECTED_CALLS = 12


def read_calls(path: Path = METADATA) -> list[dict[str, str]]:
    with path.open("r", encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream))
    if len(rows) != EXPECTED_CALLS:
        raise ValueError(f"0x00087630 expected {EXPECTED_CALLS} recorded calls, found {len(rows)}")
    seen: set[int] = set()
    for row in rows:
        address = int(row["call_va"], 16)
        if address in seen:
            raise ValueError(f"duplicate callsite 0x{address:08x}")
        seen.add(address)
        if int(row["callee_entry"], 16) != CALLEE_VA:
            raise ValueError(f"wrong callee at 0x{address:08x}")
        if row["abi_status"] != "PARTIAL_X86_EVIDENCE":
            raise ValueError(f"unjustified ABI promotion at 0x{address:08x}")
        if "ret (no callee argument cleanup)" not in row["callee_stack_cleanup"].lower():
            raise ValueError(f"unsupported callee stack cleanup at 0x{address:08x}")
        if not row["incoming_eax_start_first_observation"].strip():
            raise ValueError(f"missing incoming guest EAX evidence at 0x{address:08x}")
        if not row["first_stack_dword_end_observation"].strip():
            raise ValueError(f"missing incoming guest [ESP+4] evidence at 0x{address:08x}")
        if not row["register_and_stack_instruction_evidence"].strip():
            raise ValueError(f"missing x86 instruction ledger at 0x{address:08x}")
    return rows


def read_code(image: bytes, va: int, size: int) -> bytes:
    # Original .text mapping used by the repository's authenticated XBE ledgers.
    offset = va - 0x10000
    if offset < 0 or offset + size > len(image):
        raise ValueError(f"out of range Xbox .text VA 0x{va:08x}")
    return image[offset:offset + size]


def verify_original_xbe(image: bytes, rows: list[dict[str, str]]) -> None:
    if hashlib.sha256(image).hexdigest() != PINNED_XBE_SHA256:
        raise ValueError("original retail XBE SHA-256 mismatch")
    if read_code(image, RET_VA, 1) != bytes.fromhex("c3"):
        raise ValueError("original 0x00087668 must be a plain RET")
    for row in rows:
        address = int(row["call_va"], 16)
        instruction = read_code(image, address, 5)
        if instruction[0] != 0xe8:
            raise ValueError(f"not a direct x86 CALL rel32 at 0x{address:08x}")
        displacement = struct.unpack_from("<i", instruction, 1)[0]
        if (address + 5 + displacement) & 0xffffffff != CALLEE_VA:
            raise ValueError(f"CALL 0x{address:08x} does not target 0x{CALLEE_VA:08x}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private original Xbox XBE; never commit")
    parser.add_argument("--metadata", type=Path, default=METADATA)
    args = parser.parse_args()
    rows = read_calls(args.metadata)
    if args.xbe:
        verify_original_xbe(args.xbe.read_bytes(), rows)
        print(f"PASS pinned original XBE, {len(rows)} direct CALL instructions, plain RET")
    else:
        print(f"PASS {len(rows)} public callsite ledger entries (original XBE NOT checked)")
    print("ABI PARTIAL_X86_EVIDENCE: guest EAX + [ESP+4]; dynamic guest memory/extra caller stack unverified")


if __name__ == "__main__":
    main()
