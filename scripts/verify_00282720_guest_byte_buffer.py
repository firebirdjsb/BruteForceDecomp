#!/usr/bin/env python3
"""Verify original 0x00282720 one-byte callback buffer vs decompiler stack labels.

The two array assignments in Ghidra were not 4-byte stores; one stood for
a CALL's return address, the other for a PUSH of argument count 1. Preserve
the real LEA byte pointer and MOV BYTE without synthesizing host writes.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
OPCODES = {
    0x002829B6: "ff5130",       # CALL [ECX+0x30] -> return address 0x2829B9
    0x002829CF: "6a01",         # PUSH 1
    0x002829D1: "6a01",         # PUSH 1
    0x002829D3: "8d542417",     # LEA EDX,[ESP+0x17], address byte
    0x002829D7: "52",           # PUSH EDX
    0x002829DC: "8844241b",     # MOV BYTE PTR [ESP+0x1b],AL after PUSH
    0x002829E7: "ff5134",       # CALL [ECX+0x34]
}
SOURCE = "src/main_unclassified/band_0028/0x00282720.c"
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    root = args.root
    src = (root / SOURCE).read_text(encoding="utf-8")
    for marker in (
        "undefined1 auStack_200 [4];",
        "piStack_218 = (int *)(auStack_200 + 3);",
        "auStack_200[3] = uVar5;",
    ):
        if marker not in src:
            raise SystemExit("Missing actual original single-byte buffer: "+marker)
    if "auStack_200 =" in src:
        raise SystemExit("Rejected fabricated 4-byte array assignment")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang unavailable")
    for opt in ("-O0", "-O2"):
        result = subprocess.run(
            [clang, *FLAGS, opt, "-I", str(root / "include"), str(root / SOURCE)],
            capture_output=True, text=True,
        )
        if result.returncode:
            raise SystemExit(f"Clang C11 {opt} failed: {result.stderr}")
    print("PASS: guest 1-byte buffer source and isolated C11 syntax")
    if args.xbe:
        image = args.xbe.read_bytes()
        if hashlib.sha256(image).hexdigest() != XBE_SHA256:
            raise SystemExit("private original XBE SHA256 mismatch")
        for addr, opcode in OPCODES.items():
            expected = bytes.fromhex(opcode)
            actual = image[addr-0x10000:addr-0x10000+len(expected)]
            if actual != expected:
                raise SystemExit(f"Original opcode mismatch 0x{addr:08X}")
        print(f"PASS: {len(OPCODES)} original x86 opcode signatures")
    else:
        print("No original XBE supplied: opcode proof is not verified by CI")
    print("Unverified: complete callback ABI and runtime equivalence")
if __name__ == "__main__":
    main()
