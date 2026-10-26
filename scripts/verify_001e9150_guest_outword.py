#!/usr/bin/env python3
"""Check FUN_001E9150's callback output alias with Xbox x86 instruction evidence.

The optional original private XBE is checked by SHA-256 and exact machine-code
windows. Source-only CI is a C11 syntax/storage gate, NOT behavioral proof.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_001e/0x001e9150.c"
OPCODES = {
    0x001E9150: "83ec40",       # SUB ESP,0x40
    0x001E9153: "53",           # PUSH EBX
    0x001E9154: "55",           # PUSH EBP
    0x001E9155: "56",           # PUSH ESI
    0x001E9156: "57",           # PUSH EDI
    0x001E9294: "8d442414",     # LEA EAX,[ESP+0x14] -> local_3c
    0x001E9298: "50",           # PUSH EAX (callback output address)
    0x001E9299: "e8429dfbff",   # CALL FUN_001A2FE0
    0x001E92B9: "8b742414",     # read callback-written local_3c
    0x001E92DB: "8b4c2414",     # same local_3c in subsequent branch
    0x001E9300: "8b742414",     # same local_3c on failure path
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def check_source(root):
    source_path = root / SOURCE
    content = source_path.read_text(encoding="utf-8")
    required = (
        "Entry: 0x001e9150",
        "Input x86 body SHA-256: B9CB191C8189AA902B44424618DA04CEB28BE5FCC06841163D107709211B0E57",
        "undefined4 local_3c;",
        "local_3c = 0;",
        "FUN_001a2fe0(&local_3c)",
    )
    for item in required:
        if item not in content:
            raise SystemExit("missing C11 source invariant: " + item)
    if "stack0xffffffb4" in content:
        raise SystemExit("unresolved original guest output alias reintroduced")
    clang = shutil.which("clang")
    if clang is None:
        raise SystemExit("clang is required")
    for optimization in ("-O0", "-O2"):
        cmd = [clang, *FLAGS, optimization, "-I", str(root / "include"), str(source_path)]
        run = subprocess.run(cmd, text=True, capture_output=True)
        if run.returncode:
            raise SystemExit(f"isolated {optimization} C11 check failed:\n{run.stderr}")
    print("PASS: 0x001E9150 source storage invariants and Clang C11 at O0/O2")

def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise SystemExit("original Xbox XBE SHA-256 mismatch")
    for address, encoded in OPCODES.items():
        want = bytes.fromhex(encoded)
        pos = address - 0x10000
        if data[pos:pos+len(want)] != want:
            raise SystemExit(f"original instruction mismatch at 0x{address:08X}")
    print(f"PASS: authenticated original Xbox XBE, {len(OPCODES)} opcode windows")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--xbe-only", action="store_true")
    args = ap.parse_args()
    if args.xbe_only and args.xbe is None:
        ap.error("--xbe-only requires --xbe")
    if not args.xbe_only:
        check_source(args.root)
    if args.xbe is not None:
        check_xbe(args.xbe)
    else:
        print("Original XBE unavailable to CI: opcode checks SKIPPED")
    print("Xbox calling conventions and native PC runtime remain UNVERIFIED")

if __name__ == "__main__":
    main()
