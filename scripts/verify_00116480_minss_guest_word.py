#!/usr/bin/env python3
"""Evidence-based 0x00116480 float32 MINSS and later guest pointer lifetime.

The original XBE moves two 32-bit float words then executes MOVSS/MINSS.
This tests the source storage contract and isolated C11, not the native ABI.
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
import subprocess
from pathlib import Path
XBE_SHA="b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY="B6E368F2832B3AE39C1B6F077D2F8396CCF5DAABA517282735BA109FA08341D0"
SOURCE="src/main_unclassified/band_0011/0x00116480.c"
OPS={
 0x0011664F:"8b5014",
 0x00116655:"8b4818",
 0x00116669:"8955e8",
 0x0011667F:"8945e8",
 0x00116682:"f30f1045e8",
 0x00116687:"f30f5d45e4",
 0x0011668C:"f30f1145e0",
 0x0011669D:"f30f1045e4",
 0x001166A2:"f30f5d45e0",
}
def read_xbe(data,a,n):
    assert data[:4]==b"XBEH"
    base=int.from_bytes(data[0x104:0x108],"little")
    count=int.from_bytes(data[0x11c:0x120],"little")
    table=int.from_bytes(data[0x120:0x124],"little")-base
    for i in range(count):
        o=table+56*i
        va=int.from_bytes(data[o+4:o+8],"little")
        raw=int.from_bytes(data[o+12:o+16],"little")
        length=int.from_bytes(data[o+16:o+20],"little")
        if va<=a and a+n<=va+length:
            j=raw+a-va
            return data[j:j+n]
    raise AssertionError(hex(a))
def check(root,xbe):
    s=(root/SOURCE).read_text(encoding="utf-8")
    assert f"Input x86 body SHA-256: {BODY}" in s
    for t in ("float guest_scalar_14;","guest_scalar_14 = *(float *)(iVar1 + 0x14);",
              "fVar8 = guest_scalar_14;","<= guest_scalar_14",
              "local_44 = (undefined4 *)FUN_00061500(&local_48);"):
        assert t in s,t
    assert "(float)local_44" not in s
    subprocess.run(["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
      "-Wno-implicit-function-declaration","-Wno-int-conversion",
      "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
      "-Wno-int-to-pointer-cast","-Wno-return-type",
      "-Wno-deprecated-non-prototype","-I",str(root/"include"),str(root/SOURCE)],check=True)
    if xbe:
        data=xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest()==XBE_SHA
        for a,ins in OPS.items():
            assert read_xbe(data,a,len(ins)//2)==bytes.fromhex(ins),hex(a)
    print("PASS original 0x00116480 scalar MINSS low-lane and disjoint pointer reuse; C11 syntax")
    print("Private original XBE verified" if xbe else "Source-only CI; original XBE omitted")
    print("ABI_UNVERIFIED: native guest address and full function")
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    a=p.parse_args()
    check(a.root,a.xbe)
