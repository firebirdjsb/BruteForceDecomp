#!/usr/bin/env python3
"""Pin D3D indexed render-state guest address to original XBE instructions."""
import argparse
import hashlib
from pathlib import Path

ORIGINAL_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
INSTRUCTIONS = {
    0x0037AC6D: "3b3cb598dd3700",  # cmp edi, [esi*4+0x37dd98]
    0x0037AC89: "893cb598dd3700",  # mov [esi*4+0x37dd98], edi
    0x0037AE06: "8b34b598dd3700",  # mov esi, [esi*4+0x37dd98]
    0x0037AEF0: "8bb098dd3700",    # mov esi, [eax+0x37dd98]
    0x0037AF89: "8b0c8598dd3700",  # mov ecx, [eax*4+0x37dd98]
    0x0037AF92: "8d2c8598dd3700",  # lea ebp, [eax*4+0x37dd98]
}
FILES = (
    "src/platform/graphics_d3d/0x0036d200.c",
    "src/platform/graphics_d3d/0x0036d390.c",
    "src/platform/graphics_d3d/0x0036d4d0.c",
)
DECLARATION = "extern uint32_t D3D8__D3D_g_RenderState;"

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("repo", type=Path)
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != ORIGINAL_SHA256:
        parser.error("Original XBE SHA-256 mismatch")
    for address, hexbytes in INSTRUCTIONS.items():
        expected = bytes.fromhex(hexbytes)
        actual = data[address-0x10000:address-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL x86 {address:#x}: {actual.hex()}")
    for name in FILES:
        text = (args.repo / name).read_text(encoding="utf-8")
        if DECLARATION not in text:
            raise SystemExit(f"FAIL missing syntax-only guest declaration: {name}")
    print(f"PASS: {len(INSTRUCTIONS)} original x86 instructions and {len(FILES)} C11 declarations")
    print("No guest memory mapping, cross-TU linking or runtime equivalence is implied.")

if __name__ == "__main__":
    main()
