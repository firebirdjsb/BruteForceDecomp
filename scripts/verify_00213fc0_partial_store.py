#!/usr/bin/env python3
"""Verify 0x00213FC0 scalar global and partial-byte source evidence.

Runs source/Clang checks on GitHub without shipping private Xbox executable.
Optionally pass --xbe with the authenticated original XBE locally.
"""
import argparse
import hashlib
from pathlib import Path
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SPANS = (
    (0x0021409D, "884dec"),         # MOV BYTE [EBP-0x14],CL
    (0x002140A9, "8b45ec"),         # MOV EAX,DWORD [EBP-0x14]; top bytes unchanged
    (0x002140F6, "d80d68704000"),   # FMUL m32fp [0x00407068]
    (0x00214122, "d90564704000"),   # FLD m32fp [0x00407064]
)
SOURCE = "src/main_unclassified/band_0021/0x00213fc0.c"
CONTRACTS = (
    "extern float _DAT_00407064;",
    "extern float _DAT_00407068;",
    "*(byte *)&local_18 = bVar15;",
)
BANNED = (
    "local_18._1_3_",
    "extern uint32_t *_DAT_00407068;",
)
def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=Path("."))
    ap.add_argument("--xbe",type=Path)
    ap.add_argument("--clang",action="store_true")
    args=ap.parse_args()
    text=(args.root/SOURCE).read_text(encoding="utf-8")
    for token in CONTRACTS:
        if text.count(token)!=1:
            raise SystemExit(f"Missing/duplicated original contract: {token}")
    for bad in BANNED:
        if bad in text:
            raise SystemExit(f"Incorrect old source contract retained: {bad}")
    if args.xbe:
        xbe=args.xbe.read_bytes()
        if hashlib.sha256(xbe).hexdigest()!=XBE_SHA:
            raise SystemExit("Original XBE hash mismatch")
        for va,hexdata in SPANS:
            expected=bytes.fromhex(hexdata)
            if xbe[va-0x10000:va-0x10000+len(expected)]!=expected:
                raise SystemExit(f"XBE opcode contract mismatch at {va:08x}")
    if args.clang:
        cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=10",
             "-Wno-implicit-function-declaration","-Wno-int-conversion",
             "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast","-Wno-return-type",
             "-Wno-deprecated-non-prototype","-I",str(args.root/"include"),
             str(args.root/SOURCE)]
        subprocess.run(cmd,check=True)
    print("PASS 0x00213FC0 original byte-only stack store and two float32 globals")
    print("This is isolated C11 correctness, NOT full function 1:1 runtime parity.")

if __name__ == "__main__":
    main()
