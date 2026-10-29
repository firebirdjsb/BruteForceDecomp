#!/usr/bin/env python3
"""Actual-source host storage fixtures; not original-Xbox differential tests."""
import argparse
import ctypes
import platform
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile


def allocate_low_buffer():
    size = 0x10000
    if sys.platform == "win32":
        api = ctypes.WinDLL("kernel32", use_last_error=True)
        api.VirtualAlloc.argtypes = [ctypes.c_void_p, ctypes.c_size_t,
                                     ctypes.c_uint32, ctypes.c_uint32]
        api.VirtualAlloc.restype = ctypes.c_void_p
        api.VirtualFree.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_uint32]
        api.VirtualFree.restype = ctypes.c_int
        base = api.VirtualAlloc(0x18000000, size, 0x3000, 4)

        def release():
            if not api.VirtualFree(base, 0, 0x8000):
                raise ctypes.WinError(ctypes.get_last_error())
    elif sys.platform.startswith("linux"):
        api = ctypes.CDLL(None, use_errno=True)
        api.mmap.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_int,
                             ctypes.c_int, ctypes.c_int, ctypes.c_long]
        api.mmap.restype = ctypes.c_void_p
        api.munmap.argtypes = [ctypes.c_void_p, ctypes.c_size_t]
        api.munmap.restype = ctypes.c_int
        # MAP_32BIT requests a genuine low-address mapping on Linux x86-64.
        # The former 0x18000000 hint could silently return an address above
        # 4 GiB under ASLR, making unrelated tests fail before the C11 sweep.
        # MAP_32BIT is x86-64 specific; retain the safe hint on other hosts.
        # Never use MAP_FIXED (which could overwrite a live mapping).
        flags = 0x22 | (0x40 if platform.machine().lower() in ("x86_64", "amd64") else 0)
        base = api.mmap(0x18000000, size, 3, flags, -1, 0)
        if base == ctypes.c_void_p(-1).value:
            base = None

        def release():
            if api.munmap(base, size):
                raise OSError(ctypes.get_errno(), "munmap fixture")
    else:
        raise RuntimeError("This low-address host fixture supports Windows/Linux")
    if base is None:
        raise RuntimeError("Cannot allocate fixture memory")
    if base + size > 0x100000000:
        release()
        raise RuntimeError("Fixture requires memory below the 32-bit address limit")
    return base, size, release


def check_library(path):
    library = ctypes.CDLL(str(path))
    operation = library.bf_test_002c96d0
    operation.argtypes = [ctypes.c_void_p, ctypes.c_uint32]
    operation.restype = ctypes.c_void_p
    base, size, release = allocate_low_buffer()
    try:
        cases = 0
        for alias in (False, True):
            for tag in (7, 8, -1, -128, 127):
                ctypes.memset(base, 0xA5, size)
                source, descriptor = base + 0x1000, base + 0x8000
                output = source if alias else base + 0x4000
                ctypes.c_uint32.from_address(source + 0x68).value = descriptor
                ctypes.c_uint32.from_address(source + 0x60).value = 0xDEADBEEF
                ctypes.c_uint32.from_address(descriptor + 0x90).value = 0x9ABCDEF0
                ctypes.c_int8.from_address(descriptor + 0x70).value = tag
                expected = bytearray(ctypes.string_at(output, 0x5A8))

                def expect(offset, value):
                    expected[offset:offset + 4] = value.to_bytes(4, "little")

                for block in range(21):
                    for offset in (0xC, 0x1C, 0x2C, 0x3C):
                        expect(0x68 + block * 0x40 + offset, 0)
                expect(0, descriptor)
                expect(4, 0x9ABCDEF0)
                for offset in range(0x64, 0x14, -4):
                    expect(offset, source + 0x10 if tag >= 8 else 0)
                expect(0x14, source + 0x10)
                # Aliasing makes the late source+0x60 read observe a branch store.
                late = (source + 0x10 if tag >= 8 else 0) if alias else 0xDEADBEEF
                expect(0x10, late)
                if operation(output, source) != output:
                    raise AssertionError("Receiver return identity changed")
                if ctypes.string_at(output, 0x5A8) != expected:
                    raise AssertionError(f"Output/untouched bytes: alias={alias}, tag={tag}")
                if ctypes.c_uint32.from_address(output + 0x5A8).value != 0xA5A5A5A5:
                    raise AssertionError("Write past the observed object extent")
                cases += 1
        return cases
    finally:
        release()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--clang", default=shutil.which("clang"))
    parser.add_argument("--library", type=Path, help=argparse.SUPPRESS)
    args = parser.parse_args()
    if args.library:
        print(f"PASS {check_library(args.library)} actual-source golden cases")
        return
    if not args.clang:
        parser.error("Clang is required")
    root = args.root.resolve()
    with tempfile.TemporaryDirectory(prefix="bf_002c96d0_") as directory:
        for optimization in ("-O0", "-O2"):
            library = Path(directory) / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
            subprocess.run([
                args.clang, "-std=c11", "-shared", optimization,
                *([] if sys.platform == "win32" else ["-fPIC"]),
                "-I", str(root / "include"),
                str(root / "tests/test_002c96d0_constructor.c"), "-o", str(library),
            ], check=True)
            # A separate process releases Windows' DLL mapping before rebuild
            # and TemporaryDirectory cleanup; no forced unloading of ctypes.
            subprocess.run([sys.executable, str(Path(__file__).resolve()),
                            "--library", str(library)], check=True)
            print(f"PASS constructor storage {optimization}")
    print("Host memory only; original register/stack ABI, faults and game behavior unverified")


if __name__ == "__main__":
    main()
