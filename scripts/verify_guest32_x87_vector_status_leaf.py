#!/usr/bin/env python3
"""Compare the linked status-directed vector model against original x86 and x87 execution."""
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

ENTRY = 0x12ECA0
BODY_SIZE = 150
BODY_SHA256 = "9929dc721e398070b48acd4088c5fd37097bbefa1cb7a4c04c5c22a076de9fcf"
REGS = [getattr(x86, "UC_X86_REG_" + name) for name in
        ("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP", "EIP", "EFLAGS")]
FP_REGS = [getattr(x86, "UC_X86_REG_" + name) for name in
           ("FPCW", "FPSW", "FPTAG", "FIP", "FDP", "FOP", *(f"FP{i}" for i in range(8)))]
BASE, SIZE, RET = 0x200000, 0x4000, 0x80000
STACK = BASE + 0x2000
State = ct.c_uint32 * 11
Read = ct.CFUNCTYPE(ct.c_uint32, ct.c_uint32)
Write = ct.CFUNCTYPE(None, ct.c_uint32, ct.c_uint32)
Execute = ct.CFUNCTYPE(ct.c_bool, *([ct.c_uint32] * 7))
Status = ct.CFUNCTYPE(ct.c_bool, ct.c_uint32, ct.POINTER(ct.c_uint16))

ADAPTER = r"""
#include "bf_x87_vector_status_leaf.h"
#include <algorithm>
#include <cstdlib>
#include <iterator>

using read_callback = std::uint32_t (*)(std::uint32_t);
using write_callback = void (*)(std::uint32_t, std::uint32_t);
using x87_callback = bool (*)(std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t,
                             std::uint32_t, std::uint32_t, std::uint32_t);
using status_callback = bool (*)(std::uint32_t, std::uint16_t*);
struct x87_fixture {
    x87_callback callback;
    status_callback status;
    const bf_guest32_constructor_state& state;
};
static read_callback read_word;
static write_callback write_word;

std::uint32_t bf_guest_read_u32(std::uint32_t address) { return read_word(address); }
void bf_guest_write_u32(std::uint32_t address, std::uint32_t value) { write_word(address, value); }

static bool execute(void* context, std::uint32_t eip, bf_x87_vector_opcode op, std::uint32_t operand)
{
    const auto& fixture = *static_cast<x87_fixture*>(context);
    return fixture.callback(eip, static_cast<std::uint32_t>(op), operand,
                            fixture.state.eax, fixture.state.ecx, fixture.state.edx, fixture.state.esp);
}

static bool fnstsw_ax(void* context, std::uint32_t site, std::uint16_t& value)
{
    const auto& fixture = *static_cast<x87_fixture*>(context);
    return fixture.status(site, &value);
}

extern "C" bool run(std::uint32_t* registers, read_callback read, write_callback write,
                    x87_callback x87, status_callback status)
{
    read_word = read;
    write_word = write;
    bf_guest32_constructor_state state{
        registers[0], registers[1], registers[2], registers[3], registers[4],
        registers[5], registers[6], registers[7], registers[8], registers[9], registers[10]
    };
    x87_fixture fixture{x87, status, state};
    const bf_x87_vector_operations operations{&fixture, execute, fnstsw_ax};
    const bool ok = FUN_0012eca0(state, operations);
    const std::uint32_t result[] = {state.eax, state.ebx, state.ecx, state.edx, state.esi,
        state.edi, state.ebp, state.esp, state.eip, state.eflags, state.eflags_defined};
    std::copy(std::begin(result), std::end(result), registers);
    return ok;
}
"""


