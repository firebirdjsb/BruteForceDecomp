#!/usr/bin/env python3
"""Verify 0x00254390 output-interface ownership against original Xbox x86.

The virtual +0x24 call writes a 32-bit interface word into the caller's
local stack slot. The nonzero branch passes that word to virtual +0x3C,
then releases that same interface via its own virtual +0x08 method.
This is not a host ABI, pointer-translation, or native runtime proof.
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
import re
import shutil
import subprocess

SOURCE = "src/main_unclassified/band_0025/0x00254390.c"
BODY = "CE6FE31A3C4DB41AB1B4229F0F2898C1AB83853744DD3072E54C6A6A66A1F033"
XBE = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_SIZE = 0x69
OPCODES = (
    (0x254390, "51"),              # caller-local output word
    (0x2543A9, "8d442418"),        # incoming guest argument address
    (0x2543B0, "c744241800000000"), # initialize output slot to zero
    (0x2543BB, "ff5224"),          # virtual +0x24 writes output
    (0x2543BE, "8b4c2404"),        # reload the output slot
    (0x2543C2, "85c9"),            # test output, NOT constant 1
    (0x2543CD, "51"),              # push returned interface
    (0x2543CE, "56"),              # push ESI output
    (0x2543CF, "6a01"),            # push count 1
    (0x2543D2, "ff523c"),          # virtual +0x3C
    (0x2543D7, "8b442404"),        # reload output for release
    (0x2543DB, "85c0"),            # null guard
    (0x2543DF, "8b08"),            # vtable of returned interface
    (0x2543E2, "ff5108"),          # virtual +0x08 release
    (0x2543E5, "8bc6"),            # preserve earlier callback return
    (0x2543E9, "c20400"),          # RET 4
    (0x2543F6, "c20400"),          # RET 4
)
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=4",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
)

def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE:
        raise ValueError("pinned original XBE SHA-256 mismatch")
    def read(va, n):
        return data[va - 0x10000:va - 0x10000 + n]
    if hashlib.sha256(read(0x254390, BODY_SIZE)).hexdigest().upper() != BODY:
        raise ValueError("original function-body digest mismatch")
    for va, hexcode in OPCODES:
        expected = bytes.fromhex(hexcode)
        if read(va, len(expected)) != expected:
            raise ValueError(f"original instruction mismatch at {va:#x}")
    print(f"PASS: original XBE body and {len(OPCODES)} opcode signatures")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--xbe", type=Path)
    args = ap.parse_args()
    source = args.root / SOURCE
    text = source.read_text(encoding="utf-8")
    if "Entry: 0x00254390," not in text or f"Input x86 body SHA-256: {BODY}" not in text:
        raise ValueError("source provenance changed")
    if "ABI_UNVERIFIED" not in text:
        raise ValueError("guest/host ABI uncertainty marker removed")
    code = re.sub(r"/\\*.*?\\*/|//[^\\n]*", "", text, flags=re.S)
    for token in (
        "local_4 = 0;",
        "if (local_4 != 0)",
        "(DAT_004432fc,1,in_ECX,local_4)",
        "(**(code **)(*(int *)(uintptr_t)local_4 + 8))(local_4);",
        "return uVar1;",
    ):
        if token not in code:
            raise ValueError("guest callback output contract missing: " + token)
    if "iRam00000001" in code or "if (iVar2 != 0)" in code:
        raise ValueError("stale fabricated pointer/constant-success branch")
    clang = shutil.which("clang")
    if not clang:
        ap.error("clang required for isolated syntax verification")
    result = subprocess.run(
        (clang, *FLAGS, "-I", str(args.root / "include"), str(source)),
        capture_output=True, text=True, timeout=45,
    )
    if result.returncode:
        raise ValueError("focused C11 syntax failure:\\n" + result.stderr[-1600:])
    print("PASS: source callback ownership and isolated Clang C11 syntax")
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("Source-only CI: original XBE is deliberately not committed")
    print("Guest pointer mapping and host callback ABI remain unverified")

if __name__ == "__main__":
    main()
