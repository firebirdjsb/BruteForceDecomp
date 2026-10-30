#!/usr/bin/env python3
"""Assert original x86 byte-buffer and 4-/12-byte payload call-site widths.

Optional private XBE argument verifies opcode bytes. Source-only mode is
appropriate for CI where copyrighted game data is intentionally absent.
This does not validate the external virtual callback ABI on the host.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x002A7FE0, "83ec0c"), (0x002A7FE7, "ff5030"),
    (0x002A7FF1, "ff5138"), (0x002A7FFE, "8d44240f"),
    (0x002A800D, "8d54240e"), (0x002A8016, "8a442406"),
    (0x002A8023, "8d4c240c"), (0x002A802D, "ff5020"),
    (0x002A8032, "8d442410"), (0x002A8039, "ff5224"),
    (0x002A803E, "6a00"), (0x002A8040, "6a04"),
    (0x002A8042, "8d542414"), (0x002A804D, "6a00"),
    (0x002A804F, "6a04"), (0x002A8051, "8d4c2418"),
    (0x002A805A, "8a44240a"),
    (0x002A8070, "83ec14"), (0x002A8077, "ff5034"),
    (0x002A8081, "ff513c"), (0x002A808E, "8d44240f"),
    (0x002A809D, "8d54240e"), (0x002A80A6, "8a442406"),
    (0x002A80B3, "8d4c240c"), (0x002A80BD, "ff5024"),
    (0x002A80C2, "8d442410"), (0x002A80C9, "ff5228"),
    (0x002A80D0, "6a04"), (0x002A80D2, "8d542414"),
    (0x002A80DF, "6a0c"), (0x002A80E1, "8d4c2418"),
    (0x002A80EA, "8a44240a"),
)
SOURCES = (
    ("src/main_unclassified/band_002a/0x002a7fe0.cpp", (
        "uint8_t guest_header_byte_a",
        "uint8_t guest_header_byte_b",
        "uint32_t guest_payload_a;",
        "uint32_t guest_payload_b;",
        "(*unaff_ESI + 0x20))(unaff_ESI,i,&guest_payload_a)",
        "(*unaff_ESI + 0x24))(unaff_ESI,i,&guest_payload_b)",
        "(*unaff_EDI + 0x14))(unaff_EDI,&guest_payload_a,4,0)",
        "(*unaff_EDI + 0x14))(unaff_EDI,&guest_payload_b,4,0)",
    )),
    ("src/main_unclassified/band_002a/0x002a8070.cpp", (
        "uint8_t guest_header_byte_a",
        "uint8_t guest_header_byte_b",
        "uint32_t guest_payload_a;",
        "uint32_t guest_payload_b[3];",
        "(*unaff_ESI + 0x24))(unaff_ESI,i,&guest_payload_a)",
        "(*unaff_ESI + 0x28))(unaff_ESI,i,guest_payload_b)",
        "(*unaff_EDI + 0x14))(unaff_EDI,&guest_payload_a,4,0)",
        "(*unaff_EDI + 0x14))(unaff_EDI,guest_payload_b,12,0)",
    )),
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?", help="original Xbox Brute Force XBE")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    for rel, tokens in SOURCES:
        src = (args.repo / rel).read_text(encoding="utf-8")
        for token in tokens:
            if token not in src:
                raise SystemExit(f"{rel}: missing C11 guest buffer invariant: {token}")
        if "stack0x" in src:
            raise SystemExit(f"{rel}: unresolved x86 guest stack address")
    if args.xbe is None:
        print("PASS: two byte/payload buffer source invariants (XBE not supplied)")
        return
    data = args.xbe.read_bytes()
    for addr, expected_hex in OPCODES:
        want = bytes.fromhex(expected_hex)
        actual = data[addr-0x10000:addr-0x10000+len(want)]
        if actual != want:
            raise SystemExit(f"Original XBE mismatch at 0x{addr:08X}: {actual.hex()}")
    print(f"PASS: {len(OPCODES)} XBE instructions and 2 C11 serialization-buffer contracts")
    print("Guest callback ABIs and cross-function runtime behavior remain unverified")

if __name__ == "__main__":
    main()
