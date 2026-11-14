#!/usr/bin/env python3
"""Compare three strict C++17 guest models against pinned retail x86 in Unicorn.

Requires Unicorn 2.x and a C++ compiler targeting Linux shared objects.
The private retail XBE is read in place; the checker emits only aggregate results.
"""
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

from unicorn import Uc, UC_ARCH_X86, UC_HOOK_INTR, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UC_MODE_32, UC_MEM_WRITE
from unicorn import x86_const

from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from source_layout import source_path

BODIES = {
    0x2E9E80: (36, "0edfdf0cd21b5effdbe5a44d1ed33ccdeeb36aa6beb3b4b1d937400cb2f94b95"),
    0x2374D0: (75, "76fac55183573404baf206374fbc7e731ff35ba02ea2cdfaa7a0826b91bd33ad"),
    0x237520: (99, "43c8076d1c73521c86a057679fe99c2b96701fe8ca3efee30f213def7cef0b6b"),
}
DIVIDE_SITES = {0x2E9E80: 0x2E9E92, 0x2374D0: 0x2374D7, 0x237520: 0x23752D}
REGISTER_NAMES = ("eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp", "eip", "eflags", "eflags_defined")
UC_REGISTERS = [getattr(x86_const, "UC_X86_REG_" + name.upper()) for name in REGISTER_NAMES[:-1]]
MEMORY_BASE = 0x10000000
MEMORY_SIZE = 0x4000
ESP, HEAP, OBJ, OUT = (MEMORY_BASE + delta for delta in (0x3300, 0x100, 0x2100, 0x2200))
RET = 0x20000000
MUTABLE_FLAGS = 0xCD5  # Arithmetic status flags plus DF.
FIXED_FLAGS = 0x202
WORD_MASK = 0xFFFFFFFF

class State(ct.Structure):
    _fields_ = [(name, ct.c_uint32) for name in REGISTER_NAMES]

    def values(self):
        return [getattr(self, name) for name in REGISTER_NAMES]


ADAPTER = r"""
#include "bf_xbe_guest32_division_leaves.h"
#include <cstddef>
#include <cstdlib>

struct access {
    std::uint32_t write, address, width, value;
};

static std::uint8_t* memory;
static access* events;
static std::size_t count;

static std::uint32_t offset(std::uint32_t address, std::uint32_t width)
{
    const std::uint32_t relative = address - 0x10000000u;
    if (relative > 0x4000u - width || count >= 4096u)
        std::abort();
    return relative;
}

static std::uint32_t read(std::uint32_t address, std::uint32_t width)
{
    const auto relative = offset(address, width);
    std::uint32_t value = 0u;
    for (std::uint32_t index = 0; index < width; ++index)
        value |= std::uint32_t{memory[relative + index]} << (index * 8u);
    events[count++] = {0u, address, width, 0u};
    return value;
}

static void write(std::uint32_t address, std::uint32_t width, std::uint32_t value)
{
    const auto relative = offset(address, width);
    events[count++] = {1u, address, width, value};
    for (std::uint32_t index = 0; index < width; ++index)
        memory[relative + index] = static_cast<std::uint8_t>(value >> (index * 8u));
}

std::uint16_t bf_guest_read_u16(std::uint32_t address) { return static_cast<std::uint16_t>(read(address, 2u)); }
std::uint32_t bf_guest_read_u32(std::uint32_t address) { return read(address, 4u); }
void bf_guest_write_u16(std::uint32_t address, std::uint16_t value) { write(address, 2u, value); }
void bf_guest_write_u32(std::uint32_t address, std::uint32_t value) { write(address, 4u, value); }

extern "C" int run_model(std::uint32_t entry, bf_guest32_constructor_state* state,
                         std::uint8_t* bytes, access* trace, std::size_t* trace_size)
{
    memory = bytes;
    events = trace;
    count = 0;
    bf_guest32_division_result result;
    switch (entry) {
    case 0x2e9e80u: result = FUN_002e9e80(*state); break;
    case 0x2374d0u: result = FUN_002374d0(*state); break;
    case 0x237520u: result = FUN_00237520(*state); break;
    default: std::abort();
    }
    *trace_size = count;
    return result == bf_guest32_division_result::divide_error ? 1 : 0;
}
"""


