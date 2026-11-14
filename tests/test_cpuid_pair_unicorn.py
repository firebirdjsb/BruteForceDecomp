#!/usr/bin/env python3
"""Compare full guest32 state and memory traces with the pinned XBE bodies.

Requires Unicorn 2.x and clang++. The supplied XBE is read in place and never
copied into the repository or emitted. A code hook supplies deterministic guest
CPUID outputs and skips only the two-byte CPUID instruction.
"""
from __future__ import annotations

import argparse
import hashlib
import pathlib
import struct
import subprocess
import tempfile

from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn import UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE
from unicorn import UC_PROT_ALL
from unicorn.x86_const import (
    UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX,
    UC_X86_REG_EIP, UC_X86_REG_EFLAGS, UC_X86_REG_ESP,
    UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP,
)

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
FUNCTIONS = {
    0: (0x0029D6C0, 0x00403CC8, 0x00403CE4,
        "99E3313981C8236C06309DDED68ECF6A13022E0B9119F1274E6325FDC921C135"),
    1: (0x0029E480, 0x00403C38, 0x00403C54,
        "79BE91987C13A57B689CF0E303D7CEBDA9A8DB82127599C5E016B6C99783E8DA"),
}
FEATURE = 0x02000000
OUT = 0x00600000
ESP = 0x00701000
STOP = 0x00800000
REGISTERS = (
    ("eax", UC_X86_REG_EAX), ("ebx", UC_X86_REG_EBX),
    ("ecx", UC_X86_REG_ECX), ("edx", UC_X86_REG_EDX),
    ("esi", UC_X86_REG_ESI), ("edi", UC_X86_REG_EDI),
    ("ebp", UC_X86_REG_EBP), ("esp", UC_X86_REG_ESP),
    ("eip", UC_X86_REG_EIP),
)
ARITH_FLAGS = 0x000008C5  # CF, PF, ZF, SF, OF; AF is undefined after XOR.
DEFINED_FLAGS_AFTER_XOR = 0x44


def image_sections(raw: bytes):
    if hashlib.sha256(raw).hexdigest() != XBE_SHA256 or raw[:4] != b"XBEH":
        raise ValueError("XBE identity mismatch; refusing to run the fixture")
    image_base = struct.unpack_from("<I", raw, 0x104)[0]
    count, table_va = struct.unpack_from("<II", raw, 0x11C)
    table_offset = table_va - image_base
    if not 1 <= count <= 256 or table_offset + count * 56 > len(raw):
        raise ValueError("Invalid XBE section table")
    sections = [
        struct.unpack_from("<6I", raw, table_offset + i * 56)
        for i in range(count)
    ]
    return image_base, sections


def mapped_bytes(raw: bytes, sections, address: int, size: int) -> bytes:
    for _flags, base, virtual_size, file_offset, raw_size, _name in sections:
        delta = address - base
        if 0 <= delta and delta + size <= min(virtual_size, raw_size):
            return raw[file_offset + delta:file_offset + delta + size]
    raise ValueError(f"XBE VA 0x{address:08x} is not raw-backed")


def map_image(uc: Uc, raw: bytes, image_base: int, sections) -> None:
    image_end = max(base + virtual_size for _, base, virtual_size, *_ in sections)
    image_size = (image_end - image_base + 0xFFF) & ~0xFFF
    uc.mem_map(image_base, image_size, UC_PROT_ALL)
    for _flags, base, _virtual_size, file_offset, raw_size, _name in sections:
        if raw_size:
            uc.mem_write(base, raw[file_offset:file_offset + raw_size])


def native_result(executable: pathlib.Path, second: int, table_address: int,
                  index: int, cpuid_edx: int, table_value: int,
                  output_address: int):
    output = subprocess.check_output(
        [str(executable), str(second), f"{table_address:x}", f"{index:x}",
         f"{cpuid_edx:x}", f"{table_value:x}", f"{output_address:x}"],
        text=True,
    )
    fields = [int(item, 10) for item in output.split()]
    state = dict(zip(("eax", "ebx", "ecx", "edx", "esi", "edi",
                      "ebp", "esp", "eip", "eflags", "eflags_defined"),
                     fields[:11]))
    leaf, incoming_ecx, count = fields[11:14]
    events = [tuple(fields[i:i + 3]) for i in range(14, len(fields), 3)]
    if len(events) != count:
        raise AssertionError("native model returned a malformed memory trace")
    return state, leaf, incoming_ecx, events


