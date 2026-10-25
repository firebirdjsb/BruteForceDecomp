#!/usr/bin/env python3
"""Check exact Xbox CRT/audio guest address stores and kernel import pattern.

Unlike the main executable text section, separate XBE sections do not
generally use VA-0x10000 as a file offset. The optional --xbe mode resolves
guest virtual addresses through the original 0x38-byte section headers.
No retail executable is checked into this repository.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x003119B1: "8325a4f7320000", # and dword [0x32f7a4],0
    0x003119B8: "c7059cf73200c9553100", # HRTF first callback
    0x003119C2: "c705a0f7320031533100", # HRTF second callback 0x315331
    0x0037F6D6: "a180633800", # mov eax,[0x386380], imported pointer
    0x0037F6DB: "807805a1", # cmp byte [eax+5],0xa1
    0x0037F6DF: "742f", # je
}

def guest_bytes(xbe, va, size):
    image_base = struct.unpack_from("<I", xbe, 0x104)[0]
    count, section_headers_guest = struct.unpack_from("<II", xbe, 0x11C)
    assert image_base == 0x10000 and 0 < count < 128
    headers = section_headers_guest - image_base
    assert 0 <= headers <= len(xbe) - count * 0x38
    for index in range(count):
        base = headers + index * 0x38
        section_guest = struct.unpack_from("<I", xbe, base + 4)[0]
        virtual_size = struct.unpack_from("<I", xbe, base + 8)[0]
        raw_start = struct.unpack_from("<I", xbe, base + 12)[0]
        raw_size = struct.unpack_from("<I", xbe, base + 16)[0]
        relative = va - section_guest
        if 0 <= relative and relative + size <= virtual_size and relative + size <= raw_size:
            offset = raw_start + relative
            assert offset + size <= len(xbe)
            return xbe[offset:offset + size]
    raise AssertionError("Guest address not file-backed: " + hex(va))

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--xbe", type=Path)
    args = p.parse_args()
    audio = (args.root / "src/platform/audio_dsound/0x003119b1.c").read_text()
    assert "DAT_0032f7a0 = UINT32_C(0x00315331);" in audio
    assert "CFullHrtfSource_GetHrtfFilterPair;" not in audio
    hardware = (args.root / "src/platform/xpp_role_unverified/0x0037f6d0.c").read_text()
    assert "UINT32_C(0x00386380)" in hardware
    assert "(guest_hardware_info + 5u)" in hardware
    assert "UINT8_C(0xA1)" in hardware
    assert "(code)0xa1" not in hardware
    if args.xbe:
        xbe = args.xbe.read_bytes()
        assert hashlib.sha256(xbe).hexdigest() == XBE_SHA256, "Unexpected original XBE"
        for va, hx in OPCODES.items():
            raw = bytes.fromhex(hx)
            assert guest_bytes(xbe, va, len(raw)) == raw, hex(va)
    print("PASS: original section-mapped HRTF callbacks and hardware import byte test")

if __name__ == "__main__":
    main()
