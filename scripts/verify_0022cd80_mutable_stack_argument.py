#!/usr/bin/env python3
"""Pin the 0x0022CD80 mutable DWORD stack argument to original Xbox x86."""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
INSTRUCTIONS = (
    (0x0022CDEC, "8b5218"),     # mov edx,[edx+0x18]
    (0x0022CDF1, "89542418"),   # mov [esp+0x18],edx
    (0x0022CE0C, "8d542418"),   # lea edx,[esp+0x18]
    (0x0022CE10, "52"),         # push edx (mutable DWORD pointer)
    (0x0022CE7E, "8b542418"),   # mov edx,[esp+0x18]
    (0x0022CE82, "3b1564d04600"), # cmp edx,[0x46d064]
)
SOURCE = "src/main_unclassified/band_0022/0x0022cd80.cpp"
REQUIRED = (
    "int _param_2;",
    "_param_2 = *(int *)(iVar4 + 0x18);",
    "(&_param_2);",
    "unaff_ESI,&_param_2,local_8",
    "if (_param_2 != DAT_0046d064)",
)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("repo", type=Path)
    args = parser.parse_args()
    data = args.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        parser.error("original XBE hash mismatch")
    for va, hexbytes in INSTRUCTIONS:
        expected = bytes.fromhex(hexbytes)
        actual = data[va - 0x10000:va - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL original instruction {va:#x}: {actual.hex()}")
    source = (args.repo / SOURCE).read_text(encoding="utf-8")
    for item in REQUIRED:
        if item not in source:
            raise SystemExit(f"FAIL source contract: {item}")
    print("PASS: 6 original instructions and 5 C draft contract checks")
    print("Host C11, linking and 1:1 runtime behavior are not established by this test.")

if __name__ == "__main__":
    main()
