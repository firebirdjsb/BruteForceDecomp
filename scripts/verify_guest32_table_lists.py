#!/usr/bin/env python3
"""Differentially execute the two table-list guest models and pinned retail x86."""
from __future__ import annotations

import argparse
import ctypes as ct
from hashlib import sha256
from pathlib import Path
from random import Random
import struct
import subprocess
import sys
import tempfile

from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UC_MEM_WRITE
from unicorn import x86_const

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from source_layout import source_path

BODIES = {
    0x8F720: (81, "e31a7180ecfcf09f86afd80b3ffd6246b372e11fb4eee5a2d6b244f67c2c6167"),
    0x87FB0: (96, "4e5b7e3831b39cd23d62c5e130af6e7b6403a3a996b39a5fea6954cbeaf8e927"),
}
NAMES = ("eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp", "eip", "eflags")
REGISTERS = [getattr(x86_const, "UC_X86_REG_" + name.upper()) for name in NAMES]
BASE, SIZE, RET = 0x400000, 0x80000, 0x100000
TABLE, COUNT, OBJ, STACK, NODE = 0x414DA0, 0x469B24, 0x440000, 0x442000, 0x443000
State = ct.c_uint32 * (len(REGISTERS) + 1)
Access = ct.c_uint32 * 4
TRACE_LIMIT = 512

ADAPTER = r"""
#include "bf_xbe_guest32_table_lists.h"
#include <algorithm>
#include <cstdlib>
#include <iterator>

struct access {
    std::uint32_t write, address, width, value;
};
static std::uint8_t* memory;
static access* trace;
static std::uint32_t size;

static std::uint8_t* record(bool write, std::uint32_t address, std::uint32_t value)
{
    const auto offset = address - 0x400000u;
    if (offset > 0x80000u - 4u || size >= 512u)
        std::abort();
    trace[size++] = {write, address, 4u, value};
    return memory + offset;
}

std::uint32_t bf_guest_read_u32(std::uint32_t address)
{
    const auto bytes = record(false, address, 0u);
    std::uint32_t word = 0u;
    for (unsigned index = 0; index < 4; ++index)
        word |= std::uint32_t{bytes[index]} << (index * 8u);
    return word;
}

void bf_guest_write_u32(std::uint32_t address, std::uint32_t value)
{
    auto bytes = record(true, address, value);
    for (unsigned index = 0; index < 4; ++index)
        bytes[index] = static_cast<std::uint8_t>(value >> (index * 8u));
}

extern "C" std::uint32_t run(std::uint32_t entry, std::uint32_t* registers,
                              std::uint8_t* bytes, access* events)
{
    memory = bytes;
    trace = events;
    size = 0u;
    bf_guest32_constructor_state state{
        registers[0], registers[1], registers[2], registers[3], registers[4],
        registers[5], registers[6], registers[7], registers[8], registers[9], registers[10]
    };
    if (entry == 0x8f720u)
        FUN_0008f720(state);
    else if (entry == 0x87fb0u)
        FUN_00087fb0(state);
    else
        std::abort();
    const std::uint32_t result[] = {
        state.eax, state.ebx, state.ecx, state.edx, state.esi, state.edi, state.ebp,
        state.esp, state.eip, state.eflags, state.eflags_defined
    };
    std::copy(std::begin(result), std::end(result), registers);
    return size;
}
"""


def bucket(key):
    return TABLE + ((((key * 0x19660D + 0x3C6EF35F) & 0xFFFFFFFF) >> 21) * 4)


def put(memory, address, value):
    struct.pack_into("<I", memory, address - BASE, value & 0xFFFFFFFF)


