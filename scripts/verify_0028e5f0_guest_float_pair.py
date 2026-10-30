#!/usr/bin/env python3
"""Guard 0x0028E5F0 split of Ghidra's three packed binary32 scratch writes.

Source spellings and Clang syntax are verifiable without the private XBE.
Optional --xbe authenticates and checks original adjacent scalar stores.
The complete x87/SSE calling convention and runtime correctness remain TODO.
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

SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FILE="src/main_unclassified/band_0028/0x0028e5f0.c"
SITES=(
 (0x0028e5f0,"558bec","original preserved EBP frame"),
 (0x0028e5f3,"83e4f0","align guest ESP to sixteen bytes"),
 (0x0028e5f6,"81ec2c010000","allocate original scratch"),
 (0x0028e6d9,"8954244c","store first 32-bit scratch lane"),
 (0x0028e6dd,"89442450","store immediately adjacent lane"),
 (0x0028e6e7,"894c2454","store next 32-bit lane"),
 (0x0028e887,"894c244c","later store first lane"),
 (0x0028e88b,"89542450","later store second lane"),
 (0x0028e88f,"89442454","later store third lane"),
)
WRITES=(
 ("fVar6","local_114"),
 ("local_78","fVar8"),
 ("fVar8","fVar6"),
)

def active(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)

def check_source(root):
    txt=(root/FILE).read_text(encoding="utf8")
    src=active(txt)
    assert "Entry: 0x0028e5f0," in txt
    assert "Input x86 body SHA-256:" in txt
    assert "ABI_UNVERIFIED" in txt
    assert "float guest_f32_pair_at_f0[2];" in src
    assert "_Static_assert(sizeof(guest_f32_pair_at_f0) == 8," in src
    assert "_local_f0" not in src and "float local_f0;" not in src
    for low,high in WRITES:
        expect=f"guest_f32_pair_at_f0[0] = {low};\n  guest_f32_pair_at_f0[1] = {high};"
        assert expect in src, f"missing bit-preserving low/high words: {expect}"
    assert src.count("guest_f32_pair_at_f0[0] =") == 3
    assert src.count("guest_f32_pair_at_f0[1] =") == 3
    print("PASS three adjacent float32 scratch writes retain Ghidra CONCAT44 lane order")

def check_clang(root):
    argv=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
          "-Wno-implicit-function-declaration","-Wno-int-conversion",
          "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
          "-Wno-int-to-pointer-cast","-Wno-return-type",
          "-Wno-deprecated-non-prototype","-I",str(root/"include"),
          str(root/FILE)]
    p=subprocess.run(argv,capture_output=True,text=True)
    assert p.returncode==0,p.stderr[:2000]
    print("PASS 0x0028E5F0 isolated Clang C11 syntax")

def check_xbe(path):
    data=path.read_bytes()
    assert hashlib.sha256(data).hexdigest()==SHA,"wrong Xbox executable"
    for va,hexb,purpose in SITES:
        wanted=bytes.fromhex(hexb)
        got=data[va-0x10000:va-0x10000+len(wanted)]
        assert got==wanted,f"0x{va:08X} {purpose}: {got.hex()} != {hexb}"
    print(f"PASS {len(SITES)} original x86 frame/lane instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    a=p.parse_args()
    check_source(a.root)
    if a.clang:check_clang(a.root)
    if a.xbe:check_xbe(a.xbe)
    else:print("NOTE: original XBE checked only when supplied locally")

if __name__=="__main__":
    main()