def fixture(number, words):
    rng = Random(ENTRY + number)
    registers = State(*(rng.getrandbits(32) for _ in range(7)), STACK, ENTRY, 0x202 | (rng.getrandbits(12) & 0x8d5),
                      0xFFFFFFFF)
    registers[2] = BASE + 0x100 + number % 4
    registers[3] = STACK - 12 if number % 4 == 0 else BASE + 0x400
    registers[4] = registers[2] + 4 if number % 3 == 0 else BASE + 0x300
    memory = bytearray(rng.randbytes(SIZE))
    vectors = ((0, 0x80000000, 0), (0x3f800000, 0x3e800000, 0xbf000000),
               (0x7f800000, 0, 0), (0x7f800001, 1, 0x80000001),
               (0x7fc0abcd, 0, 0), (0, 0x39800000, 0x39000000),
               (0x41800000, 0xc1800000, 0), (0x80000001, 1, 0x80000000))
    struct.pack_into("<III", memory, registers[2] - BASE, *vectors[number % len(vectors)])
    struct.pack_into("<I", memory, STACK - BASE, RET)
    cw = 0x7f | ((0, 2, 3)[number % 3] << 8) | ((number // 3 % 4) << 10)
    return registers, memory, cw, number % 5, words


def prepare(entry, body, fixture, traces):
    registers, memory, cw, depth, words = fixture
    cpu = Uc(UC_ARCH_X86, UC_MODE_32)
    cpu.mem_map(entry & ~0xfff, 0x2000)
    cpu.mem_write(entry, body)
    cpu.mem_map(RET, 0x1000)
    cpu.mem_write(RET, b"\xd9\xe8" * depth)  # Prepopulate up to six x87 slots with FLD1.
    cpu.mem_map(BASE, SIZE)
    cpu.mem_write(BASE, bytes(memory))
    cpu.mem_map(0x3a4000, 0x1000)
    for address, data in words.items():
        cpu.mem_write(address, data)
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


def instruction_bytes(op, operand, registers, modrm):
    register_encodings = {3: b"\xde\xc1", 5: b"\xdd\xd8", 7: b"\xd9\xff", 9: b"\xd9\xfe"}
    if op in register_encodings:
        return register_encodings[op]
    if op in (1, 2):
        assert 0 <= operand < 8
        return bytes((0xd9, 0xc0 + operand)) if op == 1 else bytes((0xd8, 0xc8 + operand))
    if op == 4:
        return b"\xd8\x1d" + struct.pack("<I", operand)
    if op == 6 and modrm & 7 == 5:
        return b"\xd8\x0d" + struct.pack("<I", operand)
    prefix, extension = {0: (0xd9, 0), 6: (0xd8, 8), 8: (0xd9, 0x18)}[op]
    base = modrm & 7
    if base == 4:
        displacement = (operand - registers[3]) & 0xffffffff
        assert displacement <= 0x7f
        return bytes((prefix, 0x44 + extension, 0x24, displacement))
    assert base < 3
    displacement = (operand - registers[base]) & 0xffffffff
    assert displacement <= 0x7f
    if displacement == 0:
        return bytes((prefix, extension + base))
    return bytes((prefix, 0x40 + extension + base, displacement))


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
    def execute(eip, op, operand, eax, ecx, edx, esp):
        try:
            if eip == cutoff:
                return False
            assert entry <= eip <= entry + len(body) - 2
            bases = (eax, ecx, edx, esp)
            expected = instruction_bytes(op, operand, bases, body[eip - entry + 1])
            assert eip + len(expected) <= entry + len(body)
            for register, value in zip((REGS[0], REGS[2], REGS[3], REGS[7]), bases):
                backend.reg_write(register, value)
            assert bytes(backend.mem_read(eip, len(expected))) == expected, (hex(eip), op, hex(operand))
            backend.emu_start(eip, eip + len(expected), count=1)
            assert backend.reg_read(x86.UC_X86_REG_EIP) == eip + len(expected)
            return True
        except Exception as error:
            callback_errors.append(error)
            return False

    @Status
    def status(eip, out):
        try:
            assert eip == 0x12ecc3
            if eip == cutoff:
                return False
            assert bytes(backend.mem_read(eip, 2)) == b"\xdf\xe0"
            backend.emu_start(eip, eip + 2, count=1)
            out[0] = backend.reg_read(x86.UC_X86_REG_EAX) & 0xffff
            return True
        except Exception as error:
            callback_errors.append(error)
            return False

    completed = model(registers, read, write, execute, status)
    assert not callback_errors, callback_errors
    assert completed == (cutoff is None)
    expected = [original.reg_read(reg) for reg in REGS]
    mask = 0xffffffef if cutoff is not None and cutoff >= 0x12ecca else 0xffffffff
    assert registers[8] == stop and registers[10] == mask, (cutoff, list(registers), mask)
    assert list(registers)[:9] == expected[:9], (hex(entry), cutoff, list(registers), expected)
    assert (registers[9] ^ expected[9]) & mask == 0
    assert [backend.reg_read(reg) for reg in FP_REGS] == [original.reg_read(reg) for reg in FP_REGS]
    assert backend.mem_read(BASE, SIZE) == original.mem_read(BASE, SIZE)
    assert model_trace == original_trace, (hex(entry), cutoff, model_trace, original_trace)
    return expected[2] == 0


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

    body = read(ENTRY, BODY_SIZE)
    source = source_path(ROOT, f"0x{ENTRY:08x}")
    if sha256(body).hexdigest() != BODY_SHA256 or BODY_SHA256.upper() not in source.read_text(encoding="utf-8"):
        raise ValueError("Body provenance mismatch")
    words = {address: read(address, 4) for address in (0x3A4F88, 0x3A4FE0)}
    with tempfile.TemporaryDirectory() as temp:
        adapter = Path(temp) / "adapter.cpp"
        adapter.write_text(ADAPTER, encoding="utf-8")
        for optimization in ("-O0", "-O2"):
            library = Path(temp) / f"vector{optimization}.so"
            subprocess.run([args.cxx, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            optimization, "-fPIC", "-shared", "-Wl,--no-undefined",
                            "-I", str(ROOT / "include"), str(adapter), str(source), "-o", str(library)], check=True)
            model = ct.CDLL(str(library)).run
            model.argtypes = [ct.POINTER(ct.c_uint32), Read, Write, Execute, Status]
            model.restype = ct.c_bool
            outcomes = {compare(model, ENTRY, body, fixture(number, words)) for number in range(96)}
            assert outcomes == {False, True}, "both guest status branches must execute"
            cutoffs = (0x12eca0, 0x12ecbb, 0x12ecc1, 0x12ecc3, 0x12ecc5, 0x12ecca,
                       0x12ecd2, 0x12ece6, 0x12ecf4)
            for cutoff in cutoffs:
                compare(model, ENTRY, body, fixture(6, words), cutoff)
            print(f"{optimization}: 96 complete comparisons across both branches, {len(cutoffs)} callback stops")


if __name__ == "__main__":
    main()
