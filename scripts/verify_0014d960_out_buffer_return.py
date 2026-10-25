#!/usr/bin/env python3
"""Check that the original Xbox routine returns its 2-word output buffer."""
import argparse
import hashlib
from pathlib import Path

SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPS = {
    0x0014da45: "e816ffffff", # recursive call
    0x0014da4a: "8b10",       # take recursive first result DWORD
    0x0014da50: "8b4804",     # take recursive second result DWORD
    0x0014da53: "8b442428",   # return original output pointer in EAX
    0x0014da58: "8910",       # write output DWORD 0
    0x0014da5a: "894804",     # write output DWORD 1
    0x0014da61: "c20c00",     # ret 12
}
def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--xbe", type=Path)
    args = p.parse_args()
    source = (args.root / "src/main_unclassified/band_0014/0x0014d960.c").read_text()
    assert "undefined4 * FUN_0014d960(undefined4 *param_1,int *param_2,char param_3)" in source
    assert "return param_1;" in source
    assert "(undefined4 *)FUN_0014d960(local_1c,&local_14,0)" in source
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == SHA256
        for address, opcode in OPS.items():
            exact = bytes.fromhex(opcode)
            assert data[address-0x10000:address-0x10000+len(exact)] == exact, hex(address)
    print("PASS: 0x0014D960 guest EAX returned output pointer")

if __name__ == "__main__":
    main()
