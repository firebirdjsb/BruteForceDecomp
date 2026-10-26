#!/usr/bin/env python3
"""Static evidence for 0x52120 -> vtable(+0x20) -> 0x52c90 -> 0x236670.

Only TWO code-referenced constructor vtables have been established.
The virtual receiver's full runtime type set, helper ECX provenance,
32-bit guest memory and behavior are NOT proven by these checks.
Never commit the original Xbox executable or its full decompiler output.
"""
import argparse
import hashlib
import shutil
import struct
import subprocess
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
METHOD = 0x52C90
HELPER = 0x236670
VTABLES = (0x3A4748, 0x3A4EB0)
BODIES = (
    (0x52120, 157, "a9bb04ff684df913b8d6f81e92e4d06b88773586b58567cf41746be7570bea45"),
    (METHOD, 142, "7c722a7c22d357e209576daaa96229b3ba997347e8cf2f69338a39ae91f6858d"),
    (HELPER, 599, "6c4e9ff97fad7bc65b6785b0219ee5ffc14e999ac651a7aa2e9585d197e84496"),
)
# Small, exact original instruction windows, not reconstructed bytes.
WINDOWS = (
    (0x12ad8, "c70648473a00"), (0x16423, "c7451848473a00"),
    (0x1645c, "c74518b04e3a00"), (0x1777e, "c74518b04e3a00"),
    (0x52123, "8b06"), (0x52132, "ff5020"),
    (0x52135, "8b06"), (0x52144, "ff5020"),
    (0x52c90, "57"), (0x52c91, "8b7c2408"),
    (0x52c9b, "83c0fe"), (0x52c9e, "83f81d"),
    (0x52ca3, "0fb6882c2d0500"), (0x52caa, "ff248d202d0500"),
    (0x52cbd, "5f"), (0x52cbe, "c744240401000000"),
    (0x52cc6, "e9a5391e00"), (0x52cd1, "8b5c2410"),
    (0x52cd6, "8b742418"), (0x52ce1, "56"),
    (0x52ce2, "53"), (0x52ce3, "6a01"),
    (0x52ce5, "e886391e00"), (0x52cea, "c7030000003f"),
    (0x52d10, "8906"), (0x52d12, "894e04"),
    (0x52d15, "895608"), (0x52d1b, "c20c00"),
    (0x2366d6, "d9442404"), (0x2366e2, "d91a"),
    (0x236704, "8910"), (0x236717, "8908"),
    (0x23671d, "895004"), (0x236720, "894808"),
    (0x23672d, "c20c00"), (0x236787, "d918"),
    (0x236791, "895004"), (0x236794, "894808"),
    (0x23679d, "c20c00"),
)
SOURCES = {
    "src/main_unclassified/band_0005/0x00052120.c": (
        "A9BB04FF684DF913B8D6F81E92E4D06B88773586B58567CF41746BE7570BEA45",
        "undefined1 guest_frame[0x28];",
        "get_outputs(unaff_ESI, unaff_EBX, guest_frame + 0x00, guest_frame + 0x10);",
        "get_outputs(unaff_ESI, unaff_EDI, guest_frame + 0x04, guest_frame + 0x1c);",
        "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
    ),
    "src/main_unclassified/band_0005/0x00052c90.c": (
        "7C722A7C22D357E209576DAAA96229B3BA997347E8CF2F69338A39AE91F6858D",
        "case 2:", "case 0x1a:", "case 0x1f:", "case 3:",
        "FUN_00236670(1,param_2,param_3);",
        "*param_2 = 0x3f000000;", "param_3[1] = uVar2;",
        "param_3[2] = uVar1;", "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
    ),
    "src/main_unclassified/band_0023/0x00236670.c": (
        "6C4E9FF97FAD7BC65B6785B0219EE5FFC14E999AC651A7AA2E9585D197E84496",
        "undefined4 FUN_00236670(char param_1,int *param_2,int *param_3)",
        "*param_2 = local_30;", "param_3[1] = local_20;",
        "param_3[2] = local_1c;", "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
    ),
}

def sections(data):
    if data[:4] != b"XBEH":
        raise ValueError("not an Xbox XBE")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11c)[0]
    hdr = struct.unpack_from("<I", data, 0x120)[0]
    if base != 0x10000 or not 1 <= count <= 64 or hdr < base:
        raise ValueError("invalid XBE section header")
    result = []
    for i in range(count):
        pos = hdr - base + i * 0x38
        _, va, vsize, start, fsize = struct.unpack_from("<5I", data, pos)
        if start + fsize > len(data):
            raise ValueError("section points past file")
        result.append((va, va + min(vsize, fsize), start))
    return result

def file_offset(layout, address, size=1):
    for lo, hi, start in layout:
        if lo <= address and address + size <= hi:
            return start + address - lo
    raise ValueError(f"guest address 0x{address:08x} is not raw-file-backed")

