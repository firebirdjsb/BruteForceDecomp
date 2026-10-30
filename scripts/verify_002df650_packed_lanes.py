#!/usr/bin/env python3
"""XBE-backed 0x002DF650 packed-f32 lane regression; not a 1:1 ABI proof."""

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

XBE_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
BODY_SHA = "19547C2CD0EC63616CE9E3711E326A2700DB9F06A908F27D693C7049826357EE"
ENTRY, SIZE = 0x002DF650, 209
SOURCE = "src/main_unclassified/band_002d/0x002df650.c"
OPCODES = {
    0x002DF67C:"8b11", 0x002DF67E:"8915505c4a00",
    0x002DF684:"8b10", 0x002DF686:"8915545c4a00",
    0x002DF68F:"83caff", 0x002DF692:"3bf2", 0x002DF696:"39500c",
    0x002DF69B:"d945fc", 0x002DF69E:"d8490c",
    0x002DF6A1:"d91d585c4a00", 0x002DF6AD:"d91d5c5c4a00",
    0x002DF6C9:"0f2805a07d3b00", 0x002DF6D0:"f30f5355fc",
    0x002DF6D5:"0f280db07d3b00", 0x002DF6DC:"0f5905505c4a00",
    0x002DF6E9:"0f590d505c4a00", 0x002DF6F0:"0f2902",
    0x002DF6F3:"f30f11503c", 0x002DF6F8:"0f294a10",
    0x002DF702:"8b15505c4a00", 0x002DF711:"8b15585c4a00",
}
REQUIRED = (
    "extern float DAT_004a5c50[4];",
    "extern float _DAT_003b7da0[4];",
    "extern float _DAT_003b7db0[4];",
    "memcpy(&DAT_004a5c50[0], &param_2[0], sizeof(float));",
    "memcpy(&DAT_004a5c50[1], &param_2[4], sizeof(float));",
    "memcpy(&sentinel_first, &param_2[3], sizeof sentinel_first);",
    "memcpy(&sentinel_second, &param_2[7], sizeof sentinel_second);",
    "sentinel_first == UINT32_MAX || sentinel_second == UINT32_MAX",
    "DAT_004a5c50[2] = fVar2 * param_2[3];",
    "DAT_004a5c50[3] = fVar2 * param_2[6];",
    "_DAT_003b7da0[3] * DAT_004a5c50[3]",
    "_DAT_003b7db0[3] * DAT_004a5c50[3]",
    "reciprocal_lane = _mm_rcp_ss(_mm_set_ss(fVar2));",
    "*(float *)(param_1 + 0x3c) = _mm_cvtss_f32(reciprocal_lane);",
)
FORBIDDEN = ("-NAN", "fRam003b7d", "auVar9._0_4_", "rcpss(")


def check_source(root):
    path = root / SOURCE
    source = path.read_text(encoding="utf-8")
    for marker in (f"Entry: 0x{ENTRY:08x},",
                   f"Input x86 body SHA-256: {BODY_SHA}", "ABI_UNVERIFIED"):
        if marker not in source:
            raise ValueError(f"Original identity/uncertainty missing: {marker}")
    for item in REQUIRED:
        if item not in source:
            raise ValueError(f"Required packed-lane source missing: {item}")
    for item in FORBIDDEN:
        if item in source:
            raise ValueError(f"Stale decompiler construct: {item}")
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang is required")
    flags = ("-std=c11", "-fsyntax-only", "-ferror-limit=10",
             "-Wno-implicit-function-declaration", "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
             "-Wno-int-to-pointer-cast", "-Wno-return-type",
             "-Wno-deprecated-non-prototype")
    result = subprocess.run((clang, *flags, "-I", str(root / "include"), str(path)),
                            capture_output=True, text=True, timeout=60)
    if result.returncode:
        raise RuntimeError(result.stderr[-5000:])
    print("PASS: source invariants and isolated Clang C11")


def check_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA or data[:4] != b"XBEH":
        raise ValueError("Original user-supplied XBE identity mismatch")
    base, = struct.unpack_from("<I", data, 0x104)
    count, table_va = struct.unpack_from("<II", data, 0x11C)
    table = table_va - base
    if not (0 < count < 128 and 0 <= table <= len(data) - count * 56):
        raise ValueError("Invalid XBE section table")
    def read_va(va, size):
        for i in range(count):
            _, addr, vsize, offset, rsize = struct.unpack_from("<IIIII", data, table + i * 56)
            delta = va - addr
            if 0 <= delta and delta + size <= min(vsize, rsize):
                begin = offset + delta
                if begin + size <= len(data):
                    return data[begin:begin + size]
        raise ValueError(f"Unmapped XBE address: {va:08x}")
    if hashlib.sha256(read_va(ENTRY, SIZE)).hexdigest().upper() != BODY_SHA:
        raise ValueError("Original 209-byte body hash mismatch")
    for va, code in OPCODES.items():
        expected = bytes.fromhex(code)
        if read_va(va, len(expected)) != expected:
            raise ValueError(f"Instruction mismatch: 0x{va:08X}")
    print(f"PASS: original XBE digest, complete function body, {len(OPCODES)} opcodes")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--skip-source", action="store_true")
    args = parser.parse_args()
    if args.skip_source and args.xbe is None:
        parser.error("--skip-source requires --xbe")
    if args.xbe:
        check_xbe(args.xbe)
    if not args.skip_source:
        check_source(args.root.resolve())
    print("Xbox ABI, linking, alignment and runtime behavior remain unverified.")


if __name__ == "__main__":
    main()
