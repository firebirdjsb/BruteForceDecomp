#!/usr/bin/env python3
"""Verify x86 DWORD pointer storage where Ghidra incorrectly inferred float.

The source tests can run in GitHub Actions without distributing the XBE.
The optional --xbe run verifies exact instructions. A native guest-memory
translator and indirect callback prototypes are separate unresolved work.
"""
import argparse
from pathlib import Path
import struct

SOURCES = (
    ("src/main_unclassified/band_0023/0x00233f80.c", (
        "piVar2 = (int *)(uintptr_t)*(const uint32_t *)(uintptr_t)",
        "(uint32_t)*param_1 + UINT32_C(0x0c)",
    )),
    ("src/main_unclassified/band_0023/0x0023c1d0.c", (
        "uint32_t guest_item_word;",
        "memcpy(&guest_item_word, pfVar7 - 1, sizeof guest_item_word);",
        "piVar8 = (int *)(uintptr_t)guest_item_word;",
        "unaff_EDI[6] = guest_item_word;",
    )),
)
OPCODES = (
    (0x00233FA0, "8b31"),    # MOV ESI,[ECX], guest object pointer
    (0x00233FA6, "8b460c"),  # MOV EAX,[ESI+0x0c], guest interface pointer
    (0x0023C28D, "8b6bfc"),  # MOV EBP,[EBX-0x4], guest item pointer
    (0x0023C316, "8b43fc"),  # MOV EAX,[EBX-0x4] same guest item
    (0x0023C319, "894718"),  # MOV [EDI+0x18],EAX raw bits
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    for path, tokens in SOURCES:
        source = (args.root / path).read_text(encoding="utf-8")
        for token in tokens:
            if token not in source:
                raise SystemExit(f"{path}: missing 32-bit guest pointer evidence: {token}")
    for word in (0, 0x3f800000, 0xdeadbeef, 0x7fc00000, 0xffffffff):
        assert struct.unpack("<I", struct.pack("<f", struct.unpack("<f", struct.pack("<I", word))[0]))[0] == word or word == 0x7fc00000
    if args.xbe:
        data = args.xbe.read_bytes()
        for address, hexcode in OPCODES:
            want = bytes.fromhex(hexcode)
            offset = address - 0x10000
            actual = data[offset:offset+len(want)]
            if actual != want:
                raise SystemExit(f"XBE mismatch at 0x{address:08x}: {actual.hex()}")
        print(f"PASS: {len(OPCODES)} original guest DWORD-load/store instructions")
    else:
        print("PASS: source-only checks (private original XBE not provided)")
    print("Host pointer translation and full guest ABI remain unverified.")


if __name__ == "__main__":
    main()
