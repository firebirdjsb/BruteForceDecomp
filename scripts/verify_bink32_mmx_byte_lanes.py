#!/usr/bin/env python3
"""Pin original Bink32 MOVD/PXOR/PUNPCKLBW byte-unpack instructions."""
import argparse
import hashlib
import re
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
    0x366607: "0f6e22", # movd mm4,[edx]
    0x36660A: "0fefc0", # pxor mm0,mm0
    0x366615: "0f60e0", # punpcklbw mm4,mm0
    0x366747: "0f6e22", # movd mm4,[edx]
    0x36674A: "0fefc0", # pxor mm0,mm0
    0x366755: "0f60e0", # punpcklbw mm4,mm0
    0x3679D0: "0f6e22", # movd mm4,[edx]
    0x3679D3: "0fefc0", # pxor mm0,mm0
    0x3679DE: "0f60e0", # punpcklbw mm4,mm0
    0x367AE0: "0f6e22", # movd mm4,[edx]
    0x367AE3: "0fefc0", # pxor mm0,mm0
    0x367AEE: "0f60e0", # punpcklbw mm4,mm0
    0x36A090: "0f6e22", # movd mm4,[edx]
    0x36A093: "0fefc0", # pxor mm0,mm0
    0x36A09E: "0f60e0", # punpcklbw mm4,mm0
    0x36A1B0: "0f6e22", # movd mm4,[edx]
    0x36A1B3: "0fefc0", # pxor mm0,mm0
    0x36A1BE: "0f60e0", # punpcklbw mm4,mm0
    0x36B840: "0f6e22", # movd mm4,[edx]
    0x36B843: "0fefc0", # pxor mm0,mm0
    0x36B84E: "0f60e0", # punpcklbw mm4,mm0
    0x36B9B0: "0f6e22", # movd mm4,[edx]
    0x36B9B3: "0fefc0", # pxor mm0,mm0
    0x36B9BE: "0f60e0", # punpcklbw mm4,mm0
}
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    c = (args.root / "src/video_bink/bink32/0x003650e0.cpp").read_text()
    assert '#include "bf_x86_mmx_byte_lanes.h"' in c
    token = "bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5)"
    assert c.count(token) == 2
    # Comments may mention obsolete Ghidra types; reject them only in C code.
    code = re.sub(r"/\*.*?\*/|//[^\n]*", "", c, flags=re.S)
    assert "CONCAT52((int5)" not in code
    assert re.search(r"\buint7\b", code) is None
    assert "uint7" not in re.sub(r"/\*.*?\*/", "", "/* uint7 */")
    assert re.search(r"\buint7\b", "uint7 bad_type;") is not None
    bink4444 = (args.root / "src/video_bink/bink4444/0x00368f20.cpp").read_text()
    assert bink4444.count("bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5)") == 2
    assert bink4444.count("bf_x86_mmx_top_nibble_to_u16_lanes((uint32_t)uVar5)") == 2
    assert not any(token in bink4444 for token in ("uint5", "uint7", "int5"))
    extra_formats = (
        "bink16/0x00367990.cpp",
        "bink16x2/0x0036b800.cpp",
        "bink32a/0x003665d0.cpp",
        "bink5551/0x0036a050.cpp",
    )
    for name in extra_formats:
        source = (args.root / "src/video_bink" / name).read_text()
        assert '#include "bf_x86_mmx_byte_lanes.h"' in source, name
        assert source.count("bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5)") == 2, name
        assert "CONCAT52((int5)" not in source, name
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256
        for va, hx in OPS.items():
            raw = bytes.fromhex(hx)
            assert guest_bytes(data, va, len(raw)) == raw, hex(va)
    print("PASS: six Bink pixel-format sources, MMX byte-word lanes and alpha nibble")

if __name__ == "__main__":
    main()
