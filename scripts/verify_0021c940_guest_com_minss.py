#!/usr/bin/env python3
"""Check Xbox 0x21C940 guest COM result ownership and MINSS scalar dataflow.

Source-only mode is used in GitHub CI (original XBE is private); --xbe checks
29 exact instruction byte sequences plus the XBE SHA-256.  The host pointer
mapping, vtable prototypes, 80-bit x87 precision and full 1:1 behavior are
NOT verified by this script.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
INSTRUCTIONS = {
    0x0021C943: "8b06",                # MOV EAX,[ESI]
    0x0021C945: "8d4c2400",            # LEA ECX,[ESP]: primary output slot
    0x0021C949: "51",                  # PUSH ECX
    0x0021C94A: "68e02a4000",          # push guest callback IID
    0x0021C950: "c744240c00000000",    # clear primary guest output slot
    0x0021C958: "ff10",                # device vtable call
    0x0021C962: "8b442400",            # read primary object from stack
    0x0021C968: "8d4c2408",            # address scalar guest output word
    0x0021C96E: "ff526c",              # primary +6c output
    0x0021C977: "68ffff7f7f",          # push guest FLT_MAX bits
    0x0021C97D: "ff5270",              # primary +70
    0x0021C984: "8d542404",            # address secondary output word
    0x0021C989: "c744240800000000",    # initialize secondary output word
    0x0021C994: "ff91a8000000",        # primary +a8
    0x0021C9A0: "6a00",                # push 0
    0x0021C9A3: "ff91a4000000",        # primary +a4
    0x0021C9A9: "d9442408",            # FLD F32 scalar output
    0x0021C9AD: "d80d14513a00",       # FMUL F32 at guest 0x3a5114
    0x0021C9BF: "d95c240c",            # FSTP F32 scalar product
    0x0021C9C3: "f30f10442410",        # MOVSS F32 FLT_MAX
    0x0021C9C9: "f30f5d44240c",        # MINSS F32 product
    0x0021C9CF: "f30f11442414",        # MOVSS clamped float
    0x0021C9DD: "ff5268",              # primary +68 receives float bits
    0x0021C9E6: "6800000034",          # original 0x34000000 word
    0x0021C9EC: "ff5210",              # primary +10
    0x0021C9FB: "ff91a4000000",        # primary +a4 receives secondary
    0x0021CA0C: "ff5108",              # release secondary
    0x0021CA19: "ff5270",              # device fallback
    0x0021CA27: "ff5108",              # release primary
}
SOURCE = "src/main_unclassified/band_0021/0x0021c940.cpp"
NEEDED = (
    "uint32_t guest_primary_word = 0;",
    "uint32_t guest_secondary_word = 0;",
    "float guest_query_float = 0.0f;",
    "memcpy(&guest_multiplier, &DAT_003a5114, sizeof guest_multiplier);",
    "_mm_min_ss(_mm_set_ss(guest_max_float),",
    "memcpy(&guest_clamped_bits, &guest_clamped_float,",
    "(*guest_primary + 0x68))(guest_primary, guest_clamped_bits)",
    "(*guest_primary + 0xa4))(guest_primary, guest_secondary_word)",
    "if (guest_secondary_word != 0)",
    "if (guest_primary_word != 0)",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    code = (args.root / SOURCE).read_text(encoding="utf-8")
    for needle in NEEDED:
        if needle not in code:
            raise SystemExit("guest COM source contract missing: " + needle)
    if "iRam34000000" in code or "(float)piVar2" in code:
        raise SystemExit("original integer/float/pointer corruption remains")
    if args.xbe is None:
        print("PASS: guest COM interface ownership and MINSS source contracts (without XBE)")
        return
    binary = args.xbe.read_bytes()
    if hashlib.sha256(binary).hexdigest() != XBE_SHA:
        raise SystemExit("wrong Xbox executable SHA-256")
    for address, expected_hex in INSTRUCTIONS.items():
        expected = bytes.fromhex(expected_hex)
        actual = binary[address-0x10000:address-0x10000+len(expected)]
        if actual != expected:
            raise SystemExit(f"XBE mismatch at 0x{address:08x}: {actual.hex()}")
    print(f"PASS: {len(INSTRUCTIONS)} verified original XBE instructions and C11 source slots")
    print("NOTE: entire Xbox ABI, guest memory translation, runtime parity unverified")

if __name__ == "__main__":
    main()
