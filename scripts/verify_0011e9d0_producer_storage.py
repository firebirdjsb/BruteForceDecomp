#!/usr/bin/env python3
"""Actual caller excerpts and memory operations; not complete Xbox execution."""

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
from verify_002c96d0_constructor import allocate_low_buffer

BODIES = {
    "0x0011e9d0": (3337, "D500DE61C69517CCD74E13AA3A0A82E8EC4C365170F96B24917FF6C742A9F452"),
    "0x0001fdd0": (40, "13832B0FFE3CCB2E86EC5E06B944B7E16DDDFE35C04F722A781393BBBEECF49F"),
    "0x00232180": (113, "F20739B48A2D237E7011F0FF6CA28434B46CE0D1545169AD979AD4E3BDF5962C"),
    "0x002334b0": (219, "9BB0B4B943F96BFC083B393902034811AAC5F139DD27A66A158A7FE6308AAC60"),
    "0x00232290": (538, "7ABC76E9D3883DB6E58D388BD0022C0B91D600872B4C039B31CB111E4D02866B"),
}
OPS = {
    0x11EB85: "6a008d7424388d7c2468e8ec351100", # Index-zero and ESI/EDI outputs.
    0x11F1BF: "6a008d7424388d7c2468e8b22f1100",
    0x11EFD0: "8d842494000000", # First copied matrix destination.
    0x11ED15: "f30f51442410f30f11442414", # SQRTSS and actual F32 spill.
    0x11F349: "f30f51442410f30f11442414",
    0x11F03A: "8bcd8d9424940000008d8424b8000000e861441100",
    0x232181: "f6832502000001", # Conditional cache refresh flag.
    0x2321B4: "890f8b4c2404894f08895704", # EDI store order +0,+8,+4.
    0x2321E4: "8916894604894e08", # ESI store order +0,+4,+8.
    0x2324A1: "81c498000000c21000", # Four stack arguments, not three.
}


