#!/usr/bin/env python3
"""Read-only original-XBE evidence checks; NEVER commit the game executable."""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLER_BODY_SHA = "f7b7ffd8d854213afa2ef6ffe9ce142c332cd7ec3a27b05bcce526f83a1a78c6"

# Exact instruction bytes confirming final writes of the 48-byte upload frame,
# conditional REP MOVSD, and the original virtual/transform call handoffs.
INSTRUCTIONS = {
    0x0015595B: "c7 45 a4 00 00 80 3f",  # [EBP-5c] = 1.0f
    0x00155C01: "d9 5d 98",              # [EBP-68]
    0x00155C0D: "d9 5d 9c",              # [EBP-64]
    0x00155C19: "d9 5d a0",              # [EBP-60]
    0x00155D24: "d9 5d a8",              # [EBP-58]
    0x00155D2A: "d9 5d ac",              # [EBP-54]
    0x00155D33: "d9 5d b0",              # [EBP-50]
    0x00155C3D: "c7 45 b4 00 00 00 00", # [EBP-4c] = 0
    0x00155D0A: "d9 5d b8",              # [EBP-48]
    0x00155D13: "d9 5d bc",              # [EBP-44]
    0x00155D1C: "d9 5d c0",              # [EBP-40]
    0x00155C44: "c7 45 c4 00 00 00 00", # [EBP-3c] = 0
    0x00155D36: "75 0f",                 # conditional skip
    0x00155D38: "b9 0c 00 00 00",        # ECX = 12
    0x00155D3D: "8d 75 98",              # ESI = &[EBP-68]
    0x00155D40: "bf e8 e1 37 00",        # EDI = 0x0037e1e8
    0x00155D45: "f3 a5",                 # REP MOVSD
    0x00155D47: "6a 0c",                 # shader arg 12
    0x00155D49: "8d 55 98",              # EDX = &[EBP-68]
    0x00155D4C: "b9 1b 00 00 00",        # ECX = 27
    0x00155A7E: "8b 4d 08",              # original object argument
    0x00155A81: "8b 41 48",              # object + 0x48 vtable
    0x00155A87: "ff 50 14",              # indirect slot + 0x14
    0x00155A8A: "8b c8",                 # returned EAX -> ECX
    0x00155A8C: "8d 55 98",              # source vector EDX
    0x00155A8F: "8d 45 d4",              # result EAX
}

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path, help="Private authenticated default.xbe file")
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != XBE_SHA:
        parser.error(f"XBE SHA mismatch: {digest}")
    # Original section 0 maps code VA 0x00012000 to file offset 0x2000.
    def at(va, size):
        start = va - 0x10000
        if start < 0 or start + size > len(data):
            raise ValueError(f"Out of bounds original VA 0x{va:08X}")
        return data[start:start+size]
    body = hashlib.sha256(at(0x00155840, 1500)).hexdigest()
    if body != CALLER_BODY_SHA:
        raise ValueError(f"Original caller body hash mismatch: {body}")
    for va, hexbytes in INSTRUCTIONS.items():
        expected = bytes.fromhex(hexbytes)
        actual = at(va, len(expected))
        if actual != expected:
            raise ValueError(f"Unexpected bytes at 0x{va:08X}: {actual.hex()}")
    needle = struct.pack("<I", 0x00155840)
    slots = [i+0x10000 for i in range(len(data)-3) if data[i:i+4] == needle]
    print(f"PASS original XBE/caller hashes; {len(INSTRUCTIONS)} instruction windows")
    print(f"Found {len(slots)} original-image slots containing function pointer 0x00155840:")
    print(" ".join(f"0x{a:08X}" for a in slots))
    print("Function-pointer occurrences do NOT identify a concrete [table+0x14] target.")

if __name__ == "__main__":
    main()
