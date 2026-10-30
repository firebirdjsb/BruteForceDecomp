#!/usr/bin/env python3
"""Check original Xbox 0x00374A49 D3D MMIO guest offset transfers.

This is syntax-only source verification in GitHub CI. The optional --xbe
mode maps guest VAs through original section headers to pinned instruction
bytes. No GPU port, native MMIO, or linked runtime equivalence is claimed.
"""
import argparse
import hashlib
from pathlib import Path
from verify_section_mapped_audio_and_hardware import guest_bytes, XBE_SHA256

OPS = {
    0x00374BB9: "8dbc9e00031000", # lea edi,[esi+ebx*4+0x100300]
    0x00374BD0: "89849e80094000", # mov [esi+ebx*4+0x400980],eax
    0x00374BF7: "8dbe24031000",   # lea edi,[esi+0x100324]
    0x00374C06: "8d9ea0094000",   # lea ebx,[esi+0x4009a0]
    0x00374CAE: "89849e00031000", # GPU method offset +0x100300
    0x00374CBE: "89849e80094000", # GPU mirror +0x400980
    0x00374CD3: "898624031000",   # GPU method +0x100324
    0x00374CD9: "8986a0094000",   # GPU mirror +0x4009a0
    0x00378F52: "8d8f14021000", # lea ecx,[edi+0x100214]
    0x00378F58: "8b01",         # mov eax,[ecx]
    0x00378F5A: "83e0fe",       # and eax,0xfffffffe
    0x00378F5D: "8901",         # mov [ecx],eax
}
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    c = (args.root / "src/platform/graphics_d3d/0x00374a49.cpp").read_text()
    for token in ["UINT32_C(0x00100300)", "UINT32_C(0x00400980)",
                  "UINT32_C(0x00100324)"]:
        assert c.count(token) == 2, (token, c.count(token))
    assert "FUN_00100300" not in c
    assert "LAB_00400980" not in c
    assert "LAB_00100324" not in c
    second = (args.root / "src/platform/graphics_d3d/0x00374c34.cpp").read_text()
    for token in ["UINT32_C(0x00100300)", "UINT32_C(0x00400980)",
                  "UINT32_C(0x00100324)"]:
        assert second.count(token) == 1, (token, second.count(token))
    assert "FUN_00100300" not in second
    assert "LAB_00400980" not in second
    assert "LAB_00100324" not in second
    gpu = (args.root / "src/platform/graphics_d3d/0x00378e93.cpp").read_text()
    assert "uint32_t guest_gpu_control =" in gpu
    assert "(uint32_t)iVar1 + UINT32_C(0x00100214)" in gpu
    assert "*(uint32_t *)(uintptr_t)guest_gpu_control =" in gpu
    assert "FUN_00100210" not in gpu
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256
        for va,hx in OPS.items():
            exact = bytes.fromhex(hx)
            assert guest_bytes(data,va,len(exact)) == exact, hex(va)
    print("PASS: Xbox D3D 0x374a49, 0x374c34 and 0x378e93 guest MMIO register contracts")

if __name__ == "__main__":
    main()
