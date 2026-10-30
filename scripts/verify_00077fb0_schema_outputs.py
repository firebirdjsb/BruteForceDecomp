#!/usr/bin/env python3
"""Pin source-level factory and QueryInterface guest stack contracts.

The original 0x00077FB0 uses output slots at S-0x234 and S-0x230
and two different filename regions. Native host pointer width, COM
ABI and resource lifetime are NOT verified. With --xbe the user's
private original XBE is verified by whole-file SHA256 and opcode bytes.
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

XBE_SHA256="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/main_unclassified/band_0007/0x00077fb0.c"
WINDOWS=(
    (0x0007804f,"8d542414","factory output at S-0x234"),
    (0x0007805e,"8d542444","factory filename at S-0x208"),
    (0x00078068,"ff510c","first factory vtable call"),
    (0x000780b3,"6804010000","exact byte capacity 0x104"),
    (0x000780b8,"8d542440","format destination at S-0x208"),
    (0x000780bd,"8d942448010000","formatted source at S-0x104"),
    (0x000780c6,"ff5128","formatter callback at +0x28"),
    (0x000780ea,"8d4c2410","second factory output S-0x234"),
    (0x000780fa,"8b442410","reload opened interface from S-0x234"),
    (0x00078106,"8d4c241c","enumerator output distinct from factory"),
    (0x00078152,"895c2414","zero S-0x230 QueryInterface output"),
    (0x0007815a,"8d442414","address S-0x230 QueryInterface output"),
    (0x00078165,"ff5210","invoke QueryInterface"),
    (0x0007816c,"8b4c2414","reload QueryInterface output"),
)

def uncomment(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)

def check_source(root):
    source=(root/SOURCE).read_text(encoding="utf8")
    ac=uncomment(source)
    assert "Entry: 0x00077fb0," in source
    assert "Input x86 body SHA-256:" in source
    assert "ABI_UNVERIFIED" in source
    for fragment in (
        "0x000780B3 PUSH 0x104",
        "0x000780EA LEA",
        "0x0007815A passes",
        "(DAT_004432f8,local_104,local_208,0x104);",
        "(DAT_0046990c,local_208,local_234);",
        "unaff_EBP = local_234[0];",
        "local_234[1] = (int *)0x0;",
        "(piVar4,s_23_23_ISchema_00406e3c,&local_234[1]);",
        "unaff_EDI = local_234[1];",
        "param_1[3] = unaff_EDI;",
    ):
        assert fragment in (source if "0x000" in fragment else ac), fragment
    assert "stack0xfffffdc0" not in ac and "stack0xfffffdc4" not in ac
    print("PASS 0x00077FB0: distinct factory/schema interface output slots")

def check_clang(root):
    cmd=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
         "-Wno-implicit-function-declaration","-Wno-int-conversion",
         "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast","-Wno-return-type",
         "-Wno-deprecated-non-prototype","-I",str(root/"include"),
         str(root/SOURCE)]
    r=subprocess.run(cmd,capture_output=True,text=True)
    assert r.returncode==0, f"isolated Clang failed: {r.stderr[:1800]}"
    print("PASS 0x00077FB0: isolated host Clang C11")

def check_xbe(path):
    b=path.read_bytes()
    assert hashlib.sha256(b).hexdigest()==XBE_SHA256,"original XBE mismatch"
    for va,hexbytes,purpose in WINDOWS:
        want=bytes.fromhex(hexbytes)
        got=b[va-0x10000:va-0x10000+len(want)]
        assert got==want,f"0x{va:08X}: {purpose}, {got.hex()} != {hexbytes}"
        print(f"PASS original 0x{va:08X}: {purpose}")
    print(f"PASS all {len(WINDOWS)} original instruction windows")

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe",type=Path)
    parser.add_argument("--clang",action="store_true")
    a=parser.parse_args()
    check_source(a.root)
    if a.clang:check_clang(a.root)
    if a.xbe:check_xbe(a.xbe)
    else:print("NOTE: private original XBE checks local-only; native ABI unverified")

if __name__=="__main__":
    main()
