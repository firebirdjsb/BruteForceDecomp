#!/usr/bin/env python3
"""Verify one x86 saved-register stack input. Not a guest/host ABI test."""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODIES = (
    (0x000F0640, 177, "b53af51017ec5d63735e1925c0c49e09c48b684867f6ffb64ca32f55a58b978e"),
    (0x0010CB40, 46, "98ccc61a268bdaa174d85ac9a049f7372b01632057b6c4fd4ac203591d8191d1"),
)
INSTRUCTIONS = {
    0x000F0640: "51",           # PUSH ECX: saved guest ECX at entry ESP-4
    0x000F065E: "53",           # PUSH EBX
    0x000F065F: "57",           # PUSH EDI
    0x000F0694: "55",           # PUSH EBP
    0x000F06A0: "8b6f14",       # MOV EBP,[EDI+14h]
    0x000F06A3: "8d4c240c",     # LEA ECX,[ESP+0Ch] => entry ESP-4
    0x000F06A7: "51",           # PUSH pointer
    0x000F06AA: "896c2410",     # MOV [ESP+10h],EBP => entry ESP-4
    0x000F06EA: "5d",           # POP EBP
    0x000F06EB: "5f",           # POP EDI
    0x000F06EE: "5b",           # POP EBX
    0x000F06EF: "59",           # POP ECX (caller-visible ABI NOT modeled)
    0x0010CB4E: "8b74240c",     # MOV ESI,[ESP+0Ch]: pointer argument
    0x0010CB52: "8b36",         # MOV ESI,[ESI]: read DWORD through pointer
    0x0010CB64: "c20400",       # RET 4
    0x0010CB6B: "c20400",       # RET 4
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")

def source_check(text: str) -> None:
    for required in (
        "Input x86 body SHA-256: " + BODIES[0][2].upper(),
        "undefined4 guest_saved_ecx_word;",
        "guest_saved_ecx_word = (undefined4)iVar2;",
        "FUN_0010cb40(&guest_saved_ecx_word);",
    ):
        if required not in text:
            raise AssertionError("source contract missing: " + required)
    if "stack0xfffffff8" in text:
        raise AssertionError("unresolved stack reference remains")

def offset_for(xbe: bytes, va: int) -> int:
    if xbe[:4] != b"XBEH":
        raise AssertionError("not an XBE")
    base = struct.unpack_from("<I", xbe, 0x104)[0]
    count = struct.unpack_from("<I", xbe, 0x11C)[0]
    table = struct.unpack_from("<I", xbe, 0x120)[0]
    for index in range(count):
        _flags, start, _virtual, raw, size = struct.unpack_from("<5I", xbe, table-base+index*56)
        if start <= va < start+size:
            return raw+va-start
    raise AssertionError(f"unmapped VA {va:08x}")

def va_bytes(xbe: bytes, va: int, size: int) -> bytes:
    off = offset_for(xbe, va)
    return xbe[off:off+size]

def xbe_check(xbe: bytes) -> None:
    if hashlib.sha256(xbe).hexdigest() != XBE_SHA256:
        raise AssertionError("original XBE digest mismatch")
    for addr, size, digest in BODIES:
        if hashlib.sha256(va_bytes(xbe, addr, size)).hexdigest() != digest:
            raise AssertionError(f"original function-body digest mismatch at {addr:08x}")
    for addr, hex_bytes in INSTRUCTIONS.items():
        expected = bytes.fromhex(hex_bytes)
        if va_bytes(xbe, addr, len(expected)) != expected:
            raise AssertionError(f"instruction mismatch at {addr:08x}")
    call = va_bytes(xbe, 0x000F06AE, 5)
    if call[0] != 0xE8 or 0x000F06B3 + struct.unpack("<i", call[1:])[0] != 0x0010CB40:
        raise AssertionError("callee target mismatch")
    if 0x0C - 4 * 4 != -4 or 0x10 - 5 * 4 != -4:
        raise AssertionError("guest saved-register slot mismatch")

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="private retail executable, not in Git")
    args = ap.parse_args()
    root = args.root.resolve()
    src = root / "src/main_unclassified/band_000f/0x000f0640.c"
    content = src.read_text(encoding="utf-8")
    source_check(content)
    altered = content.replace("&guest_saved_ecx_word", "&stack0xfffffff8", 1)
    try:
        source_check(altered)
    except AssertionError:
        pass
    else:
        raise AssertionError("source negative control did not fail")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang required")
    run = subprocess.run([clang, *FLAGS, "-I", str(root / "include"), str(src)],
                         capture_output=True, text=True)
    if run.returncode:
        raise AssertionError("focused C11 syntax failure: " + run.stderr)
    print("0x000f0640 saved ECX guest slot source and Clang C11: PASS")
    if args.xbe:
        xbe = args.xbe.read_bytes()
        xbe_check(xbe)
        mutated = bytearray(xbe)
        mutated[offset_for(xbe, 0x000F06A3)] ^= 1
        try:
            xbe_check(bytes(mutated))
        except AssertionError:
            pass
        else:
            raise AssertionError("XBE mutation negative control did not fail")
        print("retail XBE, two original function hashes, 16 instruction sites, call target: PASS")
    else:
        print("Source-only CI; XBE instruction validation requires --xbe")

if __name__ == "__main__":
    main()
