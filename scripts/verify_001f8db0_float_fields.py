#!/usr/bin/env python3
"""Actual-source F32/byte operations vs host instructions; guest ABI unresolved."""

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

BODY = "E172DCC1CDA08273709F9E9839B28BF13A40DBB3C4E90BA83BBE0FDE8B7C5C8F"
OPS = {
    0x1F8DB0: "83ec54568bf0",  # Allocation, saved ESI and entry EAX binding.
    0x1F8E6B: "d94310d81d884f3a00dfe0f6c401750a",  # Ordered nonnegative field guard.
    0x1F8E7B: "d9442468d84310d95b10",  # F32 incoming word, FADD and m32 store.
    0x1F8EAF: "d9442468d84314d95314d81d904f3a00dfe0f6c4017537",
    0x1F8F44: "894c2468",  # Later reuse of argument slot as traversal pointer.
    0x1F9043: "d94110d81df04f3a00dfe0f6c4017549",  # Ordered 0.1 comparison.
    0x1F90C1: "0f9444246c",  # SETE byte; upper 24 bits untouched.
    0x3A4F88: "00000000",  # 0.0f.
    0x3A4FF0: "cdcccc3d",  # 0.1f.
    0x3A4F90: "cdcc4c3e",  # 0.2f.
}
STEP = "incoming_step = bf_x86_word_to_f32((uint32_t)(uintptr_t)param_1);"
THRESHOLD = "((float10)0.1f <= (float10)bf_x86_word_to_f32(puVar14[4])) ||\n          (puVar14[4] == UINT32_C(0xbf800000))"


