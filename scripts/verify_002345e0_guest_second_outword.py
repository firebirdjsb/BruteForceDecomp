#!/usr/bin/env python3
"""Check the XBE-backed second incoming/output guest DWORD at 0x002345e0.

Without --xbe, check source and isolated Clang C11 only. This does not
establish guest32 pointer translation, caller stack aliasing, indirect-call
ABI, linkage, or native runtime equivalence.
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
import shutil
import struct
import subprocess
from pathlib import Path

ENTRY = 0x002345e0
BODY_LENGTH = 174
BODY_SHA = "6EFF549B60CD68C29497A90104DF7D7B5583314CA6EC65180C74E669DB7B39B8"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES = {
    0x002345e8:"8b6c2410",  # capture incoming second word in EBP
    0x002345ed:"895c2414",  # zero original incoming word
    0x002345fa:"8b442414",  # read output slot
    0x0023460a:"895c2414",  # clear after first release
    0x00234610:"8d4c2414",  # first address-of
    0x00234614:"51",
    0x00234616:"ff501c",    # indirect callback
    0x0023464e:"c744241400000000", # clear after second release
    0x00234658:"8d4c2414",  # second address-of
    0x0023465c:"51",
    0x0023465e:"ff501c",
    0x0023467a:"8b442414",  # final release
    0x0023468b:"c20800",    # ret 8
}
FLAGS = ("-std=c11","-fsyntax-only","-ferror-limit=3",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type",
         "-Wno-deprecated-non-prototype")

def read_va(data, va, length):
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if data[:4] != b"XBEH" or not 0 < count < 128:
        raise ValueError("Invalid XBE header")
    for i in range(count):
        off = table - base + i * 0x38
        if not 0 <= off <= len(data)-20:
            raise ValueError("Invalid section table")
        _, start, virtual_size, raw, raw_size = struct.unpack_from("<5I", data, off)
        if start <= va and va+length <= start+min(virtual_size,raw_size):
            raw_off = raw + va - start
            if raw_off+length > len(data):
                raise ValueError("Truncated XBE section")
            return data[raw_off:raw_off+length]
    raise ValueError(f"Unmapped XBE VA 0x{va:08x}")

def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("Original retail XBE SHA256 mismatch")
    if hashlib.sha256(read_va(data, ENTRY, BODY_LENGTH)).hexdigest().upper() != BODY_SHA:
        raise ValueError("Original function body SHA256 mismatch")
    for va, expected in SITES.items():
        if read_va(data, va, len(expected)//2) != bytes.fromhex(expected):
            raise ValueError(f"Original opcode mismatch at 0x{va:08x}")
    for va in (0x0023462a,0x00234675):
        call = read_va(data, va, 5)
        if call[0] != 0xe8 or va+5+struct.unpack_from("<i",call,1)[0] != 0x002347d0:
            raise ValueError(f"Original direct call mismatch at 0x{va:08x}")

def verify_source(root):
    path = root/"src/main_unclassified/band_0023/0x002345e0.c"
    source = path.read_text(encoding="utf-8")
    required = (f"Input x86 body SHA-256: {BODY_SHA}",
                "Entry: 0x002345e0,", "ABI_UNVERIFIED",
                "uint32_t guest_second_word = 0;",
                "host/guest pointer translation")
    if any(x not in source for x in required):
        raise ValueError("Provenance or guest slot declaration changed")
    if (source.count("piVar1,&guest_second_word);") != 2
        or source.count("guest_out = (int *)(uintptr_t)guest_second_word;") != 3
        or source.count("guest_second_word = 0;") != 3
        or source.count("(**(code **)(*guest_out + 8))(guest_out);") != 3
        or "&stack0x00000000" in source or "unaff_retaddr" in source):
        raise ValueError("Guest slot alias or release contract changed")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    check = subprocess.run([clang,*FLAGS,"-I",str(root/"include"),str(path)],
                           capture_output=True,text=True,timeout=60)
    if check.returncode:
        raise ValueError(f"Focused Clang C11 failed: {check.stderr[:1200]}")

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    args = p.parse_args()
    verify_source(args.root.resolve())
    if args.xbe:
        verify_xbe(args.xbe)
    print("PASS 0x002345e0: 13 opcode sites, 2 direct call targets, "
          "source and focused Clang C11; original XBE "+
          ("verified" if args.xbe else "not supplied")+
          "; guest ABI/native runtime unverified.")

if __name__ == "__main__":
    main()
