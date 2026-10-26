#!/usr/bin/env python3
"""Guard two original-XBE guest stack output contracts; no native ABI claim.

Without --xbe this checks only source and focused Clang C11. The optional
original private XBE is hash-pinned and must never be checked into Git.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_76B30 = "35F7CF8E065762ABB0448F5C005677E52CDD908DE518EF657AE42A1D069758C7"
BODY_1E42F0 = "C094FF2527C6D9FEDE74FA9CB3E1D60ADF1806190065AF0FD30B3E9CE2B2ABCD"
SOURCE_76B30 = Path("src/main_unclassified/band_0007/0x00076b30.c")
SOURCE_1E42F0 = Path("src/main_unclassified/band_001e/0x001e42f0.c")
INSTRUCTIONS = {
    0x00076B30: "83ec0c",      # 12-byte local allocation
    0x00076B3E: "8b6c241c",    # EBP retains incoming second DWORD pointer
    0x00076B48: "8d542418",    # address first COM output word
    0x00076B53: "89742420",    # zero first COM output word
    0x00076B5A: "ff5120",      # first interface callback
    0x00076B5D: "8b542410",    # reload first output word
    0x00076C3D: "8d4c242c",    # address incoming second arg DWORD
    0x00076C47: "89742434",    # zero that word before callback
    0x00076C4E: "ff5220",      # second callback
    0x00076D4E: "8b442410",    # reload first COM output for final release
    0x00076D52: "85c0",        # test nullable interface
    0x00076D58: "7406",        # skip release when null
    0x00076D5A: "8b08",        # load interface vtable
    0x00076D5C: "50",          # push the interface pointer
    0x00076D5D: "ff5108",      # call vtable +8 release
    0x00076D60: "8b442408",    # return saved guest DWORD
    0x00076D67: "c20800",      # RET 8: callee cleans two arguments
    0x001E42F0: "83ec24",      # local frame
    0x001E435C: "8d74240c",    # first output at ESP+0x0c
    0x001E4368: "ff520c",      # interface callback
    0x001E436F: "8d442410",    # distinct second output at ESP+0x10
    0x001E4373: "50",          # pass second output address
    0x001E4374: "e83790faff",  # call FUN_0018D3B0
    0x001E4379: "8b742414",    # later load second output after push
    0x001E4384: "8b7c240c",    # first output word used for release
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)


def check_source(source76: str, source1e: str) -> None:
    assert "Entry: 0x00076b30" in source76
    assert "Input x86 body SHA-256: " + BODY_76B30 in source76
    assert "Entry: 0x001e42f0" in source1e
    assert "Input x86 body SHA-256: " + BODY_1E42F0 in source1e
    assert "ABI_UNVERIFIED" in source76 and "ABI_UNVERIFIED" in source1e
    assert "uint32_t guest_second_arg_output;" in source76
    assert "guest_second_arg_output = 0;" in source76
    assert "0x1077c687,&guest_second_arg_output,piStack_28,0" in source76
    assert "&stack0xffffffe8" not in source76
    assert "(piStack_30,uStack_2c,piStack_28,uStack_24,uStack_20)" in source76
    assert "if (local_c[0] != 0)" in source76
    assert "(int *)(uintptr_t)local_c[0]" in source76
    assert "(*guest_first_interface + 8))(guest_first_interface)" in source76
    assert "iRam00000001" not in source76
    assert "int local_24 [3];" in source1e
    assert "local_24[0] = 0;" in source1e
    assert "local_24[1] = 0;" in source1e
    assert "FUN_0018d3b0(&local_24[1])" in source1e
    assert "&stack0xffffffd0" not in source1e


def check_mutations(source76: str, source1e: str) -> None:
    mutations = (
        (source76, source1e, "guest_second_arg_output = 0;", "guest_second_arg_output = 1;", True),
        (source76, source1e, "&guest_second_arg_output,piStack_28,0", "&local_c[0],piStack_28,0", True),
        (source76, source1e, "if (local_c[0] != 0)", "if (local_c[1] != 0)", True),
        (source76, source1e, "(*guest_first_interface + 8))", "(*guest_first_interface + 4))", True),
        (source76, source1e, "(piStack_30,uStack_2c,piStack_28,uStack_24,uStack_20)", "()", True),
        (source76, source1e, "FUN_0018d3b0(&local_24[1])", "FUN_0018d3b0(&local_24[0])", False),
    )
    for a, b, before, after, mutate76 in mutations:
        assert before in (a if mutate76 else b)
        if mutate76:
            a = a.replace(before, after, 1)
        else:
            b = b.replace(before, after, 1)
        try:
            check_source(a, b)
        except AssertionError:
            continue
        raise AssertionError("mutation escaped source guard: " + before)


def xbe_bytes(data: bytes, address: int, length: int) -> bytes:
    image_base = struct.unpack_from("<I", data, 0x104)[0]
    section_count, section_table = struct.unpack_from("<II", data, 0x11C)
    for i in range(section_count):
        offset = section_table - image_base + 56 * i
        _, va, _, raw_offset, raw_size = struct.unpack_from("<5I", data, offset)
        if va <= address and address + length <= va + raw_size:
            return data[raw_offset + address - va:raw_offset + address - va + length]
    raise AssertionError("XBE address not file-backed: " + hex(address))


def check_xbe(path: Path) -> None:
    data = path.read_bytes()
    assert hashlib.sha256(data).hexdigest().upper() == XBE_SHA256
    assert data[:4] == b"XBEH"
    assert hashlib.sha256(xbe_bytes(data, 0x76B30, 0x76D6A - 0x76B30)).hexdigest().upper() == BODY_76B30
    for address, expected in INSTRUCTIONS.items():
        actual = xbe_bytes(data, address, len(expected) // 2).hex()
        assert actual == expected, f"{address:08x}: expected {expected}, got {actual}"
    # Ghidra's 0x001E42F0 original-body label is retained, but this test
    # proves only listed instruction windows, not that entire body digest.


def check_clang(root: Path) -> None:
    clang = shutil.which("clang")
    assert clang is not None, "Clang required"
    for source in (SOURCE_76B30, SOURCE_1E42F0):
        for opt in ("-O0", "-O2"):
            subprocess.run(
                [clang, *FLAGS, opt, "-I", str(root / "include"), str(root / source)],
                check=True, capture_output=True, text=True,
            )


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path, help="private hash-pinned original XBE")
    args = parser.parse_args()
    root = args.root.resolve()
    source76 = (root / SOURCE_76B30).read_text(encoding="utf-8")
    source1e = (root / SOURCE_1E42F0).read_text(encoding="utf-8")
    check_source(source76, source1e)
    check_mutations(source76, source1e)
    check_clang(root)
    if args.xbe is not None:
        check_xbe(args.xbe)
    print("PASS: two original guest output-slot source contracts, 6 negative controls, "
          "four Clang C11 checks; " +
          (f"{len(INSTRUCTIONS)} XBE instruction windows and 0x76B30 body digest verified"
           if args.xbe else "XBE not supplied to CI (source-only)"))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
