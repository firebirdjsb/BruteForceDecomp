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
}
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    c = (args.root / "src/platform/graphics_d3d/0x00374a49.c").read_text()
    for token in ["UINT32_C(0x00100300)", "UINT32_C(0x00400980)",
                  "UINT32_C(0x00100324)"]:
        assert c.count(token) == 2, (token, c.count(token))
    assert "FUN_00100300" not in c
    assert "LAB_00400980" not in c
    assert "LAB_00100324" not in c
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256
        for va,hx in OPS.items():
            exact = bytes.fromhex(hx)
            assert guest_bytes(data,va,len(exact)) == exact, hex(va)
    print("PASS: Xbox D3D 0x374a49 original guest MMIO offsets")

if __name__ == "__main__":
    main()
