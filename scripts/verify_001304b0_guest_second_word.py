#!/usr/bin/env python3
"""Check 0x001304B0's second local DWORD argument and isolated C11.

With --xbe, authenticate the original executable and exact instruction
windows. CI cannot prove original x86 bytes without the user's Xbox binary.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src/main_unclassified/band_0013/0x001304b0.c"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
WINDOWS = {
    0x001304B0: "83ec40",
    0x00130541: "895c240c",
    0x00130545: "895c2410",
    0x00130569: "8d442410",
    0x0013056D: "50",
    0x0013056E: "e86dc90600",
    0x0013057E: "8b7c240c",
}
REQUIRED = (
    "Entry: 0x001304b0",
    "Input x86 body SHA-256: DC57ACB54057DE486AFDF3E84ADF274B7B8DAC5465C1DAE86D1D3D42B2D705BB",
    "ABI_UNVERIFIED",
    "int local_40 [3];",
    "local_40[0] = 0;",
    "local_40[1] = 0;",
    "FUN_0019cee0(&local_40[1])",
)


def check_source(source):
    missing = [value for value in REQUIRED if value not in source]
    if missing or "&stack0xffffffb4" in source:
        raise ValueError(f"0x001304b0 source invariant failed: {missing}")


def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("original Xbox XBE SHA-256 mismatch")
    # Verified main-code section: VA maps to file offset VA - 0x10000.
    for va, expected_hex in WINDOWS.items():
        expected = bytes.fromhex(expected_hex)
        offset = va - 0x10000
        if data[offset:offset + len(expected)] != expected:
            raise ValueError(f"original instruction bytes mismatch at {va:#x}")
    print(f"original XBE SHA and {len(WINDOWS)} x86 instruction windows PASS")
    print("Function-body digest is retained from source provenance; not rederived here")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    source = SOURCE.read_text(encoding="utf-8")
    check_source(source)
    for piece in REQUIRED[3:]:
        try:
            check_source(source.replace(piece, "", 1))
        except ValueError:
            continue
        raise SystemExit(f"mutation guard did not reject removal of {piece}")
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("original XBE absent in CI: instruction-byte verification unavailable")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang required")
    flags = (
        "-std=c11", "-fsyntax-only", "-ferror-limit=3",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype",
    )
    result = subprocess.run(
        [clang, *flags, "-I", str(ROOT / "include"), str(SOURCE)],
        capture_output=True, text=True, check=False,
    )
    if result.returncode:
        raise SystemExit(f"0x001304b0 Clang C11 FAIL:\n{result.stderr}")
    print("0x001304b0 source invariants, negative mutations, isolated C11 PASS")
    print("Guest callee implementation and complete x86 register ABI remain unverified")


if __name__ == "__main__":
    main()
