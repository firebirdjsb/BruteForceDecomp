#!/usr/bin/env python3
"""Bounded caller excerpts and memory fixtures, not complete Xbox execution."""
import argparse
import ctypes
import hashlib
import math
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path
from sweep_c11 import FLAGS
from verify_002c96d0_constructor import allocate_low_buffer

BODIES = {
    "0x0011afa0": (3411, "903905D04CA2B5CAF2D3FAD9B4188098462C67BF6EEC966A62DABEB5D1654056"),
    "0x0001fd40": (59, "BD8404AC490D6FD5998635B9C0EC962C3D0A4FC6930010655F35C27A81C10DA4"),
    "0x0003d6c0": (100, "A3875BC357803FB9E03F912E86EABF8EC659F52F2474AF548CBEA08D675632E8"),
    "0x0012b250": (72, "D1C693C7D10C55771BDE592AD1D8B55AED3F0FB5F3B8537752B59F7A04CDA8EB"),
    "0x002333b0": (254, "43F0D4453372A1B4E5F54209D1CA198B28D4FDF32EBD4DE09D3B667501340A7E"),
    "0x002339d0": (305, "F629722E1C092FF356AE5231F20680377341B951D88EF3069DCF6DD392B00126"),
}
OPS = {
    0x11B253: "f30f52442410f30f1144243c",  # RSQRTSS low spill.
    0x11B2C4: "f30f52442410f30f1144243c",
    0x11B582: "f30f5144240cf30f1144243c",  # SQRTSS low spill.
    0x11B63B: "f30f5244240cf30f11442420",
    0x11B7D5: "f30f5244240cf30f11442420",
    0x11B9C9: "f30f5244240cf30f11442420",
    0x11B5B5: "f30f53c9f30f10000fc6c9000f1640040f59c1f30f11000f174004",
    0x11B679: "f30f53c9f30f10000fc6c9000f1640040f59c1f30f11000f174004",
    0x11B776: "8d44242489542428e8bd45f0ff",  # EAX = F+24, in-place helper.
    0x11B3C5: "0f1000f30f1050200f1048108b5424100f1102f30f1152200f114a10",
    0x11BC33: "8d44246883c404508d4c247ce88c7d11008b4c244083c404",  # ESP adjustment.
    0x11BC4B: "518d542454528d54246c8d4c2448e8f2f50000",
    0x3A4F78: "0000803f",  # 1fd40 FDIVR's 1.0f constant.
}