def images(path):
    image = path.read_bytes()
    if sha256(image).hexdigest() != XBE_SHA256:
        raise ValueError("Retail XBE digest mismatch")
    layout = sections(image)
    bodies = {}
    for entry, (size, digest) in BODIES.items():
        offset = file_offset(layout, entry, size)
        body = image[offset:offset + size]
        source = source_path(ROOT, f"0x{entry:08x}").read_text(encoding="utf-8")
        if sha256(body).hexdigest() != digest or digest.upper() not in source:
            raise ValueError(f"Retail body provenance mismatch at {entry:#010x}")
        bodies[entry] = body
    return bodies


def test_cases(entry):
    rng = Random(entry)
    if entry == 0x2E9E80:
        parameters = [(0, 0, 0, 0),
                      (OUT, 0xffffffff, 0, 0),
                      (OUT, 0xffffffff, 1, 0x7fffffff),
                      (OUT, OUT + 1, 0xffffffff, 0xffffffff),
                      (OBJ + 0xc, 0, 13, 1),
                      (OBJ + 0x14, OBJ, 7, 4),
                      (OBJ + 0x18, OBJ, 7, 4),
                      (ESP - 4, 0, 1, 4),
                      (ESP, 0, 1, 4)]
        parameters.extend((OUT, rng.getrandbits(32), rng.getrandbits(32) or 1, rng.getrandbits(32))
                          for _ in range(48))
    elif entry == 0x2374D0:
        parameters = [(count, stride, address, target) for count, stride in
                      [(19, 8), (16, 8), (4, 8), (0, 1), (-16, -8),
                       (-16, 8), (-0x80000000, -1), (0x7fffffff, 0),
                       (0, 0), (0, -0x80000000), (-0x80000000, -0x80000000)]
                      for address, target in [(HEAP, OBJ)]]
        parameters.extend((rng.randrange(128), rng.randrange(4, 14), HEAP, OBJ) for _ in range(48))
        parameters.extend([(16, 8, OBJ, OBJ), (16, 8, ESP - 4, OBJ),
                           (0, 8, HEAP, ESP + 4)])
    else:
        parameters = [(HEAP, HEAP + 32, stride, first, OBJ, OUT)
                      for stride in (4, 9, -7, -32768, 32767, 0)
                      for first in (HEAP - 4, HEAP, HEAP + 32, HEAP + 8)]
        parameters.extend([(0, 0x80000000, -1, 0, OBJ, OUT),
                           (0xffffffff, 1, -2, 0, OBJ, OUT),
                           (HEAP, HEAP + 32, 4, HEAP, OBJ, OBJ),
                           (HEAP, HEAP + 32, 4, HEAP, OBJ, OBJ + 4),
                           (HEAP, HEAP + 32, 4, HEAP, OBJ, OBJ + 0x12),
                           (HEAP, HEAP + 32, 4, HEAP, OBJ, ESP - 0x20)])
    for args in parameters:
        registers = [rng.getrandbits(32) for _ in range(7)]
        registers.extend((ESP, entry, FIXED_FLAGS | (rng.getrandbits(32) & MUTABLE_FLAGS), WORD_MASK))
        state = State(*registers)
        memory = bytearray(rng.randbytes(MEMORY_SIZE))

        def put(address, value, size=4):
            struct.pack_into("<I" if size == 4 else "<H", memory, address - MEMORY_BASE,
                             value & ((1 << (8 * size)) - 1))

        state.ecx = OBJ
        put(ESP, RET)
        if entry == 0x2E9E80:
            pointer, base, divisor, count = args
            put(ESP + 4, pointer)
            put(OBJ + 4, base)
            put(OBJ + 0xc, count)
            put(OBJ + 0x14, divisor)
            put(OBJ + 0x18, RET if pointer == ESP else rng.getrandbits(32))
            expected_error = pointer != 0 and divisor == 0
        elif entry == 0x2374D0:
            count, stride, address, target = args
            state.eax, state.edi, state.edx, state.ecx = count & WORD_MASK, stride & WORD_MASK, address, target
            put(ESP + 4, rng.getrandbits(32))
            put(ESP + 8, rng.getrandbits(32))
            expected_error = stride == 0 or (count == -0x80000000 and stride == -1)
        else:
            lower, upper, stride, first, source, target = args
            state.esi, state.ecx = source, target
            put(source, lower)
            put(source + 4, first)
            put(source + 8, upper)
            put(source + 0x12, stride, 2)
            put(HEAP, HEAP + 16)
            put(HEAP + 8, HEAP + 32)
            put(HEAP + 16, HEAP + 32)
            expected_error = stride == 0 or (upper - lower == 0x80000000 and stride == -1)
        yield state, memory, expected_error


