#!/usr/bin/env python3
"""Check three recovered stack-address operands against the user-owned XBE.

Requires the original executable locally; never upload it to GitHub. Exact
instruction and body hashes establish operand evidence, NOT Xbox ABI, native
pointer identity, external API behavior, or complete 1:1 equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
IMAGE_BASE_DELTA = 0x10000
CHECKS = {
    "0x0007e0a0": (
        0x7e121,
        "77B9370188C6A6258DB483EECC64AD143AFB3045AEC33E25052360EA674E8FE4",
        ((0x7e0a3, "8b7c2410"), (0x7e104, "518bcc8901"),
         (0x7e109, "8d4c241451")),
        "FUN_00085540(&param_1,iVar1);",
    ),
    "0x00084d50": (
        0x84d9c,
        "DE39614EB06E358E1F8DCF4B1E6E9E836331BE5396E34F1E4699D07D2F932785",
        ((0x84d7e, "8d44240450"), (0x84d8d, "8d44240450")),
        "(**(code **)(*piVar1 + 0x30))(local_14);",
    ),
    "0x0008b9e0": (
        0x8ba2b,
        "6DF66E219F2D47CA69E34F7A80E8FEF969FC677D7AC28102EEB41AFA2328BB5E",
        ((0x8b9e9, "8d4c2408"), (0x8ba0d, "8d44240850")),
        "(**(code **)(*piVar1 + 0x14))(&local_4);",
    ),
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def verify(xbe: bytes, repo: Path, clang: str) -> None:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise ValueError("original Xbox XBE SHA-256 mismatch")
    for entry, (end, body_hash, opcodes, call) in CHECKS.items():
        start = int(entry, 16)
        actual = hashlib.sha256(xbe[start - IMAGE_BASE_DELTA:end - IMAGE_BASE_DELTA]).hexdigest().upper()
        if actual != body_hash:
            raise ValueError(f"{entry}: original function body SHA-256 mismatch")
        for address, hex_bytes in opcodes:
            expected = bytes.fromhex(hex_bytes)
            actual_bytes = xbe[address - IMAGE_BASE_DELTA:address - IMAGE_BASE_DELTA + len(expected)]
            if actual_bytes != expected:
                raise ValueError(f"{entry}: instruction mismatch at {address:#x}")
        path = repo / "src" / "main_unclassified" / f"band_{start >> 16:04x}" / f"{entry}.c"
        source = path.read_text(encoding="utf-8")
        if f"Input x86 body SHA-256: {body_hash}" not in source or f"Entry: {entry}," not in source:
            raise ValueError(f"{entry}: original function identity/digest changed")
        if "ABI_UNVERIFIED" not in source:
            raise ValueError(f"{entry}: missing ABI limitation")
        code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
        if call not in code or re.search(r"\bstack0x[0-9a-fA-F]+\b", code):
            raise ValueError(f"{entry}: C11 stack-address mapping regressed")
        result = subprocess.run((clang, *FLAGS, "-I", str(repo / "include"), str(path)),
                                capture_output=True, text=True, check=False, timeout=60)
        if result.returncode:
            raise ValueError(f"{entry}: focused Clang C11 failed:\n{result.stderr[-2000:]}")
        print(f"PASS {entry}: XBE body, {len(opcodes)} opcode checks, C11 mapping/syntax")
    print("Xbox ABI, host pointer semantics and runtime equivalence remain unverified")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path, help="Local user-owned default.xbe (never commit)")
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    clang = shutil.which("clang")
    if not clang:
        parser.error("clang is required")
    verify(args.xbe.read_bytes(), args.repo, clang)


if __name__ == "__main__":
    main()
