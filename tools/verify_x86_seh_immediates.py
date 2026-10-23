#!/usr/bin/env python3
"""Validate recovered MSVC x86 guest-SEH prologue immediates.

Without --xbe, inspect every updated C11 file's original-entry address and
uint32_t stack-word syntax. With --xbe, require the EXACT original XBE SHA256
and prove each original function starts with:
55 8B EC 6A FF 68 <handler_guest_va_le32>
64 A1 00 00 00 00 50
This check does NOT assert that native Windows exception chaining is linked,
emulated, or behavior-equivalent. The original guest FS:0 ABI remains pending.
"""
from __future__ import annotations

import argparse
import hashlib
import re
import struct
from pathlib import Path

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
ASSIGN = re.compile(r"\bpuStack_c\s*=\s*UINT32_C\(0x([0-9a-fA-F]{8})\);")
BASE = bytes.fromhex("55 8b ec 6a ff 68")
TAIL = bytes.fromhex("64 a1 00 00 00 00 50")
MIN_INITIAL_VERIFIED = 48


def source_pairs(root: Path) -> list[tuple[int, int]]:
    pairs = []
    for path in sorted((root / "src").rglob("0x????????.c")):
        text = path.read_text(encoding="utf-8")
        matches = ASSIGN.findall(text)
        if not matches:
            continue
        if len(matches) != 1 or "uint32_t puStack_c;" not in text:
            raise ValueError(f"Guest SEH word declaration inconsistent: {path}")
        if re.search(r"\bpuStack_c\s*=\s*&LAB_", text):
            raise ValueError(f"Unresolved old SEH pseudo-label: {path}")
        entry = int(path.stem, 16)
        marker = f"Entry: 0x{entry:08x}"
        if marker not in text:
            raise ValueError(f"Original function identity changed: {path}")
        pairs.append((entry, int(matches[0], 16)))
    if len(pairs) < MIN_INITIAL_VERIFIED:
        raise ValueError("Verified guest handler records disappeared")
    if len(set(x for x, _ in pairs)) != len(pairs):
        raise ValueError("Duplicate original x86 entry")
    print(f"PASS: {len(pairs)} guest32 SEH stack words present in scoped C drafts")
    return pairs


def verify_original(path: Path, pairs: list[tuple[int, int]]) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != EXPECTED_XBE_SHA256:
        raise ValueError("Unexpected retail Brute Force XBE SHA256")
    if data[:4] != b"XBEH":
        raise ValueError("Original XBE magic mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    n, table = struct.unpack_from("<II", data, 0x11C)
    if not 0 < n < 128:
        raise ValueError("Invalid section count")
    sections = []
    for i in range(n):
        offset = table - base + i * 0x38
        if not 0 <= offset <= len(data) - 20:
            raise ValueError("XBE section table not backed")
        _, mem, virt_size, file_offset, file_size = struct.unpack_from("<IIIII", data, offset)
        sections.append((mem, min(virt_size, file_size), file_offset))

    for entry, handler in pairs:
        for va, length, offset in sections:
            if va <= entry and entry + 17 <= va + length:
                actual = data[offset + entry - va: offset + entry - va + 17]
                expected = BASE + struct.pack("<I", handler) + TAIL
                if actual != expected:
                    raise ValueError(f"Original x86 SEH prologue mismatch at 0x{entry:08x}")
                break
        else:
            raise ValueError(f"Unmapped original x86 entry 0x{entry:08x}")
    print(f"PASS: {len(pairs)} complete original 17-byte push-imm32/FS:0 prologues")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    pairs = source_pairs(args.root.resolve())
    if args.xbe is not None:
        verify_original(args.xbe, pairs)


if __name__ == "__main__":
    main()
