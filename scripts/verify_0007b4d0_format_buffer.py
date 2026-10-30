#!/usr/bin/env python3
"""Check original Xbox format-buffer addresses and C11 storage identity.

This is operand/source evidence, not ABI-complete or behavior verification.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import struct

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = Path("src/main_unclassified/band_0007/0x0007b4d0.cpp")
# Addresses below are Xbox virtual addresses; the pinned XBE's main .text
# section has file offset VA - 0x10000. Do not apply to other sections.
INSTRUCTIONS = (
    (0x0007B4D0, "81ec04010000"),  # sub esp, 0x104
    (0x0007B575, "8d4c2418"),      # lea ecx,[esp+0x18]
    (0x0007B579, "6804010000"),    # push 0x104
    (0x0007B5A7, "8d542414"),      # lea edx,[esp+0x14]
    (0x0007B5AB, "6804010000"),    # push 0x104
    (0x0007B5D1, "8d442414"),      # lea eax,[esp+0x14]
)
CALLS = (
    (0x0007B57F, 0x002EAA19),
    (0x0007B5B1, 0x002EAA19),
    (0x0007B5D5, 0x00077FB0),
)

def check_x86(data: bytes) -> None:
    for va, expected in INSTRUCTIONS:
        raw = bytes.fromhex(expected)
        offset = va - 0x10000
        if data[offset:offset + len(raw)] != raw:
            raise ValueError(f"original opcode mismatch at {va:#010x}")
    for va, destination in CALLS:
        offset = va - 0x10000
        if data[offset] != 0xE8:
            raise ValueError(f"expected relative CALL at {va:#010x}")
        displacement = struct.unpack_from("<i", data, offset + 1)[0]
        if (va + 5 + displacement) & 0xFFFFFFFF != destination:
            raise ValueError(f"unexpected CALL destination at {va:#010x}")

def check_source(source: str) -> None:
    required = (
        "char guest_format_buffer[0x104];",
        "FUN_002eaa19(guest_format_buffer,0x104,s_gameflags_s_0040dd3c,puVar1);",
        "FUN_002eaa19(guest_format_buffer,0x104,&DAT_0040dd4c,iVar2,puVar1);",
        "implicit EAX",
        "ABI_UNVERIFIED",
    )
    for token in required:
        if token not in source:
            raise ValueError(f"missing source invariant: {token}")
    if "stack0xfffffef8" in source:
        raise ValueError("unresolved Ghidra pseudo-stack symbol reintroduced")

def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    check_source(source)
    if args.xbe:
        data = args.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != XBE_SHA256:
            parser.error("wrong Xbox executable SHA-256")
        check_x86(data)
        # Negative control: an opcode mismatch must fail independently of hash.
        bad = bytearray(data)
        bad[0x0007B5A7 - 0x10000] ^= 1
        try:
            check_x86(bad)
        except ValueError:
            pass
        else:
            raise ValueError("negative x86 opcode control failed")
    try:
        check_source(source.replace("guest_format_buffer,0x104,s_gameflags_s_0040dd3c",
                                    "wrong_buffer,0x104,s_gameflags_s_0040dd3c"))
    except ValueError:
        pass
    else:
        raise ValueError("negative C buffer-identity control failed")
    print("PASS: 0x0007b4d0 same 260-byte stack buffer, 3 direct calls, source invariants")
    print("LIMITATION: implicit EAX into 0x00077fb0 and remaining ABI not reconstructed")

if __name__ == "__main__":
    main()