def emulate(raw: bytes, image_base: int, sections, entry: int,
           index: int, cpuid_edx: int, output_address: int):
    uc = Uc(UC_ARCH_X86, UC_MODE_32)
    map_image(uc, raw, image_base, sections)
    uc.mem_map(0x00700000, 0x4000, UC_PROT_ALL)
    uc.mem_map(OUT, 0x1000, UC_PROT_ALL)
    initial = {
        UC_X86_REG_EAX: 0xAAAAAAAA,
        UC_X86_REG_EBX: 0xB16B00B5,
        UC_X86_REG_ECX: 0xC001D00D,
        UC_X86_REG_EDX: 0xEEEEEEEE,
        UC_X86_REG_ESI: 0x51515151,
        UC_X86_REG_EDI: 0xD1D1D1D1,
        UC_X86_REG_EBP: 0xE2E2E2E2,
        UC_X86_REG_ESP: ESP,
        UC_X86_REG_EFLAGS: 0x00000202,
    }
    for register, value in initial.items():
        uc.reg_write(register, value)
    uc.mem_write(ESP, struct.pack("<III", STOP, output_address, index))
    events = []
    cpuid_calls = []
    cpuid_address = entry + 0x13  # Both authenticated bodies: MOV EAX,1; CPUID.

    def code_hook(engine, address, size, _user_data):
        if address == cpuid_address:
            if size != 2:
                raise AssertionError("unexpected original CPUID instruction size")
            leaf = engine.reg_read(UC_X86_REG_EAX)
            incoming_ecx = engine.reg_read(UC_X86_REG_ECX)
            cpuid_calls.append((leaf, incoming_ecx))
            if leaf != 1:
                raise AssertionError(f"unexpected guest CPUID leaf {leaf}")
            engine.reg_write(UC_X86_REG_EAX, 0x000006FB)
            engine.reg_write(UC_X86_REG_EBX, 0x00000800)
            engine.reg_write(UC_X86_REG_ECX, 0x13579BDF)
            engine.reg_write(UC_X86_REG_EDX, cpuid_edx)
            engine.reg_write(UC_X86_REG_EIP, address + size)

    def read_hook(engine, _access, address, size, _value, _user_data):
        value = int.from_bytes(engine.mem_read(address, size), "little")
        events.append((0, address, value))

    def write_hook(_engine, _access, address, size, value, _user_data):
        events.append((1, address, value & 0xFFFFFFFF))

    uc.hook_add(UC_HOOK_MEM_READ, read_hook)
    uc.hook_add(UC_HOOK_MEM_WRITE, write_hook)
    uc.hook_add(UC_HOOK_CODE, code_hook)
    uc.emu_start(entry, STOP, count=1000)
    if uc.reg_read(UC_X86_REG_EIP) != STOP or len(cpuid_calls) != 1:
        raise AssertionError("original body did not reach RET 8 after one CPUID")
    state = {name: uc.reg_read(register) for name, register in REGISTERS}
    state["eflags"] = uc.reg_read(UC_X86_REG_EFLAGS)
    return state, events, cpuid_calls


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--xbe", required=True, type=pathlib.Path)
    parser.add_argument("--root", type=pathlib.Path,
                        default=pathlib.Path(__file__).resolve().parents[1])
    parser.add_argument("--compiler", default="clang++")
    args = parser.parse_args()
    raw = args.xbe.read_bytes()
    image_base, sections = image_sections(raw)
    root = args.root.resolve()

    with tempfile.TemporaryDirectory(prefix="bf-cpuid-pair-") as temp:
        executable = pathlib.Path(temp) / "cpuid_pair_model"
        compile_cmd = [
            args.compiler, "-std=c++17", "-O0", "-Wall", "-Wextra", "-Werror",
            "-I", str(root / "include"),
            str(root / "tests/cpuid_pair_model_harness.cpp"),
            str(root / "src/main_unclassified/band_0029/0x0029d6c0.cpp"),
            str(root / "src/main_unclassified/band_0029/0x0029e480.cpp"),
            "-o", str(executable),
        ]
        subprocess.run(compile_cmd, check=True)
        scenarios = 0
        for second, (entry, table_set, table_clear, digest) in FUNCTIONS.items():
            code = mapped_bytes(raw, sections, entry, 71)
            if hashlib.sha256(code).hexdigest().upper() != digest:
                raise AssertionError(f"original body hash mismatch at 0x{entry:08x}")
            for index in (0, 1):
                for feature_set in (False, True):
                    cpuid_edx = (0x81000000 | FEATURE) if feature_set else 0x81000000
                    table_base = table_set if feature_set else table_clear
                    table_address = (table_base + index * 4) & 0xFFFFFFFF
                    table_value, = struct.unpack(
                        "<I", mapped_bytes(raw, sections, table_address, 4))
                    for alias in (False, True):
                        output_address = ESP - 16 if alias else OUT
                        native, leaf, incoming_ecx, native_events = native_result(
                            executable, second, table_address, index,
                            cpuid_edx, table_value, output_address)
                        actual, actual_events, cpuid_calls = emulate(
                            raw, image_base, sections, entry, index,
                            cpuid_edx, output_address)

                        for name, value in actual.items():
                            if name == "eflags":
                                if value & ARITH_FLAGS != DEFINED_FLAGS_AFTER_XOR:
                                    raise AssertionError(
                                        f"XBE defined flags differ: 0x{value:x}")
                            elif native[name] != value:
                                raise AssertionError(
                                    f"register {name} mismatch at 0x{entry:08x}, "
                                    f"index={index}, feature_set={feature_set}, "
                                    f"alias={alias}: {native[name]:08x} != {value:08x}")
                        if native["eflags"] & ARITH_FLAGS != DEFINED_FLAGS_AFTER_XOR:
                            raise AssertionError("model arithmetic flags are incorrect")
                        if native["eflags_defined"] & ARITH_FLAGS != ARITH_FLAGS & ~0x10:
                            raise AssertionError("model flag-defined mask is incorrect")
                        if (leaf, incoming_ecx) != (1, 0xC001D00D):
                            raise AssertionError("model passed wrong CPUID input registers")
                        if cpuid_calls != [(leaf, incoming_ecx)]:
                            raise AssertionError("Unicorn CPUID input differs from model")
                        if native_events != actual_events:
                            raise AssertionError(
                                f"ordered memory trace mismatch at 0x{entry:08x}, "
                                f"index={index}, feature_set={feature_set}, "
                                f"alias={alias}: {native_events} != {actual_events}")
                        scenarios += 1
        print(f"PASS: {scenarios} full-state XBE Unicorn comparisons; ordered guest "
              "reads/writes, CPUID inputs/outputs, both paths and stack aliasing")


if __name__ == "__main__":
    main()
