#!/usr/bin/env python3
"""Source-level regression for the 0x000BCA40 four-DWORD scissor copy.

The pinned original XBE is intentionally not committed. Pass its path to
validate opcode evidence; without it this checks source structure only.
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
# An original-image byte check is intentionally not asserted here until
# exact opcode boundaries and bytes are independently captured.
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
    print("PASS: four distinct DWORD transfers into local scissor argument")
    print("NOTE: callback ABI, guest pointer translation and exact opcode checks remain unverified")

if __name__ == "__main__":
    main()
