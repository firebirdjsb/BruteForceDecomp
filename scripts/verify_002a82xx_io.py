#!/usr/bin/env python3
"""Verify two Xbox guest reader/writer layouts against exact original instructions.

With no XBE, CI checks the source contracts only; the copyrighted original
game image remains private. Verifying opcodes/operand widths does not establish
a complete guest callback ABI or a runnable native PC implementation.
"""
import argparse
from pathlib import Path

ORIGINAL_INSTRUCTIONS = (
    (0x2A82A0, "8b07"),
    (0x2A82B0, "8d54240f"),
    (0x2A82B9, "0fb64c2407"),
    (0x2A82C2, "ff5034"),
    (0x2A82CB, "8d44240e"),
    (0x2A82D4, "8a442406"),
    (0x2A82E4, "6a04"),
    (0x2A82E6, "8d542414"),
    (0x2A82F3, "6a04"),
    (0x2A82F5, "8d4c2410"),
    (0x2A82FE, "8b4c240c"),
    (0x2A8304, "8d442408"),
    (0x2A830B, "ff5214"),
    (0x2A8320, "8b07"),
    (0x2A8330, "8d54240f"),
    (0x2A8339, "0fb64c2407"),
    (0x2A8342, "ff5038"),
    (0x2A834B, "8d44240e"),
    (0x2A8354, "8a442406"),
    (0x2A8364, "6a04"),
    (0x2A8366, "8d542410"),
    (0x2A8373, "6a0c"),
    (0x2A8375, "8d4c2414"),
    (0x2A837E, "8b4c2408"),
    (0x2A8384, "8d44240c"),
    (0x2A838B, "ff5214"),
)
CONTRACTS = (
    ("src/main_unclassified/band_002a/0x002a82a0.c", "0x34", 4, "uint32_t guest_payload_b;"),
    ("src/main_unclassified/band_002a/0x002a8320.c", "0x38", 12, "uint32_t guest_payload_b[3];"),
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--root", type=Path, default=Path("."))
    a = ap.parse_args()
    for path, dest_method, width, payload_declaration in CONTRACTS:
        src = (a.root / path).read_text(encoding="utf-8")
        payload_argument = "guest_payload_b" if width == 12 else "&guest_payload_b"
        checks = (
            "uint8_t guest_header_byte_a;",
            "uint8_t guest_header_byte_b;",
            "for (uint8_t index = 0; index < guest_header_byte_b; index++)",
            "uint32_t guest_payload_a;",
            payload_declaration,
            f"(*unaff_EDI + {dest_method}))(unaff_EDI,(uint32_t)guest_header_byte_a)",
            "(*unaff_ESI + 0x10))(unaff_ESI,&guest_payload_a,4,0)",
            f"(*unaff_ESI + 0x10))(unaff_ESI,{payload_argument},{width},0)",
            f"(*unaff_EDI + 0x14))(unaff_EDI,guest_payload_a,{payload_argument})",
        )
        normalized = "".join(src.split())
        for check in checks:
            if "".join(check.split()) not in normalized:
                raise SystemExit(f"{path}: missing source contract {check!r}")
        if "stack0x" in src:
            raise SystemExit(f"{path}: unresolved guest stack expression")
    if a.xbe is None:
        print("PASS: two source-only reader/writer storage contracts")
        return
    image = a.xbe.read_bytes()
    for address, expected_hex in ORIGINAL_INSTRUCTIONS:
        expected = bytes.fromhex(expected_hex)
        offset = address - 0x10000
        if image[offset:offset + len(expected)] != expected:
            raise SystemExit(f"original XBE signature mismatch at 0x{address:08x}")
    print(f"PASS: {len(ORIGINAL_INSTRUCTIONS)} original x86 instruction signatures; two source contracts")
    print("Full ABI, guest memory mapping, and runtime equivalence are not verified")

if __name__ == "__main__":
    main()
