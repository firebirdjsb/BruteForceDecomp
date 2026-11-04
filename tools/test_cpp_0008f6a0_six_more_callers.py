#!/usr/bin/env python3
"""Authenticate six more original-XBE guest ESI + stack-word caller repairs.

Public CI checks original source labels, exact call expressions, and Clang++17.
--xbe additionally checks the user's PRIVATE SHA-pinned original executable.
Syntax and instruction windows do NOT verify Xbox C++ ABI or native behavior.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE_SHA = "339DC70ADE9DA431A03D8964268E2B983BF89DF209448A87B645006C63D4420D"
DECL = "extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);"
# Entry, original body SHA-256, original byte length,
# (ESI producer VA/bytes, stack PUSH VA/bytes, direct CALL VA, C++ expression).
CASES = [
  [
    "0003d810",
    "74E4625A5494944143F6452B1DCEF7492AE64078F5F9E7559F7A98EA81C9E112",
    119,
    [
      [
        251935,
        "8d7308",
        251940,
        "50",
        251941,
        "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + UINT32_C(8), static_cast<std::uint32_t>(*(int *)(in_EAX + 0xc)));"
      ],
      [
        252019,
        "8d731c",
        252024,
        "57",
        252025,
        "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + UINT32_C(0x1c), static_cast<std::uint32_t>(*(int *)(in_EAX + 0x20)));"
      ]
    ]
  ],
  [
    "00055650",
    "BEEFC4E7EC46B688C4E29A1B3278549B8A91009040AEB8AE84EEEED38558CA58",
    137,
    [
      [
        349797,
        "8d7708",
        349802,
        "50",
        349803,
        "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(8), static_cast<std::uint32_t>(*(int *)(in_EAX + 0xc)));"
      ],
      [
        349875,
        "8d771c",
        349880,
        "50",
        349881,
        "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x1c), static_cast<std::uint32_t>(*(int *)(in_EAX + 0x20)));"
      ]
    ]
  ],
  [
    "00056c20",
    "B31BCC9B1B3F366413526456C7CE0C9ADA41697C13F56973CC2E3DF024FF04E7",
    96,
    [
      [
        355369,
        "8d7704",
        355374,
        "50",
        355375,
        "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(4), static_cast<std::uint32_t>(*(int *)(unaff_EBX + 8)));"
      ],
      [
        355389,
        "83c608",
        355396,
        "50",
        355397,
        "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0xc), static_cast<std::uint32_t>(*(int *)(unaff_EBX + 0x10)));"
      ]
    ]
  ],
  [
    "0005b9a0",
    "EFDB2C20B29F776778ED8F5FBDC6364CBB68E2FDDA366E72B06C9501087C5A5F",
    279,
    [
      [
        375328,
        "8bf7",
        375327,
        "53",
        375330,
        "FUN_0008f6a0(static_cast<std::uint32_t>(iVar2), static_cast<std::uint32_t>(param_2));"
      ]
    ]
  ],
  [
    "00072af0",
    "03E3FD53F14E6847321F77F0293BBB657070BF52232C526AFCEB66527290083C",
    97,
    [
      [
        469794,
        "8d74df34",
        469800,
        "55",
        469801,
        "FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + static_cast<std::uint32_t>(in_EAX) * UINT32_C(8) + UINT32_C(0x34), static_cast<std::uint32_t>(param_1));"
      ]
    ]
  ],
  [
    "00072f00",
    "A54FEC194FF0CD85B5BA0DAE439D5AB69BA07347665D7572CC6A62A50B2261DC",
    46,
    [
      [
        470803,
        "8db788000000",
        470811,
        "6a00",
        470813,
        "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x88), UINT32_C(0));"
      ]
    ]
  ]
]
# Additional original producer and callee windows.
WINDOWS = {
    0x0003D818: "8bf8",       # EDI <- EAX
    0x00055654: "8bd8",       # EBX <- EAX
    0x0005BA03: "8bf8",       # EDI <- allocator EAX on success
    0x0005BA07: "33ff",       # EDI <- zero on allocation failure
    0x00072AF9: "8bd8",       # EBX <- incoming EAX
    0x00072AFB: "8bf9",       # EDI <- incoming ECX
    0x0008F6A0: "8b4604",     # read guest DWORD [ESI+4]
    0x0008F6A6: "8b5c2408",   # read incoming guest stack DWORD
    0x0008F6DF: "c3",         # callee plain RET
}

def source_path(root, entry):
    return root / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")

def check_source(source, entry, digest, edges):
    if "Entry: 0x" + entry not in source:
        raise ValueError(entry + ": original entry identity changed")
    if "Input x86 body SHA-256: " + digest not in source:
        raise ValueError(entry + ": original body digest changed")
    if "ABI_UNVERIFIED" not in source or source.count(DECL) != 1:
        raise ValueError(entry + ": ABI uncertainty or callee draft declaration lost")
    if source.count("FUN_0008f6a0(") != len(edges) + 1:
        raise ValueError(entry + ": unexpected call count")
    for edge in edges:
        if source.count(edge[5]) != 1:
            raise ValueError(entry + ": original register/stack expression changed")

def xbe_reader(data):
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11c)[0]
    table = struct.unpack_from("<I", data, 0x120)[0] - base
    sections = [struct.unpack_from("<IIIII", data, table + 0x38 * i) for i in range(count)]
    def read(va, size):
        for _, start, memory_size, raw, stored in sections:
            if start <= va and va + size <= start + min(memory_size, stored):
                pos = raw + va - start
                return data[pos:pos + size]
        raise ValueError("XBE stored section missing VA " + hex(va))
    return read

def check_call(instruction, call_va):
    if len(instruction) != 5 or instruction[0] != 0xE8:
        raise ValueError("not a direct CALL at " + hex(call_va))
    if call_va + 5 + struct.unpack("<i", instruction[1:])[0] != 0x0008F6A0:
        raise ValueError("wrong direct CALL target at " + hex(call_va))

def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("original Xbox executable SHA-256 mismatch")
    read = xbe_reader(data)
    if hashlib.sha256(read(0x0008F6A0, 64)).hexdigest().upper() != CALLEE_SHA:
        raise ValueError("original callee whole-body SHA-256 mismatch")
    for va, hexbytes in WINDOWS.items():
        if read(va, len(hexbytes) // 2) != bytes.fromhex(hexbytes):
            raise ValueError("original opcode mismatch at " + hex(va))
    for entry, digest, length, edges in CASES:
        if hashlib.sha256(read(int(entry, 16), length)).hexdigest().upper() != digest:
            raise ValueError(entry + ": original whole-body SHA-256 mismatch")
        for esi_va, esi_hex, push_va, push_hex, call_va, _ in edges:
            if read(esi_va, len(esi_hex)//2) != bytes.fromhex(esi_hex):
                raise ValueError(entry + ": original ESI producer mismatch")
            if read(push_va, len(push_hex)//2) != bytes.fromhex(push_hex):
                raise ValueError(entry + ": original PUSH mismatch")
            check_call(read(call_va, 5), call_va)
            if read(call_va + 5, 3) != bytes.fromhex("83c404"):
                raise ValueError(entry + ": original caller stack cleanup mismatch")
    print("SHA-pinned XBE: six caller bodies, callee body, nine CALL edges, ESI/PUSH/ADD ESP,4 PASS")

def self_test():
    entry, digest, _, edges = CASES[0]
    good = ("/* Entry: 0x" + entry + "; Input x86 body SHA-256: " + digest +
            "; ABI_UNVERIFIED */\n" + DECL + "\nvoid demo() {\n" +
            "\n".join(edge[5] for edge in edges) + "\n}\n")
    check_source(good, entry, digest, edges)
    mutants = (good.replace(digest, "0"*64),
               good.replace("ABI_UNVERIFIED", "ABI_VERIFIED"),
               good.replace(DECL, ""),
               good.replace(edges[0][5], "FUN_0008f6a0(0, 0);"))
    for bad in mutants:
        try:
            check_source(bad, entry, digest, edges)
        except ValueError:
            pass
        else:
            raise AssertionError("negative source control escaped")
    call_va = edges[0][4]
    call = bytearray(b"\xe8" + struct.pack("<i", 0x0008F6A0 - call_va - 5))
    check_call(call, call_va)
    call[1] ^= 1
    try:
        check_call(call, call_va)
    except ValueError:
        pass
    else:
        raise AssertionError("negative CALL mutation escaped")
    print("Negative source and CALL controls PASS")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path)
    ap.add_argument("--xbe", type=Path)
    ap.add_argument("--self-test", action="store_true")
    args = ap.parse_args()
    if args.self_test:
        self_test()
    if args.xbe:
        verify_xbe(args.xbe)
    if args.root:
        compiler = shutil.which("clang++")
        if not compiler:
            raise RuntimeError("Clang++17 required")
        for entry, digest, _, edges in CASES:
            path = source_path(args.root, entry)
            source = path.read_text(encoding="utf-8")
            check_source(source, entry, digest, edges)
            for edge in edges:
                bad = source.replace(edge[5], "FUN_0008f6a0(0, 0);", 1)
                try:
                    check_source(bad, entry, digest, edges)
                except ValueError:
                    pass
                else:
                    raise AssertionError(entry + ": mutation escaped")
            for opt in ("-O0", "-O2"):
                result = subprocess.run(
                    [compiler, "-std=c++17", "-x", "c++", "-fsyntax-only",
                     "-ferror-limit=3", opt, "-I", str(args.root / "include"), str(path)],
                    capture_output=True, text=True, timeout=60)
                if entry == "0005b9a0":
                    # Original call edge is now explicit, but the separate
                    # indirect vtable/function-pointer ABI is still unknown.
                    # Do not invent its argument contract just to pass syntax.
                    if (result.returncode == 0 or
                        "too many arguments to function call, expected 0, have 1" not in result.stderr or
                        "no matching function for call to 'FUN_0008f6a0'" in result.stderr):
                        raise RuntimeError(entry + " unexpected diagnostic " + opt + ": " + result.stderr[-1800:])
                elif result.returncode:
                    raise RuntimeError(entry + " " + opt + ": " + result.stderr[-1800:])
            if entry == "0005b9a0":
                print(entry + ": original call edge checked; unrelated indirect-call ABI_UNVERIFIED diagnostic remains")
            else:
                print(entry + ": source provenance, mutation, Clang++17 -O0/-O2 PASS")
    print("Guest memory, complete Xbox ABI, cross-function linkage and behavior UNVERIFIED")

if __name__ == "__main__":
    main()
