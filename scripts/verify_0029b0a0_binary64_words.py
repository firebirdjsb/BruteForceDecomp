#!/usr/bin/env python3
"""Verify the 0x0029B0A0 binary64 guest-stack word split, not its full ABI.

The original XBE is intentionally optional so public CI can check the C11
source without redistributing the game. An XBE-backed pass also pins the
complete caller/callee bodies and the observed x86 stack-word instructions.
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
from tempfile import TemporaryDirectory

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODIES = {
    (0x0029B0A0, 515): "29E372081A4F5AC1FD59AF07551BB6A4477B7D62C71FC6E4DCA7304DB0992E61",
    (0x00299780, 172): "DF9C7F35659E309975FB0C8CFD382E582D586AE6754F4D3AC32143D8E12C985A",
}
SITES = {
    0x0029B0FD: "8b4614",       # original binary64 high DWORD
    0x0029B100: "8b5610",       # original binary64 low DWORD
    0x0029B103: "89442414",     # high to guest local slot
    0x0029B109: "89542410",     # low to guest local slot
    0x0029B115: "8b4f50",       # pending unary minus count
    0x0029B11C: "837c8ffc01",   # original unary minus marker
    0x0029B123: "83f85e",       # do not negate for '^'
    0x0029B128: "dd442410",     # FLD qword [esp+0x10]
    0x0029B12D: "d9e0",         # FCHS
    0x0029B132: "dd5c2410",     # FSTP qword [esp+0x10]
    0x0029B136: "8b4c2414",     # load high DWORD
    0x0029B13A: "8b542410",     # load low DWORD
    0x0029B13E: "51",           # PUSH high DWORD first
    0x0029B13F: "52",           # PUSH low DWORD second
    0x0029B140: "e83be6ffff",   # CALL 0x00299780
    0x0029B145: "83c408",       # caller removes two DWORDs
    0x00299780: "dd442404",     # callee FLD qword [esp+4]
}
SOURCE = "src/main_unclassified/band_0029/0x0029b0a0.c"
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")
REQUIRED = (
    "double local_58;",
    "uint64_t guest_binary64_bits;",
    "_Static_assert(sizeof(double) == sizeof(uint64_t) && FLT_RADIX == 2 &&",
    "DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024,",
    "local_58 = *(double *)(in_ECX + 0x10);",
    "local_58 = -local_58;",
    "memcpy(&guest_binary64_bits, &local_58, sizeof guest_binary64_bits);",
    "FUN_00299780((uint32_t)guest_binary64_bits,",
    "(uint32_t)(guest_binary64_bits >> 32));",
)


def check_source(source):
    for marker in ("Entry: 0x0029b0a0,", "Input x86 body SHA-256: " + BODIES[(0x0029B0A0, 515)], "ABI_UNVERIFIED"):
        if marker not in source:
            raise ValueError("Original identity/uncertainty missing: " + marker)
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for token in REQUIRED:
        if code.count(token) != 1:
            raise ValueError("Binary64 source contract missing or duplicated: " + token)
    for token in ("local_58._4_4_", "undefined8 local_58;", "FUN_00299780((undefined4)local_58"):
        if token in code:
            raise ValueError("Stale Ghidra scalar/word conversion: " + token)


def check_source_mutations(source):
    mutations = (
        ("double local_58;", "uint64_t local_58;"),
        ("local_58 = -local_58;", "local_58 = +local_58;"),
        ("(guest_binary64_bits >> 32)", "(guest_binary64_bits >> 31)"),
        ("FUN_00299780((uint32_t)guest_binary64_bits,", "FUN_00299780((uint32_t)(guest_binary64_bits >> 32),"),
        ("memcpy(&guest_binary64_bits,", "memset(&guest_binary64_bits,"),
        ("DBL_MANT_DIG == 53", "DBL_MANT_DIG == 24"),
    )
    for before, after in mutations:
        changed = source.replace(before, after, 1)
        if changed == source:
            raise ValueError("Negative control did not mutate: " + before)
        try:
            check_source(changed)
        except ValueError:
            continue
        raise ValueError("Incorrect source mutation accepted: " + before)


def xbe_reader(data):
    if data[:4] != b"XBEH":
        raise ValueError("Not an XBE")
    base, = struct.unpack_from("<I", data, 0x104)
    count, table_va = struct.unpack_from("<II", data, 0x11C)
    table = table_va - base
    if not 0 < count < 128 or not 0 <= table <= len(data) - count * 56:
        raise ValueError("Invalid XBE section table")
    sections = [struct.unpack_from("<IIIII", data, table + i * 56) for i in range(count)]

    def read(va, size):
        for _, start, virtual_size, raw, raw_size in sections:
            offset = va - start
            if 0 <= offset and offset + size <= min(virtual_size, raw_size):
                file_offset = raw + offset
                if file_offset + size <= len(data):
                    return data[file_offset:file_offset + size]
        raise ValueError(f"Unmapped original XBE address: 0x{va:08X}")
    return read


def check_xbe(data):
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError("Original retail XBE SHA-256 mismatch")
    read = xbe_reader(data)
    for (va, size), digest in BODIES.items():
        if hashlib.sha256(read(va, size)).hexdigest().upper() != digest:
            raise ValueError(f"Original body digest mismatch at 0x{va:08X}")
    for va, op in SITES.items():
        if read(va, len(op) // 2) != bytes.fromhex(op):
            raise ValueError(f"Original instruction mismatch at 0x{va:08X}")
    displacement, = struct.unpack("<i", read(0x0029B141, 4))
    if 0x0029B145 + displacement != 0x00299780:
        raise ValueError("Original direct-call target mismatch")
    # Fingerprint rejection is independently tested, not just whole-XBE hash.
    corrupted = bytearray(data)
    base, = struct.unpack_from("<I", data, 0x104)
    count, table_va = struct.unpack_from("<II", data, 0x11C)
    for i in range(count):
        _, start, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, table_va-base+i*56)
        if start <= 0x0029B13F < start + min(virtual_size, raw_size):
            corrupted[raw + 0x0029B13F - start] ^= 1
            break
    else:
        raise ValueError("Cannot mutate original CALL argument push")
    if xbe_reader(corrupted)(0x0029B13F, 1) == bytes.fromhex(SITES[0x0029B13F]):
        raise ValueError("XBE negative control failed")


def check_c11(root):
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang is required")
    for opt in ("-O0", "-O2"):
        result = subprocess.run((clang, *FLAGS, opt, "-I", str(root / "include"), str(root / SOURCE)),
                                capture_output=True, text=True, timeout=60)
        if result.returncode:
            raise RuntimeError(f"Clang {opt} failed:\n{result.stderr[-3000:]}")
    # Host word extraction only; not a differential x87 or Xbox runtime test.
    harness = r'''
#include <stdint.h>
#include <string.h>
#include <float.h>
_Static_assert(sizeof(double) == 8 && FLT_RADIX == 2 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024, "binary64");
int main(void) {
  static const uint64_t cases[] = {0, UINT64_C(0x8000000000000000), UINT64_C(0x3ff0000000000000),
                                   UINT64_C(0xbff8000000000000), UINT64_C(0x7ff0000000000000),
                                   UINT64_C(0x7ff8000000001234)};
  for (unsigned i = 0; i < sizeof(cases)/sizeof(cases[0]); ++i) {
    double value;
    uint64_t word;
    memcpy(&value, &cases[i], sizeof value);
    memcpy(&word, &value, sizeof word);
    uint32_t low = (uint32_t)word, high = (uint32_t)(word >> 32);
    if (low != (uint32_t)cases[i] || high != (uint32_t)(cases[i] >> 32)) return 1;
  }
  return 0;
}
'''
    with TemporaryDirectory() as folder:
        src, exe = Path(folder) / "binary64.c", Path(folder) / "binary64"
        src.write_text(harness, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            built = subprocess.run((clang, "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic-errors", opt,
                                    str(src), "-o", str(exe)), capture_output=True, text=True, timeout=60)
            if built.returncode:
                raise RuntimeError(f"Host binary64 harness compile {opt} failed:\n{built.stderr[-3000:]}")
            ran = subprocess.run((str(exe),), capture_output=True, text=True, timeout=60)
            if ran.returncode:
                raise RuntimeError(f"Host binary64 word extraction failed at {opt}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="original, hash-pinned retail default.xbe")
    args = parser.parse_args()
    root = args.root.resolve()
    source = (root / SOURCE).read_text(encoding="utf-8")
    check_source(source)
    check_source_mutations(source)
    check_c11(root)
    if args.xbe:
        check_xbe(args.xbe.read_bytes())
    print(f"PASS: 0x0029B0A0 binary64 split, six source mutations, Clang O0/O2, "
          f"six host word patterns; original XBE " +
          (f"verified ({len(SITES)} opcode sites, two body digests, direct call)" if args.xbe else "not supplied"))
    print("LIMITATION: guest EAX/ECX register ABI, x87 exception/NaN behavior, "
          "cross-function native linkage and runtime equivalence unverified")


if __name__ == "__main__":
    main()
