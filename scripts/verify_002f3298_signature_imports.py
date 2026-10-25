#!/usr/bin/env python3
"""Pin XCalculateSignatureBeginEx certificate field and guest import semantics.

With a private XBE, verify the exact original function digest and x86 bytes.
Without one, CI checks only the C11 source/layout contract, not runtime ABI.
The Xbox XBE is deliberately never committed to this repository.
"""
import argparse
import hashlib
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "f27d90811575d102a3473c35db2dbdd3e80c00e8fc4c25c735b7115b3d33e263"
START = 0x002F3298
END = 0x002F3315
SOURCE = "src/main_unclassified/band_002f/0x002f3298.c"
HEADER = "include/bf_xbe_certificate_layout.h"

# Original x86: load certificate pointer through XBE header slot; TitleID
# at +8; alternate table at +0x5c with 16 DWORD entries. The original
# post-loop compare is 0x40, NOT 0x10. Preserve that unusual behavior.
CHECKS = (
    (0x002F329A, "8b3518010100", "XBE_CERTIFICATE_HEADER_00010180.TitleID"),
    (0x002F32BE, "395e08", "XBE_CERTIFICATE_HEADER_00010180.TitleID"),
    (0x002F32C5, "8d4e5c", "XBE_CERTIFICATE_HEADER_00010180.AlternateTitleID"),
    (0x002F32D6, "83f810", "uVar2 < 0x10"),
    (0x002F32DB, "83f840", "0x3f < uVar2"),
    (0x002F32EF, "0305ec643800", "UINT32_C(0x003864ec) + uVar2 * 0x10"),
    (0x002F32F7, "a1e8643800", "UINT32_C(0x003864e8)"),
)

def main():
    parser = argparse.ArgumentParser()
    # Keep the historical positional XBE + repo invocation working.
    parser.add_argument("xbe", nargs="?", type=Path)
    parser.add_argument("repo", nargs="?", type=Path)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    root = args.repo or args.root
    source = (root / SOURCE).read_text(encoding="utf-8")
    header = (root / HEADER).read_text(encoding="utf-8")

    for token in (
        '#include "bf_xbe_certificate_layout.h"',
        "pdVar4 = XBE_CERTIFICATE_HEADER_00010180.AlternateTitleID;",
        "if (*pdVar4 == 0)",
        "if (param_2 == *pdVar4)",
        "pdVar4 = pdVar4 + 1;",
        "uVar2 < 0x10",
        "0x3f < uVar2",
    ):
        if token not in source:
            raise SystemExit(f"missing certificate source contract: {token}")
    if "AlternateTitleIDs" in source:
        raise SystemExit("invalid certificate field spelling: AlternateTitleIDs")
    for token in (
        "uint32_t AlternateTitleID[16];",
        "BF_CERT_ASSERT(AlternateTitleID, 0x5c);",
    ):
        if token not in header:
            raise SystemExit(f"missing certificate layout contract: {token}")

    if args.xbe is not None:
        image = args.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != XBE_SHA256:
            raise SystemExit("original XBE SHA-256 mismatch")
        body = image[START - 0x10000:END - 0x10000]
        if hashlib.sha256(body).hexdigest() != BODY_SHA256:
            raise SystemExit("original XCalculateSignatureBeginEx body mismatch")
        for address, opcodes, _ in CHECKS:
            expected = bytes.fromhex(opcodes)
            actual = image[address - 0x10000:address - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"original x86 mismatch at {address:#x}")
        print(f"PASS: original XBE body digest and {len(CHECKS)} instruction signatures")
    else:
        print("PASS: certificate source and layout contract (source-only CI)")
    print("Native guest-pointer relocation and host callback ABI are NOT verified.")

if __name__ == "__main__":
    main()
