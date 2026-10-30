#!/usr/bin/env python3
"""XOnline/XNet partial DWORD source checks; optional original-XBE evidence."""

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
import shutil
import struct
import subprocess
import tempfile

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODIES = {
    0x331B13: (677, "C202D91CBF2402877CEA14C0239CE6292F80892174739B9F4C86082DFBF448D7"),
    0x3498BE: (731, "1B363FCE64CAE85744EFF7DCC02FC5894023C032474EBF9BFDC444CAC4D09EA3"),
}
WINDOWS = {
    0x331C86: "88540d9c", 0x331C8B: "83f90c",
    0x331C90: "c645a539", 0x331C94: "c645a439",
    0x349904: "8945fc", 0x34998A: "8d45fc",
    0x349AA2: "ff1568633800", 0x349AA8: "8845fc",
}
SOURCES = {
    "src/platform/online_xonline/0x00331b13.c": [
        "Entry: 0x00331b13", "Input x86 body SHA-256: " + BODIES[0x331B13][1],
        "local_60 = (local_60 & UINT32_C(0xFFFF00FF)) | UINT32_C(0x00003900);",
        "local_60 = (local_60 & UINT32_C(0xFFFFFF00)) | UINT32_C(0x00000039);",
    ],
    "src/platform/network_xnet/0x003498be.c": [
        "Entry: 0x003498be", "Input x86 body SHA-256: " + BODIES[0x3498BE][1],
        "uint32_t local_8;",
        "local_8 = (local_8 & UINT32_C(0xFFFFFF00)) | (uint32_t)uVar4;",
    ],
}

def source_contract(source, required):
    for item in required:
        if source.count(item) != 1:
            raise ValueError("source contract missing/duplicated: " + item)
    for bad in ("local_60._2_2_", "local_60._1_3_", "local_8._1_3_"):
        if bad in source:
            raise ValueError("invalid Ghidra pseudo-field: " + bad)

def check_source(root):
    for path, required in SOURCES.items():
        source = (root / path).read_text(encoding="utf-8")
        source_contract(source, required)
        for item in required[2:]:
            try:
                source_contract(source.replace(item, "BROKEN_WRITE", 1), required)
            except ValueError:
                pass
            else:
                raise ValueError("negative control accepted: " + item)

def va_bytes(data, va, size):
    if data[:4] != b"XBEH":
        raise ValueError("not an XBE")
    base, count, table = (struct.unpack_from("<I", data, p)[0] for p in (0x104, 0x11c, 0x120))
    if not 1 <= count <= 128:
        raise ValueError("invalid section count")
    for i in range(count):
        p = table - base + 0x38 * i
        if p < 0 or p + 20 > len(data):
            raise ValueError("invalid section table")
        _, addr, vsize, raw, rsize = struct.unpack_from("<IIIII", data, p)
        if addr <= va and va + size <= addr + min(vsize, rsize):
            at = raw + va - addr
            if at + size > len(data):
                raise ValueError("raw section out of bounds")
            return data[at:at + size]
    raise ValueError("VA outside raw XBE sections: " + hex(va))

def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError("original user XBE SHA mismatch")
    for va, (length, digest) in BODIES.items():
        if hashlib.sha256(va_bytes(data, va, length)).hexdigest().upper() != digest:
            raise ValueError("original body digest mismatch: " + hex(va))
    for va, raw in WINDOWS.items():
        b = bytes.fromhex(raw)
        if va_bytes(data, va, len(b)) != b:
            raise ValueError("original opcode mismatch: " + hex(va))
    print("PASS: original XBE, two body hashes and eight x86 windows")

def check_clang(root):
    clang = shutil.which("clang")
    if not clang:
        raise ValueError("Clang required")
    flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=3",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype"]
    for path in SOURCES:
        subprocess.run([clang, *flags, "-I", str(root / "include"), str(root / path)],
                       check=True, capture_output=True, text=True)
    model = r"""
#include <stdint.h>
#include <assert.h>
static uint32_t online(uint32_t w) {
    w = (w & UINT32_C(0xFFFF00FF)) | UINT32_C(0x00003900);
    w = (w & UINT32_C(0xFFFFFF00)) | UINT32_C(0x00000039);
    return w;
}
static uint32_t net(uint32_t w, uint8_t al) {
    return (w & UINT32_C(0xFFFFFF00)) | (uint32_t)al;
}
int main(void) {
    const uint32_t words[] = {0, UINT32_MAX, 0x12345678u, 0xABCD00FFu};
    for (unsigned i=0; i<sizeof words/sizeof words[0]; ++i) {
        uint32_t w=words[i];
        assert(online(w) == ((w & 0xFFFF0000u) | 0x3939u));
        for (unsigned b=0; b<256; ++b)
            assert(net(w,(uint8_t)b) == ((w & 0xFFFFFF00u) | b));
    }
    uint32_t first = (0x12345678u & UINT32_C(0xFFFF00FF)) | 0x3900u;
    assert(first == 0x12343978u);
    assert(first != 0x12343900u);
    assert(net(0x12345678u,0xAAu) != 0x123400AAu);
    return 0;
}
"""
    with tempfile.TemporaryDirectory() as td:
        path = Path(td) / "partial.c"
        path.write_text(model)
        for opt in ("-O0", "-O2"):
            exe = Path(td) / ("partial" + opt[1:])
            subprocess.run([clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                            "-pedantic-errors", opt, str(path), "-o", str(exe)],
                           check=True, capture_output=True, text=True)
            subprocess.run([str(exe)], check=True, capture_output=True, text=True)
    print("PASS: two isolated source Clang C11 checks, O0/O2 word tests, negative controls")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path, help="user-owned original XBE; never uploaded to CI")
    args = ap.parse_args()
    check_source(args.root)
    check_clang(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("XBE unavailable to CI; source-only checks do not reverify instructions")
    print("PASS: limited guest partial-write semantics; full ABI/native runtime unverified")

if __name__ == "__main__":
    main()
