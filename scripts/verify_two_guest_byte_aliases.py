#!/usr/bin/env python3
"""Verify two original guest byte/stack contracts using the supplied private XBE.

0x000AF1A0 reads the same ESP+0x17 flag written by earlier byte stores.
0x002D29F0 sign-extends two object selector bytes to 32-bit integers.
--contracts-only checks the byte contracts without claiming full-file syntax.
Default mode additionally requires both complete C files to pass Clang C11.
Neither mode proves whole-function ABI or native runtime equivalence.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path

EXPECTED_XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
X86 = {
    0x000AF205: "88542417",       # MOV BYTE [ESP+0x17],DL
    0x000AF359: "c644241701",     # MOV BYTE [ESP+0x17],1
    0x000AF41E: "8a4c2417",       # MOV CL,BYTE [ESP+0x17]
    0x000AF422: "84c9",           # TEST CL,CL
    0x002D2A6C: "0fbe470e",       # MOVSX EAX,BYTE [EDI+0x0e]
    0x002D2A70: "0fbe530e",       # MOVSX EDX,BYTE [EBX+0x0e]
    0x002D2B28: "8b542430",       # MOV EDX,[ESP+0x30] -> signed selector
}
BODIES = {
    0x000AF1A0: (1695, "5359ffa6c8e65bc432570a6d7218903a70fbe089418d6c207dc53fde44f7e6b9"),
    0x002D29F0: (1695, "8410b9159f7e13616468e55670c8d2c5b39aacb44e5ce477a904d7f75571cd49"),
}
SOURCES = {
    0x000AF1A0: (
        "Entry: 0x000af1a0",
        "local_101 = '\\0';",
        "local_101 = '\\x01';",
        "if (local_101 != '\\0')",
    ),
    0x002D29F0: (
        "Entry: 0x002d29f0",
        "int32_t guest_mode_16;",
        "int32_t guest_mode_2a;",
        "guest_mode_16 = (int32_t)*(int8_t *)(uintptr_t)(param_1 + 0x16);",
        "guest_mode_2a = (int32_t)*(int8_t *)(uintptr_t)(param_1 + 0x2a);",
        "switch(guest_mode_2a)",
        "if (guest_mode_16 == 1)",
        "if (guest_mode_16 == 3)",
        "local_90 = pfVar6 + 8;",
    ),
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def verify_source(root, contracts_only=False):
    root = Path(root).resolve()
    clang = None if contracts_only else shutil.which("clang")
    if not contracts_only and clang is None:
        raise SystemExit("Clang is required for strict full-file C11 validation")
    for entry, markers in SOURCES.items():
        path = source_path(root, f"0x{entry:08x}")
        src = path.read_text(encoding="utf-8")
        digest, conflict = read_body_digest(src)
        if conflict or digest is None or digest.lower() != BODIES[entry][1]:
            raise SystemExit(f"{path}: original body label missing, conflicting or wrong")
        for marker in markers:
            if marker not in src:
                raise SystemExit(f"{path}: missing byte contract {marker!r}")
        if "uStack_124._3_1_" in src or "switch(local_8c)" in src:
            raise SystemExit(f"{path}: unresolved byte alias")
        if not contracts_only:
            for optimization in ("-O0", "-O2"):
                result = subprocess.run(
                    [clang, *FLAGS, optimization, "-I", str(root / "include"), str(path)],
                    capture_output=True, text=True,
                )
                if result.returncode:
                    raise SystemExit(f"{path} {optimization}: {result.stderr}")
    if contracts_only:
        print("PASS: 2 partial guest-byte source contracts and body labels")
        print("Full-file C11 syntax NOT checked here; baseline 0x000af1a0 D3D/pointer-float errors and 0x002d29f0 pointer-float errors remain for the full sweep")
    else:
        print("PASS: 2 guest-byte source contracts with full-file Clang C11 O0/O2")

def verify_xbe(path):
    image = path.read_bytes()
    if hashlib.sha256(image).hexdigest() != EXPECTED_XBE_SHA256:
        raise SystemExit("Original Xbox XBE SHA256 mismatch")
    sections = xbe_sections(image)
    for entry, (size, digest) in BODIES.items():
        body = mapped_span(image, sections, entry, size)
        if hashlib.sha256(body).hexdigest() != digest:
            raise SystemExit(f"Original function-body digest mismatch at 0x{entry:08X}")
    for address, opcode in X86.items():
        expected = bytes.fromhex(opcode)
        actual = mapped_span(image, sections, address, len(expected))
        if actual != expected:
            raise SystemExit(f"Original instruction mismatch at 0x{address:08X}")
    print(f"PASS: pinned XBE, {len(BODIES)} original body digests and {len(X86)} opcode windows")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--contracts-only", action="store_true",
                        help="check partial byte contracts without a full-file C11 claim")
    args = parser.parse_args()
    verify_source(args.root, contracts_only=args.contracts_only)
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("Original XBE is private; original body/opcode provenance not rechecked")
    print("Unverified: cross-function calling conventions and native guest memory translation")

if __name__ == "__main__":
    main()
