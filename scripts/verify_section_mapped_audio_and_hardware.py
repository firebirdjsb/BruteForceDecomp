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
    0x0035A90C: "c705dc504b0014473100", # DirectSoundCreate guest 0x314714
    0x0035A953: "b850a63500", # return Bink guest entry address
    0x0037EECC: "68a0ed3700", # push MU device-type descriptor address
    0x00349916: "ff3580643800", # guest public-key import
    0x00330A57: "a150643800", # guest counted filename pointer
    0x00330A5C: "0fb708", # counted filename WORD length
    0x00330A7C: "a150643800", # second filename import reload
    0x00330A81: "0fb708",
    0x00330A84: "8b4004", # counted filename DWORD buffer
    0x00330A9A: "a150643800", # third filename import reload
    0x00330A9F: "0fb700",
    0x00347E37: "ff3588643800", # XboxLANKey slot read 1
    0x00347E50: "ff3588643800", # XboxLANKey slot read 2
    0x00347E94: "ff3588643800", # XboxLANKey slot read 3
    0x00353009: "a1ac643800", # model descriptor import
    0x0035300E: "0fb708", # model byte length
    0x00353012: "ff7004", # model guest buffer address
    0x0035301D: "a1a8643800", # serial descriptor import
    0x00353022: "0fb708",
    0x00353026: "ff7004",
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
    audio = (args.root / "src/platform/audio_dsound/0x003119b1.cpp").read_text()
    assert "DAT_0032f7a0 = UINT32_C(0x00315331);" in audio
    assert "CFullHrtfSource_GetHrtfFilterPair;" not in audio
    hardware = (args.root / "src/platform/xpp_role_unverified/0x0037f6d0.cpp").read_text()
    assert "UINT32_C(0x00386380)" in hardware
    assert "(guest_hardware_info + 5u)" in hardware
    assert "UINT8_C(0xA1)" in hardware
    assert "(code)0xa1" not in hardware
    bink = (args.root / "src/video_bink/bink/0x0035a8c0.cpp").read_text()
    assert "DAT_004b50dc = UINT32_C(0x00314714);" in bink
    assert "return (undefined1 *)(uintptr_t)UINT32_C(0x0035A650);" in bink
    mu = (args.root / "src/platform/xpp_role_unverified/0x0037ee7c.cpp").read_text()
    assert "(const void *)(uintptr_t)UINT32_C(0x0037EDA0)" in mu
    public_key = (args.root / "src/platform/network_xnet/0x003498be.cpp").read_text()
    assert "uint32_t guest_public_key =" in public_key
    assert "UINT32_C(0x00386480)" in public_key
    image_name = (args.root / "src/platform/online_xonline/0x003309e9.cpp").read_text()
    assert image_name.count("UINT32_C(0x00386450)") == 3
    assert "guest_name_buffer + (uint32_t)iVar5" in image_name
    lan = (args.root / "src/platform/network_xnet/0x00347d34.cpp").read_text()
    assert lan.count("UINT32_C(0x00386488)") == 3
    assert "XboxLANKey_exref," not in lan
    disk = (args.root / "src/platform/network_xnet/0x00352eeb.cpp").read_text()
    assert "UINT32_C(0x003864AC)" in disk
    assert "UINT32_C(0x003864A8)" in disk
    assert "guest_model_descriptor + UINT32_C(4)" in disk
    assert "guest_serial_descriptor + UINT32_C(4)" in disk
    if args.xbe:
        xbe = args.xbe.read_bytes()
        assert hashlib.sha256(xbe).hexdigest() == XBE_SHA256, "Unexpected original XBE"
        for va, hx in OPCODES.items():
            raw = bytes.fromhex(hx)
            assert guest_bytes(xbe, va, len(raw)) == raw, hex(va)
    print("PASS: section-mapped audio, online, networking and Xbox import contracts")

if __name__ == "__main__":
    main()
