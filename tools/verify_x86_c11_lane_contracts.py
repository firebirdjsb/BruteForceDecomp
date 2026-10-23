#!/usr/bin/env python3
"""Check original XBE instruction fingerprints and scoped C11 repair invariants.

The XBE is supplied locally (never checked into Git). Source-only mode is safe
for public CI. These checks do NOT prove full ABI or runtime 1:1 equivalence.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"

# Exact original instructions: register/stack result, partial-word accesses,
# and the three-word partition caller setup. No decompiler inference required.
FINGERPRINTS = {
    0x00025038: "85 c0 89 44 24 1c",  # test eax,eax; save object DWORD
    0x000251AF: "8b 44 24 1c 8b 80 80 00 00 00",  # load object + 0x80
    0x000252AA: "c6 44 24 60 01",  # low byte = 1
    0x000252C7: "c6 44 24 60 00",  # low byte = 0
    0x00025368: "8a 44 24 60",  # read low byte
    0x0002556C: "8a 44 24 60",  # second low-byte read
    0x000436A6: "38 5c 24 10",  # compare byte in local float slot
    0x00043810: "8a 44 24 10",  # read byte in local float slot
    0x0005C659: "8a 44 24 2c",  # read incoming byte
    0x0005C661: "88 44 24 1c",  # write only destination low byte
    0x0005C67F: "8b 54 24 1c",  # load full raw result DWORD
    0x0005C688: "89 50 08",  # write full raw result DWORD
    0x002876CB: "51 8b c4 89 38 51 8b c4 89 18 8d 44 24 18 50",
    0x0029D2F8: "8a 44 24 40",  # byte read from argument stack word
    0x0029D309: "84 c0",  # test al,al
    0x000388E3: "68 90 de 30 00",  # original callback address word
    0x0030DE90: "56 be d0 88 4a 00",  # executable callback entry
    0x0003D99B: "8a 56 14",  # read low incoming byte
    0x0003D9A4: "88 54 24 0c",  # write low stack byte
    0x00043539: "33 c0",  # EAX zero before byte clearing
    0x00043559: "88 44 24 1c",  # first byte clear
    0x0004355D: "88 44 24 1d",  # second byte clear
    0x0004E17B: "51 8b c4 89 38 51 8b c4 89 18 8d 44 24 18 50", # 8-byte records partition inputs
    0x000509AB: "51 8b c4 89 38 51 8b c4 89 18 8d 44 24 18 50", # 4-byte records partition inputs
}
DIRECT_CALLS = {
    0x00025033: 0x000388B0,
    0x0005C676: 0x0005D2B0,
    0x002876DA: 0x00287930,
    0x000388E8: 0x002EA4BF,
    0x0003D9C7: 0x0001D4C0,
    0x00043488: 0x000388B0,
    0x000434B9: 0x000388B0,
    0x0004E18A: 0x0004E260,
    0x0004E200: 0x0004E4D0,
    0x0004E241: 0x0004E470,
    0x000509BA: 0x00050E90,
    0x00050A30: 0x00051040,
    0x00050A71: 0x00050FF0,
}

SOURCE_EXPECTATIONS = {
    "src/main_unclassified/band_0004/0x0004e150.c": (
        ["int partition_bounds[2];", "FUN_0004e260((undefined4 *)partition_bounds",
         "FUN_0004e4d0(param_1,param_2);",
         "FUN_0004e470((undefined4 *)(uintptr_t)param_1,param_2);"],
        ["FUN_0004e260(&local_8)", "FUN_0004e4d0();", "FUN_0004e470();"],
    ),
    "src/main_unclassified/band_0005/0x00050980.c": (
        ["int partition_bounds[2];", "FUN_00050e90((undefined4 *)partition_bounds",
         "FUN_00051040((undefined4 *)(uintptr_t)param_1,(undefined4 *)(uintptr_t)param_2);",
         "FUN_00050ff0((undefined4 *)(uintptr_t)param_1,param_2);"],
        ["FUN_00050e90(&local_8)", "FUN_00051040();", "FUN_00050ff0();"],
    ),
    "src/main_unclassified/band_0003/0x000388b0.c": (
        ["_atexit((void (*)(void))(uintptr_t)0x0030de90U);"],
        ["(__func *)&LAB_0030de90"],
    ),
    "src/main_unclassified/band_0003/0x0003d970.c": (
        ["((unsigned char *)&local_4)[0] = (unsigned char)in_ECX[5];"],
        ["local_4._1_3_", "CONCAT31(local_4"],
    ),
    "src/main_unclassified/band_0004/0x00043470.c": (
        ["local_3c &= UINT32_C(0xffff0000);"],
        ["local_3c._2_2_"],
    ),
    "src/main_unclassified/band_0002/0x00024f80.c": (
        ["resolved_object_address = FUN_000388b0",
         "((unsigned char *)&param_3)[0] = 1;",
         "((unsigned char *)&param_3)[0] = 0;",
         "((const unsigned char *)&param_3)[0]"],
        ["param_3._0_1_", "param_3._1_3_", "(float)FUN_000388b0"],
    ),
    "src/main_unclassified/band_0004/0x000435f0.c": (
        ["((const unsigned char *)&fStack_8c)[0]", "uStack_74 &= 0xffff0000U;"],
        ["fStack_8c._0_1_", "uStack_74._2_2_"],
    ),
    "src/main_unclassified/band_0005/0x0005c5e0.c": (
        ["((unsigned char *)&local_4)[0] = (unsigned char)param_3;",
         "memcpy((unsigned char *)pfVar8 + 8, &local_4, sizeof local_4);"],
        ["local_4._1_3_", "(float)CONCAT31"],
    ),
    "src/main_unclassified/band_0029/0x0029d2a0.c": (
        ["((const unsigned char *)&param_7)[0] == 0"],
        ["param_7._0_1_"],
    ),
    "src/main_unclassified/band_0028/0x002876a0.c": (
        ["int partition_bounds[2];", "FUN_00287930((undefined4 *)partition_bounds",
         "FUN_002876a0(param_1,partition_bounds[0],param_3);",
         "FUN_002876a0(partition_bounds[1],param_2,param_3);"],
        ["FUN_00287930(&local_8)", "FUN_002876a0(param_1);"],
    ),
}


def check_xbe(path: Path) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("Different XBE SHA-256; evidence is not applicable")
    if data[:4] != b"XBEH":
        raise ValueError("Invalid XBE header")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, sections_va = struct.unpack_from("<II", data, 0x11C)
    if not 0 < count < 128:
        raise ValueError("Invalid section count")

    def read_va(va: int, size: int) -> bytes:
        for idx in range(count):
            pos = sections_va - base + idx * 0x38
            if not 0 <= pos <= len(data) - 20:
                raise ValueError("Invalid section table pointer")
            _, mem, vsize, raw, rsize = struct.unpack_from("<IIIII", data, pos)
            if mem <= va and va + size <= mem + min(vsize, rsize):
                off = raw + va - mem
                if off + size > len(data):
                    raise ValueError("Instruction outside binary file")
                return data[off:off + size]
        raise ValueError(f"Unmapped XBE VA 0x{va:08x}")

    for va, hexbytes in FINGERPRINTS.items():
        expected = bytes.fromhex(hexbytes)
        if read_va(va, len(expected)) != expected:
            raise ValueError(f"Unexpected instruction at VA 0x{va:08x}")
    for va, expected in DIRECT_CALLS.items():
        opcode = read_va(va, 5)
        if opcode[0] != 0xE8:
            raise ValueError(f"Expected near call at 0x{va:08x}")
        displacement = struct.unpack("<i", opcode[1:])[0]
        if va + 5 + displacement != expected:
            raise ValueError(f"Unexpected call edge 0x{va:08x}")
    print(f"PASS: {len(FINGERPRINTS)} exact instruction windows, "
          f"{len(DIRECT_CALLS)} original call destinations; XBE digest matches")


def check_sources(root: Path) -> None:
    for name, (required, forbidden) in SOURCE_EXPECTATIONS.items():
        source = (root / name).read_text(encoding="utf-8")
        for item in required:
            if item not in source:
                raise ValueError(f"{name}: missing checked C construct {item!r}")
        for item in forbidden:
            if item in source:
                raise ValueError(f"{name}: stale pseudocode {item!r}")
    print(f"PASS: {len(SOURCE_EXPECTATIONS)} focused source invariants "
          "(not a full C11 syntax audit)")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, default=None)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--skip-source", action="store_true")
    args = parser.parse_args()
    if args.xbe is None and args.skip_source:
        parser.error("No check selected")
    if args.xbe is not None:
        check_xbe(args.xbe)
    if not args.skip_source:
        check_sources(args.root)


if __name__ == "__main__":
    main()
