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
    0x00368F60: "0f6e22", # Bink4444 packed input DWORD
    0x00368F63: "0fefc0", # zero MMX register
    0x00368F6E: "0f60e0", # widen four bytes
    0x00368FF0: "0f6e31", # load four alpha bytes
    0x0036900F: "0f60f0", # widen four alpha bytes
    0x00369015: "0f71d604", # shift each 16-bit lane right four
    0x00369019: "0f71f60c", # shift each 16-bit lane left twelve
    0x00369080: "0f6e22",
    0x00369083: "0fefc0",
    0x0036908E: "0f60e0",
    0x00369110: "0f6e31",
    0x0036912F: "0f60f0",
    0x00369135: "0f71d604",
    0x00369139: "0f71f60c",
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
    bink4444 = (args.root / "src/video_bink/bink4444/0x00368f20.c").read_text()
    assert bink4444.count("bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5)") == 2
    assert bink4444.count("bf_x86_mmx_top_nibble_to_u16_lanes((uint32_t)uVar5)") == 2
    assert not any(token in bink4444 for token in ("uint5", "uint7", "int5"))
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256
        for va, hx in OPS.items():
            raw = bytes.fromhex(hx)
            assert guest_bytes(data, va, len(raw)) == raw, hex(va)
    print("PASS: Bink32 and Bink4444 MMX zero-extend and alpha nibble lanes")

if __name__ == "__main__":
    main()
