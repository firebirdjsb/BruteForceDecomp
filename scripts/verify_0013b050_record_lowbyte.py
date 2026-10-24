#!/usr/bin/env python3
"""Pin the original 0x0013B050 stack-record byte store and isolated C11 syntax."""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FINGERPRINTS = {
    0x0013B10C: "83ec10",        # SUB ESP,0x10
    0x0013B10F: "8bc4",          # MOV EAX,ESP (record base)
    0x0013B12B: "8a54244c",      # MOV DL,BYTE [ESP+0x4C]
    0x0013B134: "88500c",        # MOV BYTE [EAX+0x0C],DL
    0x0013B174: "e8d7000000",    # CALL 0x0013B250
}
SOURCE = "src/main_unclassified/band_0013/0x0013b050.c"
BODY = "BC5EC807CBC58B7372CDCAD8D1942CD4DF0398C8761684D0E81F5F2499B5FE0A"
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    if args.xbe:
        data = args.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != XBE_SHA256:
            ap.error("Original XBE SHA-256 mismatch")
        for va, raw in FINGERPRINTS.items():
            expected = bytes.fromhex(raw)
            actual = data[va - 0x10000:va - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"Original x86 mismatch at {va:#x}")
        displacement = struct.unpack_from("<i", data, 0x0013B175 - 0x10000)[0]
        if (0x0013B179 + displacement) & 0xFFFFFFFF != 0x0013B250:
            raise SystemExit("CALL 0x0013B174 target mismatch")
    path = args.root / SOURCE
    source = path.read_text()
    for token in (
        "Input x86 body SHA-256: " + BODY,
        "((uint8_t *)&local_14)[0] = (uint8_t)param_9;",
        "upper three bytes are not overwritten.",
        "TODO ABI_UNVERIFIED: guest stack high bytes and indirect calls.",
    ):
        if token not in source:
            raise SystemExit("Missing source invariant: " + token)
    if "local_14._1_3_" in source or "local_14 = (int)param_9;" in source:
        raise SystemExit("Unsafe whole-DWORD overwrite")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("Clang required")
    r = subprocess.run([clang, *FLAGS, "-I", str(args.root / "include"), str(path)],
                       capture_output=True, text=True, check=False)
    if r.returncode:
        raise SystemExit(r.stderr)
    print("PASS: 0x0013B050 source and C11 syntax"
          + ("; 5 XBE fingerprints and direct call" if args.xbe else " (XBE not supplied)"))
    print("LIMITATION: upper guest stack bytes and ABI unverified")

if __name__ == "__main__":
    main()
