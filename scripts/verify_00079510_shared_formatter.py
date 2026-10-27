#!/usr/bin/env python3
"""Guard original 0x00079510's single shared 64-byte formatter scratch.

The XBE originally uses the same stable stack buffer via two separate LEA
instructions and the converter passes that same address. Native guest ABI,
object persistence and helper signatures remain unverified. CI runs source
and focused Clang; --xbe authenticates the private original instruction bytes.
"""
import argparse
import hashlib
import re
import subprocess
from pathlib import Path

XBE_HASH="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE="src/main_unclassified/band_0007/0x00079510.c"
SITES=(
    (0x00079510,"81ecac0a0000","allocate original 0xAAC guest stack"),
    (0x00079516,"53","save EBX"),
    (0x00079517,"55","save EBP"),
    (0x00079651,"8d4c2420","first LEA into original formatter scratch"),
    (0x00079658,"e84c132700","original FUN_002EA9A9 call"),
    (0x00079a7e,"52","push formatter byte argument"),
    (0x00079a7f,"68ccdd4000","push original text format"),
    (0x00079a84,"8d442420","LEA formatter output at stable ESP+0x18"),
    (0x00079a88,"6a40","64-byte formatter bound"),
    (0x00079a8a,"50","push formatter scratch address"),
    (0x00079a93,"e8110f2700","formatter call using shared scratch"),
    (0x00079a98,"83c410","restore four formatter DWORD arguments"),
    (0x00079a9b,"8d4c2418","LEA same buffer after argument pop"),
    (0x00079a9f,"51","push shared scratch address"),
    (0x00079aa5,"e816fd1600","original string conversion call"),
)

def no_comments(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*","",s,flags=re.S)

def check_source(root):
    text=(root/SOURCE).read_text(encoding="utf8")
    s=no_comments(text)
    assert "Entry: 0x00079510," in text and "Input x86 body SHA-256:" in text
    assert "ABI_UNVERIFIED" in text
    assert "undefined1 local_aa4 [128];" in s
    assert "FUN_002ea9a9(local_aa4,0x40,&DAT_0040ddcc,(iStack_814 << 0xe) >> 0x18);" in s
    assert "FUN_001e97c0(uVar3,local_aa4);" in s
    assert "stack0xfffff550" not in s
    assert "0x00079A84 LEA" in text and "0x00079A9B LEA" in text
    print("PASS: 0x00079510 formatter+converter share the exact caller buffer")

def check_clang(root):
    argv=["clang","-std=c11","-fsyntax-only","-ferror-limit=3",
          "-Wno-implicit-function-declaration","-Wno-int-conversion",
          "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
          "-Wno-int-to-pointer-cast","-Wno-return-type",
          "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)]
    p=subprocess.run(argv,capture_output=True,text=True)
    assert p.returncode==0,p.stderr[:1800]
    print("PASS: isolated Clang C11 syntax for 0x00079510")

def check_xbe(path):
    raw=path.read_bytes()
    assert hashlib.sha256(raw).hexdigest()==XBE_HASH,"original Xbox XBE mismatch"
    for va,hexb,purpose in SITES:
        expected=bytes.fromhex(hexb)
        got=raw[va-0x10000:va-0x10000+len(expected)]
        assert got==expected,f"{va:#x}: {purpose}; found {got.hex()}"
        print(f"PASS XBE {va:#010x}: {purpose}")
    print(f"PASS {len(SITES)} original instruction windows")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    p.add_argument("--clang",action="store_true")
    args=p.parse_args()
    check_source(args.root)
    if args.clang:check_clang(args.root)
    if args.xbe:check_xbe(args.xbe)
    else:print("NOTE: private XBE instructions checked locally, not in CI")

if __name__=="__main__":
    main()
