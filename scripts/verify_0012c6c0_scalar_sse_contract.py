#!/usr/bin/env python3
"""Check original 0x12C6C0 SSE scalar opcodes and F32 constant contracts.

--xbe validates the user's original Xbox executable; source-only CI is
explicitly weaker and does not prove Xbox ABI or full native behavior.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x0012C702, "f30f104df0"),  # MOVSS XMM1,F32 guest reciprocal input
    (0x0012C70A, "f30f53c9"),    # RCPSS scalar
    (0x0012C71A, "0f59c1"),      # MULPS scaled XYZ
    (0x0012C770, "f30f1000"),    # MOVSS first F32 component
    (0x0012C77B, "0f59c0"),      # MULPS vector squares
    (0x0012C79C, "f30f52c9"),   # RSQRTSS squared length
    (0x0012C7A4, "0f59d1"),     # MULPS normalized XYZ
    (0x0012C91A, "d835c8053c00"),  # FDIV DWORD 0x3c05c8
    (0x0012C985, "d80dd0053c00"),  # FMUL DWORD 0x3c05d0
    (0x0012C98E, "d80de4994600"),  # FMUL DWORD 0x4699e4
    (0x0012C9DA, "8b15cc053c00"),  # MOV EDX,[0x3c05cc] F32 word
    (0x0012C9EE, "f30f5d45e4"), # MINSS scalar cap
    (0x0012CA82, "d905bc053c00"),  # FLD DWORD 0x3c05bc
    (0x0012CA8A, "d905b8053c00"),  # FLD DWORD 0x3c05b8
)

SOURCE = "src/main_unclassified/band_0012/0x0012c6c0.c"
REQUIRED = (
    "#include <xmmintrin.h>",
    "extern float DAT_003c05cc;",
    "extern float _DAT_003c05b8;",
    "extern float _DAT_003c05bc;",
    "extern float _DAT_003c05c8;",
    "extern float _DAT_003c05d0;",
    "extern float _DAT_004699e4;",
    "_mm_rcp_ss(_mm_set_ss(param_3))",
    "guest_normalize_squared = fVar9 + local_38 * local_38;",
    "_mm_rsqrt_ss(_mm_set_ss(guest_normalize_squared))",
    "_mm_min_ss(",
    "_mm_set_ss(DAT_003c05cc)",
)
FORBIDDEN = (
    "auVar7._",
    "auVar8._",
    "(uint)param_3",
    "in_XMM1_Da",
    "extern uint32_t *_DAT_003c05d0",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    src = (args.root / SOURCE).read_text(encoding="utf-8")
    for token in REQUIRED:
        if token not in src:
            raise SystemExit(f"Missing original SSE/storage invariant: {token}")
    for token in FORBIDDEN:
        if token in src:
            raise SystemExit(f"Invalid vector or pointer alias restored: {token}")
    if args.xbe is None:
        print("PASS: 0x12C6C0 scalar source-only contracts; XBE not checked in CI")
        return
    blob = args.xbe.read_bytes()
    for addr, op in OPCODES:
        want = bytes.fromhex(op)
        actual = blob[addr - 0x10000:addr - 0x10000 + len(want)]
        if actual != want:
            raise SystemExit(f"Original x86 mismatch 0x{addr:08x}: {actual.hex()} != {op}")
    print(f"PASS: {len(OPCODES)} original Xbox instruction signatures and scalar source contracts")
    print("NOT VERIFIED: complete 1:1 ABI, guest memory translation or runtime behavior")

if __name__ == "__main__":
    main()
