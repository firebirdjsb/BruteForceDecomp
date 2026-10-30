#!/usr/bin/env python3
"""Guard independent original DWORD output and COM interface slots.

CI verifies the source and isolated Clang C11. Optional --xbe verifies
the user's private, pinned original executable; never ships XBE contents.
No guest pointer translation, virtual-method signature, or Xbox runtime
equivalence is claimed by these tests.
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

XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0020/0x00201710.c"
SITES = (
    (0x0020177d, "8d542418", "prepare original helper output"),
    (0x00201781, "e82a6c0300", "call original helper 0x002383B0"),
    (0x00201786, "8d542414", "address interface output stack slot"),
    (0x0020178a, "52", "push interface output address"),
    (0x0020178b, "89442414", "save helper EAX to distinct DWORD"),
    (0x0020178f, "a108334400", "load original interface factory"),
    (0x00201794, "8b08", "load factory vtable"),
    (0x00201796, "8d542414", "address saved helper DWORD"),
    (0x0020179a, "52", "push helper DWORD output address"),
    (0x0020179b, "50", "push factory receiver"),
    (0x0020179c, "ff5128", "invoke vtable +0x28"),
    (0x002017a3, "8b442414", "reload generated interface"),
    (0x002017a7, "8d542410", "address string IID"),
    (0x002017b7, "ff5150", "invoke interface vtable +0x50"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def check_source(root):
    s = (root / SOURCE).read_text(encoding="utf8")
    ac = active(s)
    assert "Entry: 0x00201710," in s
    assert "Input x86 body SHA-256:" in s
    assert "ABI_UNVERIFIED" in s
    assert "0x0020177D..0x0020179C" in s
    assert "uint32_t guest_resource_word = FUN_002383b0();" in ac
    assert "(DAT_00443308,&guest_resource_word,&piStack_110);" in ac
    assert "if (piStack_110 != (int *)0x0)" in ac
    assert "stack0xfffffee4" not in ac and "stack0xfffffee8" not in ac
    print("PASS 0x00201710: separate DWORD and interface pointer outputs")

def check_clang(root):
    argv = ["clang", "-std=c11", "-fsyntax-only", "-ferror-limit=3",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype", "-I", str(root / "include"),
         str(root / SOURCE)]
    r = subprocess.run(argv, capture_output=True, text=True)
    assert r.returncode == 0, r.stderr[:1800]
    print("PASS 0x00201710: isolated host Clang C11 syntax")

def check_xbe(path):
    b = path.read_bytes()
    assert hashlib.sha256(b).hexdigest() == XBE_HASH, "wrong original XBE"
    for va, raw, purpose in SITES:
        want = bytes.fromhex(raw)
        got = b[va - 0x10000:va - 0x10000 + len(want)]
        assert got == want, f"{va:08x}: {purpose}: {got.hex()} != {raw}"
        print(f"PASS 0x{va:08X}: {purpose}")
    print(f"PASS: all {len(SITES)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    p.add_argument("--clang", action="store_true")
    args=p.parse_args()
    check_source(args.root)
    if args.clang:
        check_clang(args.root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("NOTE: private original XBE absent from GitHub Actions")

if __name__ == "__main__":
    main()
