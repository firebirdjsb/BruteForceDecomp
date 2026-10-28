#!/usr/bin/env python3
"""Actual-source vector/word fixtures vs host instructions; not Xbox ABI proof."""
import argparse
import ctypes
import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile
import textwrap

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_0002f270_storage import bind

BODY = "552308F98DDC42D71A6B93FA3896C4B348C07F3622D40449BD472EC87F52BAA8"
OPS = {
    0x226CC3: "83e4f881ecbc000000",  # Align and allocate observed frame.
    0x226CF8: "d981d8010000",  # FLD receiver+0x1d8, m32fp.
    0x226D0B: "d981d4010000",  # FLD receiver+0x1d4, m32fp.
    0x226D5A: "d98130020000d86508d99930020000",  # f32 field subtraction/store.
    0x226E33: "d9008b48088b5004d954242cd9c0",  # X retained while word copies form XYZ.
    0x226E7B: "dec1d95c2410ddd8f30f51442410f30f11442428",
    0x226EB0: "f30f104c24188b442410f30f53c9",  # RCPSS from spilled length.
    0x226EBE: "f30f10000fc6c9000f1640040f59c1f30f11000f174004",
    0x226F5B: "d95c241cd944241cd84c241cd9442424d84c2424dec1d9442420d84c2420dec1",
    0x226F7B: "d815784f3a00dfe0f6c4410f85aa000000",  # FCOM one, <=/unordered fallback.
    0x226F8C: "d95c2418f30f52442418f30f11442410",  # Spill then RSQRTSS.
    0x226FB6: "f30f10000fc6c9000f1640040f59c1f30f11000f174004",
    0x227045: "c744241000004843",  # Exact 200.0 binary32 scalar.
    0x22704D: "f30f104424100fc6c0008b442418f30f10080f1648040f59c1",
    0x22700B: "d8c9d9442450d84c2424dec1d944244cd84c2420dec1d81d744f3a00",
    0x22710D: "8b502c8b4c240c83c02481c1f0010000",  # Raw object XYZ word transfer.
    0x2271A5: "d954242c894c2434d944243489442430d84c2434d9442430d84c2430dec1d9c1d8cadec1ddd9",
    0x2271CB: "d81550513a00dfe0f6c4417543",  # Unspilled norm compares with 2^-46.
    0x2271D8: "d95c2418f30f52442418f30f11442410",
    0x227202: "f30f10000fc6c9000f1640040f59c1f30f11000f174004",
    0x227232: "8b810802000089442410",  # Raw argument word from receiver+0x208.
    0x227288: "d9442444d84d08d8a9d4010000d999d4010000",
    0x22729D: "d9442444d84d08d8a9d8010000d999d8010000",
    0x2272F3: "d98114020000",  # FLD receiver+0x214, m32fp.
    0x22735F: "d98118020000",  # FLD receiver+0x218, m32fp.
    0x22772C: "d94508d88118020000d99918020000",  # Param + field -> m32 store.
    0x3A4FFC: "00000034",  # 2^-23.
    0x3A5150: "00008028",  # 2^-46.
    0x3A4F78: "0000803f",  # 1.0.
}


def start_at(source, marker):
    if source.count(marker) != 1:
        raise ValueError("Missing or ambiguous source anchor: " + marker)
    return source.index(marker)


def balanced(source, opening):
    code = re.sub(r"/\*.*?\*/|//[^\n]*", lambda m: " " * len(m[0]), source, flags=re.S)
    left = code[opening]
    right = {"(": ")", "{": "}"}[left]
    depth = 0
    for index in range(opening, len(code)):
        if code[index] == left:
            depth += 1
        elif code[index] == right:
            depth -= 1
            if depth == 0:
                return index + 1
    raise ValueError("Unbalanced source excerpt")


def region(source, first, last):
    start = start_at(source, first)
    start = source.rfind("\n", 0, start) + 1
    end = source.index(last, start) + len(last)
    return textwrap.dedent(source[start:end])


def norm_region(source, first, predicate):
    start = start_at(source, first)
    start = source.rfind("\n", 0, start) + 1
    condition = start_at(source, predicate)
    opening = source.index("{", condition)
    end = balanced(source, opening)
    # Observe entry to the original true branch without replacing its predicate.
    body = source[start:opening + 1] + "\nnormalized = 1;" + source[opening + 1:end]
    return textwrap.dedent(body)


