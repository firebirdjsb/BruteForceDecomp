#!/usr/bin/env python3
"""Actual-source signed output arithmetic vs host instructions; no Xbox ABI proof."""
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

BODY = "4C4297B4CE0AA57E7CFC9324D3ED5C70AAA5B54AB5BFAE6C58093C5EBC68CFA6"
RANGES = ((0xF0A30, 93), *((0xF0A90 + 64 * i, 61) for i in range(9)), (0xF0CD0, 1642))
OPS = {
    0xF0D35: "ff92c401000085ed8bf8897c2434",  # EAX -> EDI -> saved DWORD.
    0xF0DA7: "85ff",  # Pointer zero test, no float compare.
    0xF0EED: "895c243c895c2440c644244400",  # Adjacent DWORD outputs, separate byte.
    0xF0F13: "8d5c243c5350ff92dc010000",  # Pass the pair's base to +0x1dc.
    0xF1077: "33c085d27e18",  # Default zero; signed denominator > 0.
    0xF107D: "db44243cd80dec4f3a00da742440d95c2434f30f2c442434",
    0xF1095: "8b54243c508b4424445052",  # Raw signed words, shifted push offsets.
    0x3A4FEC: "0000c842",  # Binary32 100.0.
}


def render(source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODY:
        raise ValueError("Original body identity changed")
    for marker in ("ABI_UNVERIFIED", "#pragma STDC FENV_ACCESS ON",
                   "int *result_1c4;", "int32_t counter_words[2];",
                   "result_1c4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1c4))();",
                   "local_220 = result_1c4;", "if (result_1c4 == (int *)0x0)",
                   "counter_words[0] = 0;\n  counter_words[1] = 0;",
                   "+ 0x1dc))(*(int *)(iVar4 + 0x48),counter_words);",
                   "FUN_002ea9a9(local_204,0x100,uVar7,counter_words[0],counter_words[1],iVar4);"):
        if source.count(marker) != 1:
            raise ValueError("Missing or ambiguous source contract: " + marker)
    start = start_at(source, "iVar4 = 0;\n      if (")
    opening = source.index("{", start)
    body = source[start:balanced(source, opening)]
    return '''#include <float.h>
#include <stdint.h>
#include <xmmintrin.h>
#pragma STDC FENV_ACCESS ON
_Static_assert(LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384, "Requires x87 host storage");
typedef long double float10;
#if defined(_WIN32)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif
EXPORT unsigned bf_get_mxcsr(void) { return _mm_getcsr(); }
EXPORT void bf_set_mxcsr(unsigned value) { _mm_setcsr(value); }
EXPORT int32_t bf_test_000f0a30(const int32_t counter_words[2]) {
    int iVar4;
''' + body + '''
    return iVar4;
}
'''


def verify_xbe(path):
    raw = path.read_bytes()
    sections = xbe_sections(raw)
    body = b"".join(mapped_span(raw, sections, start, size) for start, size in RANGES)
    if len(body) != 2284 or hashlib.sha256(body).hexdigest().upper() != BODY:
        raise ValueError("Original ordered body differs")
    for address, encoded in OPS.items():
        expected = bytes.fromhex(encoded)
        if mapped_span(raw, sections, address, len(expected)) != expected:
            raise ValueError(f"Original operand differs at {address:08x}")
    print("PASS pinned XBE, ordered 2284-byte body and eight instruction/data windows")


def check_library(path):
    lib = ctypes.CDLL(str(path))
    i32, u32 = ctypes.c_int32, ctypes.c_uint32
    actual = bind(lib, "bf_test_000f0a30", [ctypes.POINTER(i32)], i32)
    reference = bind(lib, "bf_ref_000f0a30", [ctypes.POINTER(i32)], i32)
    get_cw = bind(lib, "bf_reference_get_cw", [], u32)
    set_cw = bind(lib, "bf_reference_set_cw", [u32])
    get_mxcsr = bind(lib, "bf_get_mxcsr", [], u32)
    set_mxcsr = bind(lib, "bf_set_mxcsr", [u32])
    edges = (-2147483648, -2147483647, -16777217, -3, -1, 0, 1, 3,
             16777217, 21474836, 21474837, 2147483646, 2147483647)
    rows = [(a, b) for a in edges for b in edges]
    seed = 0xF0A30
    for _ in range(4000):
        seed = (seed * 1664525 + 1013904223) & 0xFFFFFFFF
        a = i32(seed).value
        seed = (seed * 1664525 + 1013904223) & 0xFFFFFFFF
        rows.append((a, i32(seed).value))
    pair = (i32 * 2)()
    saved_cw, saved_mxcsr = get_cw(), get_mxcsr()
    cases = 0
    try:
        # All x87 precision and rounding settings, and all SSE rounding modes.
        # Exceptions stay masked; status/trap equivalence is not tested.
        for precision in (0x000, 0x200, 0x300):
            for rounding in (0x000, 0x400, 0x800, 0xC00):
                set_cw(0x007F | precision | rounding)
                for sse_rounding in (0, 0x2000, 0x4000, 0x6000):
                    for a, b in rows:
                        pair[:] = (a, b)
                        set_mxcsr(0x1F80 | sse_rounding)
                        result = actual(pair)
                        set_mxcsr(0x1F80 | sse_rounding)
                        expected = reference(pair)
                        if result != expected or list(pair) != [a, b]:
                            raise AssertionError(f"Signed output mismatch {a}/{b}: {result} != {expected}")
                        cases += 1
        if cases != 200112:
            raise AssertionError("Fixture coverage changed")
    finally:
        set_cw(saved_cw)
        set_mxcsr(saved_mxcsr)
    print(f"PASS {cases} signed-output/control-mode cases")


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
    source = source_path(root, "0x000f0a30").read_text(encoding="utf-8")
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
                     ("bf_ref_000f0a30", "bf_reference_get_cw", "bf_reference_set_cw"))
    else:
        flags.append("-fPIC")
    with tempfile.TemporaryDirectory(prefix="bf_000f0a30_") as directory:
        folder = Path(directory)
        fixture = folder / "fixture.c"
        library = folder / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
        def run(changed, opt, negative=False):
            fixture.write_text(render(changed), encoding="utf-8")
            subprocess.run([*flags, opt, str(fixture), str(root / "tests/x86_000f0a30_reference.S"),
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
            ("early integer rounding", "(float10)counter_words[0]", "(float10)(float)counter_words[0]"),
            ("SSE rounded conversion", "_mm_cvttss_si32", "_mm_cvtss_si32"),
            ("missing signed guard", "if (0 < counter_words[1])", "if (counter_words[1] != 0)"),
        ):
            if source.count(old) != 1:
                raise ValueError("Ambiguous mutation: " + name)
            run(source.replace(old, new), "-O2", True)
            print("PASS rejected negative control:", name)
    print("PASS scoped host values; full guest ABI, FP status/traps and Xbox runtime unverified")


if __name__ == "__main__":
    main()
