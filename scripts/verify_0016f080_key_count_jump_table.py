#!/usr/bin/env python3
"""Check 0x0016F080's signed integer key-count jump-table contract.

The original Xbox code computes (end - begin) / 20 using IMUL 0x66666667,
arithmetic shift, and sign correction. Its switch uses CMP EAX,3, then an
integer-indexed jump table; Ghidra misread the same stack DWORD as float.
This checks *only* that contract, not the rest of the quaternion routine.
"""
import argparse
from pathlib import Path

INSTRUCTIONS = (
    (0x0016F08F, "8b4104"),          # MOV EAX,[ECX+4] first key
    (0x0016F0A9, "8b5108"),          # MOV EDX,[ECX+8] end key
    (0x0016F0AC, "2bd0"),            # SUB EDX,EAX
    (0x0016F0AE, "b867666666"),      # MOV EAX,0x66666667
    (0x0016F0B3, "f7ea"),            # IMUL EDX
    (0x0016F0B5, "c1fa03"),          # SAR EDX,3
    (0x0016F0B8, "8bc2"),            # MOV EAX,EDX
    (0x0016F0BA, "c1e81f"),          # SHR EAX,31
    (0x0016F0BD, "03d0"),            # ADD EDX,EAX
    (0x0016F0BF, "89542420"),        # MOV [ESP+0x20],EDX
    (0x0016F1B9, "8b442420"),        # MOV EAX,[ESP+0x20]
    (0x0016F1BD, "83f803"),          # CMP EAX,3
    (0x0016F1C6, "ff2485f0f91600"),  # JMP [EAX*4+0x16F9F0]
)
SOURCE_PATH = "src/main_unclassified/band_0016/0x0016f080.c"
REQUIRED = (
    "int32_t guest_key_count;",
    "guest_key_count = 0;",
    "guest_key_count = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;",
    "switch(guest_key_count) {",
    "case 0:",
    "case 1:",
    "case 2:",
    "case 3:",
)
def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path, nargs="?", help="optional original private XBE")
    p.add_argument("--repo", type=Path, default=Path("."))
    args = p.parse_args()
    source = (args.repo / SOURCE_PATH).read_text(encoding="utf-8")
    for marker in REQUIRED:
        if marker not in source:
            raise SystemExit("Missing source invariant: " + marker)
    if "switch(local_170)" in source or "case 1.4013e-45:" in source:
        raise SystemExit("Float switch was reintroduced")
    if args.xbe is None:
        print("PASS: C11 signed-key-count source contract; no original XBE checked")
        return
    blob = args.xbe.read_bytes()
    for address, hexadecimal in INSTRUCTIONS:
        expected = bytes.fromhex(hexadecimal)
        off = address - 0x10000
        actual = blob[off:off + len(expected)]
        if actual != expected:
            raise SystemExit(f"XBE mismatch at 0x{address:08x}: {actual.hex()}")
    print(f"PASS: {len(INSTRUCTIONS)} x86 instruction signatures and C11 jump-table source")
    print("NOTE: this does not verify the whole function or native PC ABI")
if __name__ == "__main__":
    main()
