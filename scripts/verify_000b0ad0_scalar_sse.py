#!/usr/bin/env python3
"""Pin three scalar SSE instructions to the hash-matched original Xbox XBE.

CI runs focused Clang and source checks without the copyrighted XBE.
Local evidence run:
  python3 scripts/verify_000b0ad0_scalar_sse.py --root . --xbe /path/to/default.xbe
This is not full x87, guest ABI or behavioral verification.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_HASH = "02CCC31E77A7B090584FD738A8FB1732E80498F901631A45A43C4489FC26CAE2"
INSTRUCTIONS = {
    0x000B0B4D: "f30f52442404",  # rsqrtss xmm0,[esp+4]
    0x000B0BF4: "f30f53c0",      # rcpss xmm0,xmm0
    0x000B0CDC: "f30f53c0",      # rcpss xmm0,xmm0
}


def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("original XBE SHA-256 mismatch")
    for va, encoded in INSTRUCTIONS.items():
        opcode = bytes.fromhex(encoded)
        offset = va - 0x10000
        if data[offset:offset + len(opcode)] != opcode:
            raise ValueError("original instruction mismatch at 0x%08x" % va)


def check_source(source):
    for marker in ("Entry: 0x000b0ad0", "Input x86 body SHA-256: " + BODY_HASH, "ABI_UNVERIFIED"):
        if marker not in source:
            raise ValueError("missing provenance/status marker: " + marker)
    if source.count("_mm_cvtss_f32(_mm_rsqrt_ss(") != 1:
        raise ValueError("expected exactly one RSQRTSS scalar result")
    if source.count("_mm_cvtss_f32(_mm_rcp_ss(") != 2:
        raise ValueError("expected exactly two RCPSS scalar results")
    if source.count("_mm_set_ss(*(float *)(param_1 + 0x94))") != 2:
        raise ValueError("RCPSS must read the original guest float bits twice")
    if "in_XMM0" in source or "auVar8" in source:
        raise ValueError("unrepaired pseudo-SIMD array remains")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path, help="Original user-owned XBE; never checked into Git")
    args = parser.parse_args()
    root = args.root.resolve()
    source_file = root / "src/main_unclassified/band_000b/0x000b0ad0.c"
    check_source(source_file.read_text(encoding="utf-8"))
    subprocess.run(["clang", "-std=c11", "-fsyntax-only", "-Wno-int-to-pointer-cast",
                    "-I", str(root / "include"), str(source_file)], check=True)
    if args.xbe:
        check_xbe(args.xbe.read_bytes())
        print("PASS: matching original XBE and three exact SSE instruction encodings")
    else:
        print("PASS: source-only scalar SSE check and focused Clang C11 (no XBE in CI)")
    print("NOT verified: guest memory, x87 arithmetic, full ABI, or runtime equivalence")


if __name__ == "__main__":
    main()
