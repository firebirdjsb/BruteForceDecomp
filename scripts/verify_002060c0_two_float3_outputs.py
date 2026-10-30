#!/usr/bin/env python3
"""Guard the two distinct original x86 output float3 buffers.

The callee 0x00205FB0 writes three 32-bit words to each output pointer.
The caller 0x002060C0 supplies [ESP-0x84] and [ESP-0x78], which
are nonoverlapping 12-byte blocks. --xbe verifies the private executable.
This does not prove the callee's implicit guest EBX object input.
"""
import argparse
import hashlib
import re
from pathlib import Path

XBE_HASH="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES=(
    (0x00206142,"55","save guest EBP"),
    (0x00206143,"8d4c2420","get second output float3 at entry ESP-0x78"),
    (0x00206147,"51","push second output pointer"),
    (0x00206148,"8d542418","get first output float3 at entry ESP-0x84"),
    (0x0020614c,"52","push first output pointer"),
    (0x0020614f,"e85cfeffff","call 0x00205FB0"),
    (0x00205fb9,"8b6c2424","callee first output guest pointer"),
    (0x00206082,"894500","callee first output DWORD 0"),
    (0x00206085,"894d04","callee first output DWORD 1"),
    (0x00206088,"895508","callee first output DWORD 2"),
    (0x00206094,"8b4c2418","callee second output register"),
    (0x00206098,"d918","callee second output F32 0"),
    (0x002060ac,"894804","callee second output DWORD 1"),
    (0x002060af,"895008","callee second output DWORD 2"),
    (0x002060b5,"c20800","callee pops two guest pointer args"),
)
def check_source(root):
    caller=(root/"src/main_unclassified/band_0020/0x002060c0.cpp").read_text()
    callee=(root/"src/main_unclassified/band_0020/0x00205fb0.cpp").read_text()
    assert "Entry: 0x002060c0," in caller
    assert "Entry: 0x00205fb0," in callee
    assert "ABI_UNVERIFIED" in caller and "ABI_UNVERIFIED" in callee
    stripped=re.sub(r"/\*.*?\*/|//[^\n]*","",caller,flags=re.S)
    assert "FUN_00205fb0(&uStack_84,(undefined4 *)auStack_78);" in stripped
    assert "&stack0xffffff70" not in stripped
    assert "undefined4 uStack_84;" in caller
    assert "undefined4 uStack_80;" in caller
    assert "undefined4 uStack_7c;" in caller
    assert "undefined1 auStack_78 [12];" in caller
    assert "*param_1 = local_18;" in callee
    assert "param_1[2] = local_10;" in callee
    assert "*param_2 = uVar1;" in callee
    assert "param_2[2] = local_4;" in callee
    print("PASS: distinct 12-byte guest vector outputs and callee writes")

def check_xbe(path):
    b=path.read_bytes()
    assert hashlib.sha256(b).hexdigest()==XBE_HASH,"unexpected original Xbox executable"
    for va,h,description in SITES:
        expected=bytes.fromhex(h)
        got=b[va-0x10000:va-0x10000+len(expected)]
        assert got==expected, f"0x{va:08X} {description}: {got.hex()}"
        print(f"PASS 0x{va:08X}: {description}")
    print(f"PASS: {len(SITES)} original opcode bytes")

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe",type=Path)
    args=ap.parse_args()
    check_source(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("NOTE: original Xbox executable not provided in CI")
    print("PASS: no claim of native host ABI or executable game behavior")

if __name__=="__main__":
    main()
