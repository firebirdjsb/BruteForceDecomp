#!/usr/bin/env python3
"""Check three 16-bit guest stack clears and isolated host C11 syntax.

XBE bytes are checked only when --xbe is supplied locally. Source-only checks
are NOT evidence that the full function ABI or game behavior matches.
"""
from __future__ import annotations

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
FINGERPRINTS = {
    0x00101EF5: "33db",             # XOR EBX,EBX
    0x00101F37: "66895c2434",       # MOV [ESP+0x34],BX
    0x00105749: "66c74424140000",   # MOV WORD [ESP+0x14],0
    0x0010DEF6: "33ff",             # XOR EDI,EDI
    0x0010DF06: "66897c2418",       # MOV [ESP+0x18],DI
}
SOURCES = {
    "0x00101ef0": "2DD0E92B12520237C622A5B6270F339B3395AC010E4F013C25A95E4143E4F479",
    "0x001056f0": "380C38D11F8C4B2BAA864EE4A333E2F55BB735434783704643A884E62C6D790A",
    "0x0010de90": "8DEC61452C2C6F0A49DD4A4B46EBFF2B95B9D65EEB4950B6FBBFB1613DB07F69",
}
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    if args.xbe:
        data = args.xbe.read_bytes()
        if hashlib.sha256(data).hexdigest() != XBE_SHA256:
            ap.error("XBE SHA-256 mismatch")
        for va, raw in FINGERPRINTS.items():
            expected = bytes.fromhex(raw)
            actual = data[va - 0x10000:va - 0x10000 + len(expected)]
            if actual != expected:
                raise SystemExit(f"Original x86 opcode mismatch at {va:#x}")
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("Clang required")
    for entry, digest in SOURCES.items():
        path = args.root / "src/main_unclassified/band_0010" / (entry + ".c")
        source = path.read_text()
        if f"Input x86 body SHA-256: {digest}" not in source:
            raise SystemExit(f"{entry}: original function provenance missing")
        if "uStack_18 &= UINT32_C(0xffff0000);" not in source:
            raise SystemExit(f"{entry}: missing low-word-only clear")
        if "Guest stack high 16 bits remain unknown (ABI_UNVERIFIED)." not in source:
            raise SystemExit(f"{entry}: missing unknown-high-word caveat")
        if "uStack_18._2_2_" in source:
            raise SystemExit(f"{entry}: Ghidra pseudo-member regressed")
        result = subprocess.run(
            [clang, *FLAGS, "-I", str(args.root / "include"), str(path)],
            capture_output=True, text=True, check=False,
        )
        if result.returncode:
            raise SystemExit(f"{entry}: Clang C11 failed:\n{result.stderr}")
    print("PASS: 3 source invariants and focused C11 syntax checks"
          + ("; 5 XBE opcode fingerprints" if args.xbe else " (XBE not supplied)"))
    print("LIMITATION: high 16 guest-stack bits and full ABI remain unverified")

if __name__ == "__main__":
    main()
