#!/usr/bin/env python3
"""Synthetic XBE layout/ordinal regression: never embeds retail game bytes."""
from __future__ import annotations
import csv
from pathlib import Path
import struct
from audit_xbe_kernel_imports import (extract_ordinals, compare_manifest,
                                      ORIGINAL_SHA256, RETAIL_THUNK_XOR, THUNK_VA)

ROOT=Path(__file__).resolve().parents[1]
values=[int(x["kernel_ordinal"]) for x in
        csv.DictReader((ROOT/"metadata/xbe_kernel_import_ordinals.csv").open(encoding="utf-8",newline=""))]
assert len(values)==147 and len(set(values))==147
def make_fake(ordinals: list[int]) -> bytearray:
    raw=bytearray(2048)
    raw[0:4]=b"XBEH"
    struct.pack_into("<I", raw, 0x104, 0x10000)
    struct.pack_into("<II", raw, 0x11c, 1, 0x10200)
    struct.pack_into("<I", raw, 0x158, THUNK_VA ^ RETAIL_THUNK_XOR)
    struct.pack_into("<6I", raw, 0x200, 0, THUNK_VA, 0x300, 0x400, 0x300, 0)
    for i,number in enumerate(ordinals):
        struct.pack_into("<I",raw,0x400+i*4,0x80000000|number)
    return raw

fake=make_fake([277,294,1])
assert extract_ordinals(bytes(fake), require_identity=False)==[277,294,1]
try:
    extract_ordinals(bytes(fake))
except ValueError:
    pass
else:
    raise AssertionError("Synthetic file unexpectedly passed retail SHA check")
struct.pack_into("<I",fake,0x400,277)
try:
    extract_ordinals(bytes(fake),require_identity=False)
except ValueError:
    pass
else:
    raise AssertionError("Nonordinal thunk accepted")
assert ORIGINAL_SHA256=="B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
print("Synthetic XBE section mapping, import ordinal and wrong-source guards passed.")