def word(data, layout, address):
    return struct.unpack_from("<I", data, file_offset(layout, address, 4))[0]

def verify_binary(data, full_digest=True):
    if full_digest and hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("original Xbox XBE digest mismatch")
    layout = sections(data)
    for va, size, expected in BODIES:
        start = file_offset(layout, va, size)
        if hashlib.sha256(data[start:start + size]).hexdigest() != expected:
            raise ValueError(f"original function body mismatch at 0x{va:08x}")
    for address, hexdigits in WINDOWS:
        needle = bytes.fromhex(hexdigits)
        start = file_offset(layout, address, len(needle))
        if data[start:start + len(needle)] != needle:
            raise ValueError(f"instruction changed at 0x{address:08x}")
    for base in VTABLES:
        if word(data, layout, base + 0x20) != METHOD:
            raise ValueError(f"vtable 0x{base:08x} slot +0x20 diverged")
    main = data[file_offset(layout, 0x12000):file_offset(layout, 0x3118af)+1]
    for base, number in ((VTABLES[0], 3), (VTABLES[1], 2)):
        if main.count(struct.pack("<I", base)) != number:
            raise ValueError(f"constructor-referenced vtable changed: 0x{base:08x}")
    candidates = []
    for lo, hi, start in layout:
        if not (0x386340 <= lo < 0x4c4780):
            continue
        blob = data[start:start+hi-lo]
        needle = struct.pack("<I", METHOD)
        at = 0
        while True:
            at = blob.find(needle, at)
            if at < 0:
                break
            if at >= 0x20:
                candidate = lo + at - 0x20
                if main.count(struct.pack("<I", candidate)):
                    candidates.append(candidate)
            at += 1
    if sorted(candidates) != list(VTABLES):
        raise ValueError(f"unexpected statically referenced target vtables: {candidates}")
    if tuple(word(data, layout, 0x52d20 + 4*i) for i in range(3)) != (
            0x52cb1, 0x52ccb, 0x52d1a):
        raise ValueError("original dispatch jump table changed")
    pos = file_offset(layout, 0x52d2c, 30)
    selectors = data[pos:pos+30]
    case_groups = {k: [i+2 for i, v in enumerate(selectors) if v == k]
                   for k in range(3)}
    expected_others = [i for i in range(2, 32) if i not in (2, 3, 26, 31)]
    if (case_groups.get(0) != [2, 26, 31] or case_groups.get(1) != [3]
            or case_groups.get(2) != expected_others):
        raise ValueError("original type-dispatch partition changed")
    for address in (0x52cc6, 0x52ce5):
        off = file_offset(layout, address, 5)
        displacement = struct.unpack_from("<i", data, off+1)[0]
        if (address + 5 + displacement) & 0xffffffff != HELPER:
            raise ValueError(f"helper call target mismatch at 0x{address:08x}")
    return len(WINDOWS)

def verify_sources(root):
    clang = shutil.which("clang")
    for relpath, markers in SOURCES.items():
        src = (root / relpath).read_text(encoding="utf-8")
        for marker in markers:
            if marker not in src:
                raise ValueError(f"{relpath}: missing source invariant: {marker}")
        if relpath.endswith("0x00052c90.c"):
            if src.count("FUN_00236670(1,param_2,param_3);") != 2:
                raise ValueError("helper is missing the flag and output arguments on a path")
            if "FUN_00236670();" in src:
                raise ValueError("argument-less helper tail call was restored")
        if clang:
            command = [clang, "-std=c11", "-fsyntax-only", "-ferror-limit=3",
                       "-Wno-implicit-function-declaration", "-Wno-int-conversion",
                       "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
                       "-Wno-int-to-pointer-cast", "-Wno-return-type",
                       "-Wno-deprecated-non-prototype", "-I", str(root/"include"),
                       str(root/relpath)]
            result = subprocess.run(command, text=True, capture_output=True)
            if result.returncode:
                raise ValueError(f"Clang C11 failed for {relpath}:\n{result.stderr}")
    print("PASS: three source identities, full helper arguments and available isolated C11 checks")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--binary-only", action="store_true")
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    if not args.binary_only:
        verify_sources(args.root)
    if args.xbe:
        data = args.xbe.read_bytes()
        count = verify_binary(data)
        print(f"PASS: authenticated XBE, three body hashes, {count} original instruction windows, "
              "two constructor-referenced vtables, type switch and helper transfers")
        if args.self_test:
            corrupted = bytearray(data)
            corrupted[file_offset(sections(data), 0x3a4768, 4)] ^= 1
            try:
                verify_binary(corrupted, full_digest=False)
            except ValueError:
                print("PASS: deliberately altered vtable rejected")
            else:
                raise AssertionError("vtable corruption was not detected")
    else:
        print("Original XBE unavailable: opcode/digest/target checks not executed")
    print("UNVERIFIED: complete dynamic vptr coverage, guest ECX linkage and native behavior")

if __name__ == "__main__":
    main()
