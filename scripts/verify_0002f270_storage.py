#!/usr/bin/env python3
"""Actual-source excerpts vs host x87/SSE instructions; no Xbox ABI/runtime claim."""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import ctypes
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import tempfile
import textwrap

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path

BODY = "96B4BA7A1A3AB1E0B4D1AC6021874B9D129062D5437D8201040CA35F44872C27"
CALL = "(**(code **)(piVar7[0x6d] + 0x3c))(scratch_3f8);"
# Entry/size/digest and these small operand windows pin the original facts.
OPS = {
    0x2F270: "81ecfc030000",  # SUB ESP,0x3fc, before four saved DWORD registers.
    0x2F508: "d907d86314d94708d8631cd9c1d8cad9c1d8cadec1",
    0x2F51D: "d95c2420ddd8ddd8f30f51442420f30f11442410",
    0x2F549: "8b813409000085c00f8471020000",  # Guard begin before end load.
    0x2F557: "8b91380900002bd0b8abaaaa2af7eac1fa028bc2c1e81f03d089542420",
    0x2F606: "d9808004000089542420d86708d98078040000c744241800000000d827",
    0x2F623: "d9c9d95c24208b4c2420894c241cd95c2414",  # Z/zero-Y/X span.
    0x2F647: "d9442414d84c2414d9442418d84c2418dec1d944241cd84c241cdec1",
    0x2F663: "d815fc4f3a00dfe0f6c4410f854b010000",  # Unspilled FCOM <=/unordered.
    0x2F674: "d95c2420f30f52442420f30f11442410",  # Spill then RSQRTSS.
    0x2F68F: "d84c24148d8db4010000d95c2414",  # reciprocal * X, m32 store.
    0x2F69D: "d9442410d84c2418d95c2418d944241cd84c2410d95c241c",
    0x2F6C9: "8d44241450ff523c",  # Pass exact three-DWORD base to virtual +0x3c.
    0x2F745: "89542418c74424140c403a00c744241c0a000000",  # Raw query record.
    0x3A4FFC: "00000034",  # Binary32 threshold 2^-23.
}


def excerpt(source, first, last, include_last=False):
    if source.count(first) != 1 or source.count(last) != 1:
        raise ValueError("Missing or ambiguous source excerpt boundary")
    start = source.rfind("\n", 0, source.index(first)) + 1
    end = source.index(last, start) + (len(last) if include_last else 0)
    return textwrap.dedent(source[start:end])