def fixtures(entry):
    rng = Random(entry)
    for index in range(64):
        registers = State(*(rng.getrandbits(32) for _ in range(7)),
                          STACK, entry, 0x202 | (rng.getrandbits(12) & 0xCD5), 0xFFFFFFFF)
        memory = bytearray(b"\x9d" * SIZE)
        memory[TABLE - BASE:TABLE - BASE + 8192] = bytes(8192)
        put(memory, STACK, RET)
        if entry == 0x8F720:
            key = rng.getrandbits(32)
            registers[4] = key
            length = index % 9
            nodes = [NODE + n * 11 for n in range(length)]  # Also exercise unaligned fields.
            put(memory, COUNT, (-1, -0x80000000, 0, length, length + 1)[index % 5])
            if index == 61:
                nodes[0] = COUNT  # Final link write aliases the preceding count read.
            if index == 60:
                nodes[0] = STACK - 4  # PUSH EBX writes the first node's link.
                registers[1] = nodes[1]
            put(memory, bucket(key), nodes[0] if nodes else 0)
            for n, address in enumerate(nodes):
                put(memory, address, nodes[n + 1] if n + 1 < len(nodes) else 0)
                matches = n != 0 if index == 61 else rng.choice((False, True))
                put(memory, address + 4, key if matches else key ^ 1)
            put(memory, STACK, RET)
        else:
            registers[1] = OBJ
            for n in range(8):
                address = OBJ + 0x8C - n * 8
                key = rng.getrandbits(32) & ~1 or 2
                kind = (index + n) % 8
                while any(memory[bucket(key) - BASE:bucket(key) - BASE + 4]):
                    key = rng.getrandbits(32) & ~1 or 2
                put(memory, address + 4, 0 if kind == 0 else key | int(kind == 1))
                put(memory, address, 0)
                prefix = NODE + 0x100 * n
                if kind == 3:  # Single matching head.
                    put(memory, bucket(key), address)
                elif kind == 4:  # Head followed by another node.
                    put(memory, bucket(key), address)
                    put(memory, address, prefix)
                    put(memory, prefix, 0)
                elif kind >= 5:  # Multiple links, with tail, middle and no match.
                    put(memory, bucket(key), prefix)
                    put(memory, prefix, prefix + 0x10)
                    put(memory, prefix + 0x10, address if kind == 5 else prefix + 0x20)
                    put(memory, prefix + 0x20, address if kind == 6 else 0)
            if index == 63:  # Saved EDI aliases the first slot's key.
                registers[7] = OBJ + 0x94
                registers[5] = 0
                put(memory, registers[7], RET)
        yield registers, memory


def retail(entry, body, registers, memory):
    cpu = Uc(UC_ARCH_X86, UC_MODE_32)
    page = entry & ~0xfff
    cpu.mem_map(page, 0x2000)
    cpu.mem_write(entry, body)
    cpu.mem_map(BASE, SIZE)
    cpu.mem_write(BASE, bytes(memory))
    cpu.mem_map(RET, 0x1000)
    trace = []

    def access(_cpu, kind, address, size, value, _data):
        write = kind == UC_MEM_WRITE
        trace.append((int(write), address, size, value & 0xFFFFFFFF if write else 0))

    cpu.hook_add(UC_HOOK_MEM_READ | UC_HOOK_MEM_WRITE, access)
    for register, value in zip(REGISTERS, registers):
        cpu.reg_write(register, value)
    cpu.emu_start(entry, RET, count=2000)
    return [cpu.reg_read(register) for register in REGISTERS], cpu.mem_read(BASE, SIZE), trace


def verify(model, bodies):
    for entry, body in bodies.items():
        for number, (registers, memory) in enumerate(fixtures(entry)):
            expected_regs, expected_mem, expected_trace = retail(entry, body, registers, memory)
            events = (Access * TRACE_LIMIT)()
            size = model(entry, registers, (ct.c_uint8 * SIZE).from_buffer(memory), events)
            where = (f"{entry:#x}", number)
            assert registers[8] == RET and registers[10] == 0xFFFFFFFF, where
            for name, actual, expected in zip(NAMES, registers, expected_regs):
                assert actual == expected, (*where, name, hex(actual), hex(expected))
            assert memory == expected_mem, (*where, "memory")
            assert [tuple(event) for event in events[:size]] == expected_trace, (*where, "access trace")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    parser.add_argument("--cxx", default="c++")
    args = parser.parse_args()
    image = args.xbe.read_bytes()
    if sha256(image).hexdigest() != XBE_SHA256:
        raise ValueError("Retail XBE digest mismatch")
    layout = sections(image)
    bodies, sources = {}, []
    for entry, (size, digest) in BODIES.items():
        offset = file_offset(layout, entry, size)
        body = image[offset:offset + size]
        source = source_path(ROOT, f"0x{entry:08x}")
        if sha256(body).hexdigest() != digest or digest.upper() not in source.read_text(encoding="utf-8"):
            raise ValueError(f"Body provenance mismatch at {entry:#x}")
        bodies[entry] = body
        sources.append(str(source))
    with tempfile.TemporaryDirectory() as temp:
        adapter = Path(temp) / "adapter.cpp"
        adapter.write_text(ADAPTER, encoding="utf-8")
        for optimization in ("-O0", "-O2"):
            library = Path(temp) / f"table{optimization}.so"
            subprocess.run([args.cxx, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            optimization, "-fPIC", "-shared", "-Wl,--no-undefined",
                            "-I", str(ROOT / "include"), str(adapter), *sources, "-o", str(library)], check=True)
            model = ct.CDLL(str(library)).run
            model.argtypes = [ct.c_uint32, ct.POINTER(ct.c_uint32), ct.POINTER(ct.c_uint8), ct.POINTER(Access)]
            model.restype = ct.c_uint32
            verify(model, bodies)
            print(f"{optimization}: 128 retail/model comparisons")


if __name__ == "__main__":
    main()