def render(source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODIES["0x0011afa0"][1] or "ABI_UNVERIFIED" not in source:
        raise ValueError("Caller provenance/boundary changed")
    for token in ("in_XMM0", "auVar", "CONCAT44", "ZEXT416", "uStack_b4", "uStack_c4"):
        if token in source:
            raise ValueError("Pseudo-lane or numeric word conversion returned")
    for declaration in ("direction_b8[3]", "direction_c8[3]", "transverse_ac[3]",
                        "basis_9c[4]", "quaternion_8c[4]", "quaternion_78[4]", "matrix_64[12]"):
        if f"float {declaration};" not in source:
            raise ValueError("Missing original storage span")
    for call in ("FUN_0003d6c0(&matrix_64[0],iVar10,iVar10 + 0x24);",
                 "FUN_00306c80();", "bf_002339d0_quaternion_operation(&quaternion_8c[0],",
                 "bf_002339d0_quaternion_operation(&quaternion_78[0],&matrix_64[0]);",
                 "bf_0012b250_blend_operation(&basis_9c[0],",
                 "bf_002333b0_matrix_operation((float *)(param_1 + 0x37c),&basis_9c[0]);"):
        if call not in source:
            raise ValueError("Existing unresolved call/storage boundary changed")
    if source.count("_mm_rsqrt_ss(") != 5 or source.count("_mm_rcp_ss(") != 2 or source.count("_mm_sqrt_ss(") != 1:
        raise ValueError("Scalar instruction count changed")
    start = source.index("    length_low =")
    end = source.index("    local_bc =", start)
    direction = source[start:end]
    copies = source[source.index("      memcpy(copied_xmm0,"):source.index("      FUN_00072010(")]
    scalar = re.findall(r"rsqrt_low = ([^;]+);", source)
    scalar_args = [
        {"basis_9c[0]": "x", "basis_9c[2]": "z"},
        {"fVar17": "x", "fVar16": "z"},
        {"direction_b8[0]": "x", "fVar16": "z"},
        {"fVar18": "x", "fVar3": "z"},
        {"fVar17": "x", "direction_c8[0]": "z"},
    ]
    for i, replacements in enumerate(scalar_args):
        for old, new in replacements.items():
            scalar[i] = scalar[i].replace(old, new)
    pre = """
#include <stdint.h>
#include <string.h>
#include <xmmintrin.h>
#include "bf_0001fd40_normalize_operation.h"
typedef uint32_t undefined4;
#ifdef _WIN32
#define API __declspec(dllexport)
#else
#define API
#endif
API float reference_low(unsigned op, float value, unsigned poison) {
    uint32_t words[4]; __m128 v;
    memcpy(words,&value,4);
    words[1]=poison; words[2]=~poison; words[3]=poison^0x7fc12345u;
    memcpy(&v,words,16);
    if(op==0) v=_mm_rsqrt_ss(v);
    else if(op==1) v=_mm_rcp_ss(v);
    else v=_mm_sqrt_ss(v);
    return _mm_cvtss_f32(v);
}
API void normalize(void *p) { bf_0001fd40_normalize(p); }
API float caller_scalar(unsigned site,float x,float z) {
    switch(site) {
"""
    pre += "\n".join(f"case {i}:return {expression};" for i, expression in enumerate(scalar))
    pre += "default:return 0;}}\n"
    pre += """
API void caller_direction(int param_1,const float *input,float *output) {
    float fVar2=input[0],fVar17=input[1],fVar16=input[2];
    float length_low,rsqrt_low,fVar3,fVar4,fVar18,fVar19;
    float direction_b8[3],direction_c8[3],quaternion_78[4];
""" + direction + "memcpy(output,direction_b8,12);}\n"
    pre += """
API void caller_copy(int param_1,int iVar10) {
    unsigned char copied_xmm0[16];
    uint32_t uVar1,uVar5,uVar6,uVar7,uVar8;
""" + copies + "}\n"
    return pre


def f32(value):
    return struct.unpack("<f", struct.pack("<f", value))[0]


def bits(value):
    return struct.pack("<f", value)


def exercise(path):
    lib = ctypes.CDLL(str(path))
    vp = ctypes.c_void_p
    lib.reference_low.argtypes = [ctypes.c_uint, ctypes.c_float, ctypes.c_uint]
    lib.reference_low.restype = ctypes.c_float
    lib.caller_scalar.argtypes = [ctypes.c_uint, ctypes.c_float, ctypes.c_float]
    lib.caller_scalar.restype = ctypes.c_float
    lib.normalize.argtypes = [vp]
    lib.normalize.restype = None
    lib.caller_direction.argtypes = [ctypes.c_int, vp, vp]
    lib.caller_direction.restype = None
    lib.caller_copy.argtypes = [ctypes.c_int, ctypes.c_int]
    lib.caller_copy.restype = None
    for site in range(5):
        for x, z in ((0, 0), (3, 4), (.25, 2), (-5, 7), (1e-20, 1e-20), (4096, 1)):
            x, z = f32(x), f32(z)
            for poison in (0, 0xffffffff, 0x7fa01234, 0x80000000):
                expected = lib.reference_low(0, f32(x*x+z*z), poison)
                assert bits(lib.caller_scalar(site,x,z)) == bits(expected), "RSQRTSS operand/lane mismatch"
    # Actual helper: finite vectors, unaligned addresses, guard bytes and signed zero.
    for values in ((3,4,0),(-3,0,4),(1,2,2),(.25,.5,1),(-0.0,4,3)):
        reciprocal = 1/math.sqrt(sum(v*v for v in values))
        expected = struct.pack("<3f", *(reciprocal*v for v in values))
        for shift in range(4):
            data = bytearray([0xa5]*32)
            struct.pack_into("<3f",data,4+shift,*values)
            want = bytearray(data);want[4+shift:16+shift] = expected
            actual = (ctypes.c_ubyte*32).from_buffer_copy(data)
            lib.normalize(ctypes.addressof(actual)+4+shift)
            assert bytes(actual) == want, "Normalizer output/guard mismatch"
    base, _, release = allocate_low_buffer()
    try:
        context = base+0x1000
        ctypes.memmove(base+0x6c,struct.pack("<I",context),4)
        inputs = ((0,0,0),(.25,.5,.25),(.99,0,0),(1,0,0),(1.25,.5,.25),
                  (1.999,0,0),(2,0,0),(3,4,0),(2,3,4),(-2,-3,-4))
        for back_x, back_z in ((-3,-4),(-2,5),(4,.5),(.25,2)):
            ctypes.memmove(context+0x1c,struct.pack("<f",-back_x),4)
            ctypes.memmove(context+0x34,struct.pack("<f",-back_z),4)
            for values in inputs:
                x,y,z = map(f32,values)
                length = lib.reference_low(2,f32(z*z+x*x+y*y),0xa5a5a5a5)
                if length < 2:
                    inverse = lib.reference_low(0,f32(back_x*back_x+back_z*back_z),0)
                    back = (f32(inverse*back_x), f32(inverse*0.0), back_z)
                    if length < 1:
                        expected = back
                    else:
                        reciprocal = lib.reference_low(1,length,0xffffffff)
                        weight = f32(length-1)
                        target = [f32(f32(v*reciprocal)*weight) for v in (x,y,z)]
                        back = [f32(v*f32(1-weight)) for v in back]
                        mixed = [f32(a+b) for a,b in zip(target,back)]
                        inverse = 1/math.sqrt(sum(v*v for v in mixed))
                        expected = [f32(v*inverse) for v in mixed]
                else:
                    reciprocal = lib.reference_low(1,length,0x7fcfffff)
                    expected = [f32(v*reciprocal) for v in (x,y,z)]
                source = (ctypes.c_float*3)(x,y,z);out = (ctypes.c_float*3)()
                lib.caller_direction(base,source,out)
                assert bytes(out) == struct.pack("<3f",*expected), "Direction producer/rounding mismatch"
        # All 36 source bytes load before stores; test both overlap directions.
        for offset in range(0,100,4):
            data = bytes((i*37+11)&255 for i in range(0x800))
            ctypes.memmove(base,data,len(data))
            source_offset = 48
            source_words = data[source_offset:source_offset+36]
            want = bytearray(data);want[offset:offset+36] = source_words
            lib.caller_copy(base+offset-0x2c4,base+source_offset-0x14)
            assert ctypes.string_at(base,len(data)) == bytes(want), "Overlapping raw copy mismatch"
    finally:
        release()
    print("PASS 120 scalar-lane cases, 20 unaligned normalizers, 40 direction paths and 25 raw-copy aliases")


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--xbe",type=Path)
    ap.add_argument("--library",type=Path,help=argparse.SUPPRESS)
    args=ap.parse_args()
    if args.library:
        exercise(args.library);return
    root=args.root.resolve();source_file=source_path(root,"0x0011afa0")
    source=source_file.read_text(encoding="utf-8")
    if args.xbe:
        raw=args.xbe.read_bytes();sections=xbe_sections(raw)
        for entry,(size,digest) in BODIES.items():
            assert hashlib.sha256(mapped_span(raw,sections,int(entry,16),size)).hexdigest().upper()==digest,entry
        for address,encoded in OPS.items():
            expected=bytes.fromhex(encoded)
            assert mapped_span(raw,sections,address,len(expected))==expected,hex(address)
        print("PASS pinned original XBE, six complete bodies and scalar/storage windows")
    else:
        print("Original XBE not supplied; instruction provenance not rechecked")
    clang=shutil.which("clang")
    if not clang:ap.error("Clang required")
    for target in ("i686-pc-windows-msvc","x86_64-pc-windows-msvc") if sys.platform=="win32" else ("i686-linux-gnu","x86_64-linux-gnu"):
        # Linux full CI's ordinary host sweep is authoritative; an i686 sysroot
        # is not assumed there. Windows SDK supplies both target headers.
        if sys.platform!="win32" and target.startswith("i686"):continue
        subprocess.run([clang,*FLAGS,"-target",target,"-I",str(root/"include"),str(source_file)],check=True)
    with tempfile.TemporaryDirectory(prefix="bf_scalar_storage_") as temp:
        fixture=Path(temp)/"fixture.c"
        library=Path(temp)/("fixture.dll" if sys.platform=="win32" else "fixture.so")
        flags=[clang,"-std=c11","-Wall","-Wextra","-Werror","-pedantic-errors","-ffp-contract=off","-shared",
               "-Wno-int-to-pointer-cast","-I",str(root/"src/contracts")]
        if sys.platform!="win32":flags += ["-fPIC"]
        link=[] if sys.platform=="win32" else ["-lm"]
        def run_fixture(text,opt):
            fixture.write_text(text,encoding="utf-8")
            subprocess.run([*flags,opt,str(fixture),*link,"-o",str(library)],check=True)
            return subprocess.run([sys.executable,str(Path(__file__).resolve()),"--library",str(library)],capture_output=True,text=True)
        for opt in ("-O0","-O2"):
            result=run_fixture(render(source),opt)
            if result.returncode:raise RuntimeError(result.stderr)
            print(opt,result.stdout.strip())
        for old,new in (("bf_0001fd40_normalize(direction_b8);","bf_0001fd40_normalize(direction_c8);"),
                        ("_mm_rcp_ss(_mm_set_ss(length_low))","_mm_div_ss(_mm_set_ss(1.0f),_mm_set_ss(length_low))")):
            damaged=source.replace(old,new)
            try:fixture_text=render(damaged)
            except ValueError:print("PASS rejected changed scalar instruction");continue
            result=run_fixture(fixture_text,"-O2")
            assert result.returncode==1 and "AssertionError" in result.stderr,"Negative control escaped"
            print("PASS rejected disconnected in-place producer")
    with tempfile.TemporaryDirectory(prefix="bf_quat_op_") as temp:
        for opt in ("-O0","-O2"):
            exe=Path(temp)/("quat.exe" if sys.platform=="win32" else "quat")
            cmd=[clang,"-std=c11","-Wall","-Wextra","-Werror","-pedantic",
                 "-ffp-contract=off",opt,"-I",str(root/"include"),
                 str(root/"tests/test_002339d0_quaternion_operation.c")]
            if sys.platform!="win32":cmd+=["-lm"]
            subprocess.run([*cmd,"-o",str(exe)],check=True)
            subprocess.run([str(exe)],check=True)
            print("PASS original-source-derived quaternion operation",opt)
    with tempfile.TemporaryDirectory(prefix="bf_connected_quat_matrix_") as temp:
        real_source=source_path(root,"0x00233b10")
        for opt in ("-O0","-O2"):
            exe=Path(temp)/("connected.exe" if sys.platform=="win32" else "connected")
            # The real Ghidra C source includes a known legacy function-type
            # placeholder: typedef uintptr_t code();. The full C11 sweep
            # already tolerates that source-only ABI notation. Keep the
            # strict fixture checks for all other compiler diagnostics.
            cmd=[clang,"-std=c11","-Wall","-Wextra","-Werror","-pedantic",
                 "-Wno-strict-prototypes","-ffp-contract=off",opt,"-I",str(root/"include"),
                 str(root/"tests/test_0012b250_002333b0_connected.c"),str(real_source)]
            if sys.platform!="win32":cmd+=["-lm"]
            subprocess.run([*cmd,"-o",str(exe)],check=True)
            subprocess.run([str(exe)],check=True)
            print("PASS real 00233b10 blend and 002333b0 matrix operations",opt)
    print("PASS bounded syntax/storage fixtures; full helper ABI, x87 control/status and Xbox runtime unverified")


if __name__=="__main__":main()
