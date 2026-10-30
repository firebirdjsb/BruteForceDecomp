#!/usr/bin/env python3
"""Check the xyz SSE difference in FUN_002D3970, without inferring host ABI.

The original private XBE can be passed as --xbe; CI checks source contracts.
"""
import argparse
import hashlib
from pathlib import Path

DIGEST = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS = (
    (0x002D3ACE, "f30f1008"), # movss xmm1,[eax]
    (0x002D3AD2, "0f164804"), # movhps xmm1,[eax+4]
    (0x002D3ADA, "f30f1012"), # movss xmm2,[edx]
    (0x002D3ADE, "0f165204"), # movhps xmm2,[edx+4]
    (0x002D3AE2, "0f5cca"),   # subps xmm1,xmm2
    (0x002D3AE9, "f30f1108"), # movss [eax],xmm1
    (0x002D3AED, "0f174804"), # movhps [eax+4],xmm1
    (0x002D3A35, "8b90f4000000"), # MOV EDX, guest +0xf4 word
    (0x002D3A3B, "8b80ec000000"), # MOV EAX, guest +0xec address
    (0x002D3A8F, "8b90f8000000"), # MOV EDX, guest +0xf8 word
    (0x002D3A95, "8b80f0000000"), # MOV EAX, guest +0xf0 address
    (0x002D3B8F, "8b81f0000000"), # MOV EAX, guest +0xf0 address
    (0x002D3B95, "f6000c"),       # TEST BYTE PTR [EAX],0x0c
    (0x002D3C44, "8b81ec000000"), # MOV EAX, guest +0xec address
    (0x002D3C4A, "f6000c"),       # TEST BYTE PTR [EAX],0x0c
    (0x002D3D44, "8b81ec000000"), # MOV EAX, guest +0xec address
    (0x002D3D4A, "f6000c"),       # TEST BYTE PTR [EAX],0x0c
    (0x002D3DEE, "8b81f0000000"), # MOV EAX, guest +0xf0 address
    (0x002D3DF4, "f6000c"),       # TEST BYTE PTR [EAX],0x0c
)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--xbe", type=Path)
    a = p.parse_args()
    rel = "src/main_unclassified/band_002d/0x002d3970.cpp"
    src = (a.repo / rel).read_text(encoding="utf-8")
    for expression in (
        "(local_10[0] - local_20[0])",
        "(local_10[1] - local_20[1])",
        "(local_10[2] - local_20[2])",
    ):
        if expression not in src:
            raise SystemExit("Missing xyz lane: " + expression)
    for token in (
        "static uint32_t bf_002d3970_guest_word(const float *slot)",
        "memcpy(&guest_word, slot, sizeof guest_word);",
        "bf_002d3970_guest_word(param_1 + 0x3b)",
        "bf_002d3970_guest_word(param_1 + 0x3c)",
        "bf_002d3970_guest_word(param_1 + 0x3d)",
        "bf_002d3970_guest_word(param_1 + 0x3e)",
    ):
        if token not in src:
            raise SystemExit("Missing raw guest object DWORD: " + token)
    for bad in ("local_10._4_8_", "local_20._4_8_", "SUB84(local_10"):
        if bad in src:
            raise SystemExit("Incorrect merged 64-bit SSE representation: " + bad)
    if a.xbe is None:
        print("PASS: source-only xyz float32 lane check (no XBE in CI)")
        return
    data = a.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != DIGEST:
        raise SystemExit("Not the pinned original Brute Force XBE")
    for address, code in OPS:
        expected = bytes.fromhex(code)
        if data[address-0x10000:address-0x10000+len(expected)] != expected:
            raise SystemExit(f"x86 mismatch at 0x{address:08x}")
    print(f"PASS: {len(OPS)} original SIMD instruction signatures and source lane mapping")
    print("Guest pointer fields and complete callback ABI remain unverified")

if __name__ == "__main__":
    main()