def render(root, source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODY:
        raise ValueError("Original body identity changed")
    for required in ("uint32_t scratch_3f8[3];", "ABI_UNVERIFIED",
                     "#pragma STDC FENV_ACCESS ON",
                     "uint32_t begin_word = *(uint32_t *)(param_1 + 0x934);",
                     "if (begin_word != 0)",
                     "FUN_000594a0(piVar7[0x93],scratch_3f8,0)"):
        if required not in source:
            raise ValueError("Source contract missing: " + required)
    distance = excerpt(source, "float10 delta_x =", "/* 0x2f55d")
    first = source.index("float10 vector_delta_z =")
    start = source.rfind("\n", 0, first) + 1
    end = source.index("}", source.index(CALL, first)) + 1
    direction = textwrap.dedent(source[start:end]).replace(CALL, "capture_call(scratch_3f8);")
    count = excerpt(source, "uint32_t begin_word =", "if ((entry_count != 0)")
    query = excerpt(source, "scratch_3f8[1] = (uint32_t)(uintptr_t)auStack_254;", "while( true )")
    template = (root / "tests/test_0002f270_storage.c").read_text(encoding="utf-8")
    for name, block in (("DISTANCE", distance), ("DIRECTION", direction),
                        ("COUNT", count), ("QUERY", query)):
        marker = "    /* INSERT_" + name + " */"
        if template.count(marker) != 1:
            raise ValueError("Invalid fixture template")
        template = template.replace(marker, textwrap.indent(block, "    "))
    return template


def verify_xbe(path):
    raw = path.read_bytes()
    sections = xbe_sections(raw)
    if hashlib.sha256(mapped_span(raw, sections, 0x2F270, 1648)).hexdigest().upper() != BODY:
        raise ValueError("Original complete function body differs")
    for address, encoded in OPS.items():
        expected = bytes.fromhex(encoded)
        if mapped_span(raw, sections, address, len(expected)) != expected:
            raise ValueError(f"Original instruction/constant differs at {address:08x}")
    print(f"PASS pinned original XBE, 1648-byte body and {len(OPS)} instruction/data windows")


def bind(lib, name, arguments, result=None):
    function = getattr(lib, name)
    function.argtypes, function.restype = arguments, result
    return function


def check_library(path):
    lib = ctypes.CDLL(str(path))
    ptr, u32 = ctypes.c_void_p, ctypes.c_uint32
    distance = bind(lib, "bf_test_distance", [ptr, ptr, ptr])
    direction = bind(lib, "bf_test_direction", [ptr, ptr, ptr], u32)
    count = bind(lib, "bf_test_count", [ptr], ctypes.c_int32)
    query = bind(lib, "bf_test_query", [ptr, ptr])
    ref_distance = bind(lib, "bf_reference_distance", [ptr, ptr, ptr])
    ref_direction = bind(lib, "bf_reference_direction", [ptr, ptr, ptr], u32)
    ref_count = bind(lib, "bf_reference_count", [u32, u32], ctypes.c_int32)
    get_cw = bind(lib, "bf_reference_get_cw", [], u32)
    set_cw = bind(lib, "bf_reference_set_cw", [u32])
    get_mxcsr = bind(lib, "bf_test_get_mxcsr", [], u32)
    set_mxcsr = bind(lib, "bf_test_set_mxcsr", [u32])
    actual, expected, target = (ctypes.create_string_buffer(n) for n in (0x1000, 0x1000, 0x40))
    position, record, reference = (u32 * 3)(), (u32 * 4)(), (u32 * 4)()

    def write(buffer, offset, value):
        u32.from_buffer(buffer, offset).value = value

    def same_word(left, right):
        # Finite values and signed zeros are bit-exact. NaNs compare by class;
        # payload/status/exception equivalence is explicitly not claimed.
        return left == right or all(x & 0x7F800000 == 0x7F800000 and
                                    x & 0x007FFFFF for x in (left, right))

    edges = (0, 0x80000000, 1, 0x80000001, 0x007FFFFF, 0x00800000,
             0x33800000, 0x39B504F2, 0x39B504F3, 0x39B504F4, 0x3F000000,
             0x3F800000, 0xBF800000, 0x7F7FFFFF, 0xFF7FFFFF, 0x7F800000,
             0xFF800000, 0x7FC12345, 0xFFC12345)
    # This unspilled norm is > 2^-23 but rounds to exactly 2^-23 as f32.
    rows = [(0, 0, 0x39B504F2, 0x342CFB6B)]
    for value in edges:
        rows.extend(((0, 0, value, 0), (0, 0, 0, value),
                     (value, value, 0, 0), (value, 0, 0x3F800000, value)))
    seed = 0x2F270
    for _ in range(4000):
        row = []
        for _ in range(4):
            seed = (seed * 1664525 + 1013904223) & 0xFFFFFFFF
            row.append(seed ^ (0x00800000 if seed & 0x7F800000 == 0x7F800000 else 0))
        rows.append(tuple(row))
    saved_cw, saved_mxcsr = get_cw(), get_mxcsr()
    cases = 0
    try:
        set_cw(0x037F)  # Masked exceptions, nearest rounding, 64-bit x87 precision.
        for mode in (0x1F80, 0x1FC0, 0x9F80, 0x9FC0):
            for x, z, next_x, next_z in rows:
                ctypes.memset(actual, 0xA5, len(actual))
                write(actual, 0x478, next_x)
                write(actual, 0x480, next_z)
                ctypes.memmove(expected, actual, len(actual))
                position[:] = (x, 0, z)
                write(target, 0x14, next_x)
                write(target, 0x1C, next_z)
                set_mxcsr(mode)
                distance(actual, target, position)
                set_mxcsr(mode)
                ref_distance(reference, position, target)
                scalar = u32.from_buffer(actual, 0x540).value
                if not same_word(scalar, reference[0]):
                    raise AssertionError(f"distance mismatch case={cases} mode={mode:x}")
                # Preserve allowed NaN payload differences for the whole-object check.
                write(expected, 0x540, scalar)
                record[:] = (0xA5A5A5A5,) * 4
                reference[:] = (0xA5A5A5A5,) * 4
                set_mxcsr(mode)
                called = direction(actual, position, record)
                set_mxcsr(mode)
                ref_called = ref_direction(reference, expected, position)
                if called != ref_called:
                    raise AssertionError(f"threshold/call mismatch case={cases} mode={mode:x}")
                if not all(same_word(record[i], reference[i]) for i in range(3)):
                    raise AssertionError(f"float3 mismatch case={cases} mode={mode:x} "
                                         f"actual={list(record[:3])} expected={list(reference[:3])}")
                if record[3] != 0xA5A5A5A5 or bytes(actual) != bytes(expected):
                    raise AssertionError("Unexpected write outside result/flags or record")
                cases += 1
        if cases != 16308:
            raise AssertionError("Numeric fixture coverage changed")
        for begin in (0, 1, 23, 24, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF):
            for end in (0, 1, 23, 24, 25, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF):
                write(actual, 0x934, begin)
                write(actual, 0x938, end)
                if count(actual) != (ref_count(begin, end) if begin else 0):
                    raise AssertionError("Wrapping signed /24 count differs")
        query(record, actual)
        if list(record[:3]) != [0x3A400C, ctypes.addressof(actual) & 0xFFFFFFFF, 10]:
            raise AssertionError("Raw query record words differ")
        if record[3] != 0xA5A5A5A5:
            raise AssertionError("Query write outside the 12-byte record")
    finally:
        set_cw(saved_cw)
        set_mxcsr(saved_mxcsr)
    print(f"PASS {cases} distance/float3 comparisons, 56 signed counts and raw query words")


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
    source = source_path(root, "0x0002f270").read_text(encoding="utf-8")
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("No original XBE supplied; original instruction provenance not rechecked")
    compiler = shutil.which("clang")
    if not compiler:
        parser.error("Clang is required")
    flags = [compiler, "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic-errors",
             "-ffp-contract=off", "-mlong-double-80", "-shared", "-I", str(root / "include")]
    if sys.platform != "win32":
        flags.append("-fPIC")
    else:
        # Assembly globals need explicit PE exports for ctypes; a C-only
        # dllexport declaration does not export the separately assembled body.
        flags.extend("-Wl,/export:" + name for name in (
            "bf_reference_distance", "bf_reference_direction", "bf_reference_count",
            "bf_reference_get_cw", "bf_reference_set_cw"))
    with tempfile.TemporaryDirectory(prefix="bf_0002f270_") as directory:
        folder = Path(directory)
        fixture = folder / "fixture.c"
        library = folder / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
        asm = root / "tests/x86_0002f270_reference.S"

        def build_run(changed, optimization, negative=False):
            fixture.write_text(render(root, changed), encoding="utf-8")
            subprocess.run([*flags, optimization, str(fixture), str(asm), "-o", str(library)], check=True)
            result = subprocess.run([sys.executable, str(Path(__file__).resolve()),
                                     "--library", str(library)], capture_output=negative, text=True)
            if negative:
                if result.returncode != 1 or "AssertionError" not in result.stderr:
                    raise ValueError("Negative control did not report a numeric/storage mismatch")
            else:
                result.check_returncode()

        for optimization in ("-O0", "-O2"):
            build_run(source, optimization)
        controls = (
            ("premature f32 threshold spill", "0x1p-23f < norm_squared", "0x1p-23f < (float)norm_squared"),
            ("unordered comparison accepted", "0x1p-23f < norm_squared", "0x1p-23f >= norm_squared ? 0 : 1"),
            ("signed count divisor", "entry_count /= 24;", "entry_count /= 16;"),
            ("exact division instead of RSQRTSS",
             "_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss((float)norm_squared)))",
             "_mm_cvtss_f32(_mm_div_ss(_mm_set_ss(1.0f), _mm_sqrt_ss(_mm_set_ss((float)norm_squared))))"),
        )
        for name, old, new in controls:
            if source.count(old) != 1:
                raise ValueError("Ambiguous mutation: " + name)
            build_run(source.replace(old, new), "-O2", negative=True)
            print("PASS rejected negative control:", name)
    print("PASS scoped host arithmetic/storage; NaN payloads, FP status and Xbox ABI/runtime unverified")


if __name__ == "__main__":
    main()
