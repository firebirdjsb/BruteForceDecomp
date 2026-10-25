#!/usr/bin/env python3
"""Pin original Bink32 MOVD/PXOR/PUNPCKLBW byte-unpack instructions."""
import argparse
import hashlib
from pathlib import Path
from verify_section_mapped_audio_and_hardware import guest_bytes, XBE_SHA256

OPS = {
    0x00365111: "0f6e22", # movd mm4,[edx]
    0x00365114: "0fefc0", # pxor mm0,mm0
    0x0036511f: "0f60e0", # punpcklbw mm4,mm0
    0x00365227: "0f6e22",
    0x0036522a: "0fefc0",
    0x00365235: "0f60e0",
}
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    c = (args.root / "src/video_bink/bink32/0x003650e0.c").read_text()
    assert '#include "bf_x86_mmx_byte_lanes.h"' in c
    token = "bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5)"
    assert c.count(token) == 2
    assert "CONCAT52((int5)" not in c
    assert "uint7" not in c
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256
        for va, hx in OPS.items():
            raw = bytes.fromhex(hx)
            assert guest_bytes(data, va, len(raw)) == raw, hex(va)
    print("PASS: Bink32 MMX byte unpack at two original x86 sites")

if __name__ == "__main__":
    main()
