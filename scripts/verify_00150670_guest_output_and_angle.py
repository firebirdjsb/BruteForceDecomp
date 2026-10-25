#!/usr/bin/env python3
"""Verify 0x00150670 x87 float argument and separate stack output DWORD.

0x0015068D clears [ESP+8]. After later pushes, LEA [ESP+0x0C] at
0x00150873 refers to that same guest 32-bit output slot. The angle
is independently stored through x87 ST(0) as binary32 to [ESP+0x40],
then pushed as a raw DWORD. It must not alias the bool argument.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x0015068D, "895c2408"),         # MOV [ESP+8],EBX (EBX=0)
    (0x0015083B, "c7442440000080bf"), # MOV DWORD [ESP+0x40],0xbf800000
    (0x00150845, "d98634040000"),     # FLD DWORD [ESI+0x434]
    (0x00150855, "e886f2ecff"),       # CALL x87 FUN_0001FAE0
    (0x0015085E, "d95c2444"),         # FSTP DWORD [ESP+0x44] before cleanup
    (0x0015086E, "8b442440"),         # MOV EAX,[ESP+0x40] angle float bits
    (0x00150872, "50"),               # PUSH EAX as binary32 argument
    (0x00150873, "8d44240c"),         # LEA EAX,[ESP+0x0C] output DWORD address
    (0x00150877, "50"),               # PUSH output address
    (0x00150885, "e8b6c90e00"),       # CALL FUN_0023D240
)
SOURCE = "src/main_unclassified/band_0015/0x00150670.c"
REQUIRED = (
    "float guest_angle;",
    "uint32_t guest_out_word = 0;",
    "guest_angle = (float)fVar4;",
    "guest_angle = -1.0f;",
    "FUN_0023d240(*(undefined4 *)(unaff_ESI + 500),iVar2 + 0x14,&guest_out_word,guest_angle)",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    src = (args.repo / SOURCE).read_text()
    for token in REQUIRED:
        if token not in src:
            raise SystemExit("Missing C11 x87/stack contract: " + token)
    if "_param_2" in src or "stack0xffffffd0" in src:
        raise SystemExit("Unresolved guest stack alias / bool conflation remains")
    if args.xbe is None:
        print("PASS: C11 float-angle and output-DWORD separation (original XBE not checked)")
        return
    data = args.xbe.read_bytes()
    for addr, raw in OPCODES:
        expected = bytes.fromhex(raw)
        actual = data[addr - 0x10000:addr - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"Original XBE opcode mismatch at 0x{addr:08X}: {actual.hex()}")
    print(f"PASS: {len(OPCODES)} original x86 instructions and C11 stack argument contract")
    print("NOTE: full virtual-call ABI and guest-memory mapping remain unverified")
if __name__ == "__main__":
    main()
