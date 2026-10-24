#!/usr/bin/env python3
"""Focused provenance and syntax regression for two original Xbox guest stores.

This validates only three original machine-code stores and the C11 drafts'
comment formatting. It does not establish native guest-memory semantics.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# For this particular XBE's mapped code region, raw file offset = guest VA - 0x10000.
ORIGINAL_INSTRUCTIONS = (
    (0x001E7884, "bb01000000", "EBX = 1 before the first loop"),
    (0x001E78E8, "33c9884904", "XOR ECX,ECX; MOV BYTE PTR [ECX+4],CL"),
    (0x001E7937, "33c0885804", "XOR EAX,EAX; MOV BYTE PTR [EAX+4],BL"),
    (0x002856DF, "33c0894004", "XOR EAX,EAX; MOV DWORD PTR [EAX+4],EAX"),
)
SOURCES = (
    (
        "src/main_unclassified/band_001e/0x001e7880.c",
        "D4B020A2A1921FAA5D3859A8990C7073CF7C1C7BFFC0D877170F6416A47621F2",
        "0x001e7880",
        (
            "*(volatile undefined1 *)(uintptr_t)UINT32_C(0x00000004) = 0;",
            "*(volatile undefined1 *)(uintptr_t)UINT32_C(0x00000004) = 1;",
        ),
    ),
    (
        "src/main_unclassified/band_0028/0x002856b0.c",
        "5162CCA1F52B2DE23E459C8546D2BD1F9A3E061968FE4486AC7488E49964E2C7",
        "0x002856b0",
        ("*(volatile undefined4 *)(uintptr_t)UINT32_C(0x00000004) = 0;",),
    ),
)


def check_xbe(path):
    data = path.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED_XBE_SHA256:
        raise ValueError(f"Wrong XBE digest: {digest}")
    for va, expected_hex, description in ORIGINAL_INSTRUCTIONS:
        expected = bytes.fromhex(expected_hex)
        actual = data[va - 0x10000: va - 0x10000 + len(expected)]
        if actual != expected:
            raise ValueError(f"Original instruction mismatch at {va:#x}: {description}")
    print(f"PASS: original XBE SHA-256 and {len(ORIGINAL_INSTRUCTIONS)} x86 instruction sequences")


def check_repo(root, run_clang):
    for relative_path, body_sha, entry, statements in SOURCES:
        path = root / relative_path
        source = path.read_text(encoding="utf-8")
        if f"Input x86 body SHA-256: {body_sha}" not in source or f"Entry: {entry}" not in source:
            raise ValueError(f"Original body provenance changed: {relative_path}")
        if r"\n" in source:
            raise ValueError(f"Literal backslash-n remains in {relative_path}")
        for statement in statements:
            if source.count(statement) != 1:
                raise ValueError(f"Guest store changed or duplicated: {relative_path}: {statement}")
        if run_clang:
            compiler = shutil.which("clang")
            if not compiler:
                raise RuntimeError("clang not found; cannot verify C11 syntax")
            command = [
                compiler, "-std=c11", "-fsyntax-only", "-Wno-implicit-function-declaration",
                "-Wno-int-conversion", "-Wno-incompatible-pointer-types", "-Wno-implicit-int",
                "-Wno-return-type", "-I", str(root / "include"), str(path),
            ]
            subprocess.run(command, check=True)
        print(f"PASS: provenance, exact guest stores, and comment formatting: {relative_path}")
    if run_clang:
        print("PASS: both functions passed focused host Clang C11 syntax")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", type=Path, help="Original user-supplied, hash-matched XBE")
    parser.add_argument("--repo", type=Path, help="Repository checkout containing the two source files")
    parser.add_argument("--no-clang", action="store_true", help="Skip Clang syntax check for source-only inspection")
    args = parser.parse_args()
    if not args.xbe and not args.repo:
        parser.error("Specify --xbe, --repo, or both")
    if args.xbe:
        check_xbe(args.xbe)
    if args.repo:
        check_repo(args.repo, not args.no_clang)
    print("NOTE: Syntax and instruction checks do not establish full 1:1 behavior or PC linkage.")


if __name__ == "__main__":
    main()
