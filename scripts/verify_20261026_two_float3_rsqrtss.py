#!/usr/bin/env python3
"""Verify two original XYZ RSQRTSS functions, C11 storage, and synthetic SSE lanes.

Original Xbox executable is private and not part of the repository. Without
--xbe this verifies only source checks and a synthetic host SSE fixture.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_0005ACB0 = "717230c766feb727be5fa6857abe1257254c74266195a0f018455677c0b7f83b"
ORIGINAL = {
    0x0005AE35: "f30f1000",    # MOVSS first float
    0x0005AE39: "0f164004",    # MOVHPS other two floats
    0x0005AE40: "0f59c0",      # MULPS squares
    0x0005AE43: "0fc6c880",    # SHUFPS
    0x0005AE47: "0f58c8",      # ADDPS
    0x0005AE4A: "0fc6c903",    # SHUFPS
    0x0005AE4E: "f30f58c8",    # ADDSS
    0x0005AE52: "0f2f0d18403a00", # COMISS near-zero threshold
    0x0005AE61: "f30f52c9",    # RSQRTSS
    0x0005AE65: "0fc6c900",    # broadcast estimated inverse
    0x0005AE69: "0f59d1",      # MULPS vector scale
    0x00301288: "f30f1000",
    0x0030128C: "0f164004",
    0x00301293: "0f59c0",
    0x00301296: "0fc6c880",
    0x0030129A: "0f58c8",
    0x0030129D: "0fc6c903",
    0x003012A1: "f30f58c8",
    0x003012A5: "f30f52c9",
    0x003012A9: "0fc6c900",
    0x003012AD: "0f59d1",
    0x003012B0: "f30f1110",
    0x003012B4: "0f175004",
}
SOURCES = {
    "src/main_unclassified/band_0005/0x0005acb0.c": (
        "#include <xmmintrin.h>",
        "guest_length_sq = (local_24 * local_24 + fStack_20 * fStack_20) + local_28 * local_28;",
        "guest_inv_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));",
    ),
    "src/main_unclassified/band_0030/0x00300df0.c": (
        "#include <xmmintrin.h>",
        "guest_length_sq = (local_f0 * local_f0 + fStack_ec * fStack_ec) + local_f4 * local_f4;",
        "guest_inverse_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));",
    ),
}
TEST = "tests/test_20261026_rsqrtss_float3.c"

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    a = ap.parse_args()
    for name, required in SOURCES.items():
        source = (a.root / name).read_text(encoding="utf-8")
        for token in required:
            if token not in source:
                raise SystemExit(f"{name}: missing source contract {token}")
        if "auVar10._" in source or "auVar14._" in source or "auVar15._" in source:
            raise SystemExit(f"{name}: pseudo SIMD subpiece remains")
    compiler = shutil.which("clang")
    if not compiler:
        raise SystemExit("clang required for SSE lane regression fixture")
    with tempfile.TemporaryDirectory() as tmp:
        exe = Path(tmp) / "bf_rsqrtss_fixture"
        src = a.root / TEST
        cmd = [compiler, "-std=c11", "-Wall", "-Wextra", "-Werror",
               "-O0", str(src), "-lm", "-o", str(exe)]
        subprocess.run(cmd, check=True, capture_output=True, text=True)
        subprocess.run([str(exe)], check=True, capture_output=True, text=True)
    if a.xbe:
        image = a.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != XBE_SHA:
            raise SystemExit("incorrect original Xbox XBE")
        off = 0x0005ACB0 - 0x10000
        if hashlib.sha256(image[off:off + 635]).hexdigest() != BODY_0005ACB0:
            raise SystemExit("FUN_0005ACB0 original function body SHA mismatch")
        for address, hexcode in ORIGINAL.items():
            expected = bytes.fromhex(hexcode)
            start = address - 0x10000
            if image[start:start + len(expected)] != expected:
                raise SystemExit(f"original opcode mismatch 0x{address:08X}")
        print(f"PASS: {len(ORIGINAL)} original SSE opcode windows and 2 repaired functions")
    else:
        print("PASS: 2 C11 RSQRTSS source contracts and 5 synthetic SSE fixtures (XBE not supplied)")

if __name__ == "__main__":
    main()
