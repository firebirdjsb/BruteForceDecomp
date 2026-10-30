#!/usr/bin/env python3
"""Verify separate float Y delta and guest raw-word stack alias in 0x001357B0.

Original XBE opcodes prove FSTP m32fp and integer MOV of the same DWORD;
neither implies numeric float-to-pointer conversion. Caller/callee ABIs,
unrelated guest list fields and native address translation remain unverified.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
from pathlib import Path
import shutil
import subprocess
import struct

SOURCE = "src/main_unclassified/band_0013/0x001357b0.c"
OPCODES = (
    (0x00135A53, "d9402c"),   # FLD DWORD [EAX+0x2C], first (Z) delta
    (0x00135A56, "d8662c"),   # FSUB DWORD [ESI+0x2C]
    (0x00135A5C, "d95c241c"), # FSTP DWORD [ESP+0x1C], Z delta
    (0x00135A60, "d94004"),   # FLD DWORD [EAX+4], the Y component
    (0x00135A67, "d86628"),   # FSUB DWORD [ESI+0x28], Y difference
    (0x00135A6E, "d95c2424"), # FSTP DWORD [ESP+0x24], Y delta
    (0x00135A74, "8b4c2424"), # MOV ECX,[ESP+0x24], raw bits
    (0x00135A7B, "894c2448"), # MOV [ESP+0x48],ECX, copy Y DWORD
    (0x00135A8D, "d9442448"), # FLD DWORD [ESP+0x48], use float Y
    (0x00135A91, "d84c2448"), # FMUL DWORD [ESP+0x48], square Y
)
MARKERS = (
    "float guest_delta_y;",
    "uint32_t guest_delta_y_word;",
    "guest_delta_y = *(float *)(iVar5 + 0x28) - *(float *)(iVar6 + 0x28);",
    "fVar3 = guest_delta_y * guest_delta_y + fStack_1c * fStack_1c + fVar3 * fVar3;",
    "memcpy(&guest_delta_y_word, &guest_delta_y, sizeof guest_delta_y_word);",
    "piStack_20 = (int *)(uintptr_t)guest_delta_y_word;",
)

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    source=(a.root/SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        if marker not in source:
            raise SystemExit("missing original float/guest-word source invariant: "+marker)
    if "local_44 = (int *)(*(float *)" in source:
        raise SystemExit("invalid guest float-to-pointer cast restored")
    for word in (0, 0x80000000, 0x3f800000, 0xbf800000, 0x7f800000):
        numeric=struct.unpack("<f",struct.pack("<I",word))[0]
        assert struct.unpack("<I",struct.pack("<f",numeric))[0]==word
    clang=shutil.which("clang")
    if clang:
        flags=["-std=c11","-fsyntax-only","-ferror-limit=3",
               "-Wno-implicit-function-declaration","-Wno-int-conversion",
               "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
               "-Wno-int-to-pointer-cast","-Wno-return-type",
               "-Wno-deprecated-non-prototype"]
        run=subprocess.run([clang]+flags+["-I",str(a.root/"include"),str(a.root/SOURCE)],
                           text=True,capture_output=True)
        if run.returncode:
            raise SystemExit("focused Clang failed:\n"+run.stderr)
    if a.xbe:
        data=a.xbe.read_bytes()
        for addr,hexcode in OPCODES:
            expected=bytes.fromhex(hexcode)
            offset=addr-0x10000
            actual=data[offset:offset+len(expected)]
            if actual!=expected:
                raise SystemExit(f"XBE mismatch at 0x{addr:08x}: {actual.hex()}")
        print(f"PASS: {len(OPCODES)} original XBE opcodes plus C11/float storage")
    else:
        print("PASS: focused C11 syntax and source invariants; original XBE not provided")
    print("Full x87 runtime, guest pointer ABI and entire function remain unverified.")

if __name__=="__main__":
    main()
