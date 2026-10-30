#!/usr/bin/env python3
"""Check original Xbox CRT guest-address stores and onexit code patch.

Without an XBE: validate source spellings and 32-bit guest immediates.
With the original hash-pinned XBE: also validate the exact x86 instructions.
Not a proof that Windows/Linux/Android native guest mapping is implemented.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS = {
    0x002ebe35: "b82dfe2e00",  # mov eax, 0x002efe2d
    0x002ebe3a: "a390713b00",  # store eax at 0x003b7190
    0x002ebe3f: "c70594713b00f0fa2e00",
    0x002ebe49: "c70598713b0055fb2e00",
    0x002ebe53: "c7059c713b0098fa2e00",
    0x002ebe5d: "c705a0713b003bfb2e00",
    0x002ebe67: "a3a4713b00",  # same eax at 0x003b71a4
    0x0023767d: "683da42e00",  # first VirtualProtect address
    0x00237682: "be3da42e00",  # mov esi, patched entry
    0x00237698: "683da42e00",  # second VirtualProtect address
    0x0023769d: "c606c3",      # mov byte ptr [esi], 0xc3
}

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    source = (args.root / "src/main_unclassified/band_002e/0x002ebe35.cpp").read_text()
    pairs = [
        ("003b7190", "002EFE2D"),
        ("003b7194", "002EFAF0"),
        ("003b7198", "002EFB55"),
        ("003b719c", "002EFA98"),
        ("003b71a0", "002EFB3B"),
        ("003b71a4", "002EFE2D"),
    ]
    for target, address in pairs:
        expected = "PTR_FUN_" + target + " = UINT32_C(0x" + address + ");"
        if expected not in source:
            raise AssertionError(expected)
    patch = (args.root / "src/main_unclassified/band_0023/0x00237670.cpp").read_text()
    for expected in [
        "UINT32_C(0x002EA43D)",
        "UINT8_C(0xC3)",
        "XAPILIB__VirtualProtect((void *)guest_entry, 2, 4, &previous_protection)",
        "previous_protection, ignored_previous_protection)",
    ]:
        if expected not in patch:
            raise AssertionError(expected)
    if args.xbe:
        xbe = args.xbe.read_bytes()
        if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
            raise AssertionError("Not the pinned original Xbox XBE")
        for va, hx in OPS.items():
            expected = bytes.fromhex(hx)
            if xbe[va - 0x10000:va - 0x10000 + len(expected)] != expected:
                raise AssertionError("x86 instruction mismatch at " + hex(va))
    print("PASS: six CRT guest callback words and original onexit RET patch")

if __name__ == "__main__":
    main()
