#!/usr/bin/env python3
"""Verify F32 memory operands and MAXSS scalar clamp in Xbox FUN_0012C020.

With --xbe: match exact original instruction bytes from the user's private XBE.
Without --xbe: source-only CI contract (does not establish 1:1 behavior).
"""
import argparse
from pathlib import Path

ORIGINAL = (
    (0x0012C062, "d904b50cd34600"),   # FLD DWORD [ESI*4+0x46D30C]
    (0x0012C079, "d904b504d34600"),   # FLD DWORD [ESI*4+0x46D304]
    (0x0012C088, "d95c2410"),         # FSTP DWORD [ESP+0x10]
    (0x0012C094, "f30f10442410"),     # MOVSS XMM0,[ESP+0x10]
    (0x0012C09A, "f30f5f442414"),     # MAXSS XMM0,[ESP+0x14]
    (0x0012C0A0, "f30f11442418"),     # MOVSS [ESP+0x18],XMM0
    (0x0012C0EB, "d80cb55c053c00"),  # FMUL indexed F32
    (0x0012C1B6, "d90568053c00"),    # FLD F32 0x3C0568
    (0x0012C320, "d80d70053c00"),    # FMUL F32 0x3C0570
    (0x0012C330, "d90574053c00"),    # FLD F32 0x3C0574
    (0x0012C36B, "d9056c053c00"),    # FLD F32 0x3C056C
    (0x0012C3F7, "d90578053c00"),    # FLD F32 0x3C0578
    (0x0012C3FD, "d80d78053c00"),    # FMUL F32 0x3C0578
    (0x0012C412, "f30f52442418"),    # RSQRTSS XMM0,[ESP+0x18]
    (0x0012C426, "d80d78053c00"),    # FMUL F32 0x3C0578
    (0x0012C4AE, "d81d7c053c00"),    # FCOMP F32 0x3C057C
    (0x0012C4CB, "d8257c053c00"),    # FSUB F32 0x3C057C
    (0x0012C4E1, "d80dfcd24600"),    # FMUL F32 0x46D2FC
)
PATH = "src/main_unclassified/band_0012/0x0012c020.cpp"
REQUIRED = (
    "extern float _DAT_003c0568;",
    "extern float _DAT_003c056c;",
    "extern float _DAT_003c0570;",
    "extern float _DAT_003c0574;",
    "extern float _DAT_003c0578;",
    "extern float _DAT_003c057c;",
    "extern float _DAT_0046d2fc;",
    "__m128 in_XMM0;",
    "_mm_max_ss(_mm_set_ss(fVar4), _mm_set_ss(0.5f))",
    "fVar4 = _mm_cvtss_f32(in_XMM0);",
    "(const uint8_t *)&DAT_0046d304 + uVar7 * 4U",
    "(const uint8_t *)&DAT_0046d30c + uVar7 * 4U",
    "(const uint8_t *)&DAT_003c055c + uVar7 * 4U",
)
FORBIDDEN = (
    "in_XMM0 = ZEXT416((uint)fVar4)",
    "extern uint32_t *_DAT_003c0578;",
    "extern uint32_t *_DAT_0046d2fc;",
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    src = (args.root / PATH).read_text(encoding="utf-8")
    for token in REQUIRED:
        if token not in src:
            raise SystemExit(f"Missing scalar/storage contract: {token}")
    for token in FORBIDDEN:
        if token in src:
            raise SystemExit(f"Incorrect float/pointer representation restored: {token}")
    if args.xbe is None:
        print("PASS: F32/MAXSS source-only checks (original XBE NOT verified by CI)")
        return
    image = args.xbe.read_bytes()
    for va, expected_hex in ORIGINAL:
        expected = bytes.fromhex(expected_hex)
        actual = image[va - 0x10000:va - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(
                f"Xbox XBE 0x{va:08x}: {actual.hex()} != {expected_hex}"
            )
    print(f"PASS: {len(ORIGINAL)} original x86 instruction signatures and 13 C11 source invariants")
    print("Xbox ABI, memory translation, and whole-function equivalence remain UNVERIFIED")

if __name__ == "__main__":
    main()
