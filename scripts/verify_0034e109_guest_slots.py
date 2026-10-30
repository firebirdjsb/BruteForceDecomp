#!/usr/bin/env python3
"""Verify XNet 0x0034E109 guest byte lanes and optional original-XBE evidence."""

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
BODY_SHA = "CB4830B3F5D9DC68B119B4963A3B8EE40802FDC61F0665BD043A5C073C29F0F8"
SOURCE = Path("src/platform/network_xnet/0x0034e109.c")
WINDOWS = {
    0x34E115: "80a5f8feffff00", 0x34E11C: "894dfc",
    0x34E16E: "8d45f8", 0x34E172: "ff3518643800",
    0x34E1C3: "05b0080000", 0x34E1C8: "8945f8",
    0x34E1D3: "0fc101", 0x34E1EF: "c74310e1e03400",
    0x34E205: "ff1568633800", 0x34E20B: "8845f8",
    0x34E22B: "8a4df8", 0x34E22E: "ff1574633800",
    0x34E23A: "c20c00",
}
REQUIRED = (
    "Entry: 0x0034e109", "Input x86 body SHA-256: " + BODY_SHA,
    "uint32_t local_c;", "((uint8_t *)local_10c)[0] = 0;",
    "ObReferenceObjectByHandle(param_2,ExEventObjectType_exref,&local_c)",
    "local_c = (uint32_t)(local_8 + 0x8b0);",
    "puVar5[4] = UINT32_C(0x0034e0e1);",
    "local_c = (local_c & UINT32_C(0xffffff00)) | (uint32_t)uVar1;",
    "KfLowerIrql((uint8_t)local_c);",
)

def source_contract(source):
    for part in REQUIRED:
        if source.count(part) != 1:
            raise AssertionError("missing/duplicated source contract: " + part)
    for part in ("local_10c[0]._0_1_", "local_c._1_3_", "&LAB_0034e0e1"):
        if part in source:
            raise AssertionError("unrepaired pseudo-field: " + part)

def source_checks(root):
    source = (root / SOURCE).read_text(encoding="utf-8")
    source_contract(source)
    for part in REQUIRED[3:]:
        try:
            source_contract(source.replace(part, "BROKEN_CONTRACT", 1))
        except AssertionError:
            pass
        else:
            raise AssertionError("negative control accepted: " + part)

def xbe_bytes(data, va, size):
    if data[:4] != b"XBEH":
        raise ValueError("not an XBE")
    base, n, table = (struct.unpack_from("<I", data, p)[0] for p in (0x104, 0x11c, 0x120))
    if not 1 <= n <= 128:
        raise ValueError("invalid section count")
    for i in range(n):
        p = table - base + i * 0x38
        if p < 0 or p + 20 > len(data):
            raise ValueError("invalid section table")
        _, addr, vsize, raw, rsize = struct.unpack_from("<IIIII", data, p)
        if addr <= va and va + size <= addr + min(vsize, rsize):
            offset = raw + va - addr
            if offset + size > len(data):
                raise ValueError("invalid section range")
            return data[offset:offset + size]
    raise ValueError("unmapped original guest VA: " + hex(va))

def xbe_checks(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise AssertionError("original XBE SHA-256 mismatch")
    if hashlib.sha256(xbe_bytes(data, 0x34E109, 308)).hexdigest().upper() != BODY_SHA:
        raise AssertionError("original function-body hash mismatch")
    for va, raw in WINDOWS.items():
        expected = bytes.fromhex(raw)
        if xbe_bytes(data, va, len(expected)) != expected:
            raise AssertionError("original opcode mismatch: " + hex(va))
    print("PASS: original XBE, full function body and 13 opcode windows")

def clang_checks(root):
    clang = shutil.which("clang")
    if clang is None:
        raise RuntimeError("Clang required")
    flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=5",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype"]
    subprocess.run([clang, *flags, "-I", str(root / "include"), str(root / SOURCE)],
                   check=True, capture_output=True, text=True)
    model = """
#include <stdint.h>
#include <assert.h>
static uint32_t store(uint32_t w, uint8_t b) {
    return (w & UINT32_C(0xffffff00)) | (uint32_t)b;
}
int main(void) {
    const uint32_t words[] = {0u, UINT32_MAX, UINT32_C(0x12345678), UINT32_C(0xabcd00ff)};
    for (unsigned i = 0; i < sizeof words / sizeof words[0]; ++i) {
        uint32_t w = words[i];
        for (unsigned b = 0; b < 256; ++b) {
            uint32_t out = store(w, (uint8_t)b);
            assert((out & UINT32_C(0xffffff00)) == (w & UINT32_C(0xffffff00)));
            assert((uint8_t)out == (uint8_t)b);
        }
    }
    assert(store(UINT32_C(0x12345678), 0xa5u) == UINT32_C(0x123456a5));
    assert(store(UINT32_C(0x12345678), 0xa5u) != UINT32_C(0x000000a5));
    return 0;
}
"""
    with tempfile.TemporaryDirectory() as td:
        path = Path(td) / "guest_words.c"
        path.write_text(model, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            exe = Path(td) / ("model" + opt[1:])
            subprocess.run([clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                            "-pedantic-errors", opt, str(path), "-o", str(exe)],
                           check=True, capture_output=True, text=True)
            subprocess.run([str(exe)], check=True, capture_output=True, text=True)
    print("PASS: isolated Clang C11, O0/O2 word tests and negative controls")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="user-owned original XBE, never checked into CI")
    args = parser.parse_args()
    source_checks(args.root)
    clang_checks(args.root)
    if args.xbe:
        xbe_checks(args.xbe)
    else:
        print("CI has no original XBE; opcode verification unavailable in CI")
    print("PASS: narrow guest storage checks only; kernel ABI/native runtime unverified")

if __name__ == "__main__":
    main()
