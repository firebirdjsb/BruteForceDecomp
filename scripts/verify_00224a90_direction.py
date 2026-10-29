#!/usr/bin/env python3
"""Actual-source direction excerpts vs host x87/SSE; no full guest ABI proof."""
import argparse
import ctypes
import hashlib
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_0002f270_storage import bind
from verify_00226cc0_vectors import balanced, start_at

BODY = "8013F12F3527F514E2303C79BAAEF2AA8E16A23BA1AF53DA0B733A4C10CC7318"
OPS = {
    0x224A90: "81ec1c020000",  # Original frame size, before saved registers.
    0x224AFA: "8b54242889542418894c241c",  # Initial Y=1/Z=0 words.
    0x224BB4: "d9410c83c024d86008d95c2420",  # Stored Z difference.
    0x224BC8: "d86004d95c2468",  # Stored Y difference.
    0x224BD6: "d820894c2418d9542414",  # X remains extended after FST.
    0x224BE9: "d98424bc000000d88c24bc0000008bc2d9c1d8ca",
    0x224C05: "dec1d9442418d84c2418dec1d95c2420ddd8",  # Z^2+X^2+Y^2, spill/pop.
    0x224C17: "f30f51442420f30f1144242c",  # SQRTSS m32 input/output.
    0x224C2B: "d81d884f3a0089542428dfe0f6c4417a12",  # JP includes unordered.
    0x224C3C: "c74424180000803fc744242800000000",  # Fallback changes Y and length.
    0x224C68: "f30f53c9f30f10000fc6c9000f1640040f59c1f30f11000f174004",
    0x224E7E: "8d44241c50",  # Direction argument base after two pushes.
    0x224F40: "d944241cd8c9d99c24a8000000d9442420d8c9d99c24ac000000d9442424d8c9d99c24b0000000",
    0x3A4F88: "00000000",  # Comparison zero.
}


