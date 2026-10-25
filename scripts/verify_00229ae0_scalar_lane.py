#!/usr/bin/env python3
"""Focused source/Clang check for the original 0x00229AE0 MOVSS scalar lane.

With --xbe, also pin the user-owned retail XBE hash, exact function-body
digest and six original x86 opcode anchors. CI never ships or needs the XBE.
This is NOT proof of host register ABI, x87 ST0 calls or game equivalence.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import sys

ENTRY = "0x00229ae0"
BODY_END = 0x00229fd9
BODY_SHA256 = "3D558CA5F7F33391E0F5EE1F26AE6A4DA6F74666D3414E10084BF9F35766B0E6"
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# XBE .text: VA 0x12000 -> file 0x2000; VA - file = 0x10000.
XBE_IMAGE_DELTA = 0x10000
ANCHORS = {
    0x00229d34: "f30f10442420",  # MOVSS xmm0, [esp+0x20]
    0x00229d3a: "f30f5f442438",  # MAXSS xmm0, [esp+0x38]
    0x00229d40: "f30f5d442434",  # MINSS xmm0, [esp+0x34]
    0x00229d46: "f30f1144243c",  # MOVSS [esp+0x3c], xmm0
    0x00229d4c: "d944243c",      # FLD dword [esp+0x3c]
    0x00229d50: "e82bcf0d00",    # CALL 0x00306c80
}


def verify(repo: Path, xbe_path: Path | None) -> None:
    source_path = repo / "src/main_unclassified/band_0022/0x00229ae0.c"
    source = source_path.read_text(encoding="utf-8")
    for token in (
        f"Input x86 body SHA-256: {BODY_SHA256}",
        f"Entry: {ENTRY},",
        "ABI_UNVERIFIED",
        "#include <xmmintrin.h>",
    ):
        if token not in source:
            raise ValueError(f"Missing immutable source identity/limitation: {token}")
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    if code.count("__m128 in_XMM0;") != 1:
        raise ValueError("XBE XMM0 scalar-lane source declaration regressed")
    if code.count("in_XMM0 = _mm_set_ss(fStack_24);") != 1:
        raise ValueError("XBE MOVSS scalar source expression regressed")
    if "in_XMM0 = ZEXT416" in code or "undefined1 in_XMM0 [16]" in code:
        raise ValueError("Nonassignable Ghidra XMM0 array reintroduced")
    clang = shutil.which("clang")
    if not clang:
        raise ValueError("Clang is required")
    sys.path.insert(0, str(repo / "tools"))
    from sweep_c11 import FLAGS
    result = subprocess.run(
        [clang, *FLAGS, "-I", str(repo / "include"), str(source_path)],
        capture_output=True, text=True, timeout=60, check=False,
    )
    if result.returncode:
        raise ValueError(f"Focused Clang C11 failed:\n{result.stderr[-4000:]}")
    print("PASS: FUN_00229AE0 source identity, scalar-lane proxy, Clang C11")

    if xbe_path is not None:
        xbe = xbe_path.read_bytes()
        if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
            raise ValueError("Wrong retail Brute Force XBE SHA-256")
        start = int(ENTRY, 16)
        body = xbe[start - XBE_IMAGE_DELTA:BODY_END - XBE_IMAGE_DELTA]
        if hashlib.sha256(body).hexdigest().upper() != BODY_SHA256:
            raise ValueError("FUN_00229AE0 original body hash mismatch")
        for addr, opcode in ANCHORS.items():
            expected = bytes.fromhex(opcode)
            found = xbe[addr - XBE_IMAGE_DELTA:addr - XBE_IMAGE_DELTA + len(expected)]
            if found != expected:
                raise ValueError(f"Original instruction mismatch at {addr:#x}")
        print(f"PASS: retail XBE, original body, {len(ANCHORS)} x86 opcode anchors")
    else:
        print("XBE not supplied: source/Clang checks only; original opcodes NOT checked")
    print("NOT verified: Xbox register ABI, x87 ST0 interface, native linking or behavior")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="Local user-owned XBE; NEVER commit")
    args = parser.parse_args()
    verify(args.repo.resolve(), args.xbe)


if __name__ == "__main__":
    main()