def render(source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODY:
        raise ValueError("Original body identity changed")
    for marker in ("ABI_UNVERIFIED", "#pragma STDC FENV_ACCESS ON", STEP, THRESHOLD):
        if marker not in source:
            raise ValueError("Missing source contract: " + marker)
    start = start_at(source, "if ((float10)0.0f <=")
    update = source[start:balanced(source, source.index("{", start))]
    start = start_at(source, "float10 elapsed_sum =")
    predicate = source.index("if (", start)
    opening = source.index("{", predicate)
    elapsed = source[start:opening] + "{ return 1; }\nreturn 0;"
    start = start_at(source, "param_2 = (param_2 &")
    byte_write = source[start:source.index(";", start) + 1]
    return '''#include <float.h>
#include <stdint.h>
#include <xmmintrin.h>
#include "bf_x86_float_lane.h"
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
EXPORT unsigned bf_test_fields(uint32_t *node, uint32_t step_word) {
    int *piVar15 = (int *)node;
    uint32_t *param_1 = (uint32_t *)(uintptr_t)step_word;
    float incoming_step;
''' + STEP + update + elapsed + '''
}
EXPORT unsigned bf_test_threshold(uint32_t word) {
    uint32_t puVar14[5] = {0, 0, 0, 0, word};
    return ''' + THRESHOLD + ''';
}
EXPORT uint32_t bf_test_byte(uint32_t param_2, int count) {
    int in_EAX[0x3a] = {0};
    in_EAX[0x39] = count;
''' + byte_write + '''
    return param_2;
}
'''


def verify_xbe(path):
    raw = path.read_bytes()
    sections = xbe_sections(raw)
    body = b"".join(mapped_span(raw, sections, a, n) for a, n in
                    ((0x1F8DB0, 909), (0x1F9140, 94), (0x1F91AE, 702)))
    if hashlib.sha256(body).hexdigest().upper() != BODY:
        raise ValueError("Original ordered 1705-byte body differs")
    for address, encoded in OPS.items():
        expected = bytes.fromhex(encoded)
        if mapped_span(raw, sections, address, len(expected)) != expected:
            raise ValueError(f"Original operand differs at {address:08x}")
    print("PASS pinned XBE, ordered 1705-byte body and ten instruction/data windows")


def check_library(path):
    lib = ctypes.CDLL(str(path))
    ptr, u32 = ctypes.c_void_p, ctypes.c_uint32
    actual = bind(lib, "bf_test_fields", [ptr, u32], u32)
    reference = bind(lib, "bf_ref_1f8db0_fields", [ptr, u32], u32)
    threshold = bind(lib, "bf_test_threshold", [u32], u32)
    ref_threshold = bind(lib, "bf_ref_1f8db0_threshold", [ptr], u32)
    byte_write = bind(lib, "bf_test_byte", [u32, ctypes.c_int], u32)
    get_cw = bind(lib, "bf_reference_get_cw", [], u32)
    set_cw = bind(lib, "bf_reference_set_cw", [u32])
    get_mxcsr = bind(lib, "bf_get_mxcsr", [], u32)
    set_mxcsr = bind(lib, "bf_set_mxcsr", [u32])
    node, expected = (u32 * 8)(), (u32 * 8)()
    word = u32()
    edges = (0, 0x80000000, 1, 0x80000001, 0x007FFFFF, 0x00800000, 0x3DCCCCCD,
             0x3E4CCCCD, 0x3F800000, 0xBF800000, 0x7F7FFFFF, 0x7F800000, 0xFF800000, 0x7FC12345)
    # This extended sum is below 0.2f while its stored F32 rounds to 0.2f.
    rows = [(0xB0800000, 0, 0x3E4CCCCD)]
    rows.extend((step, a, b) for step in edges for a in edges for b in edges)
    seed = 0x1F8DB0
    for _ in range(4000):
        values = []
        for _ in range(3):
            seed = (seed * 1664525 + 1013904223) & 0xFFFFFFFF
            values.append(seed)
        rows.append(tuple(values))
    def nan(value):
        return value & 0x7F800000 == 0x7F800000 and value & 0x007FFFFF
    def equal(a, b):
        return a == b or nan(a) and nan(b)
    saved_cw, saved_mxcsr = get_cw(), get_mxcsr()
    cases = 0
    try:
        set_cw(0x037F)
        for mode in (0x1F80, 0x1FC0, 0x9F80, 0x9FC0):
            for index, (step, field4, field5) in enumerate(rows):
                node[:], expected[:] = (0xA5A5A5A5,) * 8, (0xA5A5A5A5,) * 8
                node[4:6], expected[4:6] = (field4, field5), (field4, field5)
                set_mxcsr(mode)
                branch = actual(node, step)
                set_mxcsr(mode)
                ref_branch = reference(expected, step)
                if branch != ref_branch or not all(equal(a, b) for a, b in zip(node, expected)):
                    raise AssertionError(f"F32 field/extended branch mismatch row={index} mode={mode:x}")
                if nan(field4) and node[4] != field4:
                    raise AssertionError("Guarded NaN field was written")
                word.value = field4
                set_mxcsr(mode)
                branch = threshold(field4)
                set_mxcsr(mode)
                if branch != ref_threshold(ctypes.byref(word)):
                    raise AssertionError("0.1/sentinel predicate mismatch")
                cases += 1
        if cases != 26980:
            raise AssertionError("Fixture coverage changed")
    finally:
        set_cw(saved_cw)
        set_mxcsr(saved_mxcsr)
    for index in range(256):
        high = (index * 1664525 + 1013904223) & 0xFFFFFF00
        for low in range(256):
            for count in (0, -1):
                if byte_write(high | low, count) != high | int(count == 0):
                    raise AssertionError("SETE byte corrupted retained upper bits")
    print("PASS 26980 field/threshold cases and 131072 byte-preservation cases")


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
    source = source_path(root, "0x001f8db0").read_text(encoding="utf-8")
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("No original XBE supplied; instruction provenance not rechecked")
    compiler = shutil.which("clang")
    if compiler is None:
        parser.error("Clang is required")
    flags = [compiler, "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic-errors", "-shared",
             "-ffp-contract=off", "-mlong-double-80", "-I", str(root / "include")]
    if sys.platform == "win32":
        flags.extend("-Wl,/export:" + name for name in
                     ("bf_ref_1f8db0_fields", "bf_ref_1f8db0_threshold", "bf_reference_get_cw", "bf_reference_set_cw"))
    else:
        flags.append("-fPIC")
    with tempfile.TemporaryDirectory(prefix="bf_001f8db0_") as directory:
        fixture = Path(directory) / "fixture.c"
        library = Path(directory) / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
        def run(changed, opt, negative=False):
            fixture.write_text(render(changed), encoding="utf-8")
            subprocess.run([*flags, opt, str(fixture), str(root / "tests/x86_001f8db0_reference.S"),
                            str(root / "tests/x86_0002f270_reference.S"), "-o", str(library)], check=True)
            result = subprocess.run([sys.executable, str(Path(__file__).resolve()), "--library", str(library)],
                                    capture_output=negative, text=True)
            if negative:
                if result.returncode != 1 or "AssertionError" not in result.stderr:
                    raise ValueError("Negative control did not produce a value/storage mismatch")
            else:
                result.check_returncode()
        for opt in ("-O0", "-O2"):
            run(source, opt)
        for name, old, new in (
            ("rounded comparison", "0.2f <= elapsed_sum", "0.2f <= (float10)(float)elapsed_sum"),
            ("lost upper bytes", "param_2 & UINT32_C(0xffffff00)", "param_2 & UINT32_C(0)"),
        ):
            if source.count(old) != 1:
                raise ValueError("Ambiguous mutation: " + name)
            run(source.replace(old, new), "-O2", True)
            print("PASS rejected negative control:", name)
    print("PASS scoped host values; NaN payload/status, entry/caller ABI and Xbox runtime unverified")


if __name__ == "__main__":
    main()
