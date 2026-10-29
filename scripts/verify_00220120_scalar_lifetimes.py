#!/usr/bin/env python3
"""Exercise actual scalar/recursive source; no complete Xbox execution claim."""
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

ENTRY = "0x00220120"
BODY = "B84F519BC070EC6E334C45E8F9C18F5CDCC351009BF03E59720FD871335E3D51"
OPS = {
    0x220120: "83ec68",  # Fixed 0x68-byte frame, before four saved registers.
    0x220128: "8b5c2474",  # Preserve original second vector pointer in EBX.
    0x220132: "8bb42480000000",  # Preserve original third vector pointer in ESI.
    0x220143: "8bbc2488000000",  # Preserve fourth vector pointer in EDI.
    0x220187: "d99c2488000000",  # FSTP F32 norm4 into the old fourth argument home.
    0x220207: "8bac2494000000",  # Preserve external code-output pointer in EBP.
    0x22020E: "d99c2480000000",  # FSTP F32 scalar in the old second argument home.
    0x220641: "8a842498000000",  # Read the flag byte before scratch-slot reuse.
    0x22064A: "c7842484000000ffffffff",  # Signed DWORD recursive sentinel.
    0x2206D4: "f30f52442434",  # RSQRTSS m32fp, only low result is stored.
    0x220A18: "f30f51842498000000",  # SQRTSS m32fp.
    0x220AC0: "89842498000000",  # Copy norm4 DWORD to the expired flag home.
    0x220AE7: "f30f51842498000000",  # SQRTSS reads that actual snapshot.
    0x220B00: "8d8c2488000000",  # F+0x84 code output, one argument pushed.
    0x220B0C: "8d442474",  # F+0x6c F32 triple output, two arguments pushed.
    0x220B15: "8d4c244c",  # F+0x3c vector input, four arguments pushed.
    0x220B3F: "e8dcf5ffff",  # Original recursive call target.
}


