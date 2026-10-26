#!/usr/bin/env python3
"""Check original 0x00231B10 x87/packed-SSE lanes and decompiler alias repair.

The private XBE is optional. With --xbe, check its identity and selected
original instruction widths. Without it, CI checks C11 source invariants.
Whole-function calling conventions and x87 rounding are not proved here.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x00231C52: "f30f1008",      # MOVSS xmm1,DWORD [EAX]
    0x00231C56: "0f164804",      # MOVHPS xmm1,QWORD [EAX+4]
    0x00231C5A: "0f59c1",        # MULPS xmm0,xmm1
    0x00231C61: "f30f1100",      # MOVSS store lane 0
    0x00231C65: "0f174004",      # MOVHPS store other XYZ lanes
    0x00231CEC: "d94008",        # FLD F32 Z
    0x00231CEF: "d9e0",          # FCHS negate Z
    0x00231CF1: "d95c2410",      # FSTP F32 negative Z
    0x00231CF5: "d94004",        # FLD F32 Y
    0x00231CFC: "d9e0",          # FCHS negate Y
    0x00231CFE: "d95c240c",      # FSTP F32 negative Y
    0x00231D02: "d900",          # FLD F32 X
    0x00231D08: "d9e0",          # FCHS negate X
    0x00231D0E: "d95c2420",      # FSTP F32 negative X
    0x00231D33: "f30f10442410", # MOVSS scale
    0x00231D39: "0fc6c000",     # SHUFPS broadcast
    0x00231D41: "f30f1008",     # MOVSS X
    0x00231D45: "0f164804",     # MOVHPS Y/Z
    0x00231D49: "0f59c1",       # MULPS float3 scale
    0x00231D50: "f30f1100",     # MOVSS output X
    0x00231D54: "0f174004",     # MOVHPS output Y/Z
    0x00231DA4: "f30f10442410", # later scale
    0x00231DAA: "0fc6c000",     # SHUFPS broadcast
    0x00231DB2: "f30f1008",     # MOVSS X
    0x00231DB6: "0f164804",     # MOVHPS Y/Z
    0x00231DBA: "0f59c1",       # MULPS
    0x00231DC1: "f30f1100",     # MOVSS output X
    0x00231DC5: "0f174004",     # MOVHPS output Y/Z
}
SOURCE = "src/main_unclassified/band_0023/0x00231b10.c"
MARKERS = (
    "float guest_negative_y;",
    "float guest_negative_z;",
    "guest_negative_z = -pfVar5[2];",
    "guest_negative_y = -pfVar5[1];",
    "fStack_f4 = fStack_f0 * guest_negative_y;",
    "fStack_f0 = fStack_f0 * guest_negative_z;",
    "fVar7 = fVar8 * pfVar5[1];",
    "fVar8 = fVar8 * pfVar5[2];",
    "fStack_d0 = fVar7;",
    "fStack_cc = fVar8;",
    "fStack_dc = fStack_d8 * pfVar5[1];",
    "fStack_d8 = fStack_d8 * pfVar5[2];",
)
FORBIDDEN = ("uStack_e8._", "(float)uStack_e8", "_fStack_d0", "(float)*(undefined8 *)(pfVar5 + 1)")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    text = (args.root / SOURCE).read_text(encoding="utf-8")
    for token in MARKERS:
        if token not in text:
            raise SystemExit("missing original float3 source storage: " + token)
    for token in FORBIDDEN:
        if token in text:
            raise SystemExit("invalid Ghidra storage alias remains: " + token)
    if args.xbe:
        xbe = args.xbe.read_bytes()
        if hashlib.sha256(xbe).hexdigest() != XBE_SHA:
            raise SystemExit("original Xbox XBE SHA256 mismatch")
        for addr, hexcode in OPCODES.items():
            wanted = bytes.fromhex(hexcode)
            off = addr - 0x10000
            actual = xbe[off:off + len(wanted)]
            if actual != wanted:
                raise SystemExit(f"original x86 opcode mismatch at 0x{addr:08X}: {actual.hex()}")
        print(f"PASS: {len(OPCODES)} original x86 opcode windows and 0x00231B10 float3 source contract")
    else:
        print("PASS: 0x00231B10 C11 source storage invariants (original XBE not supplied)")
if __name__ == "__main__":
    main()
