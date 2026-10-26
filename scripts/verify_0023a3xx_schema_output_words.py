#!/usr/bin/env python3
"""Verify two guest 32-bit COM-style output slots against original XBE operands.

The original XBE is private and never required in CI. Without --xbe,
this checks exact repaired C11 storage and isolated host-Clang syntax only.
Even when XBE bytes match, this is NOT complete ABI or runtime verification.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
WINDOWS = {
    0x0023A310: "83ec1c",        # 28-byte local reservation
    0x0023A3E7: "8b442414",      # load second local out word
    0x0023A3F9: "8b17",          # load virtual table
    0x0023A3FB: "8d442414",      # LEA EAX,[ESP+0x14] -> second local out DWORD
    0x0023A3FF: "50",            # pass address
    0x0023A400: "683c6e4000",    # ISchema IID
    0x0023A405: "57",            # interface receiver
    0x0023A406: "ff5210",       # call virtual slot +0x10
    0x0023A63C: "8b7c2438",     # receiver from original incoming guest slot
    0x0023A642: "8d4c2410",     # LEA ECX,[ESP+0x10] -> output DWORD
    0x0023A646: "51",            # pass output address
    0x0023A647: "57",            # pass receiver
    0x0023A648: "896c2418",     # initialize same guest DWORD to zero
    0x0023A64C: "896c2420",     # initialize separate 32-bit local
    0x0023A650: "ff501c",       # call virtual slot +0x1c
    0x0023A653: "8b442410",     # read callback-written output DWORD
}
SOURCES = {
    "src/main_unclassified/band_0023/0x0023a310.c": (
        "Entry: 0x0023a310",
        "0x0023A3FB: LEA EAX,[ESP+0x14]",
        "s_23_23_ISchema_00406e3c,&appiStack_18[1]);",
    ),
    "src/main_unclassified/band_0023/0x0023a590.c": (
        "Entry: 0x0023a590",
        "uint32_t guest_schema_output = 0;",
        "(*unaff_EDI + 0x1c))(unaff_EDI,&guest_schema_output);",
    ),
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def verify_sources(root):
    compiler = shutil.which("clang")
    if compiler is None:
        raise SystemExit("clang is needed for focused source verification")
    for rel, markers in SOURCES.items():
        path = root / rel
        source = path.read_text(encoding="utf-8")
        for marker in markers:
            if marker not in source:
                raise SystemExit(f"{rel}: missing source invariant {marker!r}")
        if "stack0xffffffe0" in source or "stack0xffffffd0" in source:
            raise SystemExit(f"{rel}: unresolved guest stack word reintroduced")
        cmd = [compiler, *FLAGS, "-I", str(root / "include"), str(path)]
        run = subprocess.run(cmd, capture_output=True, text=True)
        if run.returncode:
            raise SystemExit(f"{rel}: isolated Clang C11 failed:\n{run.stderr}")
        print(f"PASS: source storage contract and Clang C11: {rel}")

def verify_xbe(path):
    data = path.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != XBE_SHA256:
        raise SystemExit("XBE SHA-256 mismatch: unsupported executable variant")
    # For this authenticated XBE, executable .text uses file offset VA-0x10000.
    for address, hexcode in WINDOWS.items():
        expected = bytes.fromhex(hexcode)
        offset = address - 0x10000
        actual = data[offset:offset + len(expected)]
        if actual != expected:
            raise SystemExit(
                f"original x86 instruction mismatch at 0x{address:08X}: "
                f"{actual.hex()} != {hexcode}"
            )
    print(f"PASS: authenticated original XBE, {len(WINDOWS)} instruction windows")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--xbe-only", action="store_true",
                    help="verify XBE only when repository sources are unavailable")
    args = ap.parse_args()
    if args.xbe_only and not args.xbe:
        ap.error("--xbe-only requires --xbe")
    if not args.xbe_only:
        verify_sources(args.root)
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("Original XBE not supplied: private instruction check SKIPPED in CI")
    print("NOT VERIFIED: complete Xbox virtual-method ABIs or native guest-memory mapping")

if __name__ == "__main__":
    main()
