#!/usr/bin/env python3
"""Check two x86 virtual-call guest stack-slot contracts.

Source-only CI mode checks the storage/dataflow syntax contract without
pretending to verify the original game. Pass the original private XBE to
verify the exact instruction bytes as well. The guest memory translation,
64-bit host ABI, and virtual method signatures remain unverified.
"""
import argparse
from pathlib import Path

ORIGINAL_XBE = (
    (0x00280A40, "8b542408"),         # input second incoming argument
    (0x00280A52, "8d54240c"),         # address of same incoming argument slot
    (0x00280A57, "c744241000000000"), # zero that slot after one PUSH
    (0x00280A69, "8b442408"),         # load first input for fallback
    (0x00280A7B, "8b44240c"),         # read callback-written slot
    (0x00280A87, "ff5108"),           # release returned interface
    (0x00282310, "51"),               # reserve one local guest stack DWORD
    (0x00282317, "8d542400"),         # address of reserved local
    (0x0028231D, "c744240800000000"), # initialize reserved local to zero
    (0x0028232E, "8d54240c"),         # address of second incoming argument
    (0x00282337, "817c240c23e235f4"), # compare callback-written selector
    (0x00282341, "8b442408"),         # first incoming pointer, not returned object
    (0x00282345, "c7402c00000000"),   # clear object field at +0x2c
    (0x0028234C, "8b442400"),         # acquired object from reserved local
    (0x00282357, "ff5108"),           # release acquired object
)
SOURCES = (
    ("src/main_unclassified/band_0028/0x00280a40.cpp", (
        "uint32_t guest_received_interface = 0;",
        "(*piVar2 + 0x18))(piVar2,param_2)",
        "&guest_received_interface",
        "FUN_00280a90(param_1)",
        "if (guest_received_interface != 0)",
        "(int *)(uintptr_t)guest_received_interface",
    )),
    ("src/main_unclassified/band_0028/0x00282310.cpp", (
        "uint32_t guest_acquired_object = 0;",
        "uint32_t guest_selector_word = (uint32_t)(uintptr_t)param_2;",
        "&guest_acquired_object",
        "&guest_selector_word",
        "guest_selector_word == UINT32_C(0xf435e223)",
        "param_1 + UINT32_C(0x2c)",
        "if (acquired_object != (int *)0)",
    )),
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?", help="private original Brute Force XBE for instruction evidence")
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    for rel, tokens in SOURCES:
        src = (a.repo / rel).read_text(encoding="utf-8")
        for token in tokens:
            if token not in src:
                raise SystemExit(f"{rel}: missing C11 source invariant {token!r}")
        if "stack0x00000000" in src:
            raise SystemExit(f"{rel}: unresolved original guest argument slot")
    if a.xbe is None:
        print("PASS: 2 source contracts only; no original XBE evidence checked")
        return
    image = a.xbe.read_bytes()
    for address, expected_hex in ORIGINAL_XBE:
        expected = bytes.fromhex(expected_hex)
        off = address - 0x10000
        actual = image[off:off + len(expected)]
        if actual != expected:
            raise SystemExit(f"original x86 opcode mismatch at 0x{address:08X}: {actual.hex()}")
    print(f"PASS: {len(ORIGINAL_XBE)} original XBE instruction signatures and 2 C11 source contracts")
    print("NOT VERIFIED: complete virtual callback ABI, guest address mapping, or runtime equivalence")

if __name__ == "__main__":
    main()
