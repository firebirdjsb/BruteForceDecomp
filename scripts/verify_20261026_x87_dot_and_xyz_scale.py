#!/usr/bin/env python3
"""Original x87 F32 dot storage and SIMD XYZ scaling for two C11 repairs.

The two exact source contracts are verified in CI. With --xbe, also verifies
the private Xbox game image and the original opcode bytes. The whole-function
x86 register ABI, Xbox memory map, and 1:1 runtime are still unverified.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x0005AEB2: "d95df8",           # FSTP DWORD [EBP-8]: computed dot
    0x0005AEEC: "8b4d08",           # MOV ECX,[EBP+8]: output object
    0x0005AEEF: "d945f8",           # FLD DWORD [EBP-8]
    0x0005AEF2: "d9590c",           # FSTP DWORD [ECX+0x0C]
    0x0005AF0E: "d9460c",           # FLD output scalar
    0x0005AF11: "d80d00503a00",     # FMUL negative-one constant
    0x0005AF17: "d95e0c",           # FSTP output scalar
    0x000C538A: "c744240800008043", # MOV [ESP+8],0x43800000 (256.f)
    0x000C5417: "d95c2410",         # FSTP DWORD local scale after extra pushes
    0x000C543C: "f30f1044240c",     # MOVSS scale
    0x000C544A: "f30f1008",         # MOVSS direction x
    0x000C544E: "0f164804",         # MOVHPS direction y,z
    0x000C5452: "0f59c1",           # MULPS XYZ
    0x000C5459: "f30f1100",         # MOVSS x result
    0x000C545D: "0f174004",         # MOVHPS y,z results
    0x000C54AA: "d998ac000000",     # FSTP x at destination +0xac
    0x000C54C3: "895004",           # MOV y at destination +0xb0
    0x000C54C6: "894808",           # MOV z at destination +0xb4
}
CONTRACTS = {
    "src/main_unclassified/band_0005/0x0005acb0.c": (
        "float guest_dot_product;",
        "guest_dot_product = local_28 * fVar3 + local_10 * local_24 + fVar12 * fStack_20;",
        "guest_dot_product * guest_dot_product",
        "*(float *)(param_1 + 0xc) = guest_dot_product;",
    ),
    "src/main_unclassified/band_000c/0x000c5330.c": (
        "float guest_scale = 256.0f;",
        "guest_scale = (float)fVar10;",
        "memcpy(guest_direction_xyz, auStack_18, sizeof guest_direction_xyz);",
        "*(float *)(in_ECX + 0xac) = fVar5 + guest_scale * guest_direction_xyz[0];",
        "*(float *)(in_ECX + 0xb0) = fVar3 + guest_scale * guest_direction_xyz[1];",
        "*(float *)(in_ECX + 0xb4) = fVar4 + guest_scale * guest_direction_xyz[2];",
    ),
}
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path, default=None)
    args = ap.parse_args()
    for relpath, needles in CONTRACTS.items():
        code = (args.root / relpath).read_text(encoding="utf-8")
        for needle in needles:
            if needle not in code:
                raise SystemExit(f"source contract missing in {relpath}: {needle}")
        if relpath.endswith("0x0005acb0.c") and "(float)local_c" in code:
            raise SystemExit("dot product still encoded as a pointer")
        if relpath.endswith("0x000c5330.c") and "auStack_18._0_8_" in code:
            raise SystemExit("invalid decompiler packed-lane member remains")
    if args.xbe:
        binary = args.xbe.read_bytes()
        digest = hashlib.sha256(binary).hexdigest()
        if digest != XBE_SHA256:
            raise SystemExit("wrong original Brute Force Xbox executable SHA256")
        for addr, hexbytes in OPCODES.items():
            expected = bytes.fromhex(hexbytes)
            actual = binary[addr - 0x10000:addr - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"original XBE mismatch at 0x{addr:08x}: {actual.hex()}")
        print(f"PASS: {len(OPCODES)} original XBE opcode signatures; 2 source contracts")
    else:
        print("PASS: 2 source contracts (XBE byte evidence not checked in CI)")
    print("NOTE: syntax success and opcode spot checks do NOT prove full native behavior")

if __name__ == "__main__":
    main()
