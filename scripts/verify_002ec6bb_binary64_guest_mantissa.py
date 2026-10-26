#!/usr/bin/env python3
"""Verify byte-exact Xbox mantissa instructions and C11 DWORD lane reconstruction.

No full x87 precision, calling convention, guest memory, or runtime equivalence
is implied by this focused operand test. Private original XBE never enters Git.
"""
import argparse
from pathlib import Path

OPERANDS = {
    0x002EC7F9: "dd55f0",    # FST QWORD PTR [EBP-0x10]
    0x002EC82C: "8a45f6",    # MOV AL,BYTE PTR [EBP-0x0A]
    0x002EC82F: "83e00f",    # AND EAX,0x0F
    0x002EC832: "83c810",    # OR EAX,0x10 (mantissa implicit leading 1)
    0x002EC835: "668945f6",  # MOV WORD PTR [EBP-0x0A],AX
    0x002EC844: "845df0",    # TEST BYTE PTR [EBP-0x10],BL
    0x002EC84F: "d16df0",    # SHR DWORD PTR [EBP-0x10],1
    0x002EC852: "845df4",    # TEST BYTE PTR [EBP-0x0C],BL
    0x002EC857: "804df380",  # OR BYTE PTR [EBP-0x0D],0x80
    0x002EC85B: "d16df4",    # SHR DWORD PTR [EBP-0x0C],1
    0x002EC863: "dd45f0",    # FLD QWORD PTR [EBP-0x10]
}
REQUIRED = (
    "uint64_t guest_mantissa_bits;",
    "memcpy(&guest_mantissa_bits,&guest_double_value,sizeof(guest_mantissa_bits));",
    "UINT64_C(0x000fffffffffffff)",
    "UINT64_C(0x0010000000000000)",
    "uint32_t low_word = (uint32_t)guest_mantissa_bits;",
    "uint32_t high_word = (uint32_t)(guest_mantissa_bits >> 32);",
    "low_word = (low_word >> 1) | ((high_word & 1u) << 31);",
    "high_word >>= 1;",
    "guest_mantissa_bits = ((uint64_t)high_word << 32) | low_word;",
    "memcpy(&guest_shifted_double,&guest_mantissa_bits,sizeof(guest_shifted_double));",
)
SOURCE = "src/main_unclassified/band_002e/0x002ec6bb.c"

def verify_lanes():
    samples = (0, 1, 0xffffffff, 0x100000000, 0x1ffffffff,
               0x8000000000000000, 0xffffffffffffffff, 0x123456789abcdef0)
    for sample in samples:
        low = sample & 0xffffffff
        high = sample >> 32
        low = (low >> 1) | ((high & 1) << 31)
        high >>= 1
        recombined = (high << 32) | low
        assert recombined == sample >> 1, hex(sample)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path, nargs="?", help="optional original Xbox XBE")
    p.add_argument("--repo", type=Path, default=Path("."))
    args = p.parse_args()
    source = (args.repo / SOURCE).read_text(encoding="utf-8")
    for token in REQUIRED:
        if token not in source:
            raise SystemExit("Missing source invariant: " + token)
    for token in ("local_14._", "CONCAT44(local_14", "(double)((ulonglong)"):
        if token in source:
            raise SystemExit("Unsafe Ghidra subpiece or numeric cast remains: " + token)
    verify_lanes()
    if args.xbe:
        xbe = args.xbe.read_bytes()
        for address, opcode in OPERANDS.items():
            expected = bytes.fromhex(opcode)
            actual = xbe[address-0x10000:address-0x10000+len(expected)]
            if actual != expected:
                raise SystemExit(f"XBE opcode mismatch at 0x{address:08X}: {actual.hex()}")
        print(f"PASS: {len(OPERANDS)} exact original x86 opcodes and 8 cross-DWORD shift cases")
    else:
        print("PASS: C11 source and 8 lane cases (private original XBE not supplied)")

if __name__ == "__main__":
    main()
