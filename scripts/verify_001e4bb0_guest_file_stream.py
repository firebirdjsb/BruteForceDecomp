#!/usr/bin/env python3
"""Verify Xbox cacheinfo file-open and read path source/storage evidence.

Source-only mode runs in GitHub CI. Pass original private XBE to assert
the exact original machine-code operands for the guest stack slots.
This is not a linked COM ABI or native guest-memory translation proof.
"""
import argparse
from pathlib import Path

XBE_OPCODES = (
    (0x001E4BB9, "c7470c00000000"),    # zero object field +0xc
    (0x001E4BC0, "e8ab370500"),        # call original handle allocator
    (0x001E4BC5, "8d542404"),          # address interface output DWORD
    (0x001E4BCA, "8d542410"),          # address distinct open context DWORD
    (0x001E4BCF, "6801000040"),        # push open flags 0x40000001
    (0x001E4BD7, "a1f8324400"),        # load global file interface
    (0x001E4BDC, "6858754000"),        # push pathname address 0x407558
    (0x001E4BE1, "c744241400000000"),  # zero acquired-interface word
    (0x001E4BE9, "c744241c053dc4e0"),  # magic in separate read-count word
    (0x001E4BF1, "8b08"),              # load vtable
    (0x001E4BF4, "ff510c"),            # call vtable +0xc
    (0x001E4BF9, "8b442404"),          # load acquired-interface word
    (0x001E4C00, "8d4c2404"),          # address read-count DWORD
    (0x001E4C05, "6a34"),              # requested size 0x34
    (0x001E4C07, "57"),                # push original guest EDI
    (0x001E4C08, "c744241000000000"),  # zero read-count word
    (0x001E4C10, "8b10"),              # load acquired interface vtable
    (0x001E4C13, "ff5214"),            # call vtable +0x14 read method
    (0x001E4C1A, "837c240434"),        # require count == 0x34
    (0x001E4C21, "8b442400"),          # load acquired interface for success release
    (0x001E4C2F, "b001"),              # set result AL=1
    (0x001E4C35, "8b442400"),          # load acquired interface for failure release
    (0x001E4C3D, "8b08"),              # load release vtable
    (0x001E4C40, "ff5108"),            # release via vtable +0x08
    (0x001E4C43, "32c0"),              # set result AL=0
)
SOURCE = "src/main_unclassified/band_001e/0x001e4bb0.cpp"
REQUIRED = (
    "undefined1 FUN_001e4bb0(void)",
    "uint32_t guest_acquired_interface = 0;",
    "uint32_t guest_read_count = UINT32_C(0xe0c43d05);",
    "uint32_t guest_open_context;",
    "s_z__cacheinfo_bin_00407558, UINT32_C(0x40000001)",
    "&guest_open_context, &guest_acquired_interface)",
    "guest_read_count = 0;",
    "guest_interface_ptr + 0x14",
    "guest_read_count == UINT32_C(0x34)",
    "guest_interface_ptr + 0x08",
)
FORBIDDEN = (
    "s_z__cacheinfo_bin_00407558._0_4_",
    "return uVar3 & 0xffffff00",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    body = (a.repo / SOURCE).read_text(encoding="utf-8")
    for marker in REQUIRED:
        if marker not in body:
            raise SystemExit(f"0x001E4BB0 source invariant missing: {marker}")
    for marker in FORBIDDEN:
        if marker in body:
            raise SystemExit(f"Spurious Ghidra code still present: {marker}")
    if a.xbe is None:
        print("PASS: 0x001E4BB0 C11 source-only file-interface stack contract")
        return
    data = a.xbe.read_bytes()
    for address, opcode_hex in XBE_OPCODES:
        expected = bytes.fromhex(opcode_hex)
        actual = data[address-0x10000:address-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(
                f"Original Xbox mismatch at 0x{address:08x}: "
                f"expected {opcode_hex}, got {actual.hex()}"
            )
    print(f"PASS: {len(XBE_OPCODES)} original XBE instructions and C11 source contract")
    print("NOTE: Full callback ABI, SEH, and guest-memory mapping remain unverified")


if __name__ == "__main__":
    main()
