#!/usr/bin/env python3
"""Source-only guard for one verified object-argument alias in FUN_0011c810.

Optional --xbe reauthenticates the private original Xbox executable, contiguous
body and original opcode windows. Neither mode proves full ABI, C11 syntax,
x87, virtual dispatch, runtime behavior or a matching rebuilt binary.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import re
import struct

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_SHA = "A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255"
ENTRY = 0x0011C810
BODY_SIZE = 647
# Exact bytes from the user's pinned original XBE; short instruction windows
# authenticate the five reloads, original object field and three stores.
OPCODES = {
    0x0011C810: "81 ec 88 00 00 00",
    0x0011C816: "8b 8c 24 8c 00 00 00",
    0x0011C823: "56",
    0x0011C893: "8b 8c 24 90 00 00 00",
    0x0011C8AE: "8b b4 24 90 00 00 00",
    0x0011C8B5: "8b 46 6c",
    0x0011C966: "8b 94 24 90 00 00 00",
    0x0011C977: "8b 8c 24 90 00 00 00",
    0x0011C986: "8b 94 24 90 00 00 00",
    0x0011C96D: "c7 82 b0 07 00 00 00 00 80 3f",
    0x0011C980: "89 81 b4 07 00 00",
    0x0011C98D: "89 82 b8 07 00 00",
}

def verify_source(src: str) -> None:
    if "Input x86 body SHA-256: " + BODY_SHA not in src:
        raise ValueError("Original function identity/body hash changed")
    if "ABI_UNVERIFIED" not in src:
        raise ValueError("Unverified status was removed")
    if re.search(r"\b(?:unaff_retaddr|iStack_4)\b", src):
        raise ValueError("Uninitialized object pseudo-alias reintroduced")
    checks = {
        "(*(int *)(param_1 + 0x1b4) + 0x30)": 2,
        "iVar4 = param_1;": 1,
        "iVar3 = *(int *)(param_1 + 0x6c);": 1,
        "*(undefined4 *)(param_1 + 0x7b0) = 0x3f800000;": 1,
        "*(undefined4 *)(param_1 + 0x7b4) = 0;": 1,
        "*(undefined4 *)(param_1 + 0x7b8) = 0;": 1,
    }
    for text, expected in checks.items():
        if src.count(text) != expected:
            raise ValueError(f"Original object usage count changed: {text}")

def verify_xbe(raw: bytes) -> None:
    if hashlib.sha256(raw).hexdigest().upper() != XBE_SHA or raw[:4] != b"XBEH":
        raise ValueError("Not the pinned original Brute Force executable")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11c)
    offset = table_va - base
    if not (1 <= count <= 256 and 0 <= offset <= len(raw) - count * 56):
        raise ValueError("Invalid XBE section table")
    matching = []
    for n in range(count):
        _flags, va, vsize, foff, fsize, _name = struct.unpack_from(
            "<6I", raw, offset + n * 56
        )
        delta = ENTRY - va
        if 0 <= delta and delta + BODY_SIZE <= min(vsize, fsize):
            start = foff + delta
            if start + BODY_SIZE <= len(raw):
                matching.append(raw[start:start + BODY_SIZE])
    if len(matching) != 1:
        raise ValueError("Original body has no unique file-backed section")
    body, = matching
    if hashlib.sha256(body).hexdigest().upper() != BODY_SHA:
        raise ValueError("647-byte original body digest mismatch")
    for address, hexbytes in OPCODES.items():
        opcode = bytes.fromhex(hexbytes)
        if body[address-ENTRY:address-ENTRY+len(opcode)] != opcode:
            raise ValueError(f"Original instruction mismatch: 0x{address:08X}")

def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path, help="Private user-owned original; never commit")
    p.add_argument("--xbox-only", action="store_true")
    args = p.parse_args()
    if not args.xbox_only:
        path = args.root / "src/main_unclassified/band_0011/0x0011c810.c"
        verify_source(path.read_text(encoding="utf-8"))
        print("Original-object source alias invariants verified")
    if args.xbe is not None:
        verify_xbe(args.xbe.read_bytes())
        print(f"Pinned XBE, {BODY_SIZE}-byte body and {len(OPCODES)} original instructions authenticated")
    if args.xbox_only and args.xbe is None:
        p.error("--xbox-only requires --xbe")
    print("ABI, floating point, indirect calls, host syntax pass and runtime still unverified")

if __name__ == "__main__":
    main()
