#!/usr/bin/env python3
"""Verify original Xbox save/content filename appends use their own stack buffers.

Source and focused Clang checks run in GitHub Actions. Byte matching with the
user's SHA256-verified original XBE is optional via --xbe original.xbe.
This does not implement host filesystem mappings, Xbox APIs, or safe truncation.
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

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = (
    ("002f3cbe", "XCreateSaveGame", "local_12c", 3),
    ("002f3f21", "XDeleteSaveGame", "local_148", 1),
    ("002f3ff1", "XFindFirstSaveGame", "local_108", 1),
    ("002f5544", "XFindFirstContent", "local_10c", 2),
)
INSTRUCTIONS = (
    (0x002f3cc1, "81ec58020000", "create save stack frame"),
    (0x002f3d23, "8db43dd8feffff", "create save first metadata append"),
    (0x002f3d7f, "8db43dd8feffff", "create save retry metadata append"),
    (0x002f3dda, "8db43dd8feffff", "create save additional metadata append"),
    (0x002f3f24, "81ec44010000", "delete save stack frame"),
    (0x002f3fa2, "8db43dbcfeffff", "delete save metadata append"),
    (0x002f3ff4, "81ec04010000", "find save stack frame"),
    (0x002f402a, "8d8c1dfcfeffff", "find save wildcard destination"),
    (0x002f4034, "8a10", "find save source byte"),
    (0x002f5547, "81ec08010000", "find content stack frame"),
    (0x002f5579, "8db40df8feffff", "find content wildcard destination"),
    (0x002f55b4, "b898773800", "find content alternate suffix"),
)
FLAGS = (
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type", "-Wno-deprecated-non-prototype",
)

def source_without_comments(text):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)

def test_source(root):
    for addr, readable_name, buffer, expected in CASES:
        path = root / f"src/main_unclassified/band_{addr[:4]}/0x{addr}.c"
        s = path.read_text(encoding="utf-8")
        ac = source_without_comments(s)
        assert f"Entry: 0x{addr}," in s
        assert "Input x86 body SHA-256:" in s
        assert "ABI_UNVERIFIED" in s
        assert readable_name in s
        assert buffer in ac
        assert "stack0xffc7" not in ac
        assert ac.count("*guest_append_cursor++ = cVar1;") == expected, addr
        assert "guest_append_cursor = " in ac, addr
        print(f"PASS 0x{addr}: {expected} local filename suffix copy path(s)")
    print("PASS: original stack-buffer suffix copies retained; no host API claims")

def test_clang(root):
    for addr, _, _, _ in CASES:
        path = root / f"src/main_unclassified/band_{addr[:4]}/0x{addr}.c"
        p = subprocess.run(["clang", *FLAGS, "-I", str(root/"include"), str(path)],
                           capture_output=True, text=True)
        assert p.returncode == 0, f"Clang {addr}: {p.stderr[:1800]}"
        print(f"PASS 0x{addr}: isolated Clang C11 syntax")

def test_xbe(path):
    data = path.read_bytes()
    assert hashlib.sha256(data).hexdigest() == XBE_SHA256, "wrong original Xbox binary"
    for va, hexb, description in INSTRUCTIONS:
        expect = bytes.fromhex(hexb)
        actual = data[va-0x10000:va-0x10000+len(expect)]
        assert actual == expect, f"0x{va:08x} {description}: {actual.hex()} != {hexb}"
        print(f"PASS 0x{va:08x}: {description}")
    print(f"PASS: {len(INSTRUCTIONS)} original Xbox instruction-byte checks")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--clang", action="store_true")
    args = parser.parse_args()
    test_source(args.root)
    if args.clang:
        test_clang(args.root)
    if args.xbe:
        test_xbe(args.xbe)
    else:
        print("NOTE: private original XBE not on CI; binary checks local-only")
    print("PASS: syntax/source provenance does not certify runtime equivalence")

if __name__ == "__main__":
    main()
