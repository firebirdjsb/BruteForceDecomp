#!/usr/bin/env python3
"""Validate the three original 0x0029DF00 x86 guest-frame output words.

The original game executable must be supplied for byte verification. Without it,
this is a source-contract-only check, not a binary verification or a 1:1 proof.
Addresses use this XBE's verified section VA-to-file relation: VA - 0x10000.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x0029DF00, "83ec14"),           # SUB ESP,0x14: three locals in frame
    (0x0029DF1D, "8d442404"),         # LEA EAX,[ESP+4] -> first output DWORD
    (0x0029DF25, "c744241000000000"), # initialize first output DWORD
    (0x0029DF2D, "ff5224"),           # query first output interface
    (0x0029DF30, "8b442404"),         # read first output interface
    (0x0029DF51, "8d542408"),         # second output DWORD
    (0x0029DF57, "ff511c"),           # callback writes second output
    (0x0029DF63, "8d54240c"),         # third output DWORD
    (0x0029DF6A, "c744241400000000"), # clear third output
    (0x0029DF72, "c744241800000000"), # clear fourth frame DWORD
    (0x0029DF7A, "c744241c00000000"), # clear fifth frame DWORD
    (0x0029DF85, "ff5130"),           # callback writes third output
    (0x0029DF88, "8b44240c"),         # load third output
    (0x0029DF8C, "89442408"),         # forward into second output slot
    (0x0029DFB5, "8b4c2408"),         # read final second output word
    (0x0029DFBA, "894804"),           # write [allocated object+4]
    (0x0029DFD6, "83c414"),           # release 0x14 stack bytes
    (0x0029DFD9, "c3"),               # plain RET
)
SOURCE = "src/main_unclassified/band_0029/0x0029df00.c"
REQUIRED = (
    "uint32_t guest_interface_word = 0;",
    "uint32_t guest_secondary_word = 0;",
    "uint32_t guest_tertiary_word = 0;",
    "(*unaff_ESI + 0x24))(unaff_ESI,0,&guest_interface_word)",
    "(*guest_interface + 0x1c))(guest_interface,&guest_secondary_word)",
    "(guest_interface,0,&guest_tertiary_word)",
    "guest_secondary_word = guest_tertiary_word;",
    "guest_object[1] = guest_secondary_word;",
)
FORBIDDEN = ("stack0xffffffe4", "stack0xffffffd4", "_DAT_00000000 +")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path, nargs="?", help="original private Brute Force XBE")
    parser.add_argument("--repo", type=Path, default=Path("."))
    args = parser.parse_args()
    source = (args.repo / SOURCE).read_text(encoding="utf-8")
    for marker in REQUIRED:
        if marker not in source:
            raise SystemExit("source contract missing: " + marker)
    for marker in FORBIDDEN:
        if marker in source:
            raise SystemExit("unresolved host/guest alias: " + marker)
    if args.xbe is None:
        print("PASS: three 0x0029DF00 guest outwords (source-only; original XBE not checked)")
        return
    xbe = args.xbe.read_bytes()
    for address, signature in CHECKS:
        expected = bytes.fromhex(signature)
        offset = address - 0x10000
        actual = xbe[offset:offset + len(expected)]
        if actual != expected:
            raise SystemExit(
                f"original XBE mismatch at 0x{address:08x}: {actual.hex()} != {signature}"
            )
    print(f"PASS: {len(CHECKS)} original x86 signatures and three C11 guest-frame outwords")
    print("Original virtual callback ABI and native guest-memory mapping remain unverified")

if __name__ == "__main__":
    main()