def retail(entry, body, state, memory):
    cpu = Uc(UC_ARCH_X86, UC_MODE_32)
    cpu.mem_map(entry & ~0xfff, 0x1000)
    cpu.mem_write(entry, body)
    cpu.mem_map(MEMORY_BASE, MEMORY_SIZE)
    cpu.mem_write(MEMORY_BASE, bytes(memory))
    cpu.mem_map(RET, 0x1000)
    trace = []
    interrupts = []

    def accessed(_cpu, kind, address, size, value, _data):
        assert MEMORY_BASE <= address < MEMORY_BASE + MEMORY_SIZE
        write = kind == UC_MEM_WRITE
        trace.append((int(write), address, size, value & ((1 << (size * 8)) - 1) if write else 0))

    def interrupted(backend, number, _data):
        interrupts.append(number)
        backend.emu_stop()

    cpu.hook_add(UC_HOOK_MEM_READ | UC_HOOK_MEM_WRITE, accessed)
    cpu.hook_add(UC_HOOK_INTR, interrupted)
    for register, value in zip(UC_REGISTERS, state.values()):
        cpu.reg_write(register, value)
    cpu.emu_start(entry, RET, count=3000)
    registers = [cpu.reg_read(register) for register in UC_REGISTERS]
    assert interrupts in ([], [0]), interrupts
    return registers, cpu.mem_read(MEMORY_BASE, MEMORY_SIZE), trace, bool(interrupts)


def compare(model, bodies):
    cases = errors = 0
    access_buffer_type = (ct.c_uint32 * 4) * 4096
    for entry, body in bodies.items():
        for state, memory, predicted_error in test_cases(entry):
            original_eax = state.eax
            registers, expected_mem, expected_trace, expected_error = retail(entry, body, state, memory)
            assert expected_error == predicted_error, (hex(entry), f"input EAX {original_eax:#x}")
            trace = access_buffer_type()
            count = ct.c_size_t()
            mutable = (ct.c_uint8 * len(memory)).from_buffer(memory)
            actual_error = model(entry, ct.byref(state), mutable, trace, ct.byref(count))
            assert actual_error == expected_error, hex(entry)
            if actual_error:
                assert state.eip == DIVIDE_SITES[entry], hex(entry)
            else:
                assert state.eip == RET, hex(entry)
            # Successful DIV leaves CF undefined through INC. TEST/XOR/OR
            # leave AF undefined, unless INC later defines it.
            if entry == 0x2E9E80 and not actual_error:
                with_division = any(event[1] == OBJ + 0x14 and not event[0] for event in expected_trace)
                mask = 0xFFFFFFFE if with_division else 0xFFFFFFEF
            elif not actual_error or entry == 0x2E9E80:
                mask = 0xFFFFFFEF
            else:
                mask = WORD_MASK
            assert state.eflags_defined == mask, (hex(entry), hex(state.eflags_defined), hex(mask))
            for name, actual, expected in zip(REGISTER_NAMES, state.values(), registers):
                compare_mask = mask if name == "eflags" else WORD_MASK
                assert (actual ^ expected) & compare_mask == 0, (hex(entry), name, hex(actual), hex(expected))
            assert memory == expected_mem, (hex(entry), "memory")
            assert [tuple(event) for event in trace[:count.value]] == expected_trace, (hex(entry), "memory accesses")
            cases += 1
            errors += actual_error
    return cases, errors


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    parser.add_argument("--cxx", default="c++")
    args = parser.parse_args()
    bodies = images(args.xbe)
    with tempfile.TemporaryDirectory() as directory:
        directory = Path(directory)
        adapter = directory / "adapter.cpp"
        adapter.write_text(ADAPTER, encoding="utf-8")
        sources = [source_path(ROOT, f"0x{entry:08x}") for entry in bodies]
        for optimization in ("-O0", "-O2"):
            library = directory / f"model{optimization}.so"
            subprocess.run([args.cxx, "-std=c++17", "-Wall", "-Wextra", "-Werror", "-pedantic-errors",
                            optimization, "-fPIC", "-shared", "-Wl,--no-undefined", "-I", str(ROOT / "include"),
                            *map(str, sources), str(adapter), "-o", str(library)], check=True)
            model = ct.CDLL(str(library)).run_model
            model.argtypes = [ct.c_uint32, ct.POINTER(State), ct.POINTER(ct.c_uint8),
                              ct.POINTER(ct.c_uint32 * 4), ct.POINTER(ct.c_size_t)]
            model.restype = ct.c_int
            cases, errors = compare(model, bodies)
            print(f"{optimization}: {cases} retail/model comparisons, {errors} matching divide errors")


if __name__ == "__main__":
    main()
