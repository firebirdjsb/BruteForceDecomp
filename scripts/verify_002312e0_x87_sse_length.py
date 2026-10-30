#!/usr/bin/env python3
"""Verify 0x002312E0 guest float stack and original SSE scalar instructions.

The original XBE never goes to GitHub. CI checks source invariants and Clang
syntax; --xbe additionally verifies the authentic game executable and opcodes.
This does not prove complete original ABI/behavioral equivalence.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

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
    (0x2312e8, "8b4c2404"),
    (0x2312fa, "8d0440"),
    (0x2312fd, "8b948134020000"),
    (0x231436, "8d4c2468"),
    (0x231543, "89442434"),
    (0x23155f, "d8642434"),
    (0x231597, "d9542414"),
    (0x231603, "8b842498000000"),
    (0x231620, "8d442408"),
    (0x231625, "ff5238"),
    (0x231628, "8d4c2444"),
    (0x23162c, "8d442414"),
    (0x231643, "ff523c"),
    (0x1d0c0, "83ec44"),
    (0x1d0c3, "8b5008"),
    (0x1d0ca, "8b5004"),
    (0x1d0cd, "8b00"),
    (0x1d103, "f30f52442404"),
)
MARKERS=(
 "Input x86 body SHA-256: E86A4C0AECCDEAF56F2FDC00E2ABF165FE2FB291395206BD126D6C516D97065A",
 "Entry: 0x002312e0, Ghidra index: 7751",
 "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
 "_Static_assert(sizeof(float) == 4",
 "FUN_0001d0c0(void) draft does NOT transfer",
 "int param_2, int *param_3, float param_4",
 "float origin_xyz[3];",
 "float direction_xyz[3];",
 "float scaled_xyz[3];",
 "float work_xyz[3];",
 "float matrix[10];",
 "float basis[9];",
 "indexed_base = (uint32_t)param_1 + (uint32_t)param_2 * 12u;",
 "direction_xyz[2] = *(float *)(uintptr_t)(indexed_base + 0x264u);",
 "work_xyz[0] = basis[1];",
 "work_xyz[1] = basis[4];",
 "work_xyz[2] = basis[7];",
 "scaled_xyz[2] = work_xyz[2] * 0.1f;",
 "origin_xyz[2] -= scaled_xyz[2];",
 "direction_xyz[0] = delta_x;",
 "direction_xyz[1] = delta_y;",
 "direction_xyz[2] = delta_z;",
 "magnitude_sq = (delta_y * delta_y + delta_z * delta_z) + delta_x * delta_x;",
 "_mm_sqrt_ss(_mm_set_ss(magnitude_sq))",
 "_mm_rcp_ss(_mm_set_ss(movement_length))",
 "(**(code **)(*param_3 + 0x38))(param_3, origin_xyz);",
 "(**(code **)(*param_3 + 0x3c))(param_3, &matrix[1]);",
 "FUN_0021c380(movement_length * 0.005f);",
)
BAD=(
 "_local_5c =", "(float)param_2", "rcpss(auVar5",
 "(**(code **)(*param_2 + 0x3c))",
 "origin_xyz[2] -= work_xyz[2];",
 "_mm_rsqrt_ss(_mm_set_ss(magnitude_sq))",
)
def verify_source(root):
 s=(root/SOURCE).read_text(encoding="utf-8")
 for marker in MARKERS:
  if marker not in s:raise RuntimeError("missing source marker: "+marker)
 for marker in BAD:
  if marker in s:raise RuntimeError("obsolete guest ABI/storage mistake: "+marker)
 for original,change in (
  ("float direction_xyz[3];", "float direction_xyz[2];"),
  ("scaled_xyz[2] = work_xyz[2] * 0.1f;", "scaled_xyz[2] = work_xyz[2];"),
  ("_mm_rcp_ss(_mm_set_ss(movement_length))", "_mm_rsqrt_ss(_mm_set_ss(movement_length))"),
  ("int param_2, int *param_3, float param_4", "int *param_2, int *param_3, float param_4"),
  ("&matrix[1]);", "&matrix[0]);"),
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
def section_offset(data, address, size):
 if data[:4]!=b"XBEH":raise RuntimeError("not an Xbox XBE")
 base=struct.unpack_from("<I",data,0x104)[0]
 count=struct.unpack_from("<I",data,0x11c)[0]
 table=struct.unpack_from("<I",data,0x120)[0]-base
 if count>128 or table<0:raise RuntimeError("invalid XBE section table")
 for i in range(count):
  off=table+i*56
  flags,va,vsize,raw,rsize=struct.unpack_from("<IIIII",data,off)
  if va<=address and address+size<=va+min(vsize,rsize):
   pos=raw+address-va
   if pos+size>len(data):raise RuntimeError("truncated XBE section")
   return pos
 raise RuntimeError(f"address 0x{address:08x} not in file-backed XBE section")
def verify_xbe(path):
 data=path.read_bytes()
 if hashlib.sha256(data).hexdigest()!=XBE_SHA:raise RuntimeError("original XBE SHA-256 mismatch")
 start=section_offset(data,ENTRY,BODY_LEN)
 if hashlib.sha256(data[start:start+BODY_LEN]).hexdigest()!=BODY_SHA:
  raise RuntimeError("original 952-byte function body SHA-256 mismatch")
 for address,hex_bytes in WINDOWS:
  bs=bytes.fromhex(hex_bytes)
  start=section_offset(data,address,len(bs))
  if data[start:start+len(bs)]!=bs:raise RuntimeError(f"wrong opcode at 0x{address:08x}")
 for at,target in ((0x23143e,0x1d0c0),(0x231630,0x1d0c0),(0x23167d,0x21c380)):
  off=section_offset(data,at,5)
  if data[off]!=0xe8:raise RuntimeError(f"missing E8 at 0x{at:08x}")
  disp=struct.unpack_from("<i",data,off+1)[0]
  if (at+5+disp)&0xffffffff!=target:raise RuntimeError(f"guest CALL changed at 0x{at:08x}")
 for addr,expected in ((0x3a52dc,0x43480000),(0x3a52d8,0x3ba3d70a)):
  off=section_offset(data,addr,4)
  if struct.unpack_from("<I",data,off)[0]!=expected:
   raise RuntimeError(f"original .rdata F32 bits changed at 0x{addr:08x}")
 print(f"PASS: original XBE/body digest, {len(WINDOWS)} opcodes, 3 original CALLs, 2 .rdata constants")
def main():
 p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--xbe",type=Path);a=p.parse_args()
 verify_source(a.root);verify_clang(a.root)
 if a.xbe:verify_xbe(a.xbe)
 print("PASS: source contracts, 5 negative tests, focused C11, O0/O2 XYZ/SSE fixture")
 print("UNVERIFIED: x87 flags/rounding, external helper ABI, native guest32 runtime")
if __name__=="__main__":main()
