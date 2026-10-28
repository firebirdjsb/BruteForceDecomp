#!/usr/bin/env python3
"""Private-XBE instruction-window gate for two guest-stack repair candidates.

Evidence-gathering only: no C11, whole-function ABI or runtime equivalence claim.
The copyrighted XBE is consumed locally and must never be committed.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
TEXT_FILE_BIAS = 0x10000
WINDOWS = {
    "0x00257b50": (
        (0x257b53, "81 ec 20 01 00 00", "allocate 0x120 stack bytes"),
        (0x257b99, "56", "save ESI"),
        (0x257c05, "8d 4c 24 1c", "per-item interface output"),
        (0x257c49, "68 04 01 00 00", "request 0x104 bytes"),
        (0x257c4e, "8d 54 24 28", "first read destination"),
        (0x257c5c, "8d 44 24 24", "first string scan"),
        (0x257c6c, "53", "save EBX"),
        (0x257c88, "68 04 01 00 00", "second 0x104 read"),
        (0x257c8d, "8d 44 24 2c", "second read destination"),
        (0x257c9b, "8d 44 24 28", "second string scan"),
        (0x257cc0, "5b", "restore EBX"),
        (0x257cc6, "8d 54 24 14", "closing output address"),
    ),
    "0x002a75d0": (
        (0x2a75d0, "81 ec 44 01 00 00", "allocate 0x144 bytes"),
        (0x2a7610, "57", "save EDI"),
        (0x2a763f, "88 5c 24 54", "empty-string byte store"),
        (0x2a765d, "8b 4d 00", "load virtual-call owner"),
        (0x2a7660, "53 6a 01", "push zero and one-byte count"),
        (0x2a7663, "8d 54 24 40", "one-byte read output"),
        (0x2a7668, "55 ff 51 10", "indirect stream read"),
        (0x2a76ad, "6a 04", "four-byte count in other branch"),
        (0x2a76af, "8d 44 24 3c", "four-byte output address"),
        (0x2a76b8, "8b 44 24 34", "read distinct adjacent slot"),
        (0x2a770d, "8d 4c 24 10", "interface output pointer"),
        (0x2a7711, "51 68 90 2b 40 00", "push output and IID"),
        (0x2a7717, "56 ff 10", "indirect interface call"),
        (0x2a7726, "8d 4c 24 14", "next interface output"),
    ),
}


# Verified call chains, distinct from the original two stack-alias windows.
# The out-address operands establish caller contracts. They do NOT identify a
# virtual callee implementation or prove it writes all bytes on all paths.
SUPPLEMENTAL_WINDOWS = {
    "0x00257b50-producer-consumer": (
        (0x257c09, "51 56 50 ff 52 24", "virtual +0x24: out, index, receiver"),
        (0x257c17, "8b 54 24 1c", "consume first 32-bit output"),
        (0x257c1e, "52", "push first output value"),
        (0x257c1f, "e8 bc ad fd ff", "direct 0x2329e0"),
        (0x257c24, "8b 44 24 20", "consume second 32-bit output"),
        (0x257c28, "50", "push second output value"),
        (0x257c2c, "e8 af ad fd ff", "direct 0x2329e0"),
    ),
    "0x002329e0": (
        (0x2329e0, "56 8b f0", "EAX input stream saved in ESI"),
        (0x2329e3, "a1 24 99 46 00", "write mode global"),
        (0x232a0c, "e8 4f 02 02 00", "call 0x252c60"),
        (0x232a19, "ff 50 14", "virtual +0x14 writer"),
        (0x232a1e, "c2 04 00", "callee pops one stack argument"),
        (0x232a21, "8b 54 24 08", "load caller DWORD"),
        (0x232a29, "6a 04 52 56 ff 51 14", "write DWORD through virtual +0x14"),
        (0x232a31, "c2 04 00", "callee pops one stack argument"),
    ),
    "0x00252c60": (
        (0x252c60, "51 53 8b d8", "EAX input value moved to EBX"),
        (0x252c64, "8a c3 24 7f", "varint low seven bits"),
        (0x252c7b, "6a 01", "one byte per write"),
        (0x252c83, "ff 50 14", "virtual +0x14 stream write"),
        (0x252c93, "c3", "plain return with no stack args"),
    ),
    "0x002a75d0-outputs-and-calls": (
        (0x2a75e8, "8d 4c 24 30", "first incoming four-byte read output"),
        (0x2a75f9, "8d 44 24 34", "second incoming four-byte read output"),
        (0x2a7602, "39 5c 24 2c", "read second count"),
        (0x2a7611, "d9 44 24 2c", "read first float"),
        (0x2a7615, "53", "iteration saves EBX (S-4)"),
        (0x2a766c, "8a 4c 24 54", "CRC input is S+0x50, not scratch S+0x34"),
        (0x2a770b, "8b 06", "QI receiver vtable"),
        (0x2a7711, "51 68 90 2b 40 00 56 ff 10", "QI output S+0x0c; virtual slot zero"),
        (0x2a774c, "89 44 24 50", "record third DWORD"),
        (0x2a7750, "e8 bb fd ff ff", "direct call 0x2a7510, EDI record"),
        (0x2a777e, "e8 5d b1 00 00", "direct callee 0x2b28e0"),
    ),
    "0x002a7510": (
        (0x2a7510, "83 ec 08 56", "direct helper reserves scratch and saves ESI"),
        (0x2a7514, "8b 77 04", "EDI+4 is source stream"),
        (0x2a7523, "ff 50 10", "source stream virtual +0x10"),
        (0x2a756d, "81 3f 00 00 80 3f", "first record DWORD comparison"),
        (0x2a7598, "57 52", "EDI and EDX to 0x2a6f50"),
        (0x2a759a, "e8 b1 f9 ff ff", "direct call 0x2a6f50"),
    ),
    "0x002ebea0": (
        (0x2ebea0, "85 c0", "EAX allocation byte count"),
        (0x2ebea4, "3d 00 10 00 00", "page threshold 0x1000"),
        (0x2ebeb4, "94", "small allocation swaps ESP and EAX"),
        (0x2ebec4, "2d 00 10 00 00", "large allocation probes down by 0x1000"),
        (0x2ebed8, "8b e1", "large allocation changes ESP"),
        (0x2ebedf, "50 c3", "relocated stack return address"),
    ),
    "0x002c2530": (
        (0x2c254c, "0f bf 78 0c", "signed 16-bit dynamic scratch length"),
        (0x2c2553, "8b c7", "input length to EAX"),
        (0x2c2555, "83 c0 03 83 e0 fc", "round allocation to 4-byte boundary"),
        (0x2c255b, "e8 40 99 02 00", "dynamic call to 0x2ebea0"),
        (0x2c2569, "8b dc", "EBX takes new guest ESP"),
        (0x2c256d, "f3 ab", "zero scratch DWORDs"),
        (0x2c2574, "f3 aa", "zero trailing scratch bytes"),
        (0x2c25fc, "8b c7 8d 65 e0", "frame-based stack restore"),
    ),
    "0x00269600": (
        (0x269606, "b8 b4 14 00 00", "constant 0x14b4-byte allocation"),
        (0x26960b, "e8 90 28 08 00", "stack probe helper"),
        (0x269623, "8d 7c 24 10", "stack scratch base"),
        (0x269627, "f3 ab", "zero original count through REP STOSD"),
        (0x269629, "b9 46 01 00 00", "copy 326 original DWORDs"),
        (0x2696f4, "8b e5 5d c2 08 00", "restore stack, RET 8"),
    ),
}
# Original signed stack offsets vary with temporary PUSH instructions.
def verify_guest_frame_arithmetic() -> None:
    # T = ESP immediately after 0x257B99 PUSH ESI.
    assert 0x28 - 4 == 0x2c - 8 == 0x24
    # S = ESP immediately after 0x2A7610 PUSH EDI.
    # 0x2A7615 PUSH EBX persists during both branch reads.
    assert 0x40 - 12 == 0x3c - 8 == 0x34
    assert 0x34 - 4 == 0x30  # distinct preceding input word
    assert 0x10 - 4 == 0x0c  # first interface output
    assert 0x14 - 4 == 0x10  # second interface output
    assert 0x54 - 4 == 0x50  # CRC string buffer

WINDOWS.update(SUPPLEMENTAL_WINDOWS)

def verify(xbe: bytes) -> int:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("Original XBE SHA-256 mismatch; refuse instruction inspection")
    verify_guest_frame_arithmetic()
    total = 0
    for entry, windows in WINDOWS.items():
        for address, hex_bytes, description in windows:
            expected = bytes.fromhex(hex_bytes)
            offset = address - TEXT_FILE_BIAS
            if offset < 0 or offset + len(expected) > len(xbe):
                raise ValueError(f"Out-of-bounds original instruction at 0x{address:08x}")
            if xbe[offset:offset + len(expected)] != expected:
                raise ValueError(f"Original bytes mismatch 0x{address:08x}: {description}")
            total += 1
        print(f"PASS {entry}: {len(windows)} authenticated instruction windows")
    print(f"PASS: {total} original instruction windows and stack relationships; virtual targets unverified")
    return total

def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True, help="Private original XBE (not uploaded)")
    args = parser.parse_args()
    verify(args.xbe.read_bytes())

if __name__ == "__main__":
    main()
