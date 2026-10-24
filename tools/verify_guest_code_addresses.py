#!/usr/bin/env python3
"""Source and optional original-XBE verification for guest code-address immediates.

These source fixes only preserve source-level guest32 constants, not host
callability, function prototypes, Xbox exception/interrupt semantics or native
PC linkage. The user's original Xbox XBE must never be committed to Git.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import struct
from collections import defaultdict
from pathlib import Path

EXPECTED_XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
EXPECTED_COUNT = 18
LEDGER = "metadata/verified_guest_code_addresses_2026_10_23.csv"


def literal_from_original_instruction(raw: bytes) -> int:
    # PUSH imm32, MOV ECX,imm32
    if len(raw) == 5 and raw[0] in (0x68, 0xB9):
        return int.from_bytes(raw[1:], "little")
    # MOV DWORD PTR [EAX+0x20],imm32
    if len(raw) == 7 and raw[:3] == bytes.fromhex("c7 40 20"):
        return int.from_bytes(raw[3:], "little")
    # MOV DWORD PTR [ESP+0x24 or 0x28],imm32
    if len(raw) == 8 and raw[:3] == bytes.fromhex("c7 44 24"):
        if raw[3] not in (0x24, 0x28):
            raise ValueError("Unexpected guest stack displacement")
        return int.from_bytes(raw[4:], "little")
    raise ValueError("Unrecognized x86 immediate instruction: " + raw.hex())


def xbe_reader(data: bytes):
    if hashlib.sha256(data).hexdigest() != EXPECTED_XBE_SHA:
        raise ValueError("Original XBE SHA256 does not match user-provided binary")
    if data[:4] != b"XBEH":
        raise ValueError("Invalid XBE magic")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table_va = struct.unpack_from("<II", data, 0x11C)
    if not 0 < count < 128:
        raise ValueError("Invalid XBE section count")
    sections = []
    for i in range(count):
        entry = table_va - base + 0x38 * i
        if not 0 <= entry <= len(data) - 20:
            raise ValueError("XBE section table out of bounds")
        _, mem, vlen, off, size = struct.unpack_from("<IIIII", data, entry)
        if not 0 <= off <= len(data):
            raise ValueError("XBE section file offset out of bounds")
        sections.append((mem, min(vlen, size), off))

    def read(va: int, length: int) -> bytes:
        for mem, size, off in sections:
            if mem <= va and va + length <= mem + size:
                start = off + (va - mem)
                if start + length <= len(data):
                    return data[start:start + length]
        raise ValueError("Instruction virtual address not mapped: 0x%08x" % va)

    return read


def check(root: Path, xbe: Path | None = None) -> int:
    with (root / LEDGER).open(newline="", encoding="utf-8") as f:
        rows = list(csv.DictReader(f))
    if len(rows) != EXPECTED_COUNT:
        raise ValueError("Expected exactly %d original instruction records" % EXPECTED_COUNT)
    read_original = xbe_reader(xbe.read_bytes()) if xbe else None
    grouped: dict[str, set[int]] = defaultdict(set)
    seen: set[tuple[str, int]] = set()
    for row in rows:
        entry = row["entry"].strip().lower()
        instruction_va = int(row["original_instruction_va"], 16)
        raw = bytes.fromhex(row["original_bytes"])
        if len(entry) != 10 or not entry.startswith("0x"):
            raise ValueError("Invalid original entry: " + entry)
        if not int(entry, 16) <= instruction_va:
            raise ValueError("Instruction precedes stated source entry")
        if (entry, instruction_va) in seen:
            raise ValueError("Duplicated original instruction")
        seen.add((entry, instruction_va))
        guest_value = literal_from_original_instruction(raw)
        grouped[entry].add(guest_value)
        if read_original is not None and read_original(instruction_va, len(raw)) != raw:
            raise ValueError("Mismatch against original XBE at 0x%08x" % instruction_va)

    for entry, values in grouped.items():
        name = entry[2:]
        src = root / "src" / "main_unclassified" / ("band_" + name[:4]) / (entry + ".c")
        content = src.read_text(encoding="utf-8")
        if "Entry: " + entry not in content:
            raise ValueError("Lost original entry provenance: " + entry)
        if "Input x86 body SHA-256:" not in content:
            raise ValueError("Lost original original-XBE body SHA: " + entry)
        for value in values:
            literal = "UINT32_C(0x%08x)" % value
            if literal not in content:
                raise ValueError("Missing exact guest code address " + literal + " in " + entry)
            if "&LAB_%08x" % value in content:
                raise ValueError("Ghidra symbol left unresolved in " + entry)
    print("PASS: %d original instruction records and %d original source entries; XBE=%s"
          % (len(rows), len(grouped), bool(xbe)))
    return len(grouped)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="local original retail XBE; never upload to Git")
    args = ap.parse_args()
    check(args.root.resolve(), args.xbe)


if __name__ == "__main__":
    main()
