#!/usr/bin/env python3
"""Verify three callback stack-slot operands in the original Brute Force XBE.

This checks *guest 32-bit data flow*, not host callback ABI equivalence.
The original XBE for this build maps file offset = guest virtual address - 0x10000.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x00253F6A, "8d542408"),        # LEA EDX,[ESP+8]: out-object slot
    (0x00253F6F, "c744240c00000000"), # MOV DWORD [ESP+0xc],0 after PUSH
    (0x00253F81, "8b4c2408"),        # MOV ECX,[ESP+8]: read callback result
    (0x00253F91, "8b442408"),        # MOV EAX,[ESP+8]: release result, not source object
    (0x00253F9C, "ff5108"),          # CALL DWORD [ECX+8]: release result object
    (0x002A53BC, "8d542414"),        # LEA EDX,[ESP+0x14]: matrix callback output
    (0x002A53C7, "8b442414"),        # MOV EAX,[ESP+0x14]: read matrix output
    (0x002A53CB, "50"),              # PUSH EAX: forward matrix output
    (0x002A53CC, "684caf4600"),      # PUSH 0x46af4c: matrix destination
    (0x002A53D1, "e85a83d9ff"),      # CALL 0x0003d730
    (0x002A5423, "8d442418"),        # LEA EAX,[ESP+0x18]: callback flags output
    (0x002A542C, "f644241801"),      # TEST BYTE [ESP+0x18],1
    (0x002A5432, "7408"),            # JE conditional callback flag branch
)

SOURCES = (
    ("src/main_unclassified/band_0025/0x00253f50.c", (
        "uint32_t guest_received_object = 0;",
        "&guest_received_object",
        "if (guest_received_object != 0)",
        "(int *)(uintptr_t)guest_received_object",
    )),
    ("src/main_unclassified/band_002a/0x002a5320.c", (
        "uint32_t guest_matrix_result;",
        "&guest_matrix_result",
        "FUN_0003d730(&DAT_0046af4c,guest_matrix_result)",
    )),
    ("src/main_unclassified/band_002a/0x002a5400.c", (
        "uint32_t guest_callback_flags;",
        "&guest_callback_flags",
        "if ((guest_callback_flags & 1) == 0)",
    )),
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--repo", type=Path, default=Path("."))
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    for address, hexcode in CHECKS:
        want = bytes.fromhex(hexcode)
        actual = data[address-0x10000:address-0x10000+len(want)]
        if actual != want:
            raise SystemExit(f"XBE mismatch at 0x{address:08x}: {actual.hex()} != {hexcode}")
    for path, markers in SOURCES:
        source = (args.repo / path).read_text(encoding="utf-8")
        for marker in markers:
            if marker not in source:
                raise SystemExit(f"{path}: missing C11 operand {marker}")
        if "stack0xfffffffc" in source:
            raise SystemExit(f"{path}: unresolved stack input remains")
    print(f"PASS: {len(CHECKS)} original XBE opcode signatures and {len(SOURCES)} C11 callback storage contracts")
    print("Original callback prototypes and the native PC memory translation remain unverified.")

if __name__ == "__main__":
    main()
