#!/usr/bin/env python3
"""Verify original 0x221DE0 copies ESI to one guest callback stack word.

The caller retains ESI as the authoritative handle even if the callback
overwrites its temporary stack argument. This must not alias the C variable
that models ESI, although both initially contain the same 32-bit value.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x221E32, "e8c931efff"),
    (0x221E37, "8bf0"),
    (0x221E39, "83feff"),
    (0x221E3C, "89742410"),
    (0x221E40, "746a"),
    (0x221E42, "8d442410"),
    (0x221E46, "50"),
    (0x221E47, "e8b4050000"),
    (0x221E7D, "83feff"),
)
SOURCE = "src/main_unclassified/band_0022/0x00221de0.c"
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--root", type=Path, default=Path("."))
    a = ap.parse_args()
    text = (a.root / SOURCE).read_text()
    for marker in ("int guest_handle_copy = iVar3;", "FUN_00222400(&guest_handle_copy);", "if (iVar3 != -1)"):
        if marker not in text:
            raise SystemExit(f"missing saved handle contract: {marker}")
    if "stack0xfffffff0" in text:
        raise SystemExit("unresolved original guest output stack pointer")
    if a.xbe is None:
        print("PASS: saved ESI vs callback stack copy (source-only CI)")
        return
    image = a.xbe.read_bytes()
    for address, raw in CHECKS:
        expect = bytes.fromhex(raw)
        if image[address-0x10000:address-0x10000+len(expect)] != expect:
            raise SystemExit(f"original x86 mismatch at 0x{address:08x}")
    print(f"PASS: {len(CHECKS)} Xbox instruction signatures and source handle isolation")
    print("Full callback ABI and guest pointer mapping remain unverified")
if __name__ == "__main__":
    main()
