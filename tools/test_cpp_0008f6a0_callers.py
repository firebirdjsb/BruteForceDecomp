#!/usr/bin/env python3
"""Gate sixteen original-XBE ESI + stack-word callers of 0x0008F6A0.

Source/Clang checks run in public CI; --xbe additionally authenticates
the user's private executable and checks the original x86 opcode windows.
A C++17 syntax pass does not verify guest-memory translation or Xbox ABI.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# entry, original body digest, ESI producer VA/opcode, pushed DWORD VA/opcode,
# direct CALL VA, exact C++ guest-register/stack model call.
CASES = [
    ("00012250", "C163367CD5660605F6EF9E6E595330B0080582F54B72C123E6E18BBDE0C43E30",
     0x1226e, "8d7008", 0x12276, "51", 0x12277,
     "FUN_0008f6a0(in_EAX + UINT32_C(8), static_cast<std::uint32_t>(in_ECX));"),
    ("00022ce0", "3E1D6827BB892E8D2E674F4EF2840E089FA5AA0A74DEC784C6661444420775A9",
     0x22d03, "8d7110", 0x22d11, "50", 0x22d12,
     "FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x10), static_cast<std::uint32_t>(*(int *)(in_EAX + 0x14)));"),
    ("00022e50", "BEA1F699769D66050C0FAB031E64DBE8458906F8B1C7F5472D91D06FE4334876",
     0x22e56, "8d7754", 0x22e5b, "53", 0x22e5c,
     "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x54), static_cast<std::uint32_t>(unaff_EBX));"),
    ("00038c60", "20429EB405E65FCFA2F813AC34B6637F522191D7CF7B1148E8D2F7E221D776F2",
     0x38c9f, "8d77fc", 0x38c9e, "50", 0x38ca2,
     "FUN_0008f6a0(static_cast<std::uint32_t>(param_1) + UINT32_C(0x10), static_cast<std::uint32_t>(*(int *)(unaff_EBX + 0x14)));"),
    ("000396e0", "1398B6BB803F85649E1BADDC7670E6323BB789A6EAE4C9243F1A265297698828",
     0x396e5, "8bf0", 0x396f0, "50", 0x396f1,
     "FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX), static_cast<std::uint32_t>(*(int *)(unaff_EBX + 4)));"),
    ("00042b60", "39CE5C927A910B40DC5F28BBEA725603B997A00A9D2343EB7FB6705C5A7F164E",
     0x42ba9, "8d77fc", 0x42ba8, "50", 0x42bac,
     "FUN_0008f6a0(static_cast<std::uint32_t>(param_4) + UINT32_C(0x10), static_cast<std::uint32_t>(*piVar3));"),
    ("000476b0", "1F6EE1CD72F97FF1BC24C8E028334139EBAA58CD42E07AB16EBF1C937F24236B",
     0x476f9, "8d77fc", 0x476f8, "51", 0x476fc,
     "FUN_0008f6a0(static_cast<std::uint32_t>(param_3) + UINT32_C(0x10), static_cast<std::uint32_t>(*piVar3));"),
    ("0004b5f0", "1C3F079283EA7A64266D67276C983A0256360559EE9722000D22B4BEB5A2351C",
     0x4b5f3, "8bf1", 0x4b5fe, "50", 0x4b5ff,
     "FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX), static_cast<std::uint32_t>(in_EAX));"),
    ("000e1ff0", "6A4E703412865174EA133C500FFE39E0E29F36CD81DCFD400E71DF603BFC4FCE",
     0xe1ff4, "8bf0", 0xe2004, "50", 0xe2005,
     "FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX), static_cast<std::uint32_t>(*(int *)(unaff_EDI + 4)));"),
    ("000555f0", "796029F0C4D20B160C1C71A09A40AAB958B55CC54D0D9E736BFCD36F0E0C3113",
     0x555f6, "83c61c", 0x555fd, "50", 0x555fe,
     "FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x1c), static_cast<std::uint32_t>(in_EAX));"),
    ("000556e0", "8DE870BA74B876E5E781F1DC678CC912AB73ACBFD96EF0113688181BC56356E2",
     0x5570e, "8d7710", 0x5571f, "53", 0x55720,
     "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x10), UINT32_C(0));"),
    ("00055790", "37808A096C0182242B8842131AD4D0F74D58B6EC3922B5B5B264F0A92A3AB92C",
     0x55817, "8d7354", 0x5581c, "50", 0x5581d,
     "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + UINT32_C(0x54), static_cast<std::uint32_t>(*(int *)(param_1 + 0x58)));"),
    ("00058b60", "C1F5DA4B97C738B09259A0270094F8447CBD8D6B387066E346E4DB32441CA575",
     0x58b97, "8d7710", 0x58ba2, "53", 0x58ba3,
     "FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x10), static_cast<std::uint32_t>(unaff_EBX));"),
    ("0005be20", "065967D57EEF8A4E31F84D835575A1990A0724C25314AD814F9537DD11B29460",
     0x5be59, "8d7010", 0x5be61, "53", 0x5be62,
     "FUN_0008f6a0(static_cast<std::uint32_t>(iVar3) + UINT32_C(0x10), static_cast<std::uint32_t>(unaff_EBX));"),
    ("0005cb60", "CC6331864563D711DBF8990A7C8A7D4E3659181CD9306843DB48EBE9EFBD1325",
     0x5cb97, "8d7008", 0x5cba1, "50", 0x5cba2,
     "FUN_0008f6a0(static_cast<std::uint32_t>(iVar1) + UINT32_C(8), static_cast<std::uint32_t>(*(int *)(iVar1 + 4)));"),
    ("0005cbc0", "AFBD07EDD6C4B7EA84BBD585E6DDFD921E742F89F8F842786A3754EDBFFD5806",
     0x5cbf6, "8d7708", 0x5cc02, "50", 0x5cc03,
     "FUN_0008f6a0(static_cast<std::uint32_t>(iVar1) + UINT32_C(8), static_cast<std::uint32_t>(iVar2));"),
]


def source_path(root, entry):
    return root / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")


def check_source(source, entry, digest, call):
    if ("0x" + entry) not in source.lower() or digest not in source.upper():
        raise ValueError(entry + ": original entry/body digest provenance missing")
    if source.count(call) != 1 or "ABI_UNVERIFIED" not in source:
        raise ValueError(entry + ": verified two-input call or ABI caveat missing")
    if source.count("FUN_0008f6a0(") != 2:
        raise ValueError(entry + ": unexpected extra/missing call or declaration")


def xbe_read(data, va, length):
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11c)[0]
    table = struct.unpack_from("<I", data, 0x120)[0] - base
    for i in range(count):
        _, section_va, memory_size, raw, stored = struct.unpack_from(
            "<IIIII", data, table + 0x38 * i)
        if section_va <= va and va + length <= section_va + min(memory_size, stored):
            return data[raw + va - section_va:raw + va - section_va + length]
    raise ValueError("XBE section did not contain " + hex(va))


def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("original user XBE SHA-256 mismatch")
    if xbe_read(data, 0x8f6a0, 3) != bytes.fromhex("8b4604"):
        raise ValueError("callee ESI read mismatch")
    if xbe_read(data, 0x8f6a6, 4) != bytes.fromhex("8b5c2408"):
        raise ValueError("callee incoming stack DWORD mismatch")
    if xbe_read(data, 0x8f6df, 1) != b"\xc3":
        raise ValueError("callee plain RET mismatch")
    for entry, digest, esi_va, esi_hex, push_va, push_hex, call_va, call in CASES:
        if entry in {"000555f0", "000556e0", "00055790", "00058b60", "0005be20", "0005cb60", "0005cbc0"}:
            if xbe_read(data, call_va + 5, 3) != bytes.fromhex("83c404"):
                raise ValueError(entry + ": caller ADD ESP,4 mismatch")
        if xbe_read(data, esi_va, len(bytes.fromhex(esi_hex))) != bytes.fromhex(esi_hex):
            raise ValueError(entry + ": guest ESI producer mismatch")
        if xbe_read(data, push_va, len(bytes.fromhex(push_hex))) != bytes.fromhex(push_hex):
            raise ValueError(entry + ": guest stack word producer mismatch")
        instruction = xbe_read(data, call_va, 5)
        if instruction[0] != 0xe8 or (
            call_va + 5 + struct.unpack("<i", instruction[1:])[0] != 0x8f6a0
        ):
            raise ValueError(entry + ": direct CALL target mismatch")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--xbe-only", action="store_true")
    args = parser.parse_args()
    if args.xbe:
        check_xbe(args.xbe.read_bytes())
        print("Original SHA-pinned XBE: sixteen CALL edges, ESI, stack and RET PASS")
    elif args.xbe_only:
        parser.error("--xbe-only requires --xbe")
    if args.xbe_only:
        return
    compiler = shutil.which("clang++")
    if not compiler:
        raise RuntimeError("Clang++ required")
    for entry, digest, esi_va, esi_hex, push_va, push_hex, call_va, call in CASES:
        path = source_path(args.root, entry)
        source = path.read_text(encoding="utf-8")
        check_source(source, entry, digest, call)
        try:
            check_source(source.replace(call, "FUN_0008f6a0(0, 0);", 1),
                         entry, digest, call)
        except ValueError:
            pass
        else:
            raise AssertionError(entry + ": negative source mutation escaped")
        result = subprocess.run(
            [compiler, "-std=c++17", "-x", "c++", "-fsyntax-only",
             "-ferror-limit=3", "-I", str(args.root / "include"), str(path)],
            capture_output=True, text=True)
        if result.returncode:
            raise RuntimeError(entry + ": isolated Clang++17 failed: " + result.stderr[-1500:])
        print(entry + ": source provenance, mutation and isolated Clang++17 PASS")
    print("Guest memory, original Xbox C++ ABI, and runtime behavior remain UNVERIFIED")


if __name__ == "__main__":
    main()
