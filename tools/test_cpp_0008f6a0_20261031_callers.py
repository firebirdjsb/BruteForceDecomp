#!/usr/bin/env python3
"""Strict C++17 and original-XBE evidence gate for 13 0x0008F6A0 call edges.

The original XBE is PRIVATE, passed by --xbe, and never committed.
Instruction facts and syntax do not establish original C++ ABI or runtime behavior.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CALLEE_SHA = "339DC70ADE9DA431A03D8964268E2B983BF89DF209448A87B645006C63D4420D"
CASES = json.loads(r'''[["0010f7c0","C09DBB83CB1BBA1D124171E5C2994112CC67E065AED93351F31AE480AEB947F8",24,[[1112001,"8bf1"],[1112006,"83c638"]],1112013,1112014,"FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x38), static_cast<std::uint32_t>(in_EAX));"],["0010f920","2E6A6BD36F7525AEA14FEAEEE788742D482E3898753D57AED96E3B3C913C74B3",30,[[1112353,"8bf1"],[1112361,"81c6d8000000"]],1112371,1112372,"FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0xd8), static_cast<std::uint32_t>(in_EAX));"],["0010f940","69D4B6B4D8592E7773A7BAE0221072AC8B1D21DFC1C9A5DDA0C5C2243861BC52",30,[[1112385,"8bf1"],[1112393,"81c6e0000000"]],1112403,1112404,"FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0xe0), static_cast<std::uint32_t>(in_EAX));"],["0010fed0","36AF70BCF7B3F7C5E4C35BC8AEC1FE73DB25356ABB82DD3ED6EDEB95D2762AA5",30,[[1113809,"8bf1"],[1113817,"81c6e0010000"]],1113827,1113828,"FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x1e0), static_cast<std::uint32_t>(in_EAX));"],["0010fef0","F5824ED317BF7DE223A9EBA3964BF341F73BA4E11ADBE2096820739E09BAC742",30,[[1113841,"8bf1"],[1113849,"81c6e8010000"]],1113859,1113860,"FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x1e8), static_cast<std::uint32_t>(in_EAX));"],["0012ac00","7B7EAA93F300773596DE0C2DC15C303040AAAA9EE4B0E7B16730B26B751D7A21",21,[[1223681,"8bf1"]],1223688,1223689,"FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX), static_cast<std::uint32_t>(in_EAX));"],["000c4f10","07BD5136A7FCDB7665D4717BA18DC2BF9C2E71D58D998FF55E5644263B773B6F",47,[[806673,"8bd8"],[806684,"8db334060000"]],806693,806695,"FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX) + UINT32_C(0x634), UINT32_C(0));"],["000aace0","E91F4A303189574F9FB38CDAE8A6CBC90E62A932EE96A3715876CB7F62070F1F",64,[[699617,"8bf9"],[699630,"8d7774"]],699635,699636,"FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x74), static_cast<std::uint32_t>(in_EAX));"],["0008bb40","3D5ADCA877FEBF7089DF5F4334A47F381EFD602C32384037CAB69B502C583CC7",90,[[572226,"8bf0"],[572292,"83c664"]],572299,572301,"FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX) + UINT32_C(0x64), UINT32_C(0));"],["000c8530","C27922540C69065501BF57D25AEFD0C64252F897E962677D39375F03F2EB08DA",50,[[820529,"8bf0"],[820555,"8d74c230"]],820566,820568,"FUN_0008f6a0(static_cast<std::uint32_t>(in_EDX) + static_cast<std::uint32_t>(iVar1) * UINT32_C(8) + UINT32_C(0x30), UINT32_C(0));"],["000c85d0","D69A27E262EAC3DEBCCDC37B09BFECA00888C701F619D9412603D8F40007FE37",65,[[820717,"8b4cda04"],[820723,"8d34da"]],820728,820729,"FUN_0008f6a0(static_cast<std::uint32_t>(*(int *)(param_1 + 4)) + static_cast<std::uint32_t>(iVar2) * UINT32_C(8), static_cast<std::uint32_t>(iVar1));"],["00072900","0DB48819156A651DDEEBA937603CA696FA1D094BE0F415A0BA4288B9675C4F8D",61,[[469256,"8bf8"],[469260,"83c738"],[469282,"8d77fc"]],469280,469285,"FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX) + static_cast<std::uint32_t>(iVar1) * UINT32_C(8) + UINT32_C(0x34), UINT32_C(0));"],["00073330","E3088E9576A0C905139C32B0FD29A1C27592F44AFB1F203DDE1851031E0E741E",298,[[471968,"8b6f70"],[472003,"8d7734"]],472008,472009,"FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX) + UINT32_C(0x34), static_cast<std::uint32_t>(iVar1));"]]''')

def source_path(root, entry):
    return root / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")

def check_source(source, entry, digest, expression):
    if "Entry: 0x" + entry not in source:
        raise ValueError(entry + ": original entry changed")
    if "Input x86 body SHA-256: " + digest not in source:
        raise ValueError(entry + ": original body provenance changed")
    if "ABI_UNVERIFIED" not in source:
        raise ValueError(entry + ": ABI uncertainty removed")
    if source.count(expression) != 1:
        raise ValueError(entry + ": original call expression missing or duplicated")
    if source.count("FUN_0008f6a0(") not in (1, 2):
        raise ValueError(entry + ": unexpected call/declaration count")

def xbe_reader(data):
    base = struct.unpack_from("<I", data, 0x104)[0]
    count = struct.unpack_from("<I", data, 0x11c)[0]
    table = struct.unpack_from("<I", data, 0x120)[0] - base
    sections = [struct.unpack_from("<IIIII", data, table + i * 0x38) for i in range(count)]
    def read(va, length):
        for _, start, mem_size, raw, stored in sections:
            if start <= va and va + length <= start + min(mem_size, stored):
                return data[raw + va - start:raw + va - start + length]
        raise ValueError("XBE VA unavailable: " + hex(va))
    return read

def check_call(raw, site):
    if len(raw) != 5 or raw[0] != 0xE8:
        raise ValueError("not a direct CALL: " + hex(site))
    if site + 5 + struct.unpack("<i", raw[1:])[0] != 0x0008F6A0:
        raise ValueError("incorrect CALL destination: " + hex(site))

def verify_xbe(path):
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("original Xbox XBE SHA-256 mismatch")
    read = xbe_reader(data)
    if hashlib.sha256(read(0x0008F6A0, 64)).hexdigest().upper() != CALLEE_SHA:
        raise ValueError("original callee body mismatch")
    for va, code in ((0x0008F6A0, "8b4604"), (0x0008F6A6, "8b5c2408"), (0x0008F6DF, "c3")):
        if read(va, len(code)//2) != bytes.fromhex(code):
            raise ValueError("callee instruction mismatch: " + hex(va))
    for entry, digest, length, windows, push, call, expression in CASES:
        if hashlib.sha256(read(int(entry, 16), length)).hexdigest().upper() != digest:
            raise ValueError(entry + ": original whole-body digest mismatch")
        for va, code in windows:
            if read(va, len(code)//2) != bytes.fromhex(code):
                raise ValueError(entry + ": ESI producer mismatch: " + hex(va))
        op = read(push, 1)
        if op not in (b"\x50", b"\x55", b"\x6a"):
            raise ValueError(entry + ": PUSH opcode mismatch")
        push_length = 2 if op == b"\x6a" else 1
        if push_length == 2 and read(push, 2) != b"\x6a\x00":
            raise ValueError(entry + ": PUSH immediate mismatch")
        if push + push_length > call or call - push > 6:
            raise ValueError(entry + ": unexpected PUSH/CALL spacing")
        check_call(read(call, 5), call)
        if read(call + 5, 3) != bytes.fromhex("83c404"):
            raise ValueError(entry + ": caller stack cleanup mismatch")
    print("Original SHA-pinned XBE, 13 caller bodies, callee body, ESI/PUSH/CALL/ADD ESP,4 PASS")

def self_test():
    entry, digest, length, windows, push, call, expression = CASES[0]
    good = "Entry: 0x" + entry + "\nInput x86 body SHA-256: " + digest + "\nABI_UNVERIFIED\\n" + expression
    check_source(good, entry, digest, expression)
    for bad in (good.replace(digest, "0"*64), good.replace("ABI_UNVERIFIED", "ABI_VERIFIED"),
                good.replace(expression, "FUN_0008f6a0(0, 0);")):
        try:
            check_source(bad, entry, digest, expression)
        except ValueError:
            pass
        else:
            raise AssertionError("negative source mutation escaped")
    raw = bytearray(b"\xe8" + struct.pack("<i", 0x0008F6A0 - call - 5))
    check_call(raw, call)
    raw[1] ^= 1
    try:
        check_call(raw, call)
    except ValueError:
        pass
    else:
        raise AssertionError("negative CALL mutation escaped")
    print("Negative provenance/source/CALL controls PASS")

def verify_sources(root):
    compiler = shutil.which("clang++")
    if not compiler:
        raise RuntimeError("Clang++17 is required")
    for entry, digest, length, windows, push, call, expression in CASES:
        path = source_path(root, entry)
        source = path.read_text(encoding="utf-8")
        check_source(source, entry, digest, expression)
        for opt in ("-O0", "-O2"):
            result = subprocess.run([compiler, "-std=c++17", "-fsyntax-only",
                                     "-ferror-limit=3", opt, "-I", str(root / "include"), str(path)],
                                    capture_output=True, text=True, timeout=60)
            if result.returncode:
                raise RuntimeError(entry + " " + opt + ": " + result.stderr[-1600:])
        print(entry + ": original provenance and strict Clang++17 -O0/-O2 PASS")
    print("13 focused syntax passes; complete guest ABI, linkage and behavior UNVERIFIED")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    if args.self_test:
        self_test()
    if args.xbe:
        verify_xbe(args.xbe)
    if args.root:
        verify_sources(args.root)

if __name__ == "__main__":
    main()
