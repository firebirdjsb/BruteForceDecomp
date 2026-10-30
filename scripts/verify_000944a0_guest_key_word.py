#!/usr/bin/env python3
"""Check 0x000944a0's two keys in one original incoming guest stack word.

The optional --xbe checks original retail instructions. Public CI checks
source and isolated Clang C11 only, NOT guest stack aliasing, indirect ABI,
linking or native behavior.
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

ENTRY=0x000944a0
BODY_LENGTH=121
BODY_SHA="47979EAF495E56A3E2F9CEB668BEA6A955706B462D7D0969438EBC3C942F059F"
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SITES={
  0x000944a3:"8b742410", # incoming first word captured into ESI
  0x000944b6:"8d4c2414", # first address-of original stack slot
  0x000944bc:"c744241c09cb850b", # write 0x0b85cb09
  0x000944c4:"ff5050", # virtual callback
  0x000944e6:"8d4c2414", # second address-of SAME slot
  0x000944ec:"c744241cb39a8c10", # write 0x108c9ab3
  0x000944f4:"ff5050",
  0x00094516:"c20400", # ret 4
}
FLAGS=("-std=c11","-fsyntax-only","-ferror-limit=3",
       "-Wno-implicit-function-declaration","-Wno-int-conversion",
       "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
       "-Wno-int-to-pointer-cast","-Wno-return-type",
       "-Wno-deprecated-non-prototype")

def read_va(data,va,size):
    base=struct.unpack_from("<I",data,0x104)[0]
    count,table=struct.unpack_from("<II",data,0x11c)
    if data[:4]!=b"XBEH" or not 0<count<128:
        raise ValueError("Invalid XBE header")
    for i in range(count):
        off=table-base+i*0x38
        if not 0<=off<=len(data)-20:
            raise ValueError("Invalid section table")
        _,start,virtual,raw,raw_size=struct.unpack_from("<5I",data,off)
        if start<=va and va+size<=start+min(virtual,raw_size):
            off=raw+va-start
            if off+size>len(data):
                raise ValueError("Truncated XBE")
            return data[off:off+size]
    raise ValueError(f"Unmapped XBE address 0x{va:08x}")

def verify_xbe(path):
    data=path.read_bytes()
    if hashlib.sha256(data).hexdigest()!=XBE_SHA:
        raise ValueError("Original XBE SHA mismatch")
    if hashlib.sha256(read_va(data,ENTRY,BODY_LENGTH)).hexdigest().upper()!=BODY_SHA:
        raise ValueError("Original body hash mismatch")
    for va,hexcode in SITES.items():
        if read_va(data,va,len(hexcode)//2)!=bytes.fromhex(hexcode):
            raise ValueError(f"Original instruction mismatch 0x{va:08x}")

def verify_source(root):
    path=root/"src/main_unclassified/band_0009/0x000944a0.c"
    source=path.read_text(encoding="utf-8")
    if (f"Input x86 body SHA-256: {BODY_SHA}" not in source
        or "Entry: 0x000944a0," not in source
        or "ABI_UNVERIFIED" not in source
        or source.count("piVar3,&guest_first_word);")!=2
        or source.count("guest_first_word = 0x0b85cb09U;")!=1
        or source.count("guest_first_word = 0x108c9ab3U;")!=1
        or "&stack0xfffffff0" in source
        or "Caller-visible stack aliasing" not in source):
        raise ValueError("Guest first word alias, keys or provenance changed")
    clang=shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang required")
    result=subprocess.run([clang,*FLAGS,"-I",str(root/"include"),str(path)],
                          capture_output=True,text=True,timeout=60)
    if result.returncode:
        raise ValueError(f"Focused Clang C11 failed: {result.stderr[:1200]}")

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe",type=Path)
    args=parser.parse_args()
    verify_source(args.root.resolve())
    if args.xbe:
        verify_xbe(args.xbe)
    print("PASS 0x000944a0: 8 original opcode anchors; source and focused C11; XBE "+
          ("verified" if args.xbe else "not supplied")+
          "; guest ABI/native runtime unverified.")

if __name__=="__main__":
    main()
