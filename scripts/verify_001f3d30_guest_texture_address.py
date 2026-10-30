#!/usr/bin/env python3
"""Check original 32-bit Xbox texture address and separate F32 fields.

Private original XBE remains local. Source-only GitHub CI is weaker than
passing --xbe. This does not validate the native guest-memory translation.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x001F3D37, "8b4818"),         # MOV ECX,[EAX+0x18]: guest pointer DWORD
    (0x001F3D3A, "d94108"),         # FLD F32 [ECX+8]: texture scale
    (0x001F3D7E, "8b4818"),         # MOV ECX,[EAX+0x18] again
    (0x001F3D81, "d901"),           # FLD F32 [ECX]
    (0x001F3D87, "d808"),           # FMUL F32 [EAX] output
    (0x001F3D8F, "8b4218"),         # MOV EAX,[EDX+0x18] guest pointer again
    (0x001F3D92, "d900"),           # FLD F32 [EAX]
    (0x001F3D98, "d808"),           # FMUL F32 [EAX] output
    (0x001F3DA6, "f30f2c44241c"),   # CVTTSS2SI integer tile index
    (0x001F3EE1, "8b5018"),         # MOV EDX,[EAX+0x18]
    (0x001F3EEF, "8b4220"),         # MOV EAX,[EDX+0x20]: related texture entry
)
SOURCE = "src/main_unclassified/band_001f/0x001f3d30.cpp"
REQUIRED = (
    "uint32_t guest_texture_address;",
    "memcpy(&guest_texture_address, &param_1[6], sizeof guest_texture_address);",
    "guest_texture = (const uint8_t *)(uintptr_t)guest_texture_address;",
    "*(const float *)(guest_texture + 8)",
    "*(const float *)guest_texture * *param_3",
    "*(const float *)guest_texture * *param_4",
    "*(const int *)(guest_texture + 0x20)",
)
FORBIDDEN = (
    "*(float *)param_1[6]",
    "(int)param_1[6]",
)
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    src = (args.root / SOURCE).read_text()
    for token in REQUIRED:
        if token not in src:
            raise SystemExit("missing guest address/F32 contract: " + token)
    for token in FORBIDDEN:
        if token in src:
            raise SystemExit("bogus numerical cast restored: " + token)
    if args.xbe is None:
        print("PASS: guest pointer DWORD and texture F32 source-only contracts")
        return
    blob = args.xbe.read_bytes()
    for addr, hx in OPCODES:
        want = bytes.fromhex(hx)
        got = blob[addr - 0x10000:addr - 0x10000 + len(want)]
        if got != want:
            raise SystemExit(f"Original XBE opcode mismatch 0x{addr:08X}: {got.hex()}")
    print(f"PASS: {len(OPCODES)} original x86 instruction signatures")
    print("NOT VERIFIED: native guest-memory mapping, interface linkage, or full behavior")

if __name__ == "__main__":
    main()
