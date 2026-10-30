#!/usr/bin/env python3
"""Pin 0x00257860's observed five-DWORD guest stack frame and callee writes.

Source-only checks run in CI; --xbe checks the private hash-pinned Xbox binary.
Neither path binds implicit guest EAX/ESI/EBX/EDI to a native C ABI.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLER_SHA = "7c62ab4dad70ba9af253f04b604033624fa3f47bbd8982818e9b0c2bd59689c8"
CALLEE_SHA = "f122115037f034ddd94f4bb88e7e60573a5292800c7ff7fa1deef955341723dc"
SITES = {
    0x00257860: "83ec14",
    0x00257867: "8d542408",
    0x0025786B: "5250ff5114",
    0x00257870: "8b442408",
    0x00257874: "8b4e30",
    0x00257877: "8d54240c",
    0x0025787B: "52",
    0x0025787C: "8d5e24",
    0x0025787F: "8d7c2418",
    0x00257883: "89442410",
    0x00257887: "894c2414",
    0x0025788B: "e880dbedff",
    0x00257890: "807c241801",
    0x00257899: "8b4e30",
    0x0025789C: "41",
    0x0025789F: "3dfe0f0000",
    0x002578A4: "894e30",
    0x00135413: "8b5304",
    0x00135429: "8b4c2414",
    0x00135473: "890fc6470401",
    0x001354B1: "8917c6470401",
    0x001354C1: "8907c6470400",
    0x0013547F: "c20400",
    0x001354BD: "c20400",
    0x001354CD: "c20400",
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def check_source(source):
    if "Entry: 0x00257860," not in source or "Input x86 body SHA-256: " + CALLER_SHA.upper() not in source:
        raise ValueError("Caller provenance changed")
    if "ABI_UNVERIFIED" not in source:
        raise ValueError("Unverified ABI caveat removed")
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    required = (
        "uint32_t vtable_result;", "uint32_t lookup_key[2];",
        "uint32_t result_node;", "uint8_t result_inserted;",
        "uint8_t result_unknown[3];",
        "_Static_assert(sizeof(bf_00257860_guest_frame) == 20,",
        "_Static_assert(offsetof(bf_00257860_guest_frame, lookup_key) == 4,",
        "_Static_assert(offsetof(bf_00257860_guest_frame, result_node) == 12,",
        "_Static_assert(offsetof(bf_00257860_guest_frame, result_inserted) == 16,",
        "(**(code **)(*in_EAX + 0x14))(in_EAX, &guest_frame.vtable_result);",
        "guest_frame.lookup_key[0] = guest_frame.vtable_result;",
        "guest_frame.lookup_key[1] = *(uint32_t *)(unaff_ESI + 0x30);",
        "FUN_00135410(guest_frame.lookup_key);",
        "guest_frame.result_inserted == 1",
        "*(int *)(unaff_ESI + 0x30) = iVar1",
    )
    for token in required:
        if body.count(token) != 1:
            raise ValueError("Missing or duplicated guest-frame contract: " + token)
    if re.search(r"\bstack0x[0-9a-fA-F]+\b", body):
        raise ValueError("Unresolved synthetic guest stack reference")
    if re.search(r"\bguest_frame\s*=\s*\{", body) or re.search(r"\bguest_frame\.result_inserted\s*=(?!=)", body):
        raise ValueError("Invented output initialization without guest EDI ABI")


def mapped_reader(data):
    if data[:4] != b"XBEH":
        raise ValueError("Not an Xbox XBE")
    base, = struct.unpack_from("<I", data, 0x104)
    count, table_va = struct.unpack_from("<II", data, 0x11C)
    table = table_va - base
    if not 0 < count < 128 or table < 0 or table + count * 56 > len(data):
        raise ValueError("Invalid section table")
    sections = [struct.unpack_from("<IIIII", data, table + i * 56) for i in range(count)]

    def read(va, size):
        for _, start, vsize, raw, rsize in sections:
            if start <= va and va + size <= start + min(vsize, rsize):
                off = raw + va - start
                if off + size <= len(data):
                    return data[off:off + size]
        raise ValueError("Unmapped original VA: " + hex(va))
    return read


def check_sites(read):
    for va, encoded in SITES.items():
        if read(va, len(encoded) // 2) != bytes.fromhex(encoded):
            raise ValueError("Original instruction mismatch at " + hex(va))
    disp, = struct.unpack("<i", read(0x0025788C, 4))
    if 0x00257890 + disp != 0x00135410:
        raise ValueError("Original direct call target changed")


def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("Original Xbox XBE SHA-256 mismatch")
    read = mapped_reader(data)
    for start, end, digest in ((0x00257860, 0x002578B8, CALLER_SHA),
                               (0x00135410, 0x001354D0, CALLEE_SHA)):
        if hashlib.sha256(read(start, end - start)).hexdigest() != digest:
            raise ValueError("Original body digest mismatch at " + hex(start))
    check_sites(read)
    changed = bytearray(data)
    original = read(0x00257883, 4)
    offset = data.find(original, 0x00257883 - 0x10000, 0x00257883 - 0x10000 + 4)
    if offset < 0:
        raise ValueError("Could not locate opcode for negative control")
    changed[offset] ^= 1
    try:
        check_sites(mapped_reader(changed))
    except ValueError:
        pass
    else:
        raise ValueError("Corrupted instruction was accepted")


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    root = args.root.resolve()
    source = (root / "src/main_unclassified/band_0025/0x00257860.c").read_text()
    check_source(source)
    mutations = (
        ("lookup_key[2]", "lookup_key[1]"),
        ("result_inserted) == 16", "result_inserted) == 12"),
        ("guest_frame.lookup_key[1] = *(uint32_t *)(unaff_ESI + 0x30);",
         "guest_frame.lookup_key[1] = guest_frame.vtable_result;"),
        ("FUN_00135410(guest_frame.lookup_key);", "FUN_00135410(guest_frame.lookup_key + 1);"),
        ("guest_frame.result_inserted == 1", "guest_frame.result_inserted == 0"),
    )
    for old, new in mutations:
        altered = source.replace(old, new)
        if altered == source:
            raise ValueError("Negative test did not mutate source: " + old)
        try:
            check_source(altered)
        except ValueError:
            pass
        else:
            raise ValueError("Invalid guest-frame mutation accepted: " + old)
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    for opt in ("-O0", "-O2"):
        result = subprocess.run((clang, *FLAGS, opt, "-I", str(root / "include"),
                                 str(root / "src/main_unclassified/band_0025/0x00257860.c")),
                                capture_output=True, text=True, timeout=60)
        if result.returncode:
            raise ValueError("Clang " + opt + " failed: " + result.stderr[-2000:])
    if args.xbe:
        check_xbe(args.xbe.read_bytes())
    print("PASS: 0x00257860 five-DWORD guest frame, original callee writes, "
          "negative controls, Clang -O0/-O2; original XBE " +
          ("verified" if args.xbe else "not supplied") +
          "; guest register ABI/runtime unverified")


if __name__ == "__main__":
    main()
