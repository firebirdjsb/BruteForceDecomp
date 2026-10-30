#!/usr/bin/env python3
"""Verify Xbox x87 FSTP binary32 and 32-bit forwarding, not the full guest ABI.

XBE option checks original bytes; CI tests source-only because the game image
is private and must not be committed.  `float` is the guest IEEE binary32
numeric value, `guest_y_angle_word` is the *same 32 bits* forwarded as DWORD.
"""
import argparse
from pathlib import Path
import struct

SOURCE = "src/main_unclassified/band_0017/0x00177d50.cpp"
OPCODES = (
    (0x00177D87, "d95df4"),       # FSTP DWORD PTR [EBP-0xC]
    (0x00177D96, "ff5228"),       # CALL DWORD PTR [EDX+0x28], x87 result in ST(0)
    (0x00177D99, "d95dfc"),       # FSTP DWORD PTR [EBP-0x4] into binary32 slot
    (0x00177E18, "8b45fc"),       # MOV EAX,[EBP-0x4] raw DWORD
    (0x00177E1B, "8b4df4"),       # MOV ECX,[EBP-0xC] first raw DWORD
    (0x00177E24, "50"),           # PUSH EAX (second result's bits)
    (0x00177E28, "51"),           # PUSH ECX (first result's bits)
    (0x00177E2F, "e85c40efff"),   # CALL 0x0006BE90
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    tokens = (
        "float guest_y_angle;",
        "uint32_t guest_y_angle_word;",
        "guest_y_angle = (float)fVar3;",
        "memcpy(&guest_y_angle_word, &guest_y_angle, sizeof guest_y_angle_word);",
        "FUN_0006be90(local_10,guest_y_angle_word);",
        "local_8 = param_1 + 0x134;",
    )
    for token in tokens:
        if token not in source:
            raise SystemExit("Missing source word/pointer separation: " + token)
    if "local_8 = (short *)(float)fVar3" in source:
        raise SystemExit("Incorrect numeric-to-pointer cast restored")
    for word in (0, 0x3f800000, 0xbf800000, 0x80000000, 0x3dcccccd, 0x7f800000):
        assert struct.unpack("<I", struct.pack("<f", struct.unpack("<f", struct.pack("<I", word))[0]))[0] == word
    if args.xbe:
        data = args.xbe.read_bytes()
        for address, hexcode in OPCODES:
            expected = bytes.fromhex(hexcode)
            offset = address - 0x10000
            if data[offset:offset + len(expected)] != expected:
                raise SystemExit("Original x86 instruction mismatch at 0x%08X" % address)
        print(f"PASS: {len(OPCODES)} original x86 opcodes and two separated C11 uses")
    else:
        print("PASS: source/IEEE binary32 contract only; original XBE not provided")
    print("Complete x87 ABI, indirect call signature and runtime remain unverified.")

if __name__ == "__main__":
    main()
