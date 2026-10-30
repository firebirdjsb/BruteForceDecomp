#!/usr/bin/env python3
"""Pin x86 SIMD guest slots and decompiler-broken format-string labels.

CI runs source-only checks. Locally --xbe verifies instruction bytes against
the exact user-supplied original XBE, without checking in any copyrighted data.
No host ABI, guest memory mapping or linked gameplay behavior is claimed.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SIMD = {
    0x00266CE0: "0f1000",  # movups xmm0,[eax]
    0x00266CE8: "0f104810",  # movups xmm1,[eax+16]
    0x00266CF0: "0f1102",  # movups [edx],xmm0
    0x00266CF8: "0f114a10",  # movups [edx+16],xmm1
    0x00266CFC: "c7442420c0b04600",  # guest base 0x0046B0C0
    0x00266D0C: "0f1000",
    0x00266D14: "0f104810",
    0x00266D1C: "0f1102",
    0x00266D24: "0f114a10",
}
GUEST_FORMAT_WORDS = {
    "0040c640", "0040c618", "0040c5f8", "0040c5dc",
    "0040c5c4", "0040c5b4", "0040c598", "0040c574", "0040c674",
}

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    matrix = (args.root / "src/main_unclassified/band_0026/0x00266bf0.cpp").read_text()
    for word in ("uRam0046b0c4", "uRam0046b0c8", "uRam0046b0cc",
                 "uRam0046b0d4", "uRam0046b0d8", "uRam0046b0dc"):
        assert "extern uint32_t " + word + ";" in matrix
    assert "DAT_0046b180 = uRam0046b0c8;" in matrix
    assert "DAT_0046b184 = uRam0046b0cc;" in matrix
    assert "DAT_0046b18c = uRam0046b0d4;" in matrix
    assert "DAT_0046b190 = uRam0046b0d8;" in matrix
    assert "DAT_0046b194 = uRam0046b0dc;" in matrix
    parser_source = (args.root / "src/main_unclassified/band_0017/0x001753f0.cpp").read_text()
    for address in GUEST_FORMAT_WORDS:
        exact = "(char *)(uintptr_t)UINT32_C(0x" + address.upper() + ")"
        assert exact in parser_source, exact
    assert "*(undefined4 *)(uintptr_t)UINT32_C(0x00000004) = local_1c4;" in parser_source
    assert "uRam00000004 =" not in parser_source
    if args.xbe:
        data = args.xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA256
        for va, hx in SIMD.items():
            expected = bytes.fromhex(hx)
            assert data[va-0x10000:va-0x10000+len(expected)] == expected, hex(va)
        function_region = data[0x1753f0-0x10000:0x176000-0x10000]
        for address in GUEST_FORMAT_WORDS:
            assert bytes.fromhex(address)[::-1] in function_region, address
        for va, hx in {
            0x00175C54: "33c0",
            0x00175C56: "894804",
        }.items():
            expected = bytes.fromhex(hx)
            assert data[va-0x10000:va-0x10000+len(expected)] == expected, hex(va)
    print("PASS: guest vector lanes, nine format immediates, null-base write")

if __name__ == "__main__":
    main()
