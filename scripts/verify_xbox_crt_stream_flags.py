#!/usr/bin/env python3
"""Check exact original Xbox stream flags/table instructions and C11 storage.

This is an *operand-width* contract test, not a native CRT ABI or behavioral proof.
The XBE's image-base-to-file-offset relation (VA - 0x10000) is specific to
the supplied original game executable.
"""
import argparse
from pathlib import Path

INSTRUCTIONS = (
    (0x002ECE4A, "8b04b0"),    # stream table: MOV EAX,[EAX+ESI*4]
    (0x002ECE51, "f6400c83"),  # TEST BYTE PTR [EAX+0x0c],0x83
    (0x002ECE57, "50"),        # PUSH EAX to guest fclose
    (0x002ECE63, "47"),        # INC EDI (closed-stream count)
    (0x002ECE69, "a1b08f4a00"),  # MOV EAX,[DAT_004A8FB0]
    (0x002ECE7B, "8324b000"), # AND DWORD PTR [EAX+ESI*4],0
    (0x002ECF3C, "8b04b0"),   # stream table: MOV EAX,[EAX+ESI*4]
    (0x002ECF43, "8b480c"),   # MOV ECX,[EAX+0x0c] (flags)
    (0x002ECF46, "f6c183"),   # TEST CL,0x83
    (0x002ECF52, "50"),       # PUSH EAX to guest fflush
    (0x002ECF68, "f6c102"),   # TEST CL,0x02
    (0x002ECF6D, "50"),       # PUSH EAX to guest fflush
)

SOURCES = (
    ("src/main_unclassified/band_002e/0x002ece36.cpp", (
        "uint32_t guest_stream;",
        "(guest_stream + 0x0c) & 0x83",
        "thunk_FUN_00237ec0",
        "DAT_004a8fb0 + iVar2 * 4) = 0",
    )),
    ("src/main_unclassified/band_002e/0x002ecf26.cpp", (
        "uint32_t guest_stream;",
        "(guest_stream + 0x0c) & 0x83",
        "(guest_stream + 0x0c) & 2",
        "_fflush((void *)(uintptr_t)guest_stream)",
    )),
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path, help="original Xbox Brute Force executable")
    parser.add_argument("--repo", type=Path, default=Path("."))
    args = parser.parse_args()
    image = args.xbe.read_bytes()
    for address, expected_hex in INSTRUCTIONS:
        expected = bytes.fromhex(expected_hex)
        offset = address - 0x10000
        actual = image[offset:offset + len(expected)]
        if actual != expected:
            raise SystemExit(
                f"XBE mismatch at 0x{address:08X}: {actual.hex()} != {expected_hex}"
            )
    for rel, tokens in SOURCES:
        source = (args.repo / rel).read_text(encoding="utf-8")
        for token in tokens:
            if token not in source:
                raise SystemExit(f"{rel}: missing source invariant {token!r}")
        if "FILE *" in source or "_IO_read_base" in source:
            raise SystemExit(f"{rel}: host FILE layout was reintroduced")
    print(f"PASS: {len(INSTRUCTIONS)} original XBE opcode signatures and 2 stream sources")
    print("NOTE: guest memory mapping, CRT linkage, and 1:1 runtime behavior remain unverified")

if __name__ == "__main__":
    main()
