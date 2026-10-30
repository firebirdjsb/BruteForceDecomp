#!/usr/bin/env python3
"""Instruction-backed static checks for the October guest-global C11 repair batch."""
import argparse
import hashlib
from pathlib import Path

SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    (0x0012E2DB, "c705d899460002000000", "src/main_unclassified/band_0012/0x0012dfa0.cpp", "extern uint32_t uRam004699d8;"),
    (0x001EDD6D, "393d645b4a00", "src/main_unclassified/band_001e/0x001edd40.cpp", "extern uint32_t iRam004a5b64;"),
    (0x001EDD82, "893d645b4a00", "src/main_unclassified/band_001e/0x001edd40.cpp", "extern uint32_t iRam004a5b64;"),
)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("xbe", type=Path)
    p.add_argument("repo", type=Path)
    a = p.parse_args()
    data = a.xbe.read_bytes()
    if hashlib.sha256(data).hexdigest() != SHA:
        p.error("Original XBE hash mismatch")
    for address, encoded, path, declaration in CASES:
        expected = bytes.fromhex(encoded)
        actual = data[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"FAIL: {address:#x} original instruction mismatch: {actual.hex()}")
        if declaration not in (a.repo / path).read_text(encoding="utf-8"):
            raise SystemExit(f"FAIL: {path} missing verified guest global declaration")
        print(f"PASS {address:#010x}: original instruction and declaration verified")
    print("NOTE: host C11 syntax, linker definitions and guest-memory semantics not tested.")

if __name__ == "__main__":
    main()
