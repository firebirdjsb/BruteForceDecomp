#!/usr/bin/env python3
"""Pin D3D indexed render-state guest address to original XBE instructions."""
import argparse
import hashlib
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from source_layout import source_path

ORIGINAL_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
INSTRUCTIONS = {
    # These are section-mapped VAs, not file offsets plus 0x10000.
    0x0036D22D: "3b3cb598dd3700",  # cmp edi, [esi*4+0x37dd98]
    0x0036D249: "893cb598dd3700",  # mov [esi*4+0x37dd98], edi
    0x0036D3C6: "8b34b598dd3700",  # mov esi, [esi*4+0x37dd98]
    0x0036D4B0: "8bb098dd3700",    # mov esi, [eax+0x37dd98]
    0x0036D549: "8b0c8598dd3700",  # mov ecx, [eax*4+0x37dd98]
    0x0036D552: "8d2c8598dd3700",  # lea ebp, [eax*4+0x37dd98]
    0x001F449C: "8b0d88dd3700",    # mov ecx, DWORD [0x37dd88]
    0x0036D29C: "3b0c9530bb3700",  # cmp ecx, DWORD [edx*4+0x37bb30]
    0x0036D486: "8b34b530bb3700",  # mov esi, DWORD [esi*4+0x37bb30]
    0x0036D4C5: "a1b8df3700",      # mov eax, DWORD [0x37dfb8]
    0x0036D5C8: "3b0c9530bb3700",  # cmp ecx, DWORD [edx*4+0x37bb30]
    0x0036D63B: "899f08df3700",    # mov DWORD [edi+0x37df08], ebx
    0x0036D65D: "899f08df3700",    # same store on the other path
    0x0036EE9C: "3bae50b93700",    # cmp ebp, DWORD [esi+0x37b950]
    0x0036EEA7: "89ae50b93700",    # mov DWORD [esi+0x37b950], ebp
    0x00370CAC: "892cbd30bb3700",  # mov DWORD [edi*4+0x37bb30], ebp
    0x00370D70: "891c8530bb3700",  # mov DWORD [eax*4+0x37bb30], ebx
    0x00370DCC: "891c8530bb3700",  # same store on the other path
    0x003737D7: "8b34b550b93700",  # mov esi, DWORD [esi*4+0x37b950]
    0x00376FD6: "bf50b93700",      # mov edi, 0x37b950 (clear destination)
    0x00376FDB: "f3ab",            # rep stosd, four-byte stores
}
FILES = (
    "src/platform/graphics_d3d/0x0036d200.cpp",
    "src/platform/graphics_d3d/0x0036d390.cpp",
    "src/platform/graphics_d3d/0x0036d4d0.cpp",
)
DECLARATION = "extern uint32_t D3D8__D3D_g_RenderState;"
ADDITIONAL_DECLARATIONS = (
    ("0x001f4240", '#include "bf_xbox_d3d_device_x86.h"'),
    ("0x0036d200", "extern uint32_t D3D8LTCG__D3D_g_DeferredTextureState;"),
    ("0x0036d390", "extern uint32_t D3D8LTCG__D3D_g_DeferredTextureState;"),
    ("0x0036d390", "extern uint32_t D3D8__D3DRS_PSTextureModes;"),
    ("0x0036d4d0", "extern uint32_t D3D8LTCG__D3D_g_DeferredTextureState;"),
    ("0x0036d4d0", "extern uint32_t D3D8__D3DRS_FogEnable;"),
    ("0x0036ee50", "extern uint32_t D3D_g_Stream;"),
    ("0x00370c50", "extern uint32_t D3D_g_DeferredTextureState;"),
    ("0x00370d50", "extern uint32_t D3D_g_DeferredTextureState;"),
    ("0x00373730", "extern uint32_t D3D_g_Stream;"),
    ("0x00376e10", "extern uint32_t D3D8LTCG__D3D_g_Stream;"),
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("repo", type=Path)
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != ORIGINAL_SHA256:
        parser.error("Original XBE SHA-256 mismatch")
    sections = xbe_sections(data)
    for address, hexbytes in INSTRUCTIONS.items():
        expected = bytes.fromhex(hexbytes)
        actual = mapped_span(data, sections, address, len(expected))
        if actual != expected:
            raise SystemExit(f"FAIL x86 {address:#x}: {actual.hex()}")
    for name in FILES:
        text = (args.repo / name).read_text(encoding="utf-8")
        if DECLARATION not in text:
            raise SystemExit(f"FAIL missing syntax-only guest declaration: {name}")
    for entry, declaration in ADDITIONAL_DECLARATIONS:
        text = source_path(args.repo, entry).read_text(encoding="utf-8")
        if declaration not in text:
            raise SystemExit(f"FAIL missing syntax-only guest declaration: {entry}")
    print(f"PASS: {len(INSTRUCTIONS)} original x86 instructions and "
          f"{len(FILES) + len(ADDITIONAL_DECLARATIONS)} C11 declarations/includes")
    print("No guest memory mapping, cross-TU linking or runtime equivalence is implied.")

if __name__ == "__main__":
    main()