def render(root, source):
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODIES["0x0011e9d0"][1] or "ABI_UNVERIFIED" not in source:
        raise ValueError("Caller provenance/boundary changed")
    if source.count("_mm_rsqrt_ss(") != 4 or source.count("_mm_sqrt_ss(") != 2:
        raise ValueError("Scalar SSE operation count differs")
    roots = re.findall(r"local_b8 = (\(_mm_cvtss_f32\(_mm_sqrt_ss\(_mm_set_ss\(local_b8\)\)\) - 2\.5\) \* 0\.4);",source)
    if len(roots) != 2: raise ValueError("SQRTSS low operand/spill expression differs")
    views = []
    for index in (0x201,0x202,0x203):
        view=f"bf_x86_word_to_f32((uint32_t)param_1[0x{index:x}])"
        if view not in source: raise ValueError("Missing raw F32 readback")
        views.append(view)
    getters = re.findall(r"bf_0001fdd0_produce\(scratch_a8,([^;]+)\);\s*pfVar3 = scratch_a8;", source)
    own = "(const unsigned char *)param_1 + 0x5bc"
    fallback = "(const void *)((uintptr_t)(uint32_t)param_1[0x1b] + 0x14)"
    valid = "(const void *)((uintptr_t)(uint32_t)param_1[0x102] + 0x14)"
    if getters != [own,own,fallback,valid,own,own,own,fallback,valid,own]:
        raise ValueError("Getter callsite bindings differ")
    matrices = re.findall(r"bf_002334b0_produce\(matrix_product,[^;]+;\s*memcpy\([^;]+;\s*memcpy\([^;]+;\s*memcpy\([^;]+;", source)
    if len(matrices) != 4: raise ValueError("Missing matrix producer/copy block")
    caches = re.findall(r"if \(\(\*\(const byte \*\).*?bf_00232180_index0_copy\([^;]+;",source,re.S)
    if len(caches) != 2: raise ValueError("Missing cache producer block")
    fields = re.findall(r"bf_x86_store_f32_word\([^;]+;",source)
    if len(fields) != 3: raise ValueError("Missing raw input-field store")
    for contract in ("float scratch_a8[3];","float cached_78[3];","float direction_c4[3];",
                     "float auStack_6c[9];","float auStack_48[9];","float matrix_product[9];"):
        if source.count(contract) != 1: raise ValueError("Missing storage span")
    pre = """
#include <stdint.h>
#include <string.h>
#include <xmmintrin.h>
#include "bf_x86_float_lane.h"
#include "bf_0001fc40_getter_operations.h"
#include "bf_00232180_index0_copy.h"
#include "bf_002334b0_matrix_operation.h"
typedef unsigned char byte;
#ifdef _WIN32
#define API __declspec(dllexport)
#else
#define API
#endif
static unsigned refresh_calls;
/* Fixture refresh writes controlled words; it is not the game helper. */
static void FUN_0022e780(int *object) {
    unsigned char *p=(unsigned char *)object;
    uint32_t words[6]={11,22,33,44,55,66};
    ++refresh_calls; p[0x225]|=1;
    memcpy(p+0x22c,words,12); memcpy(p+0x25c,words+3,12);
}
API void multiply(void *out,const void *a,const void *b) { bf_002334b0_produce(out,a,b); }
API void copy_cache(void *s,void *d,const void *o) { bf_00232180_index0_copy(s,d,o); }
API void caller_fields(int *param_1,const uint32_t *bits) {
    float param_2,param_3,param_4;
    memcpy(&param_2,bits,4);memcpy(&param_3,bits+1,4);memcpy(&param_4,bits+2,4);
""" + "\n".join(fields) + "\n}\n"
    pre += "API void caller_readbacks(int *param_1,float *out) {"+"".join(f"out[{i}]={v};" for i,v in enumerate(views))+"}\n"
    pre += "API float caller_sqrt(unsigned site,float local_b8) {switch(site) {"+"".join(f"case {i}:return {v};" for i,v in enumerate(roots))+"default:return 0;}}\n"
    pre += "API void caller_getter(unsigned site,int *param_1,void *out) { float scratch_a8[3]; float *pfVar3; switch(site) {\n"
    for i, call in enumerate(getters):
        pre += f"case {i}: bf_0001fdd0_produce(scratch_a8,{call}); pfVar3=scratch_a8; break;\n"
    pre += "default:return;} memcpy(out,pfVar3,12);}\n"
    pre += "API unsigned caller_cache(unsigned site,void *object,void *out) { int iVar6=(int)(uintptr_t)object;float scratch_a8[3],cached_78[3];refresh_calls=0;switch(site) {\n"
    for i, block in enumerate(caches): pre += f"case {i}: {block} break;\n"
    pre += "default:return 99;}memcpy(out,scratch_a8,12);memcpy((unsigned char *)out+12,cached_78,12);return refresh_calls;}\n"
    pre += "API void caller_matrix(unsigned site,int *param_1,const void *input,void *out) {float auStack_6c[9],auStack_48[9],matrix_product[9];memcpy(auStack_6c,input,36);memcpy(auStack_48,input,36);switch(site) {\n"
    for i, block in enumerate(matrices):
        dest = "auStack_48" if i == 0 else "auStack_6c"
        pre += f"case {i}: {block} memcpy(out,{dest},36);break;\n"
    return pre + "default:return;}}\n"


def expected_matrix(memory, out, a, b):
    def read(offset): return struct.unpack_from("<f",memory,offset)[0]
    for column in range(3):
        for row in range(3):
            value = sum(read(a+4*(row+3*k))*read(b+4*(column*3+k)) for k in range(3))
            struct.pack_into("<f",memory,out+4*(column*3+row),value)


