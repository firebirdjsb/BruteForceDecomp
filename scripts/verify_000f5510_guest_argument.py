#!/usr/bin/env python3
"""Check original 0x000F5510 incoming DWORD alias; no full ABI claim.

CI checks source invariants without the private original XBE. Supplying an
XBE path also checks its SHA-256 and exact instruction bytes.
"""
import argparse
import hashlib
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_000f/0x000f5510.c"
OPCODES = (
    (0x000F5510, "51"),                 # local DWORD for flag
    (0x000F5519, "8b442408"),           # first incoming DWORD, entry ESP+4
    (0x000F5523, "c644240400"),         # clear only low flag byte
    (0x000F5538, "c7442410518d06f0"),   # first GUID word in incoming slot
    (0x000F554A, "8d5c2410"),           # EBX = &incoming slot (ABI not modeled)
    (0x000F556E, "c644240001"),         # set only low flag byte
    (0x000F557A, "8d4c2410"),           # ECX = &same incoming slot
    (0x000F557E, "c7442410fd33f7e0"),   # second GUID word in incoming slot
    (0x000F558B, "ff5208"),             # virtual call at +8 consumes slot address
    (0x000F5597, "8b542400"),           # original full flag word
    (0x000F559E, "ff905c010000"),       # virtual call at +0x15c
    (0x000F55A5, "c20400"),             # one incoming stack argument
)
CONTRACT = (
    "Entry: 0x000f5510, Ghidra index: 3074",
    "Input x86 body SHA-256: 0BE2F9F7658DF813FDA3281E539459F43057F12119B6A630C64FC5444BA41840",
    "uint32_t guest_first_arg_word;",
    "guest_first_arg_word = UINT32_C(0xe0f733fd);",
    "(*piVar2 + 8))(&guest_first_arg_word,0,0);",
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path, help="private original Xbox executable")
    ap.add_argument("--root", type=Path, default=Path("."))
    args = ap.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    for token in CONTRACT:
        if token not in source:
            raise SystemExit(f"missing source contract: {token}")
    if "&stack0x00000000" in source:
        raise SystemExit("unresolved original guest argument pseudo-address")
    if args.xbe is None:
        print("PASS: 0x000F5510 source contract only; original XBE not checked")
        return
    image = args.xbe.read_bytes()
    if hashlib.sha256(image).hexdigest() != EXPECTED_SHA256:
        raise SystemExit("original XBE SHA-256 mismatch")
    for address, opcode in OPCODES:
        expected = bytes.fromhex(opcode)
        actual = image[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"original XBE instruction mismatch at {address:#010x}: {actual.hex()}")
    print(f"PASS: original XBE SHA-256 and {len(OPCODES)} instruction signatures; source contract")
    print("NOT VERIFIED: original EBX callback ABI, local flag high bytes, or native runtime behavior")

if __name__ == "__main__":
    main()
