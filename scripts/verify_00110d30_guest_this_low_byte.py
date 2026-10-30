#!/usr/bin/env python3
"""Verify two low-byte copies of the original 32-bit guest this-pointer.

These instructions load CL from the incoming pointer's stack DWORD and
copy that *byte value* into two object records; neither performs a
dereference of the incoming pointer for the source byte.  Optional XBE
checking proves original opcodes but not full object-layout equivalence.
"""
import argparse
from pathlib import Path

X86 = (
    (0x00110F57, "8b742424"),        # MOV ESI,[ESP+0x24] (guest this)
    (0x00110F5B, "8a4c2424"),        # MOV CL,[ESP+0x24] (same word's low byte)
    (0x00110F5F, "81c664050000"),    # ADD ESI,0x564
    (0x00110F66, "880e"),            # MOV BYTE [ESI],CL
    (0x00110FEE, "8b742424"),        # MOV ESI,[ESP+0x24]
    (0x00110FF2, "8a4c2424"),        # MOV CL,[ESP+0x24]
    (0x00110FF6, "81c6f4070000"),    # ADD ESI,0x7f4
    (0x00110FFD, "880e"),            # MOV BYTE [ESI],CL
)
SOURCE = "src/main_unclassified/band_0011/0x00110d30.cpp"
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?")
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    s = (a.repo / SOURCE).read_text(encoding="utf-8")
    expected = "*(undefined1 *)(param_1 + "
    target = "(uint8_t)(uintptr_t)param_1;"
    if s.count(target) != 2:
        raise SystemExit("Expected two guest this-pointer low-byte stores")
    if "param_1._0_1_" in s:
        raise SystemExit("Unresolved Ghidra subpiece remains")
    if s.count(expected) < 2:
        raise SystemExit("Expected both guest object-byte destinations")
    if a.xbe is None:
        print("PASS: source-only guest pointer low-byte invariants")
        return
    xbe = a.xbe.read_bytes()
    for addr, hexbytes in X86:
        want = bytes.fromhex(hexbytes)
        actual = xbe[addr-0x10000:addr-0x10000+len(want)]
        if actual != want:
            raise SystemExit(f"Original x86 mismatch at 0x{addr:08X}: {actual.hex()}")
    print(f"PASS: {len(X86)} original x86 instruction signatures and 2 C11 low-byte stores")

if __name__ == "__main__":
    main()
