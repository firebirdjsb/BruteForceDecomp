#!/usr/bin/env python3
"""Verify two XOnline 2000-byte guest scratch frames, with optional pinned XBE.

Source/Clang checks alone are NOT proof of guest-ESP identity, full call ABI,
or native Xbox compatibility. The original XBE must stay outside Git.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
FUNCTIONS = (
    ("src/platform/online_xonline/0x0034031b.c",
     "0556EF64586748BAB5C2485EBB701AA9AB732DAC67764A4725E1960E7BD166E3",
     0x34031B, 364, "puVar4", "stack0xffffff9c", "0x1c"),
    ("src/platform/online_xonline/0x00341a1c.c",
     "DD5D43CCF5723786535D151997321009C7DC22F201F2AEF1269648A711953316",
     0x341A1C, 273, "puVar3", "stack0xffffff8c", "0x18"),
)
WINDOWS = {
    0x340326: "b8d0070000", 0x340333: "e868bbfaff",
    0x340338: "8bfc", 0x340351: "b9f4010000",
    0x340356: "f3ab", 0x340484: "c21c00",
    0x341A27: "b8d0070000", 0x341A35: "e866a4faff",
    0x341A42: "8bfc", 0x341A51: "b9f4010000",
    0x341A62: "f3ab", 0x341B2A: "c21800",
}

def source_contract(source, record):
    path, digest, entry, size, pointer, alias, cleanup = record
    required = (
        "Entry: 0x%08x" % entry,
        "Input x86 body SHA-256: " + digest,
        "undefined4 guest_stack_words[500];",
        pointer + " = guest_stack_words;",
        "FUN_002ebea0();",
        "for (iVar1 = 500;" if pointer == "puVar4" else "for (iVar2 = 500;",
        "RET " + cleanup + " cleanup",
        "ABI_UNVERIFIED",
    )
    for token in required:
        if source.count(token) != 1:
            raise AssertionError(path + ": missing/duplicated contract " + token)
    if "&" + alias in source:
        raise AssertionError(path + ": unresolved guest-stack alias")
    return required

def source_checks(root):
    for record in FUNCTIONS:
        source = (root / record[0]).read_text(encoding="utf-8")
        required = source_contract(source, record)
        for token in required[2:7]:
            broken = source.replace(token, "BROKEN_CONTRACT", 1)
            try:
                source_contract(broken, record)
            except AssertionError:
                pass
            else:
                raise AssertionError("negative control accepted " + token)

def xbe_bytes(data, va, length):
    if data[:4] != b"XBEH":
        raise AssertionError("not an XBE")
    base, count, table = (struct.unpack_from("<I", data, off)[0]
                          for off in (0x104, 0x11c, 0x120))
    if not 1 <= count <= 128:
        raise AssertionError("invalid section count")
    for index in range(count):
        offset = table - base + index * 0x38
        if offset < 0 or offset + 20 > len(data):
            raise AssertionError("invalid section header")
        _, addr, virtual_size, raw, raw_size = struct.unpack_from("<IIIII", data, offset)
        if addr <= va and va + length <= addr + min(virtual_size, raw_size):
            position = raw + va - addr
            if position + length > len(data):
                raise AssertionError("invalid original section range")
            return data[position:position + length]
    raise AssertionError("unmapped original VA: " + hex(va))

def xbe_checks(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise AssertionError("original XBE SHA-256 mismatch")
    for _, digest, entry, size, *_ in FUNCTIONS:
        actual = hashlib.sha256(xbe_bytes(data, entry, size)).hexdigest().upper()
        if actual != digest:
            raise AssertionError("original body digest mismatch at " + hex(entry))
    for va, raw in WINDOWS.items():
        expected = bytes.fromhex(raw)
        if xbe_bytes(data, va, len(expected)) != expected:
            raise AssertionError("original instruction mismatch at " + hex(va))
    print("PASS: pinned original XBE, two complete bodies, 12 instruction windows")

MODEL = r"""
#include <assert.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
struct Frame { uint32_t before; uint32_t words[500]; uint32_t after; };
_Static_assert(sizeof(((struct Frame *)0)->words) == 0x7d0, "guest scratch width");
static void zero_words(uint32_t *p) {
    for (int i = 500; i != 0; --i) { *p = 0; ++p; }
}
int main(void) {
    struct Frame frame;
    frame.before = UINT32_C(0xa5a5a5a5);
    frame.after = UINT32_C(0x5a5a5a5a);
    memset(frame.words, 0xff, sizeof frame.words);
    zero_words(frame.words);
    assert(frame.before == UINT32_C(0xa5a5a5a5));
    assert(frame.after == UINT32_C(0x5a5a5a5a));
    for (size_t i = 0; i < 500; ++i) assert(frame.words[i] == 0);
    return 0;
}
"""

def clang_checks(root):
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    flags = ("-std=c11", "-fsyntax-only", "-ferror-limit=5",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype")
    for record in FUNCTIONS:
        subprocess.run([clang, *flags, "-I", str(root / "include"),
                        str(root / record[0])],
                       check=True, capture_output=True, text=True)
    with tempfile.TemporaryDirectory() as td:
        model = Path(td) / "scratch.c"
        model.write_text(MODEL, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            exe = Path(td) / ("scratch_" + opt[1:])
            subprocess.run([clang, "-std=c11", "-Wall", "-Wextra",
                            "-Werror", "-pedantic-errors", opt,
                            str(model), "-o", str(exe)],
                           check=True, capture_output=True, text=True)
            subprocess.run([str(exe)], check=True, capture_output=True, text=True)
    print("PASS: isolated Clang C11, 2000-byte guarded scratch at O0/O2, negative controls")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="user-owned original XBE (never in public CI)")
    args = parser.parse_args()
    source_checks(args.root)
    clang_checks(args.root)
    if args.xbe:
        xbe_checks(args.xbe)
    else:
        print("Original instruction verification unavailable in public CI (no XBE)")
    print("PASS: narrow stack scratch storage only; guest ESP/call ABI/native runtime unverified")

if __name__ == "__main__":
    main()