def exercise(path):
    lib=ctypes.CDLL(str(path)); vp=ctypes.c_void_p; u=ctypes.c_uint
    signatures={"multiply":[vp,vp,vp],"copy_cache":[vp,vp,vp],"caller_fields":[vp,vp],
                "caller_getter":[u,vp,vp],"caller_cache":[u,vp,vp],"caller_matrix":[u,vp,vp,vp],
                "caller_readbacks":[vp,vp],"caller_sqrt":[u,ctypes.c_float]}
    for name,args in signatures.items():
        f=getattr(lib,name);f.argtypes=args;f.restype=u if name=="caller_cache" else None
    lib.caller_sqrt.restype=ctypes.c_float
    for site in (0,1):
        for value in (0,4,6.25,9,25,100):
            sqrt_f32=struct.unpack("<f",struct.pack("<f",math.sqrt(value)))[0]
            expected=struct.pack("<f",(sqrt_f32-2.5)*.4)
            assert struct.pack("<f",lib.caller_sqrt(site,value))==expected,"SQRTSS low/spill expression differs"
    for shift in (0,1):
        for output in range(0,164,4):
            data=bytearray([0xa5]*256)
            struct.pack_into("<9f",data,48+shift,1,0,1,0,1,0,1,0,1)
            struct.pack_into("<9f",data,96+shift,0,1,0,1,0,1,0,1,0)
            expected=bytearray(data);expected_matrix(expected,output+shift,48+shift,96+shift)
            actual=(ctypes.c_ubyte*256).from_buffer_copy(data);base=ctypes.addressof(actual)
            lib.multiply(base+output+shift,base+48+shift,base+96+shift)
            assert bytes(actual)==expected,"Matrix ordered alias mismatch"
    # Raw cache copy allows outputs to overlap each other and source words.
    for esi in (0,4,0x22c,0x230,0x25c,0x260):
        for edi in (0,4,0x22c,0x230,0x25c,0x260):
            data=bytearray((i*37+11)&255 for i in range(0x300));expected=bytearray(data)
            first=bytes(expected[0x22c:0x238]);expected[edi:edi+12]=first
            second=bytes(expected[0x25c:0x268]);expected[esi:esi+12]=second
            actual=(ctypes.c_ubyte*len(data)).from_buffer_copy(data);base=ctypes.addressof(actual)
            lib.copy_cache(base+esi,base+edi,base)
            assert bytes(actual)==expected,"Cache copy alias/order mismatch"
    base,size,release=allocate_low_buffer()
    try:
        for fields in ((0x80000000,0x7fc12345,0x3fa00000),(0x3f800000,0xc0000000,0x40400000)):
            ctypes.memset(base,0xa5,size);before=bytearray(ctypes.string_at(base,0x900))
            bits=(ctypes.c_uint32*3)(*fields);lib.caller_fields(base,bits)
            for offset,word in zip((0x804,0x808,0x80c),fields):struct.pack_into("<I",before,offset,word)
            assert ctypes.string_at(base,len(before))==before,"Raw input F32 fields mismatch"
            readbacks=(ctypes.c_uint32*3)();lib.caller_readbacks(base,readbacks)
            assert tuple(readbacks)==fields,"F32 readback changed stored bits"
        ctypes.memset(base,0,size)
        for slot,ptr in ((0x6c,base+0x1000),(0x408,base+0x2000)):
            ctypes.c_uint32.from_address(base+slot).value=ptr
        for offset,values in ((0x5bc,(1,2,3)),(0x1014,(4,5,6)),(0x2014,(7,8,9))):
            for member,value in zip((8,0x14,0x20),values):ctypes.c_float.from_address(base+offset+member).value=value
        output=(ctypes.c_float*9)()
        for site in range(10):
            lib.caller_getter(site,base,output)
            expected=(4,5,6) if site in (2,7) else (7,8,9) if site in (3,8) else (1,2,3)
            assert tuple(output)[:3]==expected,"Getter caller address/span mismatch"
        for site in range(2):
            for ready in (0,1):
                ctypes.memset(base+0x3000,0,0x300);obj=base+0x3000
                ctypes.c_ubyte.from_address(obj+0x225).value=ready
                result=(ctypes.c_uint32*6)()
                calls=lib.caller_cache(site,obj,result)
                assert calls==1-ready,"Conditional refresh binding mismatch"
                assert tuple(result)==((0,)*6 if ready else (44,55,66,11,22,33)),"Cache output producer mismatch"
        a=(1,2,3,4,5,6,7,8,9);b=(9,8,7,6,5,4,3,2,1)
        ctypes.memmove(base+0x278,struct.pack("<9f",*a),36)
        ctypes.memmove(base+0x29c,struct.pack("<9f",2,0,0,0,2,0,0,0,2),36)
        for site in range(4):
            input_array=(ctypes.c_float*9)(*b);lib.caller_matrix(site,base,input_array,output)
            expected=(90,114,138,54,69,84,18,24,30) if site==0 else tuple(2*x for x in b)
            assert tuple(output)==expected,"Caller matrix operand/copy mismatch"
    finally:release()
    print("PASS 82 matrix aliases, 36 cache aliases, raw fields, ten getter bindings, four refresh paths and four matrix callsites")


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--xbe",type=Path);ap.add_argument("--library",type=Path,help=argparse.SUPPRESS);args=ap.parse_args()
    if args.library:exercise(args.library);return
    root=args.root.resolve();source=source_path(root,"0x0011e9d0").read_text(encoding="utf-8")
    if args.xbe:
        raw=args.xbe.read_bytes();sections=xbe_sections(raw)
        for entry,(size,digest) in BODIES.items():
            assert hashlib.sha256(mapped_span(raw,sections,int(entry,16),size)).hexdigest().upper()==digest,entry
        for address,encoded in OPS.items():
            expected=bytes.fromhex(encoded);assert mapped_span(raw,sections,address,len(expected))==expected,f"Window differs {address:08x}"
        print("PASS pinned original XBE, five complete bodies and producer call windows")
    else:print("Original XBE not supplied; instruction provenance not rechecked")
    clang=shutil.which("clang")
    if not clang:ap.error("Clang required")
    with tempfile.TemporaryDirectory(prefix="bf_producer_storage_") as temp:
        fixture=Path(temp)/"fixture.c";library=Path(temp)/("fixture.dll" if sys.platform=="win32" else "fixture.so")
        flags=[clang,"-std=c11","-Wall","-Wextra","-Werror","-pedantic-errors","-ffp-contract=off","-shared","-I",str(root/"include"),"-I",str(root/"src/contracts")]
        if sys.platform!="win32":flags.append("-fPIC")
        for opt in ("-O0","-O2"):
            fixture.write_text(render(root,source),encoding="utf-8");subprocess.run([*flags,opt,str(fixture),"-o",str(library)],check=True)
            subprocess.run([sys.executable,str(Path(__file__).resolve()),"--library",str(library)],check=True)
        for old,new in (("param_1 + 0x278,auStack_6c","param_1 + 0x29c,auStack_6c"),("param_1[0x102] + 0x14","param_1[0x1b] + 0x14")):
            # Getter marker assertions are themselves a valid negative gate.
            damaged=source.replace(old,new)
            try: rendered=render(root,damaged)
            except ValueError:print("PASS rejected changed getter source binding");continue
            fixture.write_text(rendered,encoding="utf-8");subprocess.run([*flags,"-O2",str(fixture),"-o",str(library)],check=True)
            result=subprocess.run([sys.executable,str(Path(__file__).resolve()),"--library",str(library)],capture_output=True,text=True)
            # Equal fixture operands need an explicit distinct receiver matrix.
            assert result.returncode==1 and "AssertionError" in result.stderr,"Negative control escaped"
            print("PASS rejected changed matrix receiver binding")
    print("PASS bounded caller/memory fixtures; cache refresh, matrix builder, guest ABI, x87 and Xbox runtime unverified")


if __name__=="__main__":main()