def render(root, source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODY:
        raise ValueError("Original body provenance changed")
    for required in ("#pragma STDC FENV_ACCESS ON", "float direction[3];", "float target[3];",
                     "float forward[3];", "float scaled[3];", "ABI_UNVERIFIED",
                     "FUN_00226930(in_ECX,param_1,target)",
                     "FUN_002266d0(in_ECX,param_1,original_length,direction,fStack_c0)"):
        if required not in source:
            raise ValueError("Missing source contract: " + required)
    initial = norm_region(source, "float10 input_x =", "if ((float10)0x1p-23f <")
    final = norm_region(source, "direction[2] = (float)((float10)target[2]", "if ((float10)0x1p-46f <")
    prefix_start = start_at(source, "target_delta[2] =")
    prefix_start = source.rfind("\n", 0, prefix_start) + 1
    comparison = start_at(source, "if (!(target_norm >")
    opening = source.index("{", comparison)
    target_prefix = textwrap.dedent(source[prefix_start:comparison])
    target_compare = source[comparison:opening].strip()
    target_scale = region(source, "float target_norm_word =", "_mm_storeh_pi((__m64 *)(target_delta + 1), vector);")
    scale = region(source, "float scale_200 =", "memcpy(forward, scaled, sizeof(forward));")
    copy = region(source, "uint32_t follow_z =", "target[0] = bf_x86_word_to_f32((uint32_t)in_ECX[0x7c]);")
    dot = region(source, "forward[2] = (float)-(float10)pfVar8[2];", "goto LAB_00227038;")
    dot = dot.replace("goto LAB_00227038;", "return 1;")
    fields = []
    for index in ("0x8c", "0x76", "0x75", "0x86"):
        start = start_at(source, "bf_x86_store_f32_word((uint32_t *)(in_ECX + " + index + "),")
        fields.append(source[start:balanced(source, source.index("(", start))] + ";")
    blocks = {"INITIAL": initial, "FINAL": final, "TARGET_PREFIX": target_prefix,
              "TARGET_COMPARE": target_compare, "TARGET_SCALE": target_scale,
              "SCALE": scale, "COPY": copy, "FIELDS": "\n".join(fields), "DOT": dot}
    text = (root / "tests/test_00226cc0_vectors.c").read_text(encoding="utf-8")
    for name, body in blocks.items():
        marker = "/* INSERT_" + name + " */"
        if text.count(marker) != 1:
            raise ValueError("Invalid fixture template")
        text = text.replace(marker, body)
    return text


def verify_xbe(path):
    raw = path.read_bytes()
    sections = xbe_sections(raw)
    body = b"".join(mapped_span(raw, sections, address, size) for address, size in
                    ((0x226CC0, 1881), (0x227420, 826)))
    if hashlib.sha256(body).hexdigest().upper() != BODY:
        raise ValueError("Original ordered 2707-byte body differs")
    for address, encoded in OPS.items():
        expected = bytes.fromhex(encoded)
        if mapped_span(raw, sections, address, len(expected)) != expected:
            raise ValueError(f"Original operand differs at {address:08x}")
    print(f"PASS pinned XBE, ordered 2707-byte body and {len(OPS)} instruction/data windows")


def check_library(path):
    lib = ctypes.CDLL(str(path))
    ptr, u32 = ctypes.c_void_p, ctypes.c_uint32
    vector = bind(lib, "bf_test_vector", [ptr, ptr, ptr, u32], u32)
    ref_vector = bind(lib, "bf_ref_226cc0_vector", [ptr, ptr, ptr, u32], u32)
    scale = bind(lib, "bf_test_scale", [ptr, ptr])
    ref_scale = bind(lib, "bf_ref_226cc0_scale", [ptr, ptr])
    copy = bind(lib, "bf_test_copy", [ptr, ptr, ptr])
    fields = bind(lib, "bf_test_fields", [ptr, ctypes.c_float, ctypes.c_float])
    ref_fields = bind(lib, "bf_ref_226cc0_fields", [ptr, ptr])
    dot = bind(lib, "bf_test_dot", [ptr, ptr], u32)
    ref_dot = bind(lib, "bf_ref_226cc0_dot", [ptr, ptr], u32)
    get_cw = bind(lib, "bf_reference_get_cw", [], u32)
    set_cw = bind(lib, "bf_reference_set_cw", [u32])
    get_mxcsr = bind(lib, "bf_test_get_mxcsr", [], u32)
    set_mxcsr = bind(lib, "bf_test_set_mxcsr", [u32])
    a, b, result, expected = (u32 * 3)(), (u32 * 3)(), (u32 * 8)(), (u32 * 8)()
    receiver, reference = ctypes.create_string_buffer(0x400), ctypes.create_string_buffer(0x400)
    args = (u32 * 2)()
    def word(buffer, offset):
        return u32.from_buffer(buffer, offset)
    def equal(left, right):
        return left == right or all(x & 0x7F800000 == 0x7F800000 and x & 0x007FFFFF
                                    for x in (left, right))
    edges = (0, 0x80000000, 1, 0x80000001, 0x007FFFFF, 0x00800000,
             0x34000000, 0x3F7FFFFF, 0x3F800000, 0x3F800001, 0xBF800000,
             0x7F7FFFFF, 0xFF7FFFFF, 0x7F800000, 0xFF800000, 0x7FC12345)
    rows = [((0x3F7FFFFF, 0x39B504F3, 0), (0, 0, 0)),
            # (2^-23 - -2^-50)^2 exceeds 2^-46. Its stored X rounds
            # to 2^-23, so using the stored X loses the original branch.
            ((0x34000000, 0, 0), (0xA6800000, 0, 0)),
            ((0xBF800000, 0, 0), (0x3F000000, 0, 0)),
            ((0xBF800001, 0, 0), (0x3F000000, 0, 0)),
            ((0xBF7FFFFF, 0, 0), (0x3F000000, 0, 0))]
    for value in edges:
        rows.extend((((value, value, value), (0, 0, 0)),
                     ((value, 0, 0x3F800000), (0, value, 0)),
                     ((0, value, value), (value, 0, value))))
    seed = 0x226CC0
    for _ in range(3000):
        values = []
        for _ in range(6):
            seed = (seed * 1664525 + 1013904223) & 0xFFFFFFFF
            values.append(seed ^ (0x00800000 if seed & 0x7F800000 == 0x7F800000 else 0))
        rows.append((tuple(values[:3]), tuple(values[3:])))
    saved_cw, saved_mxcsr = get_cw(), get_mxcsr()
    vector_cases, storage_cases = 0, 0
    try:
        set_cw(0x037F)
        for mode in (0x1F80, 0x1FC0, 0x9F80, 0x9FC0):
            for index, (left, right) in enumerate(rows):
                a[:], b[:] = left, right
                for kind in range(3):
                    result[:], expected[:] = (0xA5A5A5A5,) * 8, (0xA5A5A5A5,) * 8
                    set_mxcsr(mode)
                    normalized = vector(result, a, b, kind)
                    set_mxcsr(mode)
                    ref_normalized = ref_vector(expected, a, b, kind)
                    if normalized != ref_normalized or not all(equal(result[i], expected[i]) for i in range(4)):
                        raise AssertionError(f"vector mismatch kind={kind} row={index} mode={mode:x} "
                                             f"actual={list(result[:4])} expected={list(expected[:4])}")
                    if list(result[4:]) != [0xA5A5A5A5] * 4:
                        raise AssertionError("Write past vector/length output")
                    vector_cases += 1
                result[:], expected[:] = (0xA5A5A5A5,) * 8, (0xA5A5A5A5,) * 8
                set_mxcsr(mode)
                scale(result, a)
                set_mxcsr(mode)
                ref_scale(expected, a)
                if not all(equal(result[i], expected[i]) for i in range(6)) or result[6] != 0xA5A5A5A5:
                    raise AssertionError("Packed 200.0 scale/12-byte copy mismatch")
                set_mxcsr(mode)
                actual_dot = dot(a, b)
                set_mxcsr(mode)
                if actual_dot != ref_dot(a, b):
                    raise AssertionError(f"Facing dot branch mismatch row={index} mode={mode:x}")
                ctypes.memset(receiver, 0xA5, len(receiver))
                copy(receiver, a, result)
                if bytes(receiver)[0x1F0:0x1FC] != bytes(a) or list(result[:3]) != list(a):
                    raise AssertionError("Raw XYZ copy changed bits")
                args[:] = (left[0], left[1])
                for offset, value in zip((0x230, 0x1D8, 0x1D4, 0x218), (*right, left[2])):
                    word(receiver, offset).value = value
                ctypes.memmove(reference, receiver, len(receiver))
                set_mxcsr(mode)
                fields(receiver, ctypes.c_float.from_buffer(args), ctypes.c_float.from_buffer(args, 4))
                set_mxcsr(mode)
                ref_fields(reference, args)
                for offset in (0x230, 0x1D8, 0x1D4, 0x218):
                    if not equal(word(receiver, offset).value, word(reference, offset).value):
                        raise AssertionError(f"FP word field mismatch offset={offset:x} row={index} mode={mode:x}")
                    word(reference, offset).value = word(receiver, offset).value
                if bytes(receiver) != bytes(reference):
                    raise AssertionError("Write outside observed receiver field words")
                storage_cases += 1
        if (vector_cases, storage_cases) != (36636, 12212):
            raise AssertionError("Fixture coverage changed")
    finally:
        set_cw(saved_cw)
        set_mxcsr(saved_mxcsr)
    print(f"PASS {vector_cases} vector paths and {storage_cases} packed-scale/dot/raw-copy/field cases")


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
    source = source_path(root, "0x00226cc0").read_text(encoding="utf-8")
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("No original XBE supplied; original instruction provenance not rechecked")
    compiler = shutil.which("clang")
    if compiler is None:
        parser.error("Clang is required")
    flags = [compiler, "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic-errors",
             "-ffp-contract=off", "-mlong-double-80", "-shared", "-I", str(root / "include")]
    if sys.platform == "win32":
        flags.extend("-Wl,/export:" + name for name in ("bf_ref_226cc0_vector", "bf_ref_226cc0_scale",
                     "bf_ref_226cc0_fields", "bf_ref_226cc0_dot", "bf_reference_get_cw", "bf_reference_set_cw"))
    else:
        flags.append("-fPIC")
    with tempfile.TemporaryDirectory(prefix="bf_00226cc0_") as directory:
        folder = Path(directory)
        fixture = folder / "fixture.c"
        library = folder / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
        def run(changed, opt, negative=False):
            fixture.write_text(render(root, changed), encoding="utf-8")
            subprocess.run([*flags, opt, str(fixture), str(root / "tests/x86_00226cc0_reference.S"),
                            str(root / "tests/x86_0002f270_reference.S"), "-o", str(library)], check=True)
            result = subprocess.run([sys.executable, str(Path(__file__).resolve()), "--library", str(library)],
                                    capture_output=negative, text=True)
            if negative:
                if result.returncode != 1 or "AssertionError" not in result.stderr:
                    raise ValueError("Negative control did not produce a numerical/storage mismatch")
            else:
                result.check_returncode()
        for opt in ("-O0", "-O2"):
            run(source, opt)
        controls = (
            ("initial reciprocal approximation", "_mm_rcp_ss(_mm_load_ss(&original_length))",
             "_mm_div_ss(_mm_set_ss(1.0f), _mm_load_ss(&original_length))"),
            ("lost final extended X", "final_x * final_x;", "(float10)(float)final_x * (float10)(float)final_x;"),
            ("target equality accepted", "target_norm > (float10)1.0f", "target_norm >= (float10)1.0f"),
            ("numeric field conversion", "(float10)bf_x86_word_to_f32((uint32_t)in_ECX[0x76])",
             "(float10)in_ECX[0x76]"),
        )
        for name, old, new in controls:
            if source.count(old) != 1:
                raise ValueError("Ambiguous mutation: " + name)
            run(source.replace(old, new), "-O2", True)
            print("PASS rejected negative control:", name)
    print("PASS scoped current-CPU values; NaN payload/status, aliases and Xbox interfaces unverified")


if __name__ == "__main__":
    main()
