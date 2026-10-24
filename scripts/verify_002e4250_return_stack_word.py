#!/usr/bin/env python3
"""Verify the 0x002E4250 EAX-to-stack handoff using original XBE bytes."""
import argparse
from pathlib import Path

CHECKS = (
    (0x002E42F9, "8bcd"),            # mov ecx,ebp
    (0x002E42FB, "e880feffff"),      # call 0x002e4180
    (0x002E4300, "8d4c2414"),        # lea ecx,[esp+0x14]
    (0x002E4304, "51"),              # push address of guest return word
    (0x002E430B, "8944241c"),        # mov [esp+0x1c],eax (same slot after two pushes)
    (0x002E430F, "e80c540000"),      # call 0x002e9720
)
SOURCE = "src/main_unclassified/band_002e/0x002e4250.c"
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--repo", type=Path, default=Path("."))
    args = parser.parse_args()
    blob = args.xbe.read_bytes()
    for address, opcodes in CHECKS:
        expected = bytes.fromhex(opcodes)
        actual = blob[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"original XBE mismatch at 0x{address:08x}")
    source = (args.repo / SOURCE).read_text()
    for token in ("uint32_t guest_return_word;", "guest_return_word = (uint32_t)FUN_002e4180();", "(ushort *)&guest_return_word"):
        if token not in source:
            raise SystemExit("missing C11 storage invariant: " + token)
    if "stack0xfffffff8" in source:
        raise SystemExit("unresolved guest stack expression remains")
    print("PASS: original x86 EAX-to-stack slot evidence and C11 source storage; full ABI not yet verified")
if __name__ == "__main__":
    main()
