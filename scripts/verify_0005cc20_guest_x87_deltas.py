#!/usr/bin/env python3
"""Evidence-only verification of 0x0005CC20's guest XYZ F32 stack lanes.

With --xbe, prove original F32 load/sub/store opcodes and 32-bit copy.
Without --xbe (GitHub CI), validate the C11 source lane/dataflow contract.
This is not verification of the full guest function or host ABI.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x0005CC95: "d9402c",     # FLD DWORD [EAX+2C] (z)
    0x0005CC98: "d8632c",     # FSUB DWORD [EBX+2C]
    0x0005CCA0: "d94028",     # FLD DWORD [EAX+28] (y)
    0x0005CCA3: "d86328",     # FSUB DWORD [EBX+28]
    0x0005CCA6: "d94024",     # FLD DWORD [EAX+24] (x)
    0x0005CCA9: "d86324",     # FSUB DWORD [EBX+24]
    0x0005CCAC: "d95c2424",   # FSTP DWORD [ESP+24] (x)
    0x0005CCB2: "d95c2428",   # FSTP DWORD [ESP+28] (z)
    0x0005CCB6: "8b4c2428",   # MOV ECX,[ESP+28]: original Z float word
    0x0005CCBE: "894c2434",   # MOV [ESP+34],ECX: saved Z float copy
    0x0005CCC6: "d9442434",   # FLD DWORD [ESP+34]
    0x0005CCCA: "d84c2434",   # FMUL DWORD [ESP+34]
}
SOURCE = "src/main_unclassified/band_0005/0x0005cc20.cpp"
TOKENS = (
    "float guest_delta_z;",
    "float guest_delta_x;",
    "float guest_saved_z;",
    "guest_delta_z = *(float *)(iVar10 + 0x2c) - *(float *)(iVar9 + 0x2c);",
    "guest_delta_x = *(float *)(iVar10 + 0x24) - *(float *)(iVar9 + 0x24);",
    "guest_saved_z = guest_delta_z;",
    "guest_saved_z * guest_saved_z + guest_delta_x * guest_delta_x",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    a = ap.parse_args()
    source = (a.root / SOURCE).read_text(encoding="utf-8")
    for marker in TOKENS:
        if marker not in source:
            raise SystemExit(f"{SOURCE}: required original x87 storage contract absent: {marker}")
    for bad in ("(float)piStack_24", "(float)piStack_34", "(int *)(*(float *)(iVar10 + 0x2c)"):
        if bad in source:
            raise SystemExit(f"{SOURCE}: pointer used as guest float: {bad}")
    if a.xbe is None:
        print("PASS: 0x0005CC20 guest F32 source invariants (private XBE not provided)")
        return
    data = a.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise SystemExit("Wrong original Xbox executable")
    for address, opcode in OPCODES.items():
        expected = bytes.fromhex(opcode)
        got = data[address-0x10000:address-0x10000+len(expected)]
        if got != expected:
            raise SystemExit(f"XBE mismatch at 0x{address:08x}: {got.hex()} != {opcode}")
    print(f"PASS: {len(OPCODES)} original x87 opcodes and 3 F32 guest lane contracts")

if __name__ == "__main__":
    main()
