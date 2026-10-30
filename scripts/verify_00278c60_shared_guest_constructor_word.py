#!/usr/bin/env python3
"""Original Xbox 0x00278C60: twelve constructions share one guest DWORD.

The exact 36 instruction windows validate where original Xbox writes
the construction identifier, forms its address and invokes the helper.
The helper's implicit original EAX/EBX register calling convention and
native host/guest pointer relocation remain ABI_UNVERIFIED.
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
import re
import subprocess
from pathlib import Path

SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SRC = "src/main_unclassified/band_0027/0x00278c60.c"
VALUES = (
    "0xe38ea016", "0x1ef62dc5", "0x08459364", "0xf0a4ecb7",
    "0x09f2a8fb", "0xe3eb9cdd", "0x08459364", "0x05f7670f",
    "0xf097de64", "0xf317c403", "0x0b213bbb", "0xec456e81"
)
SITES = (
    (0x278c8f, "894c2410"), (0x278c93, "8d4c2410"), (0x278ca5, "e846f3fbff"),
    (0x278cd7, "894c2410"), (0x278cdb, "8d4c2410"), (0x278ced, "e8fef2fbff"),
    (0x278d15, "8d4c2410"), (0x278d31, "896c2414"), (0x278d35, "e8b6f2fbff"),
    (0x278d67, "894c2410"), (0x278d6b, "8d4c2410"), (0x278d7d, "e86ef2fbff"),
    (0x278daf, "894c2410"), (0x278db3, "8d4c2410"), (0x278dc5, "e826f2fbff"),
    (0x278df7, "894c2410"), (0x278dfb, "8d4c2410"), (0x278e0d, "e8def1fbff"),
    (0x278e30, "8d4c2410"), (0x278e4c, "896c2414"), (0x278e50, "e89bf1fbff"),
    (0x278e83, "894c2410"), (0x278e87, "8d4c2410"), (0x278e99, "e852f1fbff"),
    (0x278ec7, "894c2410"), (0x278ecb, "8d4c2410"), (0x278edd, "e80ef1fbff"),
    (0x278f0b, "894c2410"), (0x278f0f, "8d4c2410"), (0x278f21, "e8caf0fbff"),
    (0x278f4f, "894c2410"), (0x278f53, "8d4c2410"), (0x278f65, "e886f0fbff"),
    (0x278f8f, "894c2410"), (0x278f93, "8d4c2410"), (0x278fa5, "e846f0fbff"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_source(root):
    original=(root/SRC).read_text(encoding="utf-8")
    s=active(original)
    assert "Entry: 0x00278c60," in original
    assert "Input x86 body SHA-256:" in original
    assert "ABI_UNVERIFIED" in original
    assert "int32_t local_4;" in s
    assert s.count("FUN_00237ff0(&local_4);") == 12
    assert s.count("local_4 = (int32_t)UINT32_C(") == 12
    found = re.findall(r"local_4 = \(int32_t\)UINT32_C\((0x[0-9a-f]+)\);", s)
    assert tuple(found) == VALUES, f"original construction identities drift: {found}"
    assert "stack0xfffffff8" not in s and "stack0xfffffff4" not in s
    assert "stack0xfffffff0" not in s and "stack0xffffffec" not in s
    print("PASS twelve original caller-owned DWORDs and helper argument addresses")

def check_clang(root):
    p=subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
                      "-Wno-implicit-function-declaration","-Wno-int-conversion",
                      "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
                      "-Wno-int-to-pointer-cast","-Wno-return-type",
                      "-Wno-deprecated-non-prototype",
                      "-I",str(root/"include"),str(root/SRC)],text=True,capture_output=True)
    assert p.returncode==0, p.stderr[:2000]
    print("PASS isolated Clang C11 syntax for 0x00278C60")

def check_xbe(path):
    b=path.read_bytes()
    assert hashlib.sha256(b).hexdigest()==SHA, "original Xbox executable hash mismatch"
    for va,h in SITES:
        expected=bytes.fromhex(h)
        found=b[va-0x10000:va-0x10000+len(expected)]
        assert found==expected, f"0x{va:08X}: got {found.hex()} expected {h}"
    print(f"PASS {len(SITES)} original XBE instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    args=p.parse_args()
    check_source(args.root)
    if args.clang:check_clang(args.root)
    if args.xbe:check_xbe(args.xbe)
    else:print("NOTE private original XBE is not provided to CI")

if __name__ == "__main__":
    main()
