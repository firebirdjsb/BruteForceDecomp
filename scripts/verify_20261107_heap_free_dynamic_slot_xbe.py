#!/usr/bin/env python3
"""Read-only original-XBE evidence for the 0x003BC654 dynamic cleanup target.

Never copies or commits retail binary bytes. Proves only original instruction
encodings and bounded control-flow possibilities, NOT full runtime/guest ABI.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
from pathlib import Path

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections
from verify_20261107_000e1150_discontiguous_xbe import check as check_omissions

PINNED_BODIES = {
    0x00087CC0: (82, "93cbe7d076ad040f798e96bc4c2cc58049d955f52052206a8244e1cbe367739b"),
    0x00237EC0: (19, "aa35726c3037e872b1f4dd54bc64df55b01ac73e8ed04533f2411d071fcebd54"),
}
# Bounded, instruction-aligned entry-through-RET spans: no assertion of
# canonical Ghidra function identities/labels for these two targets.
TARGET_SPANS = {
    0x002379D0: (36, "f5a55b9d7acad6c7ffb3ab4d2e2375d8a95994b514f68e36cca10e3758db28fd"),
    0x00237910: (131, "11bb4ed20bb8edb4b38e7da3ffba942a134920a5e3b41f9de662eb56495689cb"),
}
# Fixed x86 instructions tested at their actual original guest VAs.
OPCODES = {
    0x00087CCF: "c70554c63b00d0792300",  # slot=0x2379d0, before call
    0x00087CE3: "e838000000",            # CALL 0x87d20
    0x00087CF8: "c70554c63b0010792300",  # slot=0x237910, after call
    0x00087D0F: "c20400",                # RET 4
    0x002EA018: "e9d3dbd7ff",          # JMP to 0x67bf0
    0x00067BF0: "ff2554c63b00",        # JMP DWORD PTR [0x3bc654]
    0x00237EC0: "8b442404",            # original entry stack word
    0x00237ED2: "c3",                  # RET, no callee immediate
    0x002379D0: "68a0cf4600",          # PUSH guest lock object
    0x002379D5: "ff1540633800",        # indirect CALL [0x386340]
    0x002379DB: "8b442404",            # MOV EAX,[ESP+4]
    0x002379E0: "e82bffffff",          # CALL 0x237910
    0x002379E5: "83c404",              # caller cleans 4 bytes
    0x002379ED: "ff1544633800",        # indirect CALL [0x386344]
    0x002379F3: "c3",                  # RET
    0x00237910: "51",                  # PUSH ECX
    0x00237911: "8b442408",            # MOV EAX,[ESP+8]
    0x00237915: "85c0",                # TEST EAX,EAX
    0x00237917: "7443",                # JE 0x23795c for null word
    0x0023795C: "59",                  # POP ECX on null path
    0x0023795D: "c3",                  # RET on null path
    0x00237992: "c3",                  # RET on non-null path
}


def check(data: bytes) -> dict:
    digest = hashlib.sha256(data).hexdigest()
    if digest != XBE_SHA256:
        raise ValueError("retail XBE SHA-256 authentication failed")
    layout = sections(data)

    def read(guest_va: int, n: int) -> bytes:
        offset = file_offset(layout, guest_va, n)
        return data[offset:offset+n]

    omitted = check_omissions(data)
    mutated = 0
    for guest_va, (size, expected) in {**PINNED_BODIES, **TARGET_SPANS}.items():
        contents = read(guest_va, size)
        if hashlib.sha256(contents).hexdigest() != expected:
            raise ValueError(f"original x86 body/span mismatch at {guest_va:#x}")
        for i in range(size):
            m = bytearray(contents)
            m[i] ^= 1
            if hashlib.sha256(m).hexdigest() == expected:
                raise AssertionError("failed body mutation control")
            mutated += 1
    for guest_va, expected in OPCODES.items():
        original = bytes.fromhex(expected)
        if read(guest_va, len(original)) != original:
            raise ValueError(f"x86 operand/opcode mismatch at {guest_va:#x}")
        for i in range(len(original)):
            changed = bytearray(original)
            changed[i] ^= 1
            if changed == read(guest_va, len(original)):
                raise AssertionError("failed opcode mutation control")
            mutated += 1

    if struct.unpack('<I', read(0x003BC654, 4))[0] != 0x00237EC0:
        raise ValueError("original file initializer for cleanup slot differs")
    if read(0x00237917, 2)[0] != 0x74:
        raise ValueError("zero-argument branch does not use JE")
    if 0x00237917 + 2 + struct.unpack('b', read(0x00237917, 2)[1:])[0] != 0x0023795C:
        raise ValueError("null-pointer branch no longer leads to POP ECX/RET")
    if 0x002379E0 + 5 + struct.unpack('<i', read(0x002379E0, 5)[1:])[0] != 0x00237910:
        raise ValueError("locked cleanup no longer calls normal cleanup")
    if 0x00087CE3 + 5 + struct.unpack('<i', read(0x00087CE3, 5)[1:])[0] != 0x00087D20:
        raise ValueError("slot switch intermediate CALL destination mismatch")
    if 0x002EA018 + 5 + struct.unpack('<i', read(0x002EA018, 5)[1:])[0] != 0x00067BF0:
        raise ValueError("original thunk forwarding mismatch")
    if read(0x00087CCF, 10)[2:6] != read(0x00087CF8, 10)[2:6]:
        raise ValueError("dynamic slot writes refer to different guest VAs")
    return {
        "original_xbe_authenticated": True,
        "preexisting_omitted_bytes_verified": omitted["omitted_original_bytes"] + omitted["caller_omitted_cleanup_bytes"],
        "original_cleanup_slot_on_disk": "0x00237ec0",
        "first_runtime_slot_assignment": "0x002379d0",
        "second_runtime_slot_assignment": "0x00237910",
        "forwarding_chain": "0x002ea018 -> 0x00067bf0 -> JMP [0x003bc654]",
        "function_body_hashes": len(PINNED_BODIES),
        "bounded_target_spans": len(TARGET_SPANS),
        "instruction_windows": len(OPCODES),
        "mutation_controls": mutated + omitted["negative_controls"],
        "return_evidence": "0x2379d0 RET; 0x237910 zero-argument branch to RET and nonzero path RET; 0x237ec0 RET",
        "unverified": "indirect lock/unlock imports, guest stack/register ABI, dynamic replacement scheduling, target effects, call success, runtime reachability, full game behavior",
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xbe', type=Path, required=True)
    args = p.parse_args()
    for k, v in check(args.xbe.read_bytes()).items():
        print(f"{k}: {v}")
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
