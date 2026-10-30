#!/usr/bin/env python3
"""Verify 0x002C06B0 vector lane reconstruction (source-only in CI).

Optional --xbe checks exact original SSE instructions; it must match the
pinned original Xbox executable.  The tests prove operand width/dataflow,
not complete runtime equivalence or SSE exception/rounding behavior.
"""
import argparse
import hashlib
from pathlib import Path

ORIGINAL_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
INSTRUCTIONS = (
    (0x002C07CD, "8b442410"),  # load float32 xyz source
    (0x002C07D1, "f30f1008"),  # MOVSS xmm1,[eax], lane 0
    (0x002C07D5, "0f164804"),  # MOVHPS xmm1,[eax+4], lanes 1,2
    (0x002C07DD, "f30f1012"),  # MOVSS xmm2,[edx], lane 0
    (0x002C07E1, "0f165204"),  # MOVHPS xmm2,[edx+4], lanes 1,2
    (0x002C07E5, "0f5cca"),    # SUBPS xmm1,xmm2; three independent floats
    (0x002C07EC, "f30f1108"),  # MOVSS [eax],xmm1
    (0x002C07F0, "0f174804"),  # MOVHPS [eax+4],xmm1
    (0x002C0800, "f30f1000"),  # Reload first difference lane
    (0x002C0804, "0f164004"),  # Reload next two lanes
    (0x002C0808, "0f59c0"),    # Square lane-wise (MULPS)
    (0x002C0816, "f30f58c8"),  # ADDSS accumulated lane
)
SOURCE = "src/main_unclassified/band_002c/0x002c06b0.cpp"
NEEDED = (
    "(local_18[0] - local_28[0])",
    "(local_18[2] - local_28[2])",
    "(local_18[1] - local_28[1])",
    "*(float *)(param_1 + 0x68)",
    "*(float *)(param_1 + 0x64)",
)
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    src = (args.repo / SOURCE).read_text(encoding="utf-8")
    for token in NEEDED:
        if token not in src:
            raise SystemExit("Missing reconstructed xyz lane " + token)
    for bad in ("local_18._4_8_", "local_28._4_8_", "SUB84(local_18", "SUB84(local_28"):
        if bad in src:
            raise SystemExit("Ghidra 64-bit vector scalar remains: " + bad)
    if args.xbe is None:
        print("PASS: source xyz SSE lane contract (XBE not present in CI)")
        return
    b = args.xbe.read_bytes()
    if hashlib.sha256(b).hexdigest() != ORIGINAL_SHA256:
        raise SystemExit("Original Xbox XBE SHA256 mismatch")
    for addr, code in INSTRUCTIONS:
        op = bytes.fromhex(code)
        if b[addr-0x10000:addr-0x10000+len(op)] != op:
            raise SystemExit(f"Original x86 instruction mismatch at 0x{addr:08x}")
    print(f"PASS: {len(INSTRUCTIONS)} original SSE instructions and source xyz lane mapping")
    print("Full function, floating point exactness and PC linkage are not verified")

if __name__ == "__main__":
    main()
