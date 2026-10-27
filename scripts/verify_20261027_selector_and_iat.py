#!/usr/bin/env python3
"""Protect two x86 instruction-backed C11 repairs.

Original byte checks require the user's private original XBE (--xbe).
Source-only checks run in CI even if unrelated compiler errors persist.
The guest selector's untouched high half-word and Xbox IAT call target do
not establish a working native host ABI.
"""
import argparse
import hashlib
import re
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = (
    (0x001558d4, "33f6", "zero upper bits for other selector branch"),
    (0x001558d6, "668b7174", "read zero-extended selector in SI"),
    (0x001558da, "8975ec", "save zero-extended selector to guest DWORD"),
    (0x001558e8, "668b4822", "read incoming selector into CX"),
    (0x001558ec, "66894dec", "overwrite ONLY low selector half-word"),
    (0x001558f0, "8b75ec", "reload full DWORD, upper half preserved"),
    (0x002fe512, "8d45d0", "address guest argument structure"),
    (0x002fe515, "50", "push address of guest structure"),
    (0x002fe516, "8b4508", "load first incoming guest argument"),
    (0x002fe519, "ff30", "push first pointed-to guest DWORD"),
    (0x002fe51b, "ff15584b4100", "CALL DWORD PTR [0x00414B58]"),
    (0x002fe521, "5959", "caller pops two DWORD arguments"),
)

def stripped(source):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)

def check_source(root):
    a = (root/"src/main_unclassified/band_0015/0x00155840.c").read_text()
    b = (root/"src/main_unclassified/band_002f/0x002fe4a6.c").read_text()
    for addr,s in (("00155840",a),("002fe4a6",b)):
        assert f"Entry: 0x{addr}," in s
        assert "Input x86 body SHA-256:" in s
        assert "ABI_UNVERIFIED" in s
    ac = stripped(a)
    bc = stripped(b)
    assert "local_18 = (local_18 & UINT32_C(0xffff0000)) |" in ac
    assert "(uint32_t)*(const uint16_t *)(uintptr_t)(in_ECX + 0x22);" in ac
    assert "local_18._2_2_" not in ac
    assert "extern code *DAT_00414b58;" in bc
    assert "extern uint32_t *DAT_00414b58;" not in bc
    assert "(*DAT_00414b58)(*param_1,&local_34);" in bc
    print("PASS: 16-bit selector preserves high guest bits")
    print("PASS: guest IAT entry is an indirect function pointer, not scalar data")

def check_xbe(path):
    raw = path.read_bytes()
    assert hashlib.sha256(raw).hexdigest() == XBE_SHA256, "incorrect original XBE SHA256"
    for address,h,description in SITES:
        expected = bytes.fromhex(h)
        actual = raw[address-0x10000:address-0x10000+len(expected)]
        assert actual == expected, f"0x{address:08x} {description}: {actual.hex()} != {h}"
        print(f"PASS x86 0x{address:08x}: {description}")
    print(f"PASS: {len(SITES)} byte-level instruction checks")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    args=p.parse_args()
    check_source(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("NOTE: original XBE omitted from CI; no guest byte match claimed")
    print("PASS: native guest-to-host ABI, 1:1 execution, and linkage remain unverified")

if __name__ == "__main__":
    main()
