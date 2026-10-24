#!/usr/bin/env python3
"""Verify the second incoming guest DWORD forwarded twice to node-copy allocator.

Source-only CI runs Clang; --xbe checks private retail x86. Not an ABI proof.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODIES = (
    (0x000DA880, 0x70, "3c4198f134fe492010ddaA5a70910940965062a9d937b3a33850d10d75dfd53e"),
    (0x000FF730, 0x69, "a7efb135b6b23f930db5c6ab5eb5937ea2372d6fa711ba4af6834f004d03753d"),
)
INSTRUCTIONS = {
    0x000DA880: "53", 0x000DA881: "55", 0x000DA882: "8b6c240c",
    0x000DA886: "56", 0x000DA887: "57",
    0x000DA891: "8d442418", 0x000DA895: "50",
    0x000DA8C6: "8d442418", 0x000DA8CA: "50",
    0x000DA8E9: "5f", 0x000DA8EA: "5e",
    0x000DA8EB: "5d", 0x000DA8EC: "5b", 0x000DA8ED: "c20c00",
    0x000FF777: "8b4d14", 0x000FF77A: "8b11",
    0x000FF77C: "895008", 0x000FF796: "c21000",
}
SOURCE = Path("src/main_unclassified/band_000d/0x000da880.c")
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def source_check(s):
    required = (
        "Input x86 body SHA-256: " + BODIES[0][2].upper(),
        "void FUN_000da880(int param_1,undefined4 guest_second_word)",
        "four register pushes place the same second incoming DWORD at entry ESP+8.",
        "RET 0Ch shows three guest stack words;",
        "ABI_UNVERIFIED",
    )
    for token in required:
        if token not in s:
            raise AssertionError("missing source contract: " + token)
    calls = [line for line in s.splitlines()
             if "FUN_000ff730(param_1 + " in line]
    if len(calls) != 2 or any(not line.endswith("&guest_second_word);") for line in calls):
        raise AssertionError("both allocator calls must forward the same guest word")
    if "stack0x00000008" in s:
        raise AssertionError("unresolved second incoming guest word")


def va_bytes(xbe, va, size):
    if xbe[:4] != b"XBEH":
        raise AssertionError("not an Xbox executable")
    base, = struct.unpack_from("<I", xbe, 0x104)
    count, table = struct.unpack_from("<II", xbe, 0x11C)
    for i in range(count):
        _flags, start, _virtual, raw, raw_size = struct.unpack_from(
            "<5I", xbe, table - base + i * 56)
        if start <= va and va + size <= start + raw_size:
            result = xbe[raw + va - start:raw + va - start + size]
            if len(result) == size:
                return result
    raise AssertionError(f"guest VA unmapped: {va:08x}")


def instruction_check(xbe):
    for addr, hexstr in INSTRUCTIONS.items():
        expected = bytes.fromhex(hexstr)
        if va_bytes(xbe, addr, len(expected)) != expected:
            raise AssertionError(f"instruction mismatch: {addr:08x}")
    for addr in (0x000DA899, 0x000DA8CE):
        op = va_bytes(xbe, addr, 5)
        if op[0] != 0xE8 or addr + 5 + struct.unpack("<i", op[1:])[0] != 0x000FF730:
            raise AssertionError(f"node-copy call target mismatch: {addr:08x}")
    if 0x18 - 4 * 4 != 8:
        raise AssertionError("guest stack arithmetic mismatch")


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path, help="original private XBE; never commit")
    a = p.parse_args()
    root = a.root.resolve()
    source = (root / SOURCE).read_text(encoding="utf-8")
    source_check(source)
    try:
        source_check(source.replace("&guest_second_word", "&stack0x00000008", 1))
    except AssertionError:
        pass
    else:
        raise AssertionError("source mutation negative control failed")
    clang = shutil.which("clang")
    if clang is None:
        raise SystemExit("clang required for focused C11 check")
    r = subprocess.run([clang, *FLAGS, "-I", str(root / "include"),
                        str(root / SOURCE)], capture_output=True, text=True)
    if r.returncode:
        raise AssertionError("focused Clang C11 failed: " + r.stderr[-1500:])
    print("PASS: two shared incoming-word pointers, source mutation, Clang C11")
    if a.xbe:
        data = a.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != XBE_SHA:
            raise AssertionError("retail XBE SHA-256 mismatch")
        for addr, size, sha in BODIES:
            if hashlib.sha256(va_bytes(data, addr, size)).hexdigest() != sha.lower():
                raise AssertionError(f"original body hash mismatch: {addr:08x}")
        instruction_check(data)
        corrupted = bytearray(data)
        base, = struct.unpack_from("<I", data, 0x104)
        count, table = struct.unpack_from("<II", data, 0x11C)
        for i in range(count):
            _, start, _, raw, size = struct.unpack_from("<5I", data, table-base+i*56)
            if start <= 0xDA8C6 < start + size:
                corrupted[raw+0xDA8C6-start] ^= 1
                break
        try:
            instruction_check(bytes(corrupted))
        except AssertionError:
            pass
        else:
            raise AssertionError("x86 mutation negative control failed")
        print(f"PASS: retail XBE, 2 body hashes, {len(INSTRUCTIONS)} instruction sites, "
              "2 direct call targets, x86 mutation negative control")
    else:
        print("XBE unavailable in CI: source-only check (ABI still unverified)")


if __name__ == "__main__":
    main()
