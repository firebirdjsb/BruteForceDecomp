#!/usr/bin/env python3
"""Verify four scalar SSE reconstructions and original CALL bindings."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections, target
from source_layout import source_path


PAIR = "0x00233020"
ROUTINES = (PAIR, "0x00233150", "0x002331f0", "0x00233290")
BODIES = {
    PAIR: (303, "2382652B390516BB996BB81A12D1F0BCAF195D5E559D7A59ADD4AE5B0DD53096"),
    "0x00233150": (154, "1766A887C36D56E928CAE5AE5B510AE831035818E02349681EF194A245BB93AB"),
    "0x002331f0": (152, "65B4628918E5361443665A0347CF3E311F0D6D74565C8A9693B508101D88B561"),
    "0x00233290": (276, "51DE2978460DD0EEEAFEC427B85E551ADA075137DBCA706B5D4D32D84F101BB6"),
    "0x00212280": (254, "02C218A4A6C70C4C0F19269A1390332F5AC6845DF3945DFCAAF26B71BF42387B"),
    "0x002336d0": (203, "32C0943726E3E1DB6E34900D11A353C763C76DF26840D9B64B8C95B83FFE2A86"),
}
CALL_SITES = (0x21229b, 0x2122bb, 0x2122db, 0x2336e2, 0x2336f6, 0x23370a)
CONSTANTS = {
    0x0038d860: "0000803f",
    0x0038d8e0: "83f9223f",
    0x0038d910: "ffffff7f" * 4,
    0x0038d950: "db0fc93fe75d25bfe335a33d666999bb",
}
CONSTANT_START = 0x0038d860
CONSTANT_END = 0x0038d960


def check_retail(raw, directory):
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
    layout = sections(raw)

    def read(va, count):
        offset = file_offset(layout, va, count)
        return raw[offset:offset + count]

    for entry, (size, expected) in BODIES.items():
        body = read(int(entry, 16), size)
        require(hashlib.sha256(body).hexdigest().upper() == expected,
                f"original body hash differs at {entry}")
        if entry in ROUTINES:
            (directory / (entry[4:] + ".bin")).write_bytes(body)
    for site in CALL_SITES:
        require(target(site, read(site, 5)) == int(PAIR, 16), f"wrong retail E8 target at {site:#x}")
    for address, expected in CONSTANTS.items():
        data = bytes.fromhex(expected)
        require(read(address, len(data)) == data, f"retail scalar constant differs at {address:#x}")
    (directory / "constants.bin").write_bytes(read(CONSTANT_START, CONSTANT_END - CONSTANT_START))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private original XBE for the Linux i386 differential")
    args = parser.parse_args()
    if args.xbe and not sys.platform.startswith("linux"):
        parser.error("--xbe runs the freestanding original-byte fixture on Linux x86 (including WSL)")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    paths = {entry: source_path(ROOT, entry) for entry in BODIES}
    for entry, path in paths.items():
        require(read_body_digest(path.read_text(encoding="utf-8")) == (BODIES[entry][1], False),
                f"source body label differs at {entry}")
    flags = [clang, "-std=c++17", "-pedantic-errors", "-I", str(ROOT / "include")]
    fixture = ROOT / "tests/test_cpp_00233_scalar_sse.cpp"
    oracle = ROOT / "tests/fixtures/bf_00233_retail_oracle.S"
    routines = [str(paths[entry]) for entry in ROUTINES]
    with tempfile.TemporaryDirectory(prefix="bf-00233-sse-") as tmp:
        directory = Path(tmp)
        if args.xbe:
            check_retail(args.xbe.read_bytes(), directory)
        for opt in ("-O0", "-O2"):
            subprocess.run([*flags, opt, "-fsyntax-only", *map(str, paths.values())], check=True)
            exe = directory / "scalar_sse_fixture.exe"
            subprocess.run([*flags, opt, "-Wall", "-Wextra", "-Werror", str(fixture),
                            *routines, "-o", str(exe)], check=True)
            subprocess.run([str(exe)], check=True, timeout=30)
            if args.xbe:
                subprocess.run([*flags, opt, "-m32", "-msse2", "-mfpmath=sse", "-ffreestanding",
                                "-fno-exceptions", "-fno-rtti", "-fno-pic", "-fno-pie",
                                "-nostdlib", "-static", "-DBF_RETAIL_I386_ORACLE",
                                f"-Wl,--section-start=.bf_00233_constants={CONSTANT_START:#x}",
                                str(fixture), str(oracle), *routines, "-o", str(exe)],
                               cwd=directory, check=True)
                subprocess.run([str(exe)], check=True, timeout=60)
                print(f"PASS {opt}: 65,936 input/control cases vs original i386 bodies")
    print("PASS six C++17 sources and scalar bit-pattern/overlap fixtures at -O0 and -O2")


if __name__ == "__main__":
    main()
