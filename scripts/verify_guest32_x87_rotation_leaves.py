#!/usr/bin/env python3
"""Compare the linked rotation models against original x86 and x87 execution."""
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
from unicorn import x86_const as x86
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from source_layout import source_path

BODIES = {
    0x1FA20: (186, "b16e4a7481c301116d37734b35c45967572e26c940c471c194ea19897c4d640a"),
    0x72010: (188, "a95c8217acb8bc3d13d783997451dd938dd268136cd6012a0440386683b583e1"),
    0x73D80: (186, "45cd1f6b008ae51d58f77facc075b0e7fcb35f76f722edc43baf4a407ee23d90"),
}
REGS = [getattr(x86, "UC_X86_REG_" + name) for name in
        ("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP", "EIP", "EFLAGS")]
FP_REGS = [getattr(x86, "UC_X86_REG_" + name) for name in
           ("FPCW", "FPSW", "FPTAG", "FIP", "FDP", "FOP", *(f"FP{i}" for i in range(8)))]
BASE, SIZE, RET = 0x200000, 0x4000, 0x80000
STACK = BASE + 0x2000
State = ct.c_uint32 * 11
Read = ct.CFUNCTYPE(ct.c_uint32, ct.c_uint32)
Write = ct.CFUNCTYPE(None, ct.c_uint32, ct.c_uint32)
Execute = ct.CFUNCTYPE(ct.c_bool, ct.c_uint32, ct.c_uint32, ct.c_uint32, ct.c_uint32, ct.c_uint32)

ADAPTER = r"""
#include "bf_x87_rotation_leaves.h"
#include <algorithm>
#include <cstdlib>
#include <iterator>

using read_callback = std::uint32_t (*)(std::uint32_t);
using write_callback = void (*)(std::uint32_t, std::uint32_t);
using x87_callback = bool (*)(std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t);
struct x87_fixture {
    x87_callback callback;
    const bf_guest32_constructor_state& state;
};
static read_callback read_word;
static write_callback write_word;

std::uint32_t bf_guest_read_u32(std::uint32_t address) { return read_word(address); }
void bf_guest_write_u32(std::uint32_t address, std::uint32_t value) { write_word(address, value); }

static bool execute(void* context, std::uint32_t eip, bf_x87_rotation_opcode op, std::uint32_t operand)
{
    const auto& fixture = *static_cast<x87_fixture*>(context);
    return fixture.callback(eip, static_cast<std::uint32_t>(op), operand,
                            fixture.state.eax, fixture.state.esp);
}

extern "C" bool run(std::uint32_t entry, std::uint32_t* registers, read_callback read,
                    write_callback write, x87_callback x87)
{
    read_word = read;
    write_word = write;
    bf_guest32_constructor_state state{
        registers[0], registers[1], registers[2], registers[3], registers[4],
        registers[5], registers[6], registers[7], registers[8], registers[9], registers[10]
    };
    x87_fixture fixture{x87, state};
    const bf_x87_rotation_operations operations{&fixture, execute};
    bool ok;
    switch (entry) {
    case 0x1fa20u: ok = FUN_0001fa20(state, operations); break;
    case 0x72010u: ok = FUN_00072010(state, operations); break;
    case 0x73d80u: ok = FUN_00073d80(state, operations); break;
    default: std::abort();
    }
    const std::uint32_t result[] = {state.eax, state.ebx, state.ecx, state.edx, state.esi,
        state.edi, state.ebp, state.esp, state.eip, state.eflags, state.eflags_defined};
    std::copy(std::begin(result), std::end(result), registers);
    return ok;
}
"""


