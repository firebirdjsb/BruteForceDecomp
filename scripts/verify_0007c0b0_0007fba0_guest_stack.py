#!/usr/bin/env python3
"""Compile the two repaired drafts independently; no whole-function ABI claim.

The original XBE is intentionally not stored in CI. Instruction-level proof
must be repeated against a locally authenticated original binary.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

from pathlib import Path
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
CLANG = shutil.which("clang")
if not CLANG:
    raise SystemExit("clang is required")
FLAGS = [
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
]
CASES = (
    ("src/main_unclassified/band_0007/0x0007c0b0.c",
     "stack0xffffffc4", "unaff_EBX = (undefined1 *)&local_34;"),
    ("src/main_unclassified/band_0007/0x0007fba0.c",
     "stack0xffffffb8", "(*unaff_EDI + 0xec))(&uStack_28,&iStack_24);"),
)
for relative, forbidden, required in CASES:
    source = ROOT / relative
    body = source.read_text(encoding="utf-8")
    if forbidden in body or required not in body or "\\n" in body:
        raise SystemExit(f"guest-stack repair source invariant failed: {relative}")
    result = subprocess.run(
        [CLANG, *FLAGS, "-I", str(ROOT / "include"), str(source)],
        text=True, capture_output=True, check=False,
    )
    if result.returncode:
        raise SystemExit(f"{relative}: Clang C11 failed:\n{result.stderr}")
    print(f"isolated C11 syntax PASS: {relative}")
print("No runtime or Xbox ABI verification claimed.")
