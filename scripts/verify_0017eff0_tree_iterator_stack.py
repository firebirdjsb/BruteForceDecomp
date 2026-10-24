#!/usr/bin/env python3
"""Verify tree iterator forwarding uses the original x86 stack slot.

This test proves byte-level address ownership only; FUN_0012ABA0's original
EDX input and other x86 register contracts still need full reconstruction.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x0017F020, "8b06"),          # MOV EAX,[ESI]: first node
    (0x0017F024, "89442404"),      # MOV [ESP+4],EAX: saved iterator
    (0x0017F035, "8d542404"),      # LEA EDX,[ESP+4] for FUN_0012ABA0
    (0x0017F039, "e862bbfaff"),    # CALL 0x0012ABA0
    (0x0017F03E, "8b442404"),      # MOV EAX,[ESP+4] updated iterator
    (0x0017F04F, "50"),            # PUSH EAX: the pointed-to node
    (0x0017F050, "8d442408"),      # LEA EAX,[ESP+8]: same saved iterator after PUSH
    (0x0017F054, "50"),            # PUSH iterator's address
    (0x0017F05C, "e8efb3faff"),    # CALL 0x0012A450
)
SOURCE = "src/main_unclassified/band_0017/0x0017eff0.c"
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path)
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    image = a.xbe.read_bytes()
    for addr, expected_hex in CHECKS:
        expected = bytes.fromhex(expected_hex)
        actual = image[addr-0x10000:addr-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"Original XBE mismatch 0x{addr:08X}")
    src = (a.repo / SOURCE).read_text()
    if "FUN_0012a450(unaff_EDI + 0x33,&piVar2,piVar2);" not in src:
        raise SystemExit("Tree iterator address is not sourced from the guest stack local")
    if "stack0xfffffff8" in src:
        raise SystemExit("Unresolved stack reference remains")
    print(f"PASS: {len(CHECKS)} original x86 iterator stack opcodes and source local")

if __name__ == "__main__":
    main()
