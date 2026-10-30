#!/usr/bin/env python3
"""Verify distinct guest argument/local aliases for 0x00286710 and 0x000F4200.

Checks source-only invariants in GitHub CI. Supplying the original private
Xbox XBE additionally compares exact guest x86 opcode signatures.
No host pointer mapping, virtual ABI, or 1:1 runtime behavior is established.
"""
import argparse
from pathlib import Path

INSTRUCTIONS = (
    (0x286710, "51"),
    (0x286711, "8b44240c"),
    (0x286719, "8d542408"),
    (0x286721, "89742410"),
    (0x286728, "8b442408"),
    (0x28672E, "8d542414"),
    (0x286737, "8b442414"),
    (0x286761, "8b442410"),
    (0x286847, "8b442408"),
    (0x286853, "50"),
    (0x286854, "ff5108"),
    (0x28685A, "c20c00"),
    (0xF420A, "83ec20"),
    (0xF420D, "53"),
    (0xF4249, "8b442428"),
    (0xF424D, "57"),
    (0xF424E, "8d54242c"),
    (0xF4252, "52"),
    (0xF4259, "e8a2090000"),
    (0xF42C4, "c20400"),
    (0xF42CD, "c20400"),
)
CONTRACTS = (
    ("src/main_unclassified/band_0028/0x00286710.cpp", (
        "uint32_t guest_event_id = (uint32_t)(uintptr_t)param_2;",
        "int *guest_state = (int *)(uintptr_t)param_1;",
        "uint32_t guest_interface_word = 0;",
        "(*param_2 + 0x10))(param_2,&guest_interface_word)",
        "guest_interface = (int *)(uintptr_t)guest_interface_word;",
        "(*guest_interface + 0x20))(guest_interface,&guest_event_id)",
        "if (guest_interface != (int *)0x0)",
        "(*guest_interface + 8))(guest_interface)",
    )),
    ("src/main_unclassified/band_000f/0x000f4200.cpp", (
        "bool FUN_000f4200(uint32_t guest_argument_word)",
        "FUN_000f4c00(guest_argument_word,iVar2 + 8,unaff_ESI,(uint8_t *)&guest_argument_word);",
    )),
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", nargs="?", type=Path)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    for path, tokens in CONTRACTS:
        source = (args.root / path).read_text(encoding="utf-8")
        collapsed = "".join(source.split())
        for token in tokens:
            if "".join(token.split()) not in collapsed:
                raise SystemExit(f"{path}: missing argument/storage invariant {token}")
        if "stack0x" in source or "unaff_retaddr" in source:
            raise SystemExit(f"{path}: unresolved guest stack/return alias remains")
    if args.xbe is None:
        print("PASS: two guest argument aliases, source-only; original x86 not checked")
        return
    data = args.xbe.read_bytes()
    for address, raw in INSTRUCTIONS:
        expected = bytes.fromhex(raw)
        got = data[address - 0x10000 : address - 0x10000 + len(expected)]
        if got != expected:
            raise SystemExit(f"original XBE mismatch at 0x{address:08X}")
    print(f"PASS: {len(INSTRUCTIONS)} original Xbox opcodes and two C11 guest argument contracts")
    print("Xbox callback ABI, guest address translation, and native runtime remain unverified")

if __name__ == "__main__":
    main()
