#!/usr/bin/env python3
"""Check 0x0011C170's x87 scalar stack word and its later pointer reuse.

Original Brute Force Xbox XBE is intentionally not committed to the repo.
With --xbe we verify exact bytes; without it this checks source only.
Neither check proves whole-function ABI or native PC equivalence.
"""
import argparse
from pathlib import Path

INSTRUCTIONS = (
    (0x0011C25C, "d94624"),      # FLD DWORD PTR [ESI+0x24]: source X
    (0x0011C263, "d820"),        # FSUB DWORD PTR [EAX]: other X
    (0x0011C269, "d95c241c"),    # FSTP DWORD PTR [ESP+0x1c]: float delta
    (0x0011C297, "d944241c"),    # FLD same float delta
    (0x0011C29B, "d84c241c"),    # FMUL same float delta (squared)
    (0x0011C29F, "d9442424"),    # FLD Z delta (separate word)
    (0x0011C2A3, "d84c2424"),    # FMUL Z delta (squared)
)
SOURCE_PATH = "src/main_unclassified/band_0011/0x0011c170.cpp"
REQUIRED = (
    "float guest_delta_x;",
    "guest_delta_x = *(float *)(iVar2 + 0x24) - *(float *)(iVar4 + 0x24);",
    "fStack_7c * fStack_7c + guest_delta_x * guest_delta_x < 1.8",
    "ppuStack_84 = &PTR_LAB_003a3fb4;",
    "FUN_001fe3d0(&ppuStack_84);",
)
FORBIDDEN = (
    "(float)ppuStack_84 * (float)ppuStack_84",
    "ppuStack_84 = (undefined **)(*(float *)",
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    source = (args.root / SOURCE_PATH).read_text(encoding="utf-8")
    for token in REQUIRED:
        if token not in source:
            raise SystemExit(f"Missing x87 storage invariant: {token}")
    for token in FORBIDDEN:
        if token in source:
            raise SystemExit(f"Bogus float/pointer alias restored: {token}")
    if args.xbe is None:
        print("PASS source-only: distinct guest x87 F32 and later pointer lifetime; XBE NOT checked")
        return
    blob = args.xbe.read_bytes()
    for addr, original_hex in INSTRUCTIONS:
        want = bytes.fromhex(original_hex)
        offset = addr - 0x10000
        actual = blob[offset:offset + len(want)]
        if actual != want:
            raise SystemExit(
                f"XBE opcode mismatch 0x{addr:08X}: {actual.hex()} != {original_hex}"
            )
    print(f"PASS {len(INSTRUCTIONS)} original x87 opcodes + C11 source invariants")
    print("NOT VERIFIED: full Xbox ABI, pointer translation or runtime equivalence")


if __name__ == "__main__":
    main()