def render(source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODY or "ABI_UNVERIFIED" not in source:
        raise ValueError("Provenance/boundary differs")
    for text in ("float coefficient_2;", "float coefficient_7;", "int recursive_code;",
                 "float local_c[3];", "float local_18[3];", "float local_30[3];",
                 "float local_3c[3];", "recursive_code = -1;",
                 "reused_flag_f32 = fVar6;",
                 "_mm_sqrt_ss(_mm_set_ss(reused_flag_f32))",
                 "FUN_00220120(param_1,local_18,local_30,local_3c,0,local_c,&recursive_code,0);"):
        if source.count(text) != 1:
            raise ValueError("Missing/ambiguous source contract: " + text)
    if source.count("_mm_rsqrt_ss(") != 7 or source.count("_mm_sqrt_ss(") != 3:
        raise ValueError("Scalar SSE instruction count differs")
    if source.index("reused_flag_f32 = fVar6;") > source.index("_mm_sqrt_ss(_mm_set_ss(reused_flag_f32))"):
        raise ValueError("Scratch F32 snapshot must precede its SQRTSS consumer")
    # Count entries and observe recursive output codes without substituting the
    # recursive function. All arithmetic and recursive calls use the actual C.
    source = source.replace("  int iVar1;", "  ++fixture_calls;\n  int iVar1;", 1)
    source = source.replace("        fVar6 = saved_norm_4;",
                            "        fixture_recursive_code = recursive_code;\n        fVar6 = saved_norm_4;", 1)
    return """
#include <stdint.h>
#include <string.h>
static unsigned fixture_calls;
static int fixture_recursive_code;
""" + source + """
#ifdef _WIN32
__declspec(dllexport)
#endif
int bf_run(float *p, float *base, float *a, float *b, float radius,
           int enabled, float *out, double *distance, unsigned *calls, int *child)
{
    struct { uint32_t before; int code; uint32_t after; } code = {0x12345678, -99, 0x87654321};
    struct { uint32_t before; float v[3]; uint32_t after; } result;
    result.before = 0x13572468; result.after = 0x86427531;
    fixture_calls = 0; fixture_recursive_code = -99;
    *distance = (double)FUN_00220120(p,base,a,b,radius,result.v,&code.code,(char)enabled);
    memcpy(out,result.v,sizeof(result.v));
    *calls = fixture_calls; *child = fixture_recursive_code;
    if (code.before != 0x12345678 || code.after != 0x87654321 ||
        result.before != 0x13572468 || result.after != 0x86427531) return -100;
    return code.code;
}
"""


def exercise(path):
    lib = ctypes.CDLL(str(path))
    fp = ctypes.POINTER(ctypes.c_float)
    run = lib.bf_run
    run.argtypes = [fp, fp, fp, fp, ctypes.c_float, ctypes.c_int, fp,
                    ctypes.POINTER(ctypes.c_double), ctypes.POINTER(ctypes.c_uint),
                    ctypes.POINTER(ctypes.c_int)]
    run.restype = ctypes.c_int
    triple = ctypes.c_float * 3
    observed, recursive = set(), 0
    for origin in ((0, 0, 0), (3, -5, 7)):
        for x, y, expected_code, u, v in (
            (.25,.25,0,.25,.25), (.75,.75,1,.5,.5),
            (-.5,2,2,0,1), (-.5,.25,3,0,.25),
            (-.5,-.5,4,0,0), (.25,-.5,5,.25,0), (2,-.5,6,1,0),
        ):
            for enabled in (0, 1):
                for radius in (0.0, .01, .1):
                    p = triple(origin[0]+x,origin[1]+y,origin[2]+.5)
                    base, a, b = triple(*origin), triple(1,0,0), triple(0,1,0)
                    output, distance = triple(), ctypes.c_double()
                    calls, child = ctypes.c_uint(), ctypes.c_int()
                    code = run(p,base,a,b,radius,enabled,output,ctypes.byref(distance),ctypes.byref(calls),ctypes.byref(child))
                    observed.add(code)
                    if calls.value > 1: recursive += 1
                    assert calls.value in (1,2), "Recursion bound differs"
                    assert all(abs(output[i] - (origin[i] + (u,v,0)[i])) < 2e-6 for i in range(3)), "Output scalar/address lifetime differs"
                    assert abs(distance.value - ((x-u)**2+(y-v)**2+.25)) < 2e-6, "Distance differs"
                    assert code == expected_code or (expected_code == 0 and code == 7), "Code write-back differs"
                    if calls.value == 2:
                        assert child.value in range(7), "Recursive code was not written"
                    else:
                        assert child.value == -99, "Unexpected recursive result"
    assert set(range(7)).issubset(observed), "Missing scalar branch coverage"
    assert recursive > 0, "Recursive spans were not exercised"
    print("PASS 84 complete-source cases: all seven regions, recursive spans/code and external canaries")


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--library", type=Path, help=argparse.SUPPRESS)
    args = ap.parse_args()
    if args.library:
        exercise(args.library)
        return
    if args.xbe:
        raw = args.xbe.read_bytes()
        sections = xbe_sections(raw)
        assert hashlib.sha256(mapped_span(raw,sections,int(ENTRY,16),3239)).hexdigest().upper() == BODY
        for address, hexbytes in OPS.items():
            expected = bytes.fromhex(hexbytes)
            assert mapped_span(raw,sections,address,len(expected)) == expected, f"Instruction differs: {address:08x}"
        print("PASS pinned whole XBE, complete 3239-byte body and scalar/recursive instruction windows")
    else:
        print("Original XBE not supplied; instruction provenance not rechecked")
    root = args.root.resolve()
    source = source_path(root,ENTRY).read_text(encoding="utf-8")
    clang = shutil.which("clang")
    if not clang: ap.error("Clang required")
    with tempfile.TemporaryDirectory(prefix="bf_scalar_lifetimes_") as temp:
        fixture = Path(temp)/"fixture.c"
        library = Path(temp)/("fixture.dll" if sys.platform == "win32" else "fixture.so")
        # The unchanged shared Ghidra header declares an unprototyped code
        # alias; this fixture has no external calls through that alias.
        flags = [clang,"-std=c11","-Wall","-Wextra","-Werror","-Wno-strict-prototypes","-pedantic-errors","-shared","-I",str(root/"include")]
        if sys.platform != "win32": flags += ["-fPIC"]
        def check(subject, opt, negative=False):
            fixture.write_text(render(subject),encoding="utf-8")
            subprocess.run([*flags,opt,str(fixture),"-o",str(library)],check=True)
            result = subprocess.run([sys.executable,str(Path(__file__).resolve()),"--library",str(library)],capture_output=True,text=True)
            if negative:
                assert result.returncode == 1 and "AssertionError" in result.stderr, "Negative control escaped"
            else:
                if result.returncode: print(result.stderr, file=sys.stderr)
                result.check_returncode()
                print(result.stdout.strip())
        for opt in ("-O0","-O2"): check(source,opt)
        for old,new in (("coefficient_2 = 1.0f;","coefficient_2 = 1065353216.0f;"),
                        ("local_18[1] = local_24[1] + pfVar12[1];","local_18[1] = local_24[1] + pfVar12[0];")):
            assert old in source
            check(source.replace(old,new),"-O2",True)
            print("PASS rejected scalar/recursive corruption")
    print("PASS host projections only; complete x87/flags/ABI/Xbox behavior and byte match remain unverified")


if __name__ == "__main__":
    main()
