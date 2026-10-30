#!/usr/bin/env python3
"""Pinned original XBE 0x00166C60 x87 global scalar operands and stores.

Sixteen instruction facts and isolated C11 storage declarations are tested.
Does not prove the rest of the guest global layout, register ABI, FPU control,
linked native application or behavioral parity.
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
from pathlib import Path
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
SOURCE = "src/main_unclassified/band_0016/0x00166c60.c"
BODY_SHA = "5AC17C1A77B6A0CEE21757F0ACA123CCC5E27D51F45DA51A6D9E647D1B145D44"
FINGERPRINTS = {
    0x0016754A: "d80d70f54100",
    0x0016755C: "d80d74f54100",
    0x00167570: "d80d78f54100",
    0x0016750A: "d80db0f54100",
    0x0016751C: "d80db4f54100",
    0x00167530: "d80dbcf54100",
    0x001674CA: "d80dd0f54100",
    0x001674F0: "d80dd8f54100",
    0x001674DC: "d80ddcf54100",
    0x001674B0: "d80de4f54100",
    0x0016749C: "d80de8f54100",
    0x0016748A: "d80decf54100",
    0x001674B8: "d91df0f54100",
    0x001674F8: "d91df4f54100",
    0x00167538: "d91df8f54100",
    0x00167578: "d91dfcf54100",
}
SCALARS = ["0041f570","0041f574","0041f578","0041f5b0","0041f5b4","0041f5bc","0041f5d0","0041f5d8","0041f5dc","0041f5e4","0041f5e8","0041f5ec","0041f5f0","0041f5f4","0041f5f8","0041f5fc"]

def read_va(data, address, count):
    if data[:4] != b"XBEH":
        raise AssertionError("Not an original XBE")
    base = int.from_bytes(data[0x104:0x108], "little")
    n = int.from_bytes(data[0x11c:0x120], "little")
    tab = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(n):
        o = tab + 56*i
        va = int.from_bytes(data[o+4:o+8], "little")
        file_off = int.from_bytes(data[o+12:o+16], "little")
        length = int.from_bytes(data[o+16:o+20], "little")
        if va <= address and address+count <= va+length:
            return data[file_off+address-va:file_off+address-va+count]
    raise AssertionError(f"Unmapped VA {address:08x}")

def check(root, xbe):
    src = (root / SOURCE).read_text(encoding="utf-8")
    assert f"Input x86 body SHA-256: {BODY_SHA}" in src
    assert "Entry: 0x00166c60" in src
    for addr in SCALARS:
        assert f"extern float _DAT_{addr};" in src, addr
        assert f"extern uint32_t *_DAT_{addr};" not in src, addr
    cmd = ["clang","-std=c11","-fsyntax-only","-ferror-limit=0",
           "-Wno-implicit-function-declaration","-Wno-int-conversion",
           "-Wno-incompatible-pointer-types","-Wno-pointer-to-int-cast",
           "-Wno-int-to-pointer-cast","-Wno-return-type",
           "-Wno-deprecated-non-prototype",
           "-I",str(root/"include"),str(root/SOURCE)]
    subprocess.run(cmd, check=True)
    if xbe:
        b = xbe.read_bytes()
        assert hashlib.sha256(b).hexdigest() == XBE_SHA, "Unexpected executable hash"
        for va, seq in FINGERPRINTS.items():
            assert read_va(b,va,len(seq)//2) == bytes.fromhex(seq), hex(va)
    print("PASS 0x00166C60: 12 FMUL m32fp + 4 FSTP m32fp global source contracts;"
          + (" pinned XBE bytes verified" if xbe else " original XBE not checked in CI"))
    print("NOTE: whole-function x87 semantics, other globals and guest ABI unverified")

if __name__ == "__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe",type=Path)
    args=p.parse_args()
    check(args.root,args.xbe)
