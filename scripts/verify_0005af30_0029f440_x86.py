#!/usr/bin/env python3
"""Source checks in public CI; optional original XBE verifies instruction bytes.

Original XBE is private and must not be committed. Passing these checks does
not establish linked Xbox ABI, guest memory mapping, or full 1:1 behavior.
"""
import argparse
from pathlib import Path

OPCODES = {
    0x29f473:"8d4c2408", 0x29f47e:"c744241400000000",
    0x29f486:"ff10", 0x29f490:"8b7c2408",
    0x29f4a2:"8b07", 0x29f4a8:"ff5030",
    0x29f4f4:"ff5230", 0x29f512:"8b442408", 0x29f51d:"ff5208",
    0x5af33:"d944242c", 0x5af3c:"d9e0", 0x5af3f:"d95c2438",
    0x5afcf:"f30f51442410", 0x5afd5:"f30f11442438",
    0x5afdf:"d844243c", 0x5afe3:"d954243c",
    0x5b095:"f30f52442438", 0x5b09b:"f30f1144243c",
    0x5b0bd:"8b542438", 0x5b0c1:"895510",
    0x5b0c8:"8b4c243c", 0x5b0cc:"894d0c", 0x5b0cf:"d95d08",
}
SOURCES = {
    "src/main_unclassified/band_0029/0x0029f440.c": (
        ["int *guest_queried_interface = (int *)0x0;",
         "&guest_queried_interface",
         "(*guest_queried_interface + 0x30))(guest_queried_interface,0,piVar4)",
         "(*guest_queried_interface + 8))(guest_queried_interface)"],
        ["pcRam00000030", "stack0xfffffff8", "in_stack_ffffffd0"],
    ),
    "src/main_unclassified/band_0005/0x0005af30.c": (
        ["guest_accumulated_length = -param_3;",
         "_mm_sqrt_ss(_mm_set_ss(guest_squared_length))",
         "_mm_rsqrt_ss(_mm_set_ss(guest_squared_length))",
         "memcpy(&piVar7[4], &guest_z, sizeof(guest_z));",
         "memcpy(&piVar7[3], &guest_y, sizeof(guest_y));",
         "memcpy(&piVar7[2], &guest_x, sizeof(guest_x));"],
        ["(int *)-param_3", "(float)param_4", "auVar11._0_4_"],
    ),
}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?")
    ap.add_argument("--repo", type=Path, default=Path("."))
    args = ap.parse_args()
    for rel, (required, forbidden) in SOURCES.items():
        source = (args.repo / rel).read_text(encoding="utf-8")
        for token in required:
            if token not in source:
                raise SystemExit(f"{rel}: source contract missing: {token}")
        for token in forbidden:
            if token in source:
                raise SystemExit(f"{rel}: unreconstructed guest storage: {token}")
    if args.xbe is None:
        print("PASS: two source contracts (original Xbox instructions NOT checked)")
        return
    binary = args.xbe.read_bytes()
    for va, code in OPCODES.items():
        expected = bytes.fromhex(code)
        observed = binary[va-0x10000:va-0x10000+len(expected)]
        if observed != expected:
            raise SystemExit(f"Original XBE mismatch at 0x{va:08x}: {observed.hex()}")
    print(f"PASS: {len(OPCODES)} verified original x86 opcodes and 2 C11 source contracts")

if __name__ == "__main__":
    main()
