#!/usr/bin/env python3
"""Verify allocator call-site evidence and Ghidra-derived C++ source linkage.

Source-only mode is suitable for public CI. The optional --xbe is REQUIRED
to authenticate original instructions; never commit the retail executable.
The ledger establishes only one guest32 size word, direct CALL and caller
cleanup. It does not claim a C++ method, full caller ABI or native allocator.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
LEDGER = ROOT / "metadata" / "cpp_allocator_verified_call_sites.csv"
DEST = 0x002EA01D


def parse_xbe(path: Path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != SHA256 or data[:4] != b"XBEH":
        raise ValueError("wrong original retail Xbox XBE SHA-256/header")
    base, count, section_va = (
        struct.unpack_from("<I", data, 0x104)[0],
        struct.unpack_from("<I", data, 0x11C)[0],
        struct.unpack_from("<I", data, 0x120)[0],
    )
    if not 1 <= count <= 64:
        raise ValueError("invalid XBE section count")
    spans = []
    for i in range(count):
        _, address, _, raw, size = struct.unpack_from(
            "<5I", data, section_va - base + i * 56)
        if raw + size > len(data):
            raise ValueError("invalid XBE section")
        spans.append((address, raw, size))

    def read(va, count):
        for address, raw, size in spans:
            if address <= va and va + count <= address + size:
                return data[raw + va - address: raw + va - address + count]
        raise ValueError(f"XBE VA not file-backed: 0x{va:08X}")
    return read


def verify(xbe=None):
    read = parse_xbe(xbe) if xbe is not None else None
    seen = set()
    with LEDGER.open(newline="", encoding="utf-8") as stream:
        rows = list(csv.DictReader(stream))
    if not rows:
        raise ValueError("empty allocator call ledger")
    for row in rows:
        caller, call, size = (int(row[k], 16) for k in (
            "caller_entry", "call_va", "guest_size_hex"))
        source = ROOT / row["source"]
        if (caller, call) in seen or not caller < call < caller + 0x2000:
            raise ValueError("duplicate or implausible original call site")
        seen.add((caller, call))
        if not re.fullmatch(r"src/main_unclassified/band_[0-9a-f]{4}/0x[0-9a-f]{8}\.cpp", row["source"]):
            raise ValueError("noncanonical source path")
        if int(source.stem, 16) != caller or not 0 <= size <= 0x7f:
            raise ValueError("wrong caller identity/size")
        text = source.read_text(encoding="utf-8")
        if ('#include "bf_002ea01d_allocator_guest32.h"' not in text
                or not re.search(r"\bFUN_002ea01d\s*\(\s*0x0*" + f"{size:x}" + r"\s*\)", text)):
            raise ValueError(f"missing matching guest32 call/header {source.name}")
        if row["source_status"] != "XBE_VERIFIED_DIRECT_CALL_SIZE_ONLY":
            raise ValueError("missing limited evidence status")
        if read is not None:
            if read(call - 2, 2) != bytes((0x6A, size)):
                raise ValueError(f"original PUSH mismatch at 0x{call-2:08x}")
            op, displacement = struct.unpack("<Bi", read(call, 5))
            if op != 0xE8 or (call + 5 + displacement) & 0xffffffff != DEST:
                raise ValueError(f"original CALL mismatch at 0x{call:08x}")
            if b"\x83\xc4\x04" not in read(call + 5, 10):
                raise ValueError(f"original caller cleanup mismatch at 0x{call:08x}")
    print(f"Verified {len(rows)} unique Ghidra source/allocator edges"
          + (" against the original XBE." if read else " (source-only; XBE not checked)."))


if __name__ == "__main__":
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--xbe", type=Path)
    verify(p.parse_args().xbe)
