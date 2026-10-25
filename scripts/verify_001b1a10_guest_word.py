#!/usr/bin/env python3
"""Check 0x001B1A10's sixth guest stack word and the original call edge.

--xbe enables hash-pinned instruction checks; CI intentionally runs source
and Clang checks without redistributing the copyrighted Xbox executable.
Neither mode proves native guest32 ABI or runtime equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
EXPORT_BODY_SHA = "510E9FD864919E45E6F3253AE370CF75E4DDF6E26ED8C1DFDB4E6A9C2F41B652"
SITES = {
    0x001B1A10: "51", 0x001B1A11: "56", 0x001B1A19: "57",
    0x001B1A3C: "8d542410", 0x001B1A4D: "e8fe4f0000",
    0x001B1A7D: "e87e4f0000", 0x001B1A82: "8b442424",
    0x001B1A86: "85c0", 0x001B1A88: "7409",
    0x001B1A8A: "50", 0x001B1A8B: "e888851300",
    0x001B1A90: "83c404", 0x001B1A93: "5f",
    0x001B1A94: "5e", 0x001B1A95: "59", 0x001B1A96: "c22000",
    0x002EA018: "e9d3dbd7ff", 0x00067BF0: "ff2554c63b00",
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")


def check_source(s):
    if ("Entry: 0x001b1a10," not in s or
            "Input x86 body SHA-256: " + EXPORT_BODY_SHA not in s or
            "ABI_UNVERIFIED" not in s):
        raise ValueError("Missing original export identity / ABI caveat")
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)
    for token in (
        "word_04, word_08, word_0c, word_10;",
        "word_14, word_18, word_1c, word_20;",
        "_Static_assert(sizeof(bf_001b1a10_guest_words) == 32,",
        "_Static_assert(offsetof(bf_001b1a10_guest_words, word_18) == 20,",
        "if (guest_words.word_18 != 0)",
        "thunk_FUN_00237ec0(guest_words.word_18);",
    ):
        if code.count(token) != 1:
            raise ValueError("Changed guest stack contract: " + token)
    if re.search(r"\bin_stack_00000018\b|\bstack0x00000018\b", code):
        raise ValueError("Synthetic guest argument remains")


def xbe_reader(data):
    if data[:4] != b"XBEH":
        raise ValueError("Not an XBE")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table_va = struct.unpack_from("<II", data, 0x11c)
    table = table_va - base
    if not 0 < count < 128 or table < 0 or table + count * 56 > len(data):
        raise ValueError("Invalid XBE section table")
    sections = [struct.unpack_from("<IIIII", data, table + i * 56)
                for i in range(count)]

    def read(va, size):
        for _, start, vsize, raw, rsize in sections:
            if start <= va and va + size <= start + min(vsize, rsize):
                off = raw + va - start
                if off + size <= len(data):
                    return data[off:off + size]
        raise ValueError("Unmapped XBE address " + hex(va))
    return read


def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("Wrong original retail XBE")
    read = xbe_reader(data)
    for va, op in SITES.items():
        if read(va, len(op)//2) != bytes.fromhex(op):
            raise ValueError("Original instruction mismatch at " + hex(va))
    for call, target in ((0x001B1A4D, 0x001B6A50),
                         (0x001B1A7D, 0x001B6A00),
                         (0x001B1A8B, 0x002EA018)):
        disp = struct.unpack("<i", read(call + 1, 4))[0]
        if call + 5 + disp != target:
            raise ValueError("Direct call edge mismatch " + hex(call))
    if 0x002EA01D + struct.unpack("<i", read(0x002EA019, 4))[0] != 0x00067BF0:
        raise ValueError("Thunk jump edge mismatch")
    # A wrong opcode must fail independently of the whole-file hash.
    changed = bytearray(data)
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table_va = struct.unpack_from("<II", data, 0x11c)
    for i in range(count):
        _, start, vsize, raw, rsize = struct.unpack_from(
            "<IIIII", data, table_va-base+i*56)
        if start <= 0x001B1A82 < start + min(vsize, rsize):
            changed[raw + 0x001B1A82 - start] ^= 1
            break
    else:
        raise ValueError("Mutation address unmapped")
    if xbe_reader(changed)(0x001B1A82, 4) == bytes.fromhex(SITES[0x001B1A82]):
        raise ValueError("XBE negative control failed")


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    a = p.parse_args()
    root = a.root.resolve()
    source_path = root / "src/main_unclassified/band_001b/0x001b1a10.c"
    source = source_path.read_text(encoding="utf-8")
    check_source(source)
    for before, after in (
        ("thunk_FUN_00237ec0(guest_words.word_18);",
         "thunk_FUN_00237ec0(guest_words.word_14);"),
        ("thunk_FUN_00237ec0(guest_words.word_18);",
         "thunk_FUN_00237ec0(&guest_words.word_18);"),
        ("if (guest_words.word_18 != 0)", "if (guest_words.word_18 == 0)"),
        ("word_18) == 20,", "word_18) == 16,"),
    ):
        mutated = source.replace(before, after)
        if mutated == source:
            raise ValueError("Source negative control did not mutate")
        try:
            check_source(mutated)
        except ValueError:
            pass
        else:
            raise ValueError("Invalid source mutation accepted")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang unavailable")
    for opt in ("-O0", "-O2"):
        result = subprocess.run(
            [clang, *FLAGS, opt, "-I", str(root/"include"), str(source_path)],
            capture_output=True, text=True, timeout=60)
        if result.returncode:
            raise ValueError(f"Clang {opt} failed:\n{result.stderr[-2400:]}")
    if a.xbe:
        check_xbe(a.xbe.read_bytes())
    print("PASS 0x001B1A10: 18 XBE instruction sites, three call edges, "
          "sixth guest stack word, negative controls, Clang O0/O2; XBE " +
          ("verified" if a.xbe else "not supplied") +
          "; guest32 ABI, indirect thunk dispatch, runtime UNVERIFIED")


if __name__ == "__main__":
    main()