def fixture(entry, number):
    rng = Random(entry + number)
    registers = State(*(rng.getrandbits(32) for _ in range(7)), STACK, entry, 0x202 | (rng.getrandbits(12) & 0x8d5),
                      0xFFFFFFFF)
    # Rotate unaligned storage and deliberately alias the saved binary32
    # cosine slot with the last output to require the original access order.
    address = BASE + 0x100 + number % 4
    if number % 3 == 0:
        address = STACK - (0x2c if entry == 0x73d80 else 0x30)
    memory = bytearray(rng.randbytes(SIZE))
    angles = (0, 0x80000000, 1, 0x80000001, 0x3f800000, 0x41210000, 0xc1200000, 0x7f800000,
              0xff800000, 0x7f800001, 0x7fc0abcd, 0x7f7fffff, 0xff7fffff, rng.getrandbits(32))
    struct.pack_into("<III", memory, STACK - BASE, RET, address, angles[number % len(angles)])
    cw = 0x7f | ((0, 2, 3)[number % 3] << 8) | ((number // 3 % 4) << 10)
    return registers, memory, cw, number % 7


def prepare(entry, body, fixture, traces):
    registers, memory, cw, depth = fixture
    cpu = Uc(UC_ARCH_X86, UC_MODE_32)
    cpu.mem_map(entry & ~0xfff, 0x2000)
    cpu.mem_write(entry, body)
    cpu.mem_map(RET, 0x1000)
    cpu.mem_write(RET, b"\xd9\xe8" * depth)  # Prepopulate up to six x87 slots with FLD1.
    cpu.mem_map(BASE, SIZE)
    cpu.mem_write(BASE, bytes(memory))
    cpu.reg_write(x86.UC_X86_REG_FPCW, cw)
    if depth:
        cpu.emu_start(RET, RET + 2 * depth)

    def memory_access(_cpu, kind, address, size, value, _data):
        write = kind == UC_MEM_WRITE
        traces.append((write, address, size, value & ((1 << (size * 8)) - 1) if write else 0))

    cpu.hook_add(UC_HOOK_MEM_READ | UC_HOOK_MEM_WRITE, memory_access)
    for reg, value in zip(REGS, registers):
        cpu.reg_write(reg, value)
    return cpu


def instruction_bytes(op, operand, eax, esp, modrm):
    register_encodings = (b"\xd9\xfb", b"\xd9\xc1", b"\xd9\xc9", b"\xde\xc1", b"\xde\xe9")
    if op >= 3:
        return register_encodings[op - 3]
    prefix, extension = ((0xd9, 0), (0xd9, 0x18), (0xd8, 8))[op]
    # Each retail memory form uses either [EAX] / [EAX+disp8] or
    # [ESP+disp8]. Verify the typed callback VA against the decoded base.
    if modrm & 7 == 4:
        displacement = (operand - esp) & 0xffffffff
        assert displacement <= 0x7f
        return bytes((prefix, 0x44 + extension, 0x24, displacement))
    displacement = (operand - eax) & 0xffffffff
    assert displacement <= 0x7f
    if displacement == 0:
        return bytes((prefix, extension))
    return bytes((prefix, 0x40 + extension, displacement))


def compare(model, entry, body, values, cutoff=None):
    original_trace, model_trace = [], []
    original = prepare(entry, body, values, original_trace)
    backend = prepare(entry, body, values, model_trace)
    registers = State(*values[0])
    stop = cutoff if cutoff is not None else RET
    original.emu_start(entry, stop, count=256)

    @Read
    def read(address):
        model_trace.append((False, address, 4, 0))
        return struct.unpack("<I", backend.mem_read(address, 4))[0]

    @Write
    def write(address, value):
        model_trace.append((True, address, 4, value))
        backend.mem_write(address, struct.pack("<I", value))

    callback_errors = []

    @Execute
    def execute(eip, op, operand, eax, esp):
        try:
            if eip == cutoff:
                return False
            assert entry <= eip <= entry + len(body) - 2
            expected = instruction_bytes(op, operand, eax, esp, body[eip - entry + 1])
            assert eip + len(expected) <= entry + len(body)
            backend.reg_write(x86.UC_X86_REG_EAX, eax)
            backend.reg_write(x86.UC_X86_REG_ESP, esp)
            assert bytes(backend.mem_read(eip, len(expected))) == expected, (hex(eip), op, hex(operand))
            backend.emu_start(eip, eip + len(expected), count=1)
            assert backend.reg_read(x86.UC_X86_REG_EIP) == eip + len(expected)
            return True
        except Exception as error:
            callback_errors.append(error)
            return False

    completed = model(entry, registers, read, write, execute)
    assert not callback_errors, callback_errors
    assert completed == (cutoff is None)
    expected = [original.reg_read(reg) for reg in REGS]
    assert registers[8] == stop and registers[10] == 0xffffffff
    assert list(registers)[:10] == expected, (hex(entry), cutoff, list(registers), expected)
    assert [backend.reg_read(reg) for reg in FP_REGS] == [original.reg_read(reg) for reg in FP_REGS]
    assert backend.mem_read(BASE, SIZE) == original.mem_read(BASE, SIZE)
    assert model_trace == original_trace, (hex(entry), cutoff, model_trace, original_trace)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    parser.add_argument("--cxx", default="c++")
    args = parser.parse_args()
    image = args.xbe.read_bytes()
    if sha256(image).hexdigest() != XBE_SHA256:
        raise ValueError("Retail XBE digest mismatch")
    layout = sections(image)

    def read(va, size):
        offset = file_offset(layout, va, size)
        return image[offset:offset + size]

    bodies, sources = {}, []
    for entry, (size, digest) in BODIES.items():
        body = read(entry, size)
        source = source_path(ROOT, f"0x{entry:08x}")
        if sha256(body).hexdigest() != digest or digest.upper() not in source.read_text(encoding="utf-8"):
            raise ValueError(f"Body provenance mismatch at {entry:#x}")
        bodies[entry] = body
        sources.append(str(source))
    with tempfile.TemporaryDirectory() as temp:
        adapter = Path(temp) / "adapter.cpp"
        adapter.write_text(ADAPTER, encoding="utf-8")
        for optimization in ("-O0", "-O2"):
            library = Path(temp) / f"rotation{optimization}.so"
            subprocess.run([args.cxx, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            optimization, "-fPIC", "-shared", "-Wl,--no-undefined",
                            "-I", str(ROOT / "include"), str(adapter), *sources, "-o", str(library)], check=True)
            model = ct.CDLL(str(library)).run
            model.argtypes = [ct.c_uint32, ct.POINTER(ct.c_uint32), Read, Write, Execute]
            model.restype = ct.c_bool
            count = 0
            for entry, body in bodies.items():
                for number in range(84):
                    values = fixture(entry, number)
                    compare(model, entry, body, values)
                    count += 1
                # Stop before LOAD, FSINCOS, both frame STORES, and the
                # third pair's final binary32 store.
                for offset in (0x13, 0x17, 0x1d, 0x23, len(body) - 13):
                    compare(model, entry, body, fixture(entry, 6), entry + offset)
                    count += 1
            print(f"{optimization}: {count} retail/model comparisons, including 15 x87 callback stops")


if __name__ == "__main__":
    main()
