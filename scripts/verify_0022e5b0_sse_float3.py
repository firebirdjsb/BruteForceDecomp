#!/usr/bin/env python3
"""Original-XBE and C11 regression: 0x0022E5B0 low three SSE float lanes.

Only checked instruction windows and original full body hash authorize the
storage correction. Does not certify virtual callees or native guest behavior.
"""
import argparse
import hashlib
import shutil
import subprocess
import tempfile
from pathlib import Path

ENTRY=0x0022E5B0
BODY_LEN=461
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA="f55ccc69c691b97cffbee898fdab533fca8f7da5e11234f3628ba18e4804d4c1"
SOURCE="src/main_unclassified/band_0022/0x0022e5b0.c"
TEST="tests/test_0022e5b0_sse_float3.c"
WINDOWS=(
    (0x22e5b0, "55"),
    (0x22e5b3, "83ec1c"),
    (0x22e5e6, "d87238"),
    (0x22e5e9, "d95df0"),
    (0x22e5ec, "d980f4010000"),
    (0x22e5f2, "d86108"),
    (0x22e612, "d918"),
    (0x22e617, "895104"),
    (0x22e620, "894808"),
    (0x22e653, "ff5054"),
    (0x22e65e, "894df8"),
    (0x22e675, "83780403"),
    (0x22e67b, "8b8e18070000"),
    (0x22e681, "8b9614070000"),
    (0x22e687, "8b8610070000"),
    (0x22e68d, "894df8"),
    (0x22e692, "8955f4"),
    (0x22e6e2, "d9fa"),
    (0x22e6ea, "d84df0"),
    (0x22e6f0, "d95df4"),
    (0x22e6f3, "f30f104df4"),
    (0x22e6ff, "0fc6c900"),
    (0x22e703, "0f164004"),
    (0x22e707, "0f59c1"),
    (0x22e70a, "f30f1100"),
    (0x22e70e, "0f174004"),
    (0x22e737, "f30f1000"),
    (0x22e73b, "0f164004"),
    (0x22e742, "0f59c0"),
    (0x22e745, "0fc6c880"),
    (0x22e749, "0f58c8"),
    (0x22e74c, "0fc6c903"),
    (0x22e750, "f30f58c8"),
    (0x22e754, "0f2f0d18403a00"),
    (0x22e763, "f30f52c9"),
    (0x22e767, "0fc6c900"),
    (0x22e76b, "0f59d1"),
    (0x22e76e, "f30f1110"),
    (0x22e772, "0f175004"),
    (0x22e77a, "c20c00"),
)
MARKERS=(
    "Input x86 body SHA-256: F55CCC69C691B97CFFBEE898FDAB533FCA8F7DA5E11234F3628BA18E4804D4C1",
    "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
    "#include <xmmintrin.h>",
    "memcpy(&local_c, &piVar2[0x1c6], sizeof local_c);",
    "memcpy(&local_10, &piVar2[0x1c5], sizeof local_10);",
    "memcpy(&local_20, &piVar2[0x1c4], sizeof local_20);",
    "float scale = (float)(sqrtl(",
    "guest_length_sq = (param_3[1] * param_3[1] +",
    "param_3[2] * param_3[2]) +",
    "guest_inv_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));",
    "param_3[0] *= guest_inv_length;",
    "param_3[1] *= guest_inv_length;",
    "param_3[2] *= guest_inv_length;",
)
INVALID=("auVar9._", "auVar8._", "(float)piVar2[0x1c4]",
         "(float)piVar2[0x1c6]", "*(undefined8 *)(param_3 + 1)")

def source_checks(root):
    content=(root/SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        if marker not in content:raise RuntimeError("source invariant missing: "+marker)
    for marker in INVALID:
        if marker in content:raise RuntimeError("invalid Ghidra vector/float cast reappeared: "+marker)
    for old,new in (
      ("param_3[2] *= guest_inv_length;", "param_3[2] = 0.0f;"),
      ("_mm_rsqrt_ss(_mm_set_ss(guest_length_sq))",
       "_mm_sqrt_ss(_mm_set_ss(guest_length_sq))"),
      ("memcpy(&local_20, &piVar2[0x1c4], sizeof local_20);",
       "local_20 = (float)piVar2[0x1c4];"),
    ):
        if old not in content:raise RuntimeError("negative test anchor missing")
        changed=content.replace(old,new,1)
        if all(marker in changed for marker in MARKERS):
            raise RuntimeError("mutation unexpectedly escaped source gate: "+old)

def focused_clang(root):
    clang=shutil.which("clang")
    if not clang:raise RuntimeError("clang not installed")
    flags=["-std=c11","-fsyntax-only","-ferror-limit=4",
        "-Wno-implicit-function-declaration","-Wno-int-conversion",
        "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast","-Wno-return-type",
        "-Wno-deprecated-non-prototype"]
    r=subprocess.run([clang,*flags,"-I",str(root/"include"),str(root/SOURCE)],
                     text=True,capture_output=True)
    if r.returncode:raise RuntimeError("Clang isolated C11 failed:\n"+r.stderr)
    with tempfile.TemporaryDirectory(prefix="bf_22e5b0_") as tmp:
        for optimization in ("-O0","-O2"):
            exe=Path(tmp)/optimization[1:]
            b=subprocess.run([clang,"-std=c11","-Wall","-Wextra","-Werror",
                     "-pedantic-errors",optimization,str(root/TEST),"-o",str(exe)],
                     text=True,capture_output=True)
            if b.returncode:raise RuntimeError("float3 test compile failed:\n"+b.stderr)
            t=subprocess.run([str(exe)],text=True,capture_output=True)
            if t.returncode:raise RuntimeError("float3 test failed:\n"+t.stderr)

def xbe_checks(path):
    data=path.read_bytes()
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        raise RuntimeError("user XBE digest mismatch")
    offset=ENTRY-0x10000
    if hashlib.sha256(data[offset:offset+BODY_LEN]).hexdigest()!=BODY_SHA:
        raise RuntimeError("original body hash mismatch")
    for va,hex_bytes in WINDOWS:
        expected=bytes.fromhex(hex_bytes);o=va-0x10000
        if data[o:o+len(expected)]!=expected:
            raise RuntimeError(f"original opcode mismatch at 0x{va:08x}")
    print(f"PASS: authenticated XBE, full body and {len(WINDOWS)} instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    source_checks(a.root);focused_clang(a.root)
    if a.xbe:xbe_checks(a.xbe)
    print("PASS: isolated Clang C11, source invariants, negative controls, O0/O2 float3")
    print("NOT VERIFIED: callback targets, x87 comparisons and native guest runtime")
if __name__=="__main__":main()
