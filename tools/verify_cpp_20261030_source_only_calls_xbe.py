#!/usr/bin/env python3
"""Partial original-XBE call-edge evidence for ten C++17 source-only declarations.

The retail XBE must remain private. CI runs synthetic negative controls;
--xbe verifies the hash-pinned user-owned executable when accessible.
Host C++17 syntax and these direct edges do NOT establish guest ABI/behavior.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import struct

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLS = {
    0x0017D5CB: 0x0017C270,
    0x0017D7DB: 0x0017C270,
    0x00171523: 0x001713D0,
    0x00171600: 0x001713D0,
    0x000F927E: 0x00100D10,
    0x0010653E: 0x00100D10,
    0x000FC1D6: 0x00064490,
    0x00173579: 0x00064490,
    0x0011277F: 0x0005C0A0,
    0x00125231: 0x0005C0A0,
}
# Observed entry instructions; implicit register reads remain ABI_UNVERIFIED.
ENTRIES = {
    0x0017C270: "51535556578bf88bf1",  # EDI=EAX; ESI=ECX
    0x001713D0: "83ec0c8b4e0c",        # reads [ESI+0xC]
    0x00100D10: "538a5e65",            # reads [ESI+0x65]
    0x00064490: "5153568bf0",          # ESI=EAX
    0x0005C0A0: "8b560433c0",          # reads [ESI+4]
}
# C3 at these return sites. Adjacent 0x00064507 RET 0x0C is NOT
# attributed to FUN_00064490 without a separate control-flow review.
RETURNS = {
    0x0017C3A5: "c3",
    0x001714D8: "c3",
    0x00100DBD: "c3",
    0x000644D7: "c3",
    0x000644EE: "c3",
    0x0005C0C7: "c3",
    0x0005C0CB: "c3",
}


def decode_call(opcodes: bytes, va: int) -> int:
    if len(opcodes) != 5 or opcodes[0] != 0xE8:
        raise ValueError(f"not an original five-byte near CALL at {va:#x}")
    return va + 5 + struct.unpack("<i", opcodes[1:])[0]


def require_window(actual: bytes, expected: bytes, va: int) -> None:
    if actual != expected:
        raise ValueError(f"original opcode window mismatch at {va:#x}")


def read_va(xbe: bytes, va: int, n: int) -> bytes:
    if n <= 0 or len(xbe) < 0x124:
        raise ValueError("invalid XBE or byte window")
    base = struct.unpack_from("<I", xbe, 0x104)[0]
    count = struct.unpack_from("<I", xbe, 0x11C)[0]
    table = struct.unpack_from("<I", xbe, 0x120)[0] - base
    if count > 128 or table < 0 or table + count * 0x38 > len(xbe):
        raise ValueError("invalid XBE section table")
    for i in range(count):
        _, section_va, memory_size, raw, stored = struct.unpack_from(
            "<IIIII", xbe, table + i * 0x38)
        if section_va <= va and va + n <= section_va + min(memory_size, stored):
            pos = raw + va - section_va
            if pos + n > len(xbe):
                raise ValueError("XBE raw section outside file")
            return xbe[pos:pos + n]
    raise ValueError(f"original VA absent from stored XBE sections: {va:#x}")


def verify_xbe(xbe: bytes) -> None:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("original retail Brute Force XBE SHA-256 mismatch")
    for va, callee in CALLS.items():
        actual = decode_call(read_va(xbe, va, 5), va)
        if actual != callee:
            raise ValueError(f"original direct CALL target mismatch at {va:#x}: {actual:#x}")
    for va, hexdigits in {**ENTRIES, **RETURNS}.items():
        expected = bytes.fromhex(hexdigits)
        require_window(read_va(xbe, va, len(expected)), expected, va)
    print(f"PASS authenticated original XBE: {len(CALLS)} direct CALLs, "
          f"{len(ENTRIES)} entry windows, {len(RETURNS)} return windows")
    print("Partial register facts only; guest ABI and behavior ABI_UNVERIFIED")


def self_test() -> None:
    va, target = next(iter(CALLS.items()))
    encoded = b"\xe8" + struct.pack("<i", target - (va + 5))
    assert decode_call(encoded, va) == target
    for mutant in (b"\xe9" + encoded[1:], encoded[:-1],
                   b"\xe8" + struct.pack("<i", target - (va + 5) + 1)):
        try:
            if decode_call(mutant, va) == target:
                raise AssertionError("mutated call escaped verification")
        except ValueError:
            pass
    try:
        require_window(b"\x90", b"\xc3", 0x0017C3A5)
    except ValueError:
        pass
    else:
        raise AssertionError("mutated return escaped verification")
    print("PASS synthetic near-CALL and return-window negative controls; NOT original-XBE verification")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--xbe", type=Path, help="Private original XBE, never committed")
    ap.add_argument("--self-test", action="store_true")
    args = ap.parse_args()
    if args.self_test:
        self_test()
    if args.xbe:
        verify_xbe(args.xbe.read_bytes())
    else:
        print("Original XBE instruction verification unavailable (no --xbe supplied)")


if __name__ == "__main__":
    main()
