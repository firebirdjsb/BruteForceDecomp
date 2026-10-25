#!/usr/bin/env python3
"""Verify original x86 low-guest-address write in 0x000CBEC0.

The null-base branch uses EAX=0 and writes a DWORD at guest VA 0x74;
the neighboring x87 path writes float32 to guest VA 0x70 and 0x74.
Crucially, the original function does NOT read that VA merely because
the output pointer is null.  A host-native port still needs guest-memory
translation; literal guest VA casts are only syntax-reconstruction storage.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x000CBF07, "85c0"),    # TEST EAX,EAX: null-base decision
    (0x000CBF0B, "8b4c2404"),# MOV ECX,[ESP+4]: output DWORD
    (0x000CBF12, "894874"),  # MOV [EAX+0x74],ECX: non-null path
    (0x000CBF1B, "33c0"),    # XOR EAX,EAX: null-base path
    (0x000CBF1D, "894874"),  # MOV [0x74],ECX: guest virtual address
    (0x000CBF25, "85c0"),    # TEST EAX,EAX: float path null check
    (0x000CBF2E, "33c0"),    # XOR EAX,EAX: float path null-base
    (0x000CBF30, "d95070"),  # FST DWORD [EAX+0x70]
    (0x000CBF39, "d95874"),  # FSTP DWORD [EAX+0x74]
    (0x000CBF3C, "895744"),  # MOV [EDI+0x44],EDX: store state
)
SOURCE = "src/main_unclassified/band_000c/0x000cbec0.c"
TOKENS = (
    "if ((in_EAX[0x11] == 0) && (in_EDX == 2)) {",
    "if (in_EAX[10] != 0) {",
    "*(int *)(in_EAX[10] + 0x48) = iVar2;",
    "*(int *)(uintptr_t)UINT32_C(0x74) = iVar2;",
    "*(float *)(iVar2 + 0x70) = fVar1;",
    "*(float *)(iVar2 + 0x74) = fVar1 + 1.0;",
)
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", nargs="?", type=Path)
    parser.add_argument("--repo", type=Path, default=Path("."))
    args = parser.parse_args()
    s = (args.repo / SOURCE).read_text(encoding="utf-8")
    for t in TOKENS:
        if t not in s:
            raise SystemExit("Missing guest memory source invariant: " + t)
    if "iRam00000074" in s:
        raise SystemExit("Spurious Ghidra null-pointer label reintroduced")
    if args.xbe is None:
        print("PASS: original guest VA 0x74 C11 source contract (no XBE in CI)")
        return
    blob = args.xbe.read_bytes()
    for addr, opcodes in OPCODES:
        expected = bytes.fromhex(opcodes)
        actual = blob[addr - 0x10000:addr - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"XBE mismatch at 0x{addr:08X}: {actual.hex()}")
    print(f"PASS: {len(OPCODES)} original x86 instructions and guest VA 0x74 write-only branch")
    print("NOTE: native guest-memory translation and virtual ABI not yet implemented")
if __name__ == "__main__":
    main()
