#!/usr/bin/env python3
"""Verify guest pointer DWORD and three-lane SIMD repairs in 0x002C5A40.

Without --xbe, CI verifies source-level invariants only.  The original
private XBE is checked by SHA256 and exact opcode signatures when supplied.
This is not a whole-function or native-ABI equivalence claim.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = (
    (0x002C5A91, "8b4860"),        # mov ecx,[eax+0x60]: guest pointer DWORD
    (0x002C5A94, "f6010c"),        # test byte [ecx],0x0c
    (0x002C5B08, "8b4164"),        # mov eax,[ecx+0x64]: second pointer DWORD
    (0x002C5B1F, "f30f105c240c"),  # movss xmm3,[esp+0xc]
    (0x002C5B29, "f30f1010"),      # movss xmm2,[eax]
    (0x002C5B2D, "0f165004"),      # movhps xmm2,[eax+4] : lanes 1,2
    (0x002C5B31, "0fc6db00"),      # shufps xmm3,xmm3,0 : broadcast scale
    (0x002C5B39, "f30f1008"),      # movss xmm1,[eax]
    (0x002C5B3D, "0f164804"),      # movhps xmm1,[eax+4]
    (0x002C5B41, "0f59d3"),        # mulps xmm2,xmm3
    (0x002C5B44, "0f58ca"),        # addps xmm1,xmm2
    (0x002C5B4B, "f30f1108"),      # movss [eax],xmm1
    (0x002C5B4F, "0f174804"),      # movhps [eax+4],xmm1
    (0x002C5B5E, "8b4164"),        # reload guest pointer DWORD
    (0x002C5B77, "f30f105c2404"),  # second group scalar scale
    (0x002C5B81, "f30f1010"),
    (0x002C5B85, "0f165004"),
    (0x002C5B89, "0fc6db00"),
    (0x002C5B91, "f30f1008"),
    (0x002C5B95, "0f164804"),
    (0x002C5B99, "0f59d3"),
    (0x002C5B9C, "0f58ca"),
    (0x002C5BA3, "f30f1108"),
    (0x002C5BA7, "0f174804"),
    (0x002C5BAE, "c20800"),        # two caller stack DWORDs
)
SOURCE = "src/main_unclassified/band_002c/0x002c5a40.c"
REQUIRED = (
    "static uint32_t bf_002c5a40_guest_pointer_word(const float *slot)",
    "memcpy(&word, slot, sizeof word);",
    "bf_002c5a40_guest_pointer_word(param_1 + 0x18)",
    "bf_002c5a40_guest_pointer_word(param_1 + 0x19)",
    "destination[0] += param_1[0] * scale;",
    "destination[1] += param_1[1] * scale;",
    "destination[2] += param_1[2] * scale;",
    "destination[0] += param_1[8] * scale;",
    "destination[1] += param_1[9] * scale;",
    "destination[2] += param_1[10] * scale;",
)
FORBIDDEN = ("CONCAT44(", "*(ulonglong *)", "(int)fVar2")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    source = (args.repo / SOURCE).read_text(encoding="utf-8")
    for token in REQUIRED:
        if token not in source:
            raise SystemExit(f"{SOURCE}: missing C11 invariant: {token}")
    for token in FORBIDDEN:
        if token in source:
            raise SystemExit(f"{SOURCE}: Ghidra scalar alias still present: {token}")
    if args.xbe is None:
        print("PASS: source-only three-lane guest vector contract; original XBE NOT checked")
        return
    image = args.xbe.read_bytes()
    if hashlib.sha256(image).hexdigest() != XBE_SHA256:
        raise SystemExit("XBE hash does not match original image")
    for address, opcodes in OPCODES:
        want = bytes.fromhex(opcodes)
        offset = address - 0x10000
        if image[offset:offset + len(want)] != want:
            raise SystemExit(f"Original instruction mismatch at 0x{address:08x}")
    print(f"PASS: {len(OPCODES)} original XBE opcode signatures and C11 source invariants")
    print("Full function ABI, guest memory translation and exact floating-point rounding remain unverified")

if __name__ == "__main__":
    main()
