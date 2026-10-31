#!/usr/bin/env python3
"""Strict C++17 source and optional private-XBE checks for 13 guest ESI/stack CALL edges.

The host two-argument interface models original ESI and one pushed DWORD only.
Source syntax and authenticated opcodes do not establish Xbox C++ ABI or runtime.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE_SHA = "339dc70ade9da431a03d8964268e2b983bf89df209448a87b645006c63d4420d"
CASES = json.loads("[[\"0005bd20\",\"462ca057b536b25a633fe7f01946f9e4b51a1f9f8c9deb5b32e0b513129d8502\",115,[376150,376181],[[376136,\"8d7708\"],[376149,\"57\"],[376169,\"53\"],[376180,\"50\"]],[\"FUN_0008f6a0(static_cast<std::uint32_t>(iVar1) + 8U, static_cast<std::uint32_t>(unaff_EBX == 0 ? *(int *)(iVar1 + 4) : unaff_EBX));\",\"FUN_0008f6a0(static_cast<std::uint32_t>(iVar1) + 8U, static_cast<std::uint32_t>(*(int *)(iVar1 + 4)));\"]],[\"0005bda0\",\"9dd823447d5d1a8b4b9afd89213355c9402a8fcd14847669d53ae156abf20ac0\",117,[376298,376326],[[376287,\"8d7708\"],[376297,\"53\"],[376325,\"50\"]],[\"FUN_0008f6a0(static_cast<std::uint32_t>(iVar3) + 8U, static_cast<std::uint32_t>(*(int *)(iVar3 + 4)));\",\"FUN_0008f6a0(static_cast<std::uint32_t>(iVar3) + 8U, static_cast<std::uint32_t>(unaff_EBX));\"]],[\"0006ff00\",\"d39871ef59e3ace768a706ba3c5cd461b6cfee65bad9423f62049c57247ef177\",181,[458531,458556,458667],[[458516,\"8db0e0050000\"],[458529,\"6a00\"],[458547,\"8db744010000\"],[458555,\"53\"],[458658,\"8db3e0050000\"],[458666,\"57\"]],[\"FUN_0008f6a0(static_cast<std::uint32_t>(iVar2) + 0x5e0U, 0U);\",\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + 0x144U, static_cast<std::uint32_t>(unaff_EBX));\",\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x5e0U, static_cast<std::uint32_t>(unaff_EDI));\"]],[\"000c4e70\",\"2017fccb50819e3f413a0ca66f601adc3c3c279e67fcdf953c30cc98b27f91ca\",79,[806530,806556,806581],[[806521,\"8db334060000\"],[806529,\"57\"],[806546,\"8db33c060000\"],[806554,\"6a00\"],[806572,\"8db32c060000\"],[806580,\"57\"]],[\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x634U, static_cast<std::uint32_t>(unaff_EDI));\",\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x63cU, 0U);\",\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x62cU, static_cast<std::uint32_t>(unaff_EDI));\"]],[\"000c4ec0\",\"56d847e3168e9868e37be3334deb5b8ae977bf50e642b9e3903700f9d8403e8f\",79,[806610,806636,806661],[[806601,\"8db334060000\"],[806609,\"57\"],[806626,\"8db32c060000\"],[806634,\"6a00\"],[806652,\"8db33c060000\"],[806660,\"57\"]],[\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x634U, static_cast<std::uint32_t>(unaff_EDI));\",\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x62cU, 0U);\",\"FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x63cU, static_cast<std::uint32_t>(unaff_EDI));\"]]]")

# Exact original caller-owned ADD ESP,4 locations (the 0x5BDEA path
# performs intervening byte operations before cleaning its pushed DWORD).
CLEANUP_BY_CALL = {
    0x5bd56: 0x5bd5b, 0x5bd75: 0x5bd7a,
    0x5bdea: 0x5bdf2, 0x5be06: 0x5be0b,
    0x6ff23: 0x6ff28, 0x6ff3c: 0x6ff41, 0x6ffab: 0x6ffb0,
    0xc4e82: 0xc4e87, 0xc4e9c: 0xc4ea1, 0xc4eb5: 0xc4eba,
    0xc4ed2: 0xc4ed7, 0xc4eec: 0xc4ef1, 0xc4f05: 0xc4f0a,
}

def check_source(data, entry, digest, expected):
    if "Entry: 0x" + entry not in data:
        raise ValueError(entry + ": entry identity missing")
    if "Input x86 body SHA-256: " + digest.upper() not in data:
        raise ValueError(entry + ": original body digest changed")
    if "ABI_UNVERIFIED" not in data:
        raise ValueError(entry + ": unresolved ABI marking lost")
    if data.count("extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);") != 1:
        raise ValueError(entry + ": source-proven guest interface changed")
    calls = re.findall(r"^[ \t]+(FUN_0008f6a0\([^\n;]*\);)", data, re.M)
    if calls != expected:
        raise ValueError(entry + ": ESI/stack call order or argument changed")

def check_call(data, va):
    if len(data) != 5 or data[0] != 0xe8:
        raise ValueError("not original direct CALL at " + hex(va))
    rel = struct.unpack_from("<i", data, 1)[0]
    if (va + 5 + rel) & 0xffffffff != 0x0008f6a0:
        raise ValueError("wrong direct CALL target at " + hex(va))

def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA or data[:4] != b"XBEH":
        raise ValueError("wrong original Xbox executable SHA-256")
    if struct.unpack_from("<I", data, 0x104)[0] != 0x10000:
        raise ValueError("unexpected original XBE base")
    if struct.unpack_from("<I", data, 0x370)[0] != 0x12000:
        raise ValueError("unexpected original XBE main section VA")
    if struct.unpack_from("<I", data, 0x378)[0] != 0x2000:
        raise ValueError("unexpected original XBE main section raw offset")
    def read(va, n):
        return data[va - 0x10000:va - 0x10000 + n]
    if hashlib.sha256(read(0x8f6a0, 64)).hexdigest() != CALLEE_SHA:
        raise ValueError("original callee body digest changed")
    for va, op in ((0x8f6a0, "8b4604"), (0x8f6a6, "8b5c2408"), (0x8f6df, "c3")):
        if read(va, len(op)//2) != bytes.fromhex(op):
            raise ValueError("callee instruction mismatch")
    for entry, digest, length, calls, windows, _ in CASES:
        start = int(entry, 16)
        if hashlib.sha256(read(start, length)).hexdigest() != digest:
            raise ValueError(entry + ": original caller body SHA-256 mismatch")
        for va, op in windows:
            if read(va, len(op)//2) != bytes.fromhex(op):
                raise ValueError(entry + ": ESI producer/PUSH mismatch at " + hex(va))
        for va in calls:
            check_call(read(va, 5), va)
            if read(CLEANUP_BY_CALL[va], 3) != bytes.fromhex("83c404"):
                raise ValueError(entry + ": original caller stack cleanup mismatch")
    print("Original SHA-pinned XBE: five bodies, callee body, 13 ESI/PUSH/CALL edges PASS")

def self_test():
    entry, digest, _, calls, _, expected = CASES[0]
    good = ("Entry: 0x" + entry + "\nInput x86 body SHA-256: " + digest.upper()
            + "\nABI_UNVERIFIED\nextern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);\n"
            + "\n".join("  " + c for c in expected))
    check_source(good, entry, digest, expected)
    for bad in (good.replace(digest.upper(), "0"*64),
                good.replace("ABI_UNVERIFIED", "ABI_VERIFIED"),
                good.replace(expected[0], "FUN_0008f6a0(0, 0);")):
        try:
            check_source(bad, entry, digest, expected)
        except ValueError:
            pass
        else:
            raise AssertionError("negative source control escaped")
    va = calls[0]
    raw = bytearray(b"\xe8" + struct.pack("<i", 0x8f6a0 - va - 5))
    check_call(raw, va)
    raw[0] = 0xe9
    try:
        check_call(raw, va)
    except ValueError:
        pass
    else:
        raise AssertionError("negative opcode control escaped")
    raw[0] = 0xe8
    raw[1] ^= 1
    try:
        check_call(raw, va)
    except ValueError:
        pass
    else:
        raise AssertionError("negative CALL destination control escaped")
    print("Negative source and original-CALL mutation controls PASS")

def check_sources(root):
    clang = shutil.which("clang++")
    if not clang:
        raise RuntimeError("strict Clang++17 is required")
    for entry, digest, _, _, _, expected in CASES:
        path = root / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")
        check_source(path.read_text(encoding="utf-8"), entry, digest, expected)
        for opt in ("-O0", "-O2"):
            result = subprocess.run(
                [clang, "-std=c++17", "-fsyntax-only", opt, "-I", str(root / "include"), str(path)],
                capture_output=True, text=True, timeout=60)
            if result.returncode:
                raise RuntimeError(entry + " " + opt + " Clang++17 failed:\n" + result.stderr[-2000:])
        print(entry + ": source provenance, guest call order, Clang++17 O0/O2 PASS")
    print("Five focused syntax candidates; full exact-tree audit still required")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path)
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--self-test", action="store_true")
    args = ap.parse_args()
    if args.self_test:
        self_test()
    if args.xbe:
        check_xbe(args.xbe.read_bytes())
    else:
        print("Private XBE instruction verification unavailable in this invocation")
    if args.root:
        check_sources(args.root)
    print("Xbox object ABI, linkage, guest memory, and 1:1 behavior remain ABI_UNVERIFIED")

if __name__ == "__main__":
    main()
