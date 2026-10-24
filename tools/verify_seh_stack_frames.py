#!/usr/bin/env python3
"""Verify two original Xbox SEH/copy prologues; not a C ABI proof.

Usage: python tools/verify_seh_stack_frames.py /path/to/default.xbe
Keep the copyrighted XBE outside the repository.
"""
import hashlib
import struct
import sys
from pathlib import Path

EXPECTED_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FRAMES = (
    (0x0001C630, 0x50, 0x24, 5, 0x00307A10, -0x6C),
    (0x0001C980, 0x7C, 0x50, 16, 0x00307F00, -0x98),
)

def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]

def file_offset(data, address):
    base = u32(data, 0x104)
    count = u32(data, 0x11C)
    headers = u32(data, 0x120) - base
    for index in range(count):
        pos = headers + index * 0x38
        va, size, raw, raw_size = (u32(data, pos + x) for x in (4, 8, 12, 16))
        delta = address - va
        if 0 <= delta < min(size, raw_size):
            return raw + delta
    raise ValueError(f"{address:#x}: not in file-backed section")

def verify(path):
    data = Path(path).read_bytes()
    actual = hashlib.sha256(data).hexdigest()
    if actual != EXPECTED_SHA256:
        raise ValueError(f"XBE SHA-256 mismatch: {actual}")
    if data[:4] != b"XBEH":
        raise ValueError("invalid XBE signature")
    for entry, alloc, dst, count, handler, decompiler_offset in FRAMES:
        expected = (b"\x55\x8b\xec\x6a\xff\x68" + struct.pack("<I", handler)
            + b"\x64\xa1\x00\x00\x00\x00\x50\x64\x89\x25\x00\x00\x00\x00"
            + b"\x83\xec" + bytes([alloc]) + b"\x53\x56\x57\x89\x65\xf0\x8b\xd9"
            + b"\xb9" + struct.pack("<I", count) + b"\x8b\xf2\x8d\x7d"
            + bytes([(-dst) & 0xff]) + b"\xf3\xa5")
        start = file_offset(data, entry)
        if data[start:start + len(expected)] != expected:
            raise ValueError(f"{entry:#010x}: original prologue differs")
        # Three SEH pushes + local allocation + three callee-saved pushes.
        saved_esp = -(alloc + 0x18)
        if decompiler_offset != saved_esp - 4:
            raise ValueError(f"{entry:#010x}: decompiler offset relationship changed")
        print(f"{entry:#010x}: PASS; saved ESP EBP{saved_esp:#x}, "
              f"decompiler offset EBP{decompiler_offset:#x}; difference 4 bytes")
    # Verify callee cleanup and the observed caller argument-setup bytes.
    # These checks are machine-code evidence, NOT a native C ABI proof.
    for entry, *_ in FRAMES:
        start = file_offset(data, entry)
        returns = [entry + i for i in range(240)
                   if data[start+i:start+i+3] == bytes.fromhex("c20800")]
        if not returns:
            raise ValueError(f"{entry:#010x}: expected ret 8 not found")
        print(f"{entry:#010x}: PASS; ret 8 at {returns[0]:#010x}")
    calls = (
        (0x00137C56, 0x0001C630, "6a01518bc48bcf8918"),
        (0x001B3929, 0x0001C630, "57518bc48d5424188930"),
        (0x0001C288, 0x0001C980, "50518bc48d5424148930"),
    )
    for call, target, prefix_hex in calls:
        start = file_offset(data, call)
        prefix = bytes.fromhex(prefix_hex)
        if data[start-len(prefix):start] != prefix:
            raise ValueError(f"{call:#010x}: caller argument setup changed")
        if data[start] != 0xe8:
            raise ValueError(f"{call:#010x}: not a direct CALL rel32")
        displacement = struct.unpack_from("<i", data, start+1)[0]
        if call + 5 + displacement != target:
            raise ValueError(f"{call:#010x}: CALL target changed")
        print(f"{call:#010x}: PASS; caller setup and CALL {target:#010x}")
    print("PASS: original x86 prologues verified; C ABI/runtime not verified")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        sys.exit("usage: verify_seh_stack_frames.py /path/to/default.xbe")
    try:
        verify(sys.argv[1])
    except (ValueError, OSError, struct.error) as exc:
        sys.exit(f"FAIL: {exc}")
