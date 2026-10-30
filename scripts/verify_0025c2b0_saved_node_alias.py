#!/usr/bin/env python3
"""Check the exact original saved tree-node alias used by FUN_0025C2B0."""
import argparse
from pathlib import Path

OPCODES = (
    (0x0025C2D2, "89442408"),  # store found node in saved guest DWORD
    (0x0025C2D6, "740d"),      # branch to alternate end node
    (0x0025C2D8, "8b0f"),      # load query comparator
    (0x0025C2DF, "8d442408"),  # &saved found-node DWORD
    (0x0025C2E5, "8974240c"),  # store alternate end node
    (0x0025C2E9, "8d44240c"),  # &alternate node DWORD
    (0x0025C2ED, "8b00"),      # read selected DWORD
    (0x0025C2EF, "3b430c"),    # compare against end node
)
SOURCE = "src/main_unclassified/band_0025/0x0025c2b0.cpp"
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    src = (args.repo / SOURCE).read_text(encoding="utf-8")
    for token in (
        "piVar2 = &iVar1;",
        "aiStack_8[0] = *(int *)(unaff_EBX + 0xc);",
        "piVar2 = aiStack_8;",
        "if (*piVar2 != *(int *)(unaff_EBX + 0xc))",
    ):
        if token not in src:
            raise SystemExit("Missing source alias invariant: " + token)
    if "stack0xfffffff4" in src:
        raise SystemExit("Unresolved saved-node stack alias remains")
    if args.xbe is None:
        print("PASS: saved-node alias source only; XBE not provided")
        return
    data = args.xbe.read_bytes()
    for addr, hexcode in OPCODES:
        expected = bytes.fromhex(hexcode)
        if data[addr-0x10000:addr-0x10000+len(expected)] != expected:
            raise SystemExit(f"Original x86 opcode mismatch at 0x{addr:08X}")
    print(f"PASS: {len(OPCODES)} original x86 instructions and saved-node alias source")

if __name__ == "__main__":
    main()
