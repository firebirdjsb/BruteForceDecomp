#!/usr/bin/env python3
"""Check x86 low-byte, SIMD float32 lanes, and x87 binary64 word repairs.

The original XBE may be supplied locally as --xbe; private executable bytes
are NOT stored in GitHub. CI checks source invariants only. Neither mode
claims complete x86 function ABI or native PC runtime equivalence.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = (
    (0x0025F3B3, "8a442424"),   # MOV AL,BYTE PTR [ESP+0x24]
    (0x0025F3BB, "8d4c2424"),   # LEA ECX,[ESP+0x24]
    (0x0025F3C0, "88442428"),   # MOV BYTE PTR [ESP+0x28],AL
    (0x002B8BE7, "f30f1008"),   # MOVSS XMM1,[EAX]
    (0x002B8BEB, "0f164804"),   # MOVHPS XMM1,[EAX+4]
    (0x002B8BF3, "f30f1012"),   # MOVSS XMM2,[EDX]
    (0x002B8BF7, "0f165204"),   # MOVHPS XMM2,[EDX+4]
    (0x002B8BFB, "0f5cca"),     # SUBPS XMM1,XMM2
    (0x002B8C02, "f30f1108"),   # MOVSS [EAX],XMM1
    (0x002B8C06, "0f174804"),   # MOVHPS [EAX+4],XMM1
    (0x002DD978, "dd442458"),   # FLD QWORD PTR [ESP+0x58]
    (0x002DD980, "dd442450"),   # FLD QWORD PTR [ESP+0x50]
    (0x002DDA26, "dd5c2420"),   # FSTP QWORD PTR [ESP+0x20]
    (0x002DDA2A, "8b6c2424"),   # MOV EBP,[ESP+0x24]: high DWORD
    (0x002DDA39, "8b542420"),   # MOV EDX,[ESP+0x20]: low DWORD
    (0x002DDA4B, "55"),         # PUSH EBP: high DWORD to callee
    (0x002DDA4C, "52"),         # PUSH EDX: low DWORD to callee
    (0x002DDA7B, "55"),         # PUSH EBP: high DWORD
    (0x002DDA7C, "50"),         # PUSH EAX: low DWORD
    (0x002DDAFB, "dd442420"),   # FLD QWORD PTR [ESP+0x20]
    (0x002DDAFF, "dc642458"),   # FSUB QWORD PTR [ESP+0x58]
    (0x002DDABC, "dd442458"),   # FLD QWORD PTR [ESP+0x58]
)
SOURCES = (
    ("src/main_unclassified/band_0025/0x0025f3b0.c", (
        "local_c[0] = (uint8_t)(uint32_t)(uintptr_t)param_1;",
    ), ("param_1._0_1_",)),
    ("src/main_unclassified/band_002b/0x002b89f0.c", (
        "local_40 = local_14[1] - local_50;",
        "fStack_3c = local_14[2] - fStack_4c;",
    ), ("local_14._4_8_", "SUB84(local_14.")),
    ("src/main_unclassified/band_002d/0x002dd8d0.c", (
        "static double bf_002dd8d0_guest_binary64(uint32_t low, uint32_t high)",
        "memcpy(&result, &guest_bits, sizeof result);",
        "memcpy(&guest_sample_bits, &uStack_10, sizeof guest_sample_bits);",
        "uVar3 = (uint32_t)(guest_sample_bits >> 32);",
        "uStack_8 = (uint32_t)guest_sample_bits;",
    ), ("uStack_10._4_4_", "(double)CONCAT44", "(undefined4)uStack_10")),
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path, help="original Xbox executable (never committed)")
    args = parser.parse_args()
    for rel, required, forbidden in SOURCES:
        source = (args.repo / rel).read_text(encoding="utf-8")
        for term in required:
            if term not in source:
                raise SystemExit(f"{rel}: missing required storage operation: {term}")
        for term in forbidden:
            if term in source:
                raise SystemExit(f"{rel}: invalid Ghidra expression remains: {term}")
    if args.xbe is None:
        print("PASS: three original-dataflow source contracts (CI source-only)")
        return
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise SystemExit("Original XBE SHA-256 does not match pinned executable")
    for address, pattern in OPCODES:
        expected = bytes.fromhex(pattern)
        offset = address - 0x10000
        if data[offset:offset + len(expected)] != expected:
            raise SystemExit(f"XBE instruction mismatch at 0x{address:08x}")
    print(f"PASS: {len(OPCODES)} original x86 opcode signatures and 3 C11 source contracts")
    print("Full-function equivalence, guest-memory translation and x87 rounding remain unverified")

if __name__ == "__main__":
    main()
