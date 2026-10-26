#!/usr/bin/env python3
"""Verify two 1:1 Xbox F32-object fields and MAXSS running-maximum lifetimes.

The private XBE is NOT shipped with this repository.  Source-only CI is
intentionally weaker than supplying --xbe.  Whole-function ABI/linkage and
native PC equivalence remain unverified.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x00140316, "d94728"),         # FLD F32 [EDI+0x28]  0x1401e0
    (0x0014031C, "d84604"),         # FADD F32 [ESI+4]
    (0x00140327, "d95e04"),         # FSTP F32 [ESI+4]
    (0x0014035A, "d94608"),         # FLD F32 [ESI+8]
    (0x0014035D, "d84604"),         # FADD F32 [ESI+4]
    (0x0014036B, "d95c2418"),      # FSTP stack F32
    (0x0014036F, "f30f1044241c"),  # MOVSS old max
    (0x00140375, "f30f5f442418"),  # MAXSS new span
    (0x0014037B, "f30f11442420"),  # MOVSS running max
    (0x001403A7, "d9442400"),      # FLD F32 for x87 return
    (0x001402BA, "8b0c85a04d4100"), # MOV indexed guest32 pointer word
    (0x001402C3, "893c85a04d4100"), # MOV indexed guest32 pointer word
    (0x001404F3, "d94728"),         # FLD F32 [EDI+0x28]  0x1403c0
    (0x001404F9, "d84604"),
    (0x00140504, "d95e04"),
    (0x00140537, "d94608"),
    (0x0014053A, "d84604"),
    (0x00140548, "d95c2418"),
    (0x0014054C, "f30f1044241c"),
    (0x00140552, "f30f5f442418"),
    (0x00140558, "f30f11442420"),
    (0x00140302, "8b0c85a04d4100"), # second function indexed word
)
SOURCES = (
    "src/main_unclassified/band_0014/0x001401e0.c",
    "src/main_unclassified/band_0014/0x001403c0.c",
)
REQUIRED = (
    "#include <xmmintrin.h>",
    "float guest_max_span = 0.0f;",
    "memcpy(&guest_field4, &puVar2[1], sizeof guest_field4);",
    "memcpy(&puVar2[1], &guest_field4, sizeof guest_field4);",
    "memcpy(&guest_field8, &puVar2[2], sizeof guest_field8);",
    "float guest_current_span = guest_field8 + guest_field4;",
    "_mm_max_ss(",
    "_mm_set_ss(guest_max_span), _mm_set_ss(guest_current_span)",
    "return (float10)guest_max_span;",
    "(uint8_t *)&DAT_00414da0 + uVar3 * 4U",
)
FORBIDDEN = (
    "(float)puVar2[1]",
    "(float)puVar2[2]",
    "(float)local_24",
    "(float)local_1c",
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    for rel in SOURCES:
        src = (args.root / rel).read_text(encoding="utf-8")
        for token in REQUIRED:
            if token not in src:
                raise SystemExit(f"{rel}: missing x87 storage contract {token!r}")
        for token in FORBIDDEN:
            if token in src:
                raise SystemExit(f"{rel}: Ghidra incorrect float cast restored {token!r}")
    if args.xbe is None:
        print("PASS: 2 mirrored source float/max contracts; no private XBE checked in CI")
        return
    blob = args.xbe.read_bytes()
    for va, op in OPCODES:
        want = bytes.fromhex(op)
        actual = blob[va-0x10000:va-0x10000+len(want)]
        if actual != want:
            raise SystemExit(f"XBE mismatch 0x{va:08X}: {actual.hex()} != {op}")
    print(f"PASS: {len(OPCODES)} original x86 opcodes + two mirrored F32/MAXSS source contracts")
    print("NOT VERIFIED: complete Xbox calling convention, memory translation, or runtime parity")

if __name__ == "__main__":
    main()
