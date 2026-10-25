#!/usr/bin/env python3
"""Source-level regression for the 0x000BCA40 four-DWORD scissor copy.

The pinned original XBE is intentionally not committed. Pass its path to
validate original instruction bytes; without it this checks source structure only.
This does not verify callback ABI or guest-to-host pointer translation.
"""
import argparse
import hashlib
from pathlib import Path

SOURCE = "src/main_unclassified/band_000b/0x000bca40.c"
XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
TOKENS = (
    "uint32_t guest_scissor_words[4];",
    "guest_scissor_source =",
    "piVar1[0x12] + 0x18",
    "guest_scissor_words[0] = guest_scissor_source[0];",
    "guest_scissor_words[1] = guest_scissor_source[1];",
    "guest_scissor_words[2] = guest_scissor_source[2];",
    "guest_scissor_words[3] = guest_scissor_source[3];",
    "D3D8LTCG__D3DDevice_SetScissors(1,0,guest_scissor_words);",
)
# Independently decoded from the pinned original XBE. These cover the virtual
# callback, all four guest DWORD reads/writes, address-taking, and call site.
# The final two stores occur after the three argument pushes, so their ESP
# displacements are +0x20/+0x24 rather than +0x14/+0x18.
OPCODES = (
    (0x000BCA6C, "8b5748"),
    (0x000BCA6F, "8d4f48"),
    (0x000BCA72, "ff5218"),
    (0x000BCA75, "8b08"),
    (0x000BCA77, "8b5004"),
    (0x000BCA7A, "894c240c"),
    (0x000BCA7E, "8b4808"),
    (0x000BCA81, "89542410"),
    (0x000BCA85, "8b500c"),
    (0x000BCA88, "8d44240c"),
    (0x000BCA8C, "50"),
    (0x000BCA8D, "6a00"),
    (0x000BCA8F, "6a01"),
    (0x000BCA91, "894c2420"),
    (0x000BCA95, "89542424"),
    (0x000BCA99, "e8621d2b00"),
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--root", type=Path, default=Path("."))
    args = ap.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    for token in TOKENS:
        if token not in source:
            raise SystemExit(f"missing guest scissor contract: {token}")
    if "stack0xffffffe4" in source:
        raise SystemExit("unresolved guest scissor stack slot")
    if args.xbe:
        digest = hashlib.sha256(args.xbe.read_bytes()).hexdigest().upper()
        if digest != XBE_SHA256:
            raise SystemExit("original XBE SHA-256 mismatch")
        image = args.xbe.read_bytes()
        for address, raw in OPCODES:
            expected = bytes.fromhex(raw)
            actual = image[address - 0x10000:address - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"original x86 opcode mismatch at 0x{address:08X}")
    print("PASS: four distinct DWORD transfers into local scissor argument")
    print("NOTE: callback ABI and guest pointer translation remain unverified")

if __name__ == "__main__":
    main()
