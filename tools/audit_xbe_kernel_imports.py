#!/usr/bin/env python3
"""Exact retail-XBE kernel import ordinals. No guessed API names/prototypes."""
from __future__ import annotations
import argparse
import csv
import hashlib
import struct
from pathlib import Path

ORIGINAL_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
RETAIL_THUNK_XOR = 0x5B6D40B6
THUNK_VA = 0x00386340

def extract_ordinals(raw: bytes, *, require_identity: bool = True) -> list[int]:
    if require_identity and hashlib.sha256(raw).hexdigest().upper() != ORIGINAL_SHA256:
        raise ValueError("Wrong original Xbox XBE SHA-256")
    if raw[:4] != b"XBEH":
        raise ValueError("Not an XBE")
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11C)
    if not 1 <= count <= 256:
        raise ValueError("Invalid XBE section count")
    table_off = table_va-base
    if table_off < 0 or table_off+count*56 > len(raw):
        raise ValueError("Invalid XBE section table")
    encoded, = struct.unpack_from("<I", raw, 0x158)
    thunk_va = encoded ^ RETAIL_THUNK_XOR
    if thunk_va != THUNK_VA:
        raise ValueError("Unexpected retail kernel thunk address")
    for i in range(count):
        _, start, vsize, file_offset, rsize, _ = struct.unpack_from("<6I", raw, table_off+i*56)
        if start <= thunk_va < start+min(vsize, rsize):
            offset = file_offset+thunk_va-start
            limit = file_offset+min(vsize, rsize)
            break
    else:
        raise ValueError("Kernel thunk not mapped to original file-backed section")
    ordinals = []
    for slot in range(1024):
        if offset+4 > min(limit, len(raw)):
            raise ValueError("Unterminated kernel import table")
        word, = struct.unpack_from("<I", raw, offset)
        offset += 4
        if word == 0:
            break
        if (word & 0x80000000) == 0 or (word & 0x7fffffff) == 0:
            raise ValueError(f"Non-ordinal import at slot {slot}")
        ordinals.append(word & 0x7fffffff)
    else:
        raise ValueError("Exceeded safe ordinal import limit")
    if len(ordinals) != len(set(ordinals)):
        raise ValueError("Repeated kernel ordinal")
    return ordinals

def compare_manifest(manifest: Path, ordinals: list[int]) -> int:
    with manifest.open(encoding="utf-8", newline="") as f:
        rows = list(csv.DictReader(f))
    if len(rows) != 147:
        raise ValueError("Expected exactly 147 original kernel import slots")
    expected=[]
    for i, row in enumerate(rows):
        if int(row["slot"]) != i:
            raise ValueError("Kernel ordinal manifest out of order")
        expected.append(int(row["kernel_ordinal"]))
    if ordinals != expected:
        raise ValueError("Kernel import ordinals differ from original-XBE evidence")
    return len(expected)

if __name__ == "__main__":
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe",type=Path,required=True,help="User-owned original XBE; never uploaded")
    parser.add_argument("--manifest",type=Path,default=Path("metadata/xbe_kernel_import_ordinals.csv"))
    args=parser.parse_args()
    ordinals=extract_ordinals(args.xbe.read_bytes())
    count=compare_manifest(args.manifest,ordinals)
    print(f"Original XBE SHA-256 verified; {count} distinct kernel ordinal imports, "
          f"range {min(ordinals)}..{max(ordinals)}, exact table order matched.")
    print("Kernel API names, argument types and native-PC adapters are NOT yet verified.")
