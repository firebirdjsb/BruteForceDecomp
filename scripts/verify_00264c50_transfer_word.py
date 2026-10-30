#!/usr/bin/env python3
"""Check FUN_00264C50's single guest transfer DWORD through two callbacks.

The private XBE may be supplied to verify original x86 instruction bytes.
FUN_00264B30's implicit incoming ECX and Xbox import ABI are NOT yet linked.
"""
import argparse
from pathlib import Path

OPCODES = (
    (0x00264C64, "682cb24600"),  # enter critical section at guest 0x0046B22C
    (0x00264C6F, "8b4634"),      # load initial DWORD from guest object +0x34
    (0x00264C72, "89442408"),    # save at ESP+8
    (0x00264C79, "8d542408"),    # &same DWORD for vtable +0x18
    (0x00264C7E, "897c2410"),    # save incoming ECX at distinct slot
    (0x00264C85, "ff5118"),      # first virtual callback writes the DWORD
    (0x00264CA6, "8d4c240c"),    # &same DWORD for FUN_00264B30 hidden ECX
    (0x00264CAA, "e881feffff"),  # call FUN_00264B30
    (0x00264CC8, "8b4648"),      # retrieve original source object
    (0x00264CCD, "8d542408"),    # &same guest DWORD for vtable +0x14
    (0x00264CD3, "ff5114"),      # second virtual callback
)
SOURCE = "src/main_unclassified/band_0026/0x00264c50.cpp"
CONTRACT = (
    "uint32_t guest_transfer_word;",
    "guest_transfer_word = *(uint32_t *)(uintptr_t)(in_EDX + 0x34);",
    "RtlEnterCriticalSection(&DAT_0046b22c);",
    "(*(int **)(in_EDX + 0x48),&guest_transfer_word);",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", type=Path, nargs="?")
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    src = (a.repo / SOURCE).read_text(encoding="utf-8")
    for t in CONTRACT:
        if t not in src:
            raise SystemExit(f"Missing guest transfer source invariant: {t}")
    if src.count("&guest_transfer_word") != 2:
        raise SystemExit("Expected two explicit callbacks with the same guest word")
    if "stack0xfffffff4" in src or "puStack_14" in src:
        raise SystemExit("Old unresolved guest stack alias remains")
    if a.xbe is None:
        print("PASS: shared guest transfer word source-only contract")
        return
    original = a.xbe.read_bytes()
    for addr, hexcode in OPCODES:
        want = bytes.fromhex(hexcode)
        actual = original[addr-0x10000:addr-0x10000+len(want)]
        if actual != want:
            raise SystemExit(f"Original XBE mismatch at 0x{addr:08X}: {actual.hex()}")
    print(f"PASS: {len(OPCODES)} original x86 signatures and shared 32-bit guest transfer storage")

if __name__ == "__main__":
    main()
