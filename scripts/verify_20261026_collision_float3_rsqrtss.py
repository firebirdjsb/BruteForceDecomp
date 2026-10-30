#!/usr/bin/env python3
"""Validate two original collision-float3 source repairs and Xbox SSE instructions.

The private original Xbox XBE must be supplied explicitly for byte evidence;
the default CI mode verifies source contracts only. Guest ABI and complete x87
rounding remain unverified even if all checks pass.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPERANDS = {
    0x002D6C43: "f30f1000",       # MOVSS XYZ x
    0x002D6C47: "0f164004",       # MOVHPS XYZ y,z
    0x002D6C4B: "0f59c0",         # MULPS
    0x002D6C4E: "0fc6c880",       # SHUFPS horizontal sum
    0x002D6C52: "0f58c8",         # ADDPS
    0x002D6C55: "0fc6c903",       # SHUFPS lane3
    0x002D6C59: "f30f58c8",       # ADDSS lane0
    0x002D6C5D: "f30f114c2428",  # MOVSS rounded F32 sum to guest stack
    0x002D6C6B: "f30f5244242c",  # RSQRTSS from F32 stack word
    0x002D7F08: "f30f1008",       # MOVSS F32 x
    0x002D7F0C: "0f164804",       # MOVHPS F32 y,z
    0x002D7F14: "f30f1012",       # MOVSS other vector x
    0x002D7F18: "0f165204",       # MOVHPS other vector y,z
    0x002D7F1C: "0f5cca",         # SUBPS float32 XYZ
    0x002D7F23: "f30f1108",       # MOVSS output x
    0x002D7F27: "0f174804",       # MOVHPS output y,z
    0x002D7FC9: "d95c2420",       # x87 stores rounded F32 dot product
    0x002D7FD3: "f30f52442420",  # RSQRTSS reads same F32 dot product
    0x002D7FD9: "f30f1144241c",  # MOVSS store result
}
SOURCES = {
    "src/main_unclassified/band_002d/0x002d6910.cpp": (
        "#include <xmmintrin.h>",
        "memcpy(&guest_basis_y,&local_4c,sizeof guest_basis_y);",
        "memcpy(&guest_basis_z,(const uint8_t *)&local_4c+4,sizeof guest_basis_z);",
        "guest_inverse_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));",
        "guest_length_sq = (fVar16 * fVar16 + fVar17 * fVar17) + fVar15 * fVar15;",
    ),
    "src/main_unclassified/band_002d/0x002d7d60.cpp": (
        "#include <xmmintrin.h>",
        "fVar13 = local_30[1] - pfVar6[1];",
        "fVar14 = local_30[2] - pfVar6[2];",
        "float guest_length_sq = (dz * dz + dy * dy) + dx * dx;",
        "guest_inverse_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));",
    ),
}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    a = ap.parse_args()
    for path, expected in SOURCES.items():
        source = (a.root / path).read_text(encoding="utf-8")
        for token in expected:
            if token not in source:
                raise SystemExit(f"{path}: missing C11 operand contract: {token}")
        if "auVar14._" in source or "local_30._" in source or "local_4c._" in source:
            raise SystemExit(f"{path}: Ghidra SIMD/pseudo-field remains")
    if not a.xbe:
        print("PASS: two float3/RSQRTSS C11 source contracts (original XBE not supplied)")
        return
    image = a.xbe.read_bytes()
    if hashlib.sha256(image).hexdigest() != XBE_SHA:
        raise SystemExit("original XBE SHA256 mismatch")
    for address, opcode in OPERANDS.items():
        expected = bytes.fromhex(opcode)
        off = address - 0x10000
        if image[off:off+len(expected)] != expected:
            raise SystemExit(f"original x86 instruction mismatch at 0x{address:08X}")
    print(f"PASS: {len(OPERANDS)} original x86 opcode windows and 2 C11 source contracts")
    print("NOTE: exact x87 rounding, full callback ABI and guest pointer translation remain unverified")

if __name__ == "__main__":
    main()
