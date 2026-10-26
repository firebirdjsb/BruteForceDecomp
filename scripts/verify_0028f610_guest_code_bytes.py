#!/usr/bin/env python3
"""Verify 0x0028F610 guest variable-length decoder byte/word stack writes.

Selected instructions are authenticated against the private original XBE when
supplied. In CI, preserve each 32-bit local's untouched byte lanes and run
isolated host Clang C11. This does not verify linked game behavior.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0028/0x0028f610.c"
X86 = {
    0x0028F935: "884c2434",      # guest byte 0 of [ESP+0x34] = CL
    0x0028F94C: "88542435",      # guest byte 1 of [ESP+0x34] = DL
    0x0028F950: "8b542434",      # load complete 32-bit packed code word
    0x0028F959: "8914c1",        # store complete packed code word
    0x0028F98C: "88442435",      # guest byte 1 updated (length)
    0x0028F9A2: "c6442434c0",    # byte 0 constant 0xC0
    0x0028F9C4: "884c2434",      # byte 0 = flags
    0x0028F9DC: "884c2434",      # byte 0 = lookup code
    0x0028FA10: "8b6c2434",      # load complete guest packed DWORD
    0x0028FA14: "8929",          # store DWORD to destination
}
REQUIRED = (
    "Entry: 0x0028f610",
    "Input x86 body SHA-256: 2BC6AFA",
)
# SHA metadata is checked by the whole-repository provenance inventory; here
# check the exact guest lane operations and source syntax without inventing
# an unrelated fixture XBE.
MARKERS = (
    "local_d8 = (local_d8 & UINT32_C(0xffff0000)) |",
    "((uint32_t)(uint8_t)local_fc << 8) | (uint8_t)uVar10;",
    "(local_d8 & UINT32_C(0xffffff00)) |",
    "(local_d8 & UINT32_C(0xffff00ff)) |",
    "((uint32_t)(uint8_t)(local_f8 - bVar14) << 8);",
    "local_d8 = (local_d8 & UINT32_C(0xffffff00)) | UINT32_C(0xc0);",
)
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def verify_source(root):
    srcpath = root / SOURCE
    src = srcpath.read_text(encoding="utf-8")
    if "Entry: 0x0028f610" not in src or "undefined4 local_d8;" not in src:
        raise SystemExit("wrong source function or storage width")
    for marker in MARKERS:
        if marker not in src:
            raise SystemExit(f"missing verified guest byte-lane source: {marker}")
    if "local_d8._" in src:
        raise SystemExit("invalid Ghidra DWORD-subpiece syntax remains")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang unavailable")
    for opt in ("-O0", "-O2"):
        c = subprocess.run(
            [clang, *FLAGS, opt, "-I", str(root / "include"), str(srcpath)],
            capture_output=True, text=True,
        )
        if c.returncode:
            raise SystemExit(f"Clang C11 {opt} failed:\n{c.stderr}")
    print("PASS: 0x0028F610 source storage and Clang C11 at O0/O2")

def verify_xbe(path):
    image = path.read_bytes()
    if hashlib.sha256(image).hexdigest() != XBE_SHA:
        raise SystemExit("wrong original XBE")
    for addr, hexbytes in X86.items():
        expected = bytes.fromhex(hexbytes)
        pos = addr - 0x10000
        if image[pos:pos+len(expected)] != expected:
            raise SystemExit(f"original x86 opcode mismatch at 0x{addr:08X}")
    print(f"PASS: authenticated XBE, {len(X86)} guest-code byte-lane opcodes")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--xbe-only", action="store_true")
    args = ap.parse_args()
    if args.xbe_only and not args.xbe:
        ap.error("--xbe-only requires --xbe")
    if not args.xbe_only:
        verify_source(args.root)
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("Private XBE omitted: opcode checks skipped in CI")
    print("Original decoder ABI and runtime behavior remain UNVERIFIED")

if __name__ == "__main__":
    main()
