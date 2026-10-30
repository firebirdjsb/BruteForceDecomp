#!/usr/bin/env python3
"""Check the observed 0x0008a460 guest DWORD out-argument, not the full ABI.

The source-only check runs in public CI; --xbe pins original instruction bytes.
This does not establish host vtable calling conventions or guest memory mapping.
"""
import argparse
import hashlib
from pathlib import Path

ORIGINAL_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = Path("src/main_unclassified/band_0008/0x0008a460.cpp")
REQUIRED = (
    "guest_first_call_result = iVar1;",
    "guest_out_word = *(uint32_t *)(uintptr_t)((uint32_t)guest_first_call_result + UINT32_C(0x0c));",
    "(&guest_out_word);",
    "TODO: guest memory translation and vtable ABI remain unverified.",
)
FORBIDDEN = ("&stack0xfffffff8",)
# Original guest EAX survives the intermediate ECX/state checks. At the
# successful branch it supplies a DWORD stored in the saved ECX stack slot;
# that exact slot is passed by address to the second virtual call.
X86 = (
    (0x0008A478, "85c0"),          # TEST EAX,EAX
    (0x0008A49F, "8b500c"),        # MOV EDX,[EAX+0x0C]
    (0x0008A4A7, "89542404"),      # MOV [ESP+4],EDX
    (0x0008A4B0, "8d442404"),      # LEA EAX,[ESP+4]
    (0x0008A4B4, "50"),            # PUSH EAX
    (0x0008A4B5, "ff928c010000"),  # CALL DWORD [EDX+0x18C]
    (0x0008A4BB, "5f59c3"),        # POP EDI; POP ECX; RET
)


def check_source(root: Path) -> None:
    src = (root / SOURCE).read_text(encoding="utf-8")
    for token in REQUIRED:
        if token not in src:
            raise SystemExit("Missing guest outword invariant: " + token)
    for token in FORBIDDEN:
        if token in src:
            raise SystemExit("Regressed unresolved guest stack symbol: " + token)


def check_xbe(path: Path) -> None:
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != ORIGINAL_XBE_SHA256:
        raise SystemExit("XBE SHA-256 mismatch: original Brute Force build required")
    for address, hex_bytes in X86:
        expected = bytes.fromhex(hex_bytes)
        actual = data[address - 0x10000:address - 0x10000 + len(expected)]
        if actual != expected:
            raise SystemExit(f"Original x86 instruction mismatch at {address:#010x}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    check_source(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    print("PASS: guest DWORD outword source" +
          (" and seven original x86 instruction fingerprints" if args.xbe else " (XBE not checked)"))
    print("NOTE: guest pointer translation, implicit ESI and both virtual-call ABIs remain unverified")


if __name__ == "__main__":
    main()
