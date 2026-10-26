#!/usr/bin/env python3
"""Check original Xbox F32 RNG bit construction and SSE bounds for 0x15A7E0.

The --xbe option verifies exact original x86 opcode bytes.  CI runs the
source-only contract, because private Xbox game binaries are not shipped.
"""
import argparse
from pathlib import Path

ORIGINAL = (
    (0x0015AA93, "d9442424"),       # FLD constructed random F32 bits
    (0x0015AA9D, "d82548a83900"),   # FSUB F32 literal 3
    (0x0015AAC7, "d9442420"),       # FLD second random F32
    (0x0015AAD2, "d82548a83900"),   # FSUB 3
    (0x0015AAE6, "d944241c"),       # FLD third random F32
    (0x0015AAF1, "d82548a83900"),   # FSUB 3
    (0x0015AA16, "d81d70c84000"),   # FCOMP F32 threshold
    (0x0015AA59, "d9056cc84000"),   # FLD F32 attenuation
    (0x0015AB1B, "a164c84000"),     # MOV raw F32 lower bound
    (0x0015AB34, "8b1568c84000"),   # MOV raw F32 upper bound
    (0x0015AB42, "d905705b4a00"),   # FLD F32 scale
    (0x0015AB4E, "d80560c84000"),   # FADD F32 scale
    (0x0015AB6A, "f30f1044241c"),   # MOVSS squared distance
    (0x0015AB70, "f30f5f442420"),   # MAXSS lower bound
    (0x0015AB76, "f30f5d442424"),   # MINSS upper bound
    (0x0015AB7C, "f30f11442418"),   # MOVSS clamped value
)
SOURCE = "src/main_unclassified/band_0015/0x0015a7e0.c"
REQUIRED = (
    "extern float DAT_0040c864;",
    "extern float DAT_0040c868;",
    "extern float _DAT_0040c860;",
    "extern float _DAT_0040c86c;",
    "extern float _DAT_0040c870;",
    "extern float _DAT_004a5b70;",
    "uint32_t guest_rng_bits = (uVar8 >> 9) | UINT32_C(0x40000000);",
    "memcpy(&guest_rng, &guest_rng_bits, sizeof guest_rng);",
    "_mm_max_ss(_mm_set_ss(fStack_74), _mm_set_ss(DAT_0040c864))",
    "_mm_set_ss(DAT_0040c868)",
    "guest_scaled_z = fStack_78 * fStack_3c;",
    "fStack_24 = guest_scaled_z;",
    "fStack_c = guest_scaled_z;",
)
FORBIDDEN = (
    "(float)(uVar8 >> 9 | 0x40000000)",
    "(float)(uVar9 >> 9 | 0x40000000)",
    "(float)(DAT_0046cfd8 >> 9 | 0x40000000)",
    "(float)pfStack_70",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    src = (args.root / SOURCE).read_text()
    for token in REQUIRED:
        if token not in src:
            raise SystemExit(f"Missing guest F32 contract: {token}")
    for token in FORBIDDEN:
        if token in src:
            raise SystemExit(f"Bogus Ghidra float cast restored: {token}")
    if args.xbe is None:
        print("PASS: 0x15A7E0 source-only F32/RNG/SSE contracts; private XBE unchecked")
        return
    image = args.xbe.read_bytes()
    for va, hx in ORIGINAL:
        want = bytes.fromhex(hx)
        got = image[va-0x10000:va-0x10000+len(want)]
        if got != want:
            raise SystemExit(f"Original XBE x86 mismatch at 0x{va:08x}: {got.hex()}")
    print(f"PASS: {len(ORIGINAL)} original Xbox x86 opcodes and source representation contracts")
    print("NOT VERIFIED: complete 1:1 ABI or native PC runtime")

if __name__ == "__main__":
    main()
