#!/usr/bin/env python3
"""Original 0x002D87A0 x87 reciprocal and scalar SSE RSQRTSS contract.

Original Brute Force XBE fingerprints are pinned; --xbe is optional so
copyrighted binary content never enters the repository or public CI.
This is source and isolated syntax verification, not ABI/behavioral parity.
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

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "C173D6665B728D85F049F1E97A5894A8E445B551E050EB5F6A6DE339FC8CBF8D"
SOURCE = "src/main_unclassified/band_002d/0x002d87a0.c"
OPS = {
    0x002D8BDB: "e83073e3ff",      # call measured-length helper
    0x002D8BE0: "d83d784f3a00",    # FDIVR original x87 value
    0x002D8BEB: "d95c2438",        # FSTP m32fp
    0x002D8BEF: "e81c73e3ff",      # call measured-length helper
    0x002D8BF4: "d84c2434",        # FMUL m32fp
    0x002D8BFC: "d95c2448",        # FSTP m32fp
    0x002D8C00: "f30f52442448",    # RSQRTSS XMM0,[ESP+48]
    0x002D8C06: "f30f11442420",    # MOVSS F32 result to local
    0x002D8C10: "d9442420",        # FLD m32fp approximate result
    0x002D8C14: "d84c241c",        # FMUL m32fp
    0x002D8C21: "d95854",          # FSTP output m32fp
    0x002D8C7D: "d9442420",        # FLD RSQRTSS scalar
    0x002D8C85: "d84c2434",        # FMUL inverse-length m32fp
    0x002D8C8E: "d9e0",            # FCHS
    0x002D8CA2: "d918",            # FSTP output F32
}

def original_va(data, address, size):
    assert data[:4] == b"XBEH"
    base = int.from_bytes(data[0x104:0x108], "little")
    count = int.from_bytes(data[0x11c:0x120], "little")
    table = int.from_bytes(data[0x120:0x124], "little") - base
    for i in range(count):
        off = table + 56*i
        va = int.from_bytes(data[off+4:off+8], "little")
        raw = int.from_bytes(data[off+12:off+16], "little")
        length = int.from_bytes(data[off+16:off+20], "little")
        if va <= address and address+size <= va+length:
            start = raw+address-va
            return data[start:start+size]
    raise AssertionError(hex(address))

def verify(root, xbe):
    source = (root / SOURCE).read_text(encoding="utf-8")
    assert "Input x86 body SHA-256: " + BODY_SHA in source
    assert "Entry: 0x002d87a0" in source
    for token in (
        "float guest_inverse_length;",
        "float guest_scaled_length;",
        "float guest_rsqrt_length;",
        "guest_inverse_length = (float)((float10)1.0 / fVar8);",
        "guest_scaled_length = (float)(fVar8 * (float10)guest_inverse_length);",
        "local_68 = guest_scaled_length;",
        "_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(local_68)))",
        "fVar10 = -(guest_rsqrt_length * guest_inverse_length);",
        "local_7c = &local_60;",
        "local_94 = local_50;",
    ):
        assert token in source, token
    for stale in ("auVar9._0_4_", "(float)local_7c", "(float)local_90", "(float)local_94"):
        assert stale not in source, stale
    subprocess.run([
        "clang", "-std=c11", "-msse", "-fsyntax-only", "-ferror-limit=0",
        "-Wno-implicit-function-declaration", "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
        "-Wno-int-to-pointer-cast", "-Wno-return-type",
        "-Wno-deprecated-non-prototype", "-I", str(root / "include"),
        str(root / SOURCE),
    ], check=True)
    if xbe:
        data = xbe.read_bytes()
        assert hashlib.sha256(data).hexdigest() == XBE_SHA
        for address, op in OPS.items():
            assert original_va(data,address,len(op)//2) == bytes.fromhex(op), hex(address)
    print("PASS 0x002D87A0 source and isolated C11 x87/SSE scalar contract")
    print("Original XBE fingerprint checked" if xbe else "Source-only public CI; private XBE omitted")
    print("Original x87 control state and linked native ABI remain UNVERIFIED")

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    a = p.parse_args()
    verify(a.root, a.xbe)
