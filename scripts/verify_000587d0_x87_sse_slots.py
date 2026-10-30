#!/usr/bin/env python3
"""Verify original Xbox 0x000587D0 float-word/contiguous XYZ source contract.

The original XBE is required locally for opcode and SHA-256 checks, but must
never enter GitHub/CI. Isolated syntax and synthetic SIMD storage tests do not
prove full x87/guest-register ABI or runtime equivalence.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "e5d4b593af6ea97b5ad87cd9459f879a63add5daffc2924f55126ac8e2866b04"
ENTRY = 0x000587D0
BODY_LEN = 471
SOURCE = "src/main_unclassified/band_0005/0x000587d0.c"
TEST = "tests/test_000587d0_float3_storage.c"
# Exact original x86 instruction windows; only check with the authenticated XBE.
WINDOWS = (
    (0x587d3, "83ec30"),
    (0x587f4, "d94108"),
    (0x587fa, "d86008"),
    (0x587fd, "d95df4"),
    (0x58803, "8b55f4"),
    (0x58809, "8955f0"),
    (0x5880c, "d95df8"),
    (0x58814, "d820"),
    (0x5881c, "d95de8"),
    (0x5881f, "d945f0"),
    (0x58825, "d945ec"),
    (0x5882d, "d945e8"),
    (0x58835, "d955f8"),
    (0x58852, "8d4ddc"),
    (0x58856, "8d45e8"),
    (0x58859, "e8d23cffff"),
    (0x58870, "8d55d0"),
    (0x58874, "e8073cffff"),
    (0x58885, "d945d8"),
    (0x58888, "d84de4"),
    (0x5888b, "d945d0"),
    (0x5888e, "d84ddc"),
    (0x588eb, "8b5108"),
    (0x588ee, "8d45e8"),
    (0x588f3, "e8885d0c00"),
    (0x588fb, "c745ec00000000"),
    (0x58902, "8945f4"),
    (0x58909, "8b45f4"),
    (0x5890c, "f30f1000"),
    (0x58910, "0f164004"),
    (0x58914, "0f28d0"),
    (0x58917, "0f59c0"),
    (0x5891a, "0fc6c880"),
    (0x5891e, "0f58c8"),
    (0x58921, "0fc6c903"),
    (0x58925, "f30f58c8"),
    (0x58929, "0f2f0d18403a00"),
    (0x58932, "c645ff00"),
    (0x58938, "f30f52c9"),
    (0x5893c, "0fc6c900"),
    (0x58940, "0f59d1"),
    (0x58943, "f30f1110"),
    (0x58947, "0f175004"),
    (0x58952, "d945f0"),
    (0x58955, "d84de4"),
    (0x58958, "d945e8"),
    (0x5895b, "d84ddc"),
    (0x589a4, "c20c00"),
)
MARKERS = (
    "Input x86 body SHA-256: E5D4B593AF6EA97B5AD87CD9459F879A63ADD5DAFFC2924F55126AC8E2866B04",
    "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
    "float guest_delta_xyz[3];",
    "float local_34[3];",
    "float local_28[3];",
    "memcpy(&guest_radius, param_1 + 3, sizeof guest_radius);",
    "memcpy(&guest_z_delta, &guest_delta_xyz[2], sizeof guest_z_delta);",
    "guest_delta_xyz[2] = param_2[2] - *(float *)(iVar2 + 0x2c);",
    "cVar1 = FUN_0004c530(local_28);",
    "cVar1 = FUN_0004c480(local_34);",
    "FUN_0011e680(param_1[2], guest_delta_xyz);",
    "guest_delta_xyz[1] * guest_delta_xyz[1] +",
    "guest_delta_xyz[2] * guest_delta_xyz[2]) +",
    "_mm_rsqrt_ss(_mm_set_ss(magnitude_sq))",
    "guest_delta_xyz[1] *= reciprocal_length;",
    "guest_delta_xyz[2] *= reciprocal_length;",
)
BAD = (
    "(float)pfStack_14", "(float)local_10",
    "(float *)((float)pfStack_14",
    "(float)param_1[3]", "local_18 = fVar5 * 0.0;",
)

def verify_source(root):
    source = (root / SOURCE).read_text(encoding="utf-8")
    for token in MARKERS:
        if token not in source:
            raise RuntimeError("source invariant absent: " + token)
    for token in BAD:
        if token in source:
            raise RuntimeError("invalid guest float/pointer alias restored: " + token)
    for original, changed in (
        ("float guest_delta_xyz[3];", "float guest_delta_xyz[2];"),
        ("guest_delta_xyz[2] *= reciprocal_length;", "guest_delta_xyz[2] = 0.0f;"),
        ("_mm_rsqrt_ss(_mm_set_ss(magnitude_sq))", "_mm_sqrt_ss(_mm_set_ss(magnitude_sq))"),
        ("memcpy(&guest_radius, param_1 + 3, sizeof guest_radius);",
         "guest_radius = (float)param_1[3];"),
    ):
        if original not in source:
            raise RuntimeError("negative-control anchor missing")
        broken = source.replace(original, changed, 1)
        if all(marker in broken for marker in MARKERS):
            raise RuntimeError("bad source mutation was not rejected: " + original)

def verify_clang(root):
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang is required")
    flags = [
        "-std=c11", "-fsyntax-only", "-ferror-limit=6",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype",
    ]
    cmd = [clang, *flags, "-I", str(root / "include"), str(root / SOURCE)]
    completed = subprocess.run(cmd, text=True, capture_output=True)
    if completed.returncode:
        raise RuntimeError("focused Clang C11 failed:\n" + completed.stderr)
    with tempfile.TemporaryDirectory(prefix="bf_587d0_") as directory:
        for optimization in ("-O0", "-O2"):
            exe = Path(directory) / ("xyz_" + optimization[1:])
            build = subprocess.run(
                [clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                 "-pedantic-errors", optimization, str(root / TEST), "-o", str(exe)],
                text=True, capture_output=True)
            if build.returncode:
                raise RuntimeError("fixture compile failed:\n" + build.stderr)
            executed = subprocess.run([str(exe)], text=True, capture_output=True)
            if executed.returncode:
                raise RuntimeError("fixture failed:\n" + executed.stderr)

def verify_xbe(path):
    image = path.read_bytes()
    if hashlib.sha256(image).hexdigest() != XBE_SHA:
        raise RuntimeError("original Xbox executable SHA-256 mismatch")
    offset = ENTRY - 0x10000
    if hashlib.sha256(image[offset:offset+BODY_LEN]).hexdigest() != BODY_SHA:
        raise RuntimeError("original 471-byte x86 body SHA-256 mismatch")
    for address, hexdigits in WINDOWS:
        expected = bytes.fromhex(hexdigits)
        start = address - 0x10000
        if image[start:start+len(expected)] != expected:
            raise RuntimeError(f"original x86 instruction changed at 0x{address:08x}")
    for site, target in ((0x58859, 0x4c530), (0x58874, 0x4c480),
                         (0x588f3, 0x11e680)):
        raw = site - 0x10000
        rel32 = struct.unpack_from("<i", image, raw + 1)[0]
        if (site + 5 + rel32) & 0xffffffff != target:
            raise RuntimeError(f"original call target changed at 0x{site:08x}")
    print(f"PASS: original XBE, body digest, {len(WINDOWS)} opcodes and 3 direct CALLs")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    verify_source(args.root)
    verify_clang(args.root)
    if args.xbe:
        verify_xbe(args.xbe)
    print("PASS: original source invariants, negative controls, Clang C11, O0/O2 float3 tests")
    print("UNVERIFIED: external callbacks, x87 flags/rounding, guest32 native runtime")

if __name__ == "__main__":
    main()
