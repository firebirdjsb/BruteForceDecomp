#!/usr/bin/env python3
"""Verify 0x002312E0 guest float stack and original SSE scalar instructions.

The original XBE never goes to GitHub. CI checks source invariants and Clang
syntax; --xbe additionally verifies the authentic game executable and opcodes.
This does not prove complete original ABI/behavioral equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA="e86a4c0aeccdeaf56f2fdc00e2abf165fe2fb291395206bd126d6c516d97065a"
ENTRY=0x2312e0
BODY_LEN=952
SOURCE="src/main_unclassified/band_0023/0x002312e0.c"
TEST="tests/test_002312e0_packed_sse.c"
WINDOWS=(
    (0x2312e0, "8b54240c"),
    (0x2312e4, "8b442408"),
    (0x2312ec, "81ec8c000000"),
    (0x231355, "f6812502000002"),
    (0x231360, "0f849d020000"),
    (0x2313b4, "8b84249c000000"),
    (0x2313cf, "f30f10442404"),
    (0x2313d5, "0fc6c000"),
    (0x2313e1, "0f164804"),
    (0x2313e5, "0f59c1"),
    (0x2313ec, "f30f1100"),
    (0x2313f0, "0f174004"),
    (0x23143e, "e87dbcdeff"),
    (0x231470, "c74424040000803e"),
    (0x231482, "0fc6c000"),
    (0x231492, "0f59c1"),
    (0x231499, "f30f1100"),
    (0x23149d, "0f174004"),
    (0x231500, "c7442404cdcccc3d"),
    (0x231522, "0f59c1"),
    (0x231529, "f30f1100"),
    (0x23152d, "0f174004"),
    (0x2315b9, "f30f51442400"),
    (0x2315cf, "8984249c000000"),
    (0x2315de, "f30f104c2404"),
    (0x2315e8, "f30f53c9"),
    (0x2315f0, "0fc6c900"),
    (0x2315f4, "0f164004"),
    (0x2315f8, "0f59c1"),
    (0x2315fb, "f30f1100"),
    (0x2315ff, "0f174004"),
    (0x231646, "d984249c000000"),
    (0x23165a, "c784249c00000000004843"),
    (0x231665, "d984249c000000"),
    (0x231673, "d80dd8523a00"),
    (0x23167d, "e8feacfeff"),
    (0x23168a, "c21000"),
    (0x231695, "c21000"),
)
MARKERS=(
 "Input x86 body SHA-256: E86A4C0AECCDEAF56F2FDC00E2ABF165FE2FB291395206BD126D6C516D97065A",
 "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
 "#include <xmmintrin.h>",
 "static uint64_t bf_2312e0_pack_float2(float low, float high)",
 "memcpy(&words[0], &low, 4);",
 "memcpy(&words[1], &high, 4);",
 "float movement_length = param_4;",
 "local_68 = bf_2312e0_pack_float2(local_14 * 0.1f, local_8);",
 "memcpy(&local_5c, &local_14, sizeof local_5c);",
 "memcpy(&fStack_58, &local_8, sizeof fStack_58);",
 "movement_length = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(norm2)));",
 "fVar4 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(movement_length)));",
 "local_74 = bf_2312e0_pack_float2(fVar3 * fVar4, fVar2 * fVar4);",
 "movement_length = 200.0f;",
 "FUN_0021c380(movement_length * 0.005f);",
)
BAD=("_local_5c =", "(float)param_2", "rcpss(auVar5", "ZEXT416((uint)SQRT")
def verify_source(root):
 s=(root/SOURCE).read_text(encoding="utf-8")
 for marker in MARKERS:
  if marker not in s:raise RuntimeError("missing source marker: "+marker)
 for marker in BAD:
  if marker in s:raise RuntimeError("obsolete Ghidra storage mistake: "+marker)
 for original,change in (
  ("float movement_length = param_4;", "float movement_length;"),
  ("_mm_rcp_ss(_mm_set_ss(movement_length))", "_mm_rsqrt_ss(_mm_set_ss(movement_length))"),
  ("memcpy(&fStack_58, &local_8, sizeof fStack_58);", "fStack_58 = 0;"),
 ):
  if original not in s:raise RuntimeError("negative test anchor missing")
  bad=s.replace(original,change,1)
  if all(m in bad for m in MARKERS):raise RuntimeError("negative test accepted mutation: "+original)
def verify_clang(root):
 clang=shutil.which("clang")
 if not clang:raise RuntimeError("clang required")
 flags=["-std=c11","-fsyntax-only","-ferror-limit=6","-Wno-implicit-function-declaration",
        "-Wno-int-conversion","-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type","-Wno-deprecated-non-prototype"]
 p=subprocess.run([clang,*flags,"-I",str(root/"include"),str(root/SOURCE)],capture_output=True,text=True)
 if p.returncode:raise RuntimeError("Clang syntax failed:\n"+p.stderr)
 with tempfile.TemporaryDirectory() as folder:
  for opt in ("-O0","-O2"):
   exe=Path(folder)/(opt[1:]+"_test")
   b=subprocess.run([clang,"-std=c11","-Wall","-Wextra","-Werror","-pedantic-errors",opt,str(root/TEST),"-o",str(exe)],capture_output=True,text=True)
   if b.returncode:raise RuntimeError("C fixture compile failed:\n"+b.stderr)
   r=subprocess.run([str(exe)],capture_output=True,text=True)
   if r.returncode:raise RuntimeError("C fixture failed:\n"+r.stderr)
def verify_xbe(path):
 data=path.read_bytes()
 if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise RuntimeError("original XBE SHA-256 mismatch")
 start=ENTRY-0x10000
 if hashlib.sha256(data[start:start+BODY_LEN]).hexdigest()!=BODY_SHA:
  raise RuntimeError("original function body SHA-256 mismatch")
 for address,hex_bytes in WINDOWS:
  bs=bytes.fromhex(hex_bytes);start=address-0x10000
  if data[start:start+len(bs)]!=bs:raise RuntimeError(f"wrong opcode at 0x{address:08x}")
 for at,target in ((0x23143e,0x1d0c0),(0x231630,0x1d0c0),(0x23167d,0x21c380)):
  off=at-0x10000;disp=struct.unpack_from("<i",data,off+1)[0]
  if (at+5+disp)&0xffffffff!=target:raise RuntimeError(f"guest CALL changed at 0x{at:08x}")
 print(f"PASS: original XBE/body digest, {len(WINDOWS)} opcodes, 3 original CALLs")
def main():
 p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--xbe",type=Path);a=p.parse_args()
 verify_source(a.root);verify_clang(a.root)
 if a.xbe:verify_xbe(a.xbe)
 print("PASS: C11 syntax, x86 float stack alias invariants, 3 negative tests, O0/O2 SSE fixture")
 print("UNVERIFIED: x87 flags/rounding, external helper ABI, native guest32 runtime")
if __name__=="__main__":main()
