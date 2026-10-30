#!/usr/bin/env python3
"""Focused original-XBE and source proof for two 2026-10-26 scalar repairs.

The XBE is private and is never checked in. Syntax acceptance is not a native
ABI, guest-memory, complete x87 environment, or 1:1 runtime equivalence proof.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODIES = {
    0x002EC6BB: (491, "c4118aff82e82e0efa0c4f30d8dcd2d7e9c7442ba4ba1fe632c6945b449429f1"),
    0x002D1FA0: (778, "9e49d4cadea023615142b281a58191b453732221aaad5030d645272116efa566"),
}
WINDOWS = {
    0x002EC7F9: "dd55f0",       # FST double into two guest DWORDs
    0x002EC82C: "8a45f6",       # load byte six of IEEE-754 double
    0x002EC82F: "83e00f",       # mask significand high 4 bits
    0x002EC832: "83c810",       # insert implicit leading one bit
    0x002EC835: "668945f6",     # 16-bit write in exponent word
    0x002EC84F: "d16df0",       # SHR lower guest DWORD
    0x002EC852: "845df4",       # TEST low bit of upper guest DWORD
    0x002EC857: "804df380",     # transfer bit into lower DWORD bit31
    0x002EC85B: "d16df4",       # SHR upper guest DWORD
    0x002EC863: "dd45f0",       # FLD reconstructed double
    0x002D202A: "f30f1008",     # MOVSS XYZ x
    0x002D202E: "0f164804",     # MOVHPS XYZ y+z
    0x002D203E: "0f5cca",       # SUBPS float lanes
    0x002D2045: "f30f1108",     # MOVSS store x
    0x002D2049: "0f174804",     # MOVHPS store y+z
    0x002D2098: "0f59c0",       # MULPS xyz squared
    0x002D209B: "0fc6c880",     # SHUFPS for dot product
    0x002D209F: "0f58c8",       # ADDPS
    0x002D20A2: "0fc6c903",     # SHUFPS
    0x002D20A6: "f30f58c8",     # ADDSS
    0x002D20B8: "f30f5244240c", # RSQRTSS approximation
    0x002D213E: "f30f5144240c", # SQRTSS
    0x002D2291: "8b484c",      # read guest flags from +0x4c
    0x002D2294: "81e1fffdffff", # clear flag 0x200
    0x002D229A: "81c900010000", # set flag 0x100
    0x002D22A0: "89484c",      # write guest flags
}
SOURCE_MARKERS = {
    "src/main_unclassified/band_002e/0x002ec6bb.cpp": (
        "uint64_t guest_mantissa_bits;",
        "memcpy(&guest_mantissa_bits,&guest_double_value,sizeof(guest_mantissa_bits));",
        "low_word = (low_word >> 1) | ((high_word & 1u) << 31);",
        "high_word >>= 1;",
        "memcpy(&guest_shifted_double,&guest_mantissa_bits,sizeof(guest_shifted_double));",
    ),
    "src/main_unclassified/band_002d/0x002d1fa0.cpp": (
        "#include <xmmintrin.h>",
        "memcpy(&first_y,&local_1c,sizeof first_y);",
        "memcpy(&second_y,&local_c,sizeof second_y);",
        "fVar8 = param_2[1] - first_y;",
        "fVar10 = param_2[2] - first_z;",
        "_mm_rsqrt_ss(_mm_set_ss(guest_length_sq))",
        "_mm_sqrt_ss(_mm_set_ss(",
        "guest_flags = (guest_flags & UINT32_C(0xfffffdff)) | UINT32_C(0x100);",
    ),
}

def check_samples():
    # Verify that the two DWORD shifts correspond to one unsigned 64-bit shift.
    for bits in (0, 1, 0xffffffff, 0x100000000, 0x1ffffffff,
                 0x8000000000000000, 0xffffffffffffffff, 0x123456789abcdef0):
        lo, hi = bits & 0xffffffff, bits >> 32
        lo = (lo >> 1) | ((hi & 1) << 31)
        hi >>= 1
        assert ((hi << 32) | lo) == bits >> 1

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--xbe", type=Path, help="original Xbox XBE, private")
    a = p.parse_args()
    check_samples()
    for rel, markers in SOURCE_MARKERS.items():
        source = (a.root / rel).read_text(encoding="utf-8")
        for token in markers:
            if token not in source:
                raise SystemExit(f"missing {rel} source contract {token}")
        for bad in ("local_14._", "auVar4._", "(double)((ulonglong)(double)"):
            if bad in source:
                raise SystemExit(f"unresolved guest subpiece or numeric cast {rel}: {bad}")
    if a.xbe:
        image = a.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != XBE_SHA256:
            raise SystemExit("unexpected original XBE SHA256")
        for entry, (length, expected_sha) in BODIES.items():
            start = entry - 0x10000
            actual_sha = hashlib.sha256(image[start:start+length]).hexdigest()
            if actual_sha != expected_sha:
                raise SystemExit(f"original x86 body mismatch 0x{entry:08X}")
        for address, opcode in WINDOWS.items():
            expected = bytes.fromhex(opcode)
            start = address - 0x10000
            actual = image[start:start+len(expected)]
            if actual != expected:
                raise SystemExit(f"original opcode mismatch 0x{address:08X}: {actual.hex()}")
        print(f"PASS: 2 original body hashes, {len(WINDOWS)} original opcode windows, two C11 lane contracts")
    else:
        print("PASS: C11 source invariants and 8 unsigned cross-DWORD cases; original XBE not supplied")

if __name__ == "__main__":
    main()
