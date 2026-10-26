#!/usr/bin/env python3
"""Verify original x86 byte-only stack write in FUN_001F6EB0.

No original executable is distributed in the repo. CI checks source contracts
and isolated host-Clang syntax; --xbe authenticates the private XBE, full
function body and opcode windows.
Neither mode establishes native Xbox calling conventions or runtime equality.
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

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
ENTRY = 0x001F6EB0
BODY_SIZE = 1161
BODY_SHA256 = "35250bfe198f1cd78e71c94a7905e67e0c05c9056ac30da702141601724e89d4"
OPCODES = {
    0x001F6F18: "b001",             # mov AL,0x01
    0x001F6F1A: "888424d4000000",   # mov BYTE PTR [ESP+0xD4],AL
    0x001F6F21: "888424bc000000",   # mov BYTE PTR [ESP+0xBC],AL
    0x001F6F3E: "24fe",             # and AL,0xFE
    0x001F6F40: "88842480000000",   # mov BYTE PTR [ESP+0x80],AL
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def verify_source(root):
    path = source_path(root, f"0x{ENTRY:08x}")
    src = path.read_text(encoding="utf-8")
    digest, conflict = read_body_digest(src)
    if conflict or digest is None or digest.lower() != BODY_SHA256:
        raise SystemExit("Original body digest label missing, conflicting or incorrect")
    for token in (
        "Entry: 0x001f6eb0",
        '#include "bf_x86_word_lanes.h"',
        "bf_x86_word_store_byte(&local_4,0U,1);",
    ):
        if token not in src:
            raise SystemExit(f"missing original source/storage invariant: {token}")
    if "local_4._1_3_" in src or "local_4 = (local_4 &" in src:
        raise SystemExit("invalid subfield or whole-word read-modify-write remains")
    clang = shutil.which("clang")
    if clang is None:
        raise SystemExit("clang unavailable")
    for opt in ("-O0", "-O2"):
        res = subprocess.run(
            [clang, *FLAGS, opt, "-I", str(root / "include"), str(path)],
            capture_output=True, text=True,
        )
        if res.returncode:
            raise SystemExit(f"isolated host C11 {opt} failed: {res.stderr}")
    print("PASS: Clang C11 O0/O2 and low-byte guest source invariant")

def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise SystemExit("Original XBE digest mismatch")
    sections = xbe_sections(data)
    # The original function export records one ordered range of 1161 bytes.
    body = mapped_span(data, sections, ENTRY, BODY_SIZE)
    if hashlib.sha256(body).hexdigest() != BODY_SHA256:
        raise SystemExit("Original function-body digest mismatch")
    for address, code in OPCODES.items():
        expected = bytes.fromhex(code)
        if mapped_span(data, sections, address, len(expected)) != expected:
            raise SystemExit(f"Xbox opcode mismatch at 0x{address:08X}")
    print(f"PASS: authenticated original XBE, function-body digest and {len(OPCODES)} byte-lane opcode windows")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--xbe-only", action="store_true")
    a = ap.parse_args()
    if a.xbe_only and a.xbe is None:
        ap.error("--xbe-only requires --xbe")
    if not a.xbe_only:
        verify_source(a.root)
    if a.xbe:
        verify_xbe(a.xbe)
    else:
        print("Original XBE unavailable to CI; opcode authentication skipped")
    print("Xbox calling conventions and native PC behavior remain unverified")

if __name__ == "__main__":
    main()