def render(source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODY:
        raise ValueError("Original body identity changed")
    for marker in ("#pragma STDC FENV_ACCESS ON", "float direction[3];", "float scaled_direction[3];",
                   "FUN_00224320(param_1,local_21c,&piStack_1ec,direction,0,0)",
                   "FUN_00224320(param_1,in_EAX,param_1 + 4,direction,0,0)",
                   "FUN_002b3bc0(&uStack_1ac,scaled_direction)", "ABI_UNVERIFIED"):
        if marker not in source:
            raise ValueError("Missing source contract: " + marker)
    start = start_at(source, "fStack_1b8 = (float)")
    predicate = source.index("if (", start)
    opening = source.index("{", predicate)
    first_end = balanced(source, opening)
    last = balanced(source, source.index("{", first_end))
    block = source[start:opening + 1] + "\nnormalized = 1;" + source[opening + 1:last]
    start_scale = start_at(source, "scaled_direction[0] =")
    end_scale = source.index(";", start_at(source, "scaled_direction[2] =")) + 1
    scale = source[start_scale:end_scale]
    return '''#include <float.h>
#include <stdint.h>
#include <string.h>
#include <xmmintrin.h>
#pragma STDC FENV_ACCESS ON
_Static_assert(LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384, "Requires extended host storage");
typedef long double float10;
#if defined(_WIN32)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif
EXPORT unsigned bf_get_mxcsr(void) { return _mm_getcsr(); }
EXPORT void bf_set_mxcsr(unsigned value) { _mm_setcsr(value); }
EXPORT unsigned bf_test_direction(float *out, const void *left, const void *right) {
    const unsigned char *param_1 = left;
    uintptr_t iVar3 = (uintptr_t)right;
    float direction[3], fStack_1b8, fStack_1c4, fStack_200, local_204, fStack_1b0;
    float *pfStack_20c;
    unsigned normalized = 0;
''' + block + '''
    (void)pfStack_20c; (void)fStack_1b0;
    memcpy(out, direction, sizeof(direction));
    out[3] = fStack_200; out[4] = local_204;
    return normalized;
}
EXPORT void bf_test_scale(float *out, const float direction[3], const float *scalar) {
    float10 fVar6 = (float10)*scalar;
    float scaled_direction[3];
''' + scale + '''
    memcpy(out, scaled_direction, sizeof(scaled_direction));
}
'''


def verify_xbe(path):
    raw = path.read_bytes()
    sections = xbe_sections(raw)
    body = mapped_span(raw, sections, 0x224A90, 153) + mapped_span(raw, sections, 0x224B30, 1220)
    if hashlib.sha256(body).hexdigest().upper() != BODY:
        raise ValueError("Original ordered 1373-byte body differs")
    for address, encoded in OPS.items():
        expected = bytes.fromhex(encoded)
        if mapped_span(raw, sections, address, len(expected)) != expected:
            raise ValueError(f"Original operand differs at {address:08x}")
    print("PASS pinned XBE, ordered 1373-byte body and 14 instruction/data windows")


def check_library(path):
    lib = ctypes.CDLL(str(path))
    ptr, u32 = ctypes.c_void_p, ctypes.c_uint32
    actual = bind(lib, "bf_test_direction", [ptr, ptr, ptr], u32)
    reference = bind(lib, "bf_ref_224a90", [ptr, ptr, ptr], u32)
    scale = bind(lib, "bf_test_scale", [ptr, ptr, ptr])
    ref_scale = bind(lib, "bf_ref_224a90_scale", [ptr, ptr, ptr])
    get_cw = bind(lib, "bf_reference_get_cw", [], u32)
    set_cw = bind(lib, "bf_reference_set_cw", [u32])
    get_mxcsr = bind(lib, "bf_get_mxcsr", [], u32)
    set_mxcsr = bind(lib, "bf_set_mxcsr", [u32])
    left, right, out, expected = (u32 * 4)(), (u32 * 12)(), (u32 * 8)(), (u32 * 8)()
    scalar = u32()
    edges = (0, 0x80000000, 1, 0x80000001, 0x007FFFFF, 0x00800000, 0x3F800000,
             0x3F800001, 0xBF800000, 0x7F7FFFFF, 0xFF7FFFFF, 0x7F800000, 0xFF800000, 0x7FC12345)
    rows = [(value, value, value, 0, 0, 0) for value in edges]
    seed = 0x224A90
    for _ in range(4000):
        values = []
        for _ in range(6):
            seed = (seed * 1664525 + 1013904223) & 0xFFFFFFFF
            values.append(seed)
        rows.append(tuple(values))
    def equal(a, b):
        return a == b or all(x & 0x7F800000 == 0x7F800000 and x & 0x007FFFFF for x in (a, b))
    saved_cw, saved_mxcsr = get_cw(), get_mxcsr()
    cases = 0
    try:
        set_cw(0x037F)
        for mode in (0x1F80, 0x1FC0, 0x9F80, 0x9FC0):
            for index, row in enumerate(rows):
                left[1:], right[9:] = row[:3], row[3:]
                out[:], expected[:] = (0xA5A5A5A5,) * 8, (0xA5A5A5A5,) * 8
                set_mxcsr(mode)
                normalized = actual(out, left, right)
                set_mxcsr(mode)
                ref_normalized = reference(expected, left, right)
                if normalized != ref_normalized or not all(equal(a, b) for a, b in zip(out, expected)):
                    raise AssertionError(f"Direction mismatch row={index} mode={mode:x}")
                # Compare scale independently for all raw XYZ inputs, avoiding
                # dependence on an unverified original helper's returned scalar.
                scalar.value = edges[index % len(edges)]
                set_mxcsr(mode)
                scale(out, ctypes.byref(left, 4), ctypes.byref(scalar))
                set_mxcsr(mode)
                ref_scale(expected, ctypes.byref(left, 4), ctypes.byref(scalar))
                if not all(equal(a, b) for a, b in zip(out, expected)) or list(out[5:]) != [0xA5A5A5A5] * 3:
                    raise AssertionError(f"Scale/storage mismatch row={index} mode={mode:x}")
                cases += 1
        if cases != 16056:
            raise AssertionError("Fixture coverage changed")
    finally:
        set_cw(saved_cw)
        set_mxcsr(saved_mxcsr)
    print("PASS 16056 direction and separate scale cases")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--library", type=Path, help=argparse.SUPPRESS)
    args = parser.parse_args()
    if args.library:
        check_library(args.library)
        return
    root = args.root.resolve()
    source = source_path(root, "0x00224a90").read_text(encoding="utf-8")
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("No original XBE supplied; instruction provenance not rechecked")
    compiler = shutil.which("clang")
    if compiler is None:
        parser.error("Clang is required")
    flags = [compiler, "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic-errors",
             "-ffp-contract=off", "-mlong-double-80", "-shared"]
    if sys.platform == "win32":
        flags.extend("-Wl,/export:" + name for name in
                     ("bf_ref_224a90", "bf_ref_224a90_scale", "bf_reference_get_cw", "bf_reference_set_cw"))
    else:
        flags.append("-fPIC")
    with tempfile.TemporaryDirectory(prefix="bf_00224a90_") as directory:
        fixture = Path(directory) / "fixture.c"
        library = Path(directory) / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
        def run(changed, opt, negative=False):
            fixture.write_text(render(changed), encoding="utf-8")
            subprocess.run([*flags, opt, str(fixture), str(root / "tests/x86_00224a90_reference.S"),
                            str(root / "tests/x86_0002f270_reference.S"), "-o", str(library)], check=True)
            result = subprocess.run([sys.executable, str(Path(__file__).resolve()), "--library", str(library)],
                                    capture_output=negative, text=True)
            if negative:
                if result.returncode != 1 or "AssertionError" not in result.stderr:
                    raise ValueError("Negative control did not produce a numeric mismatch")
            else:
                result.check_returncode()
        for opt in ("-O0", "-O2"):
            run(source, opt)
        for name, old, new in (
            ("exact reciprocal", "_mm_rcp_ss(_mm_load_ss(&fStack_200))", "_mm_div_ss(_mm_set_ss(1.0f), _mm_load_ss(&fStack_200))"),
            ("unordered fallback", "fStack_200 < 0.0 == (fStack_200 == 0.0)", "fStack_200 > 0.0"),
        ):
            if source.count(old) != 1:
                raise ValueError("Ambiguous mutation: " + name)
            run(source.replace(old, new), "-O2", True)
            print("PASS rejected negative control:", name)
    print("PASS scoped host values; NaN payload/status, helper scalar and Xbox ABI/runtime unverified")


if __name__ == "__main__":
    main()
