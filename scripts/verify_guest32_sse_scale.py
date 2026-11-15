#!/usr/bin/env python3
"""Link the packed-scale model and compare it with the pinned retail x86 body."""
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

ENTRY = 0x002D9CC0
DIGEST = "5DFBE181694F87F159EDE21BF169F5206FEB04FFC48104D0E4A68C6C7C426479"
BASE, SIZE, RET = 0x200000, 0x4000, 0x80000
STACK = BASE + 0x2000
REGS = [getattr(x86, "UC_X86_REG_" + name) for name in
        ("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP", "EIP", "EFLAGS")]
SSE = [x86.UC_X86_REG_MXCSR, *(getattr(x86, f"UC_X86_REG_XMM{i}") for i in range(8))]
OPCODES = tuple(map(bytes.fromhex, ("f30f1044240c", "0fc6c000", "0f2808", "0f59c8", "0f2908")))
SITES = (0x2D9CE4, 0x2D9CEA, 0x2D9CF7, 0x2D9CFA, 0x2D9CFD)
FLOATS = (0, 0x80000000, 1, 0x80000001, 0x3F800000, 0xBF800000, 0x40490FDB, 0x7F800000,
          0xFF800000, 0x7F800001, 0x7FC0ABCD, 0x7F7FFFFF, 0xFF7FFFFF, 0x00800000)
State = ct.c_uint32 * 11
Read = ct.CFUNCTYPE(ct.c_uint32, ct.c_uint32)
Write = ct.CFUNCTYPE(None, ct.c_uint32, ct.c_uint32)
Execute = ct.CFUNCTYPE(ct.c_bool, ct.c_uint32, ct.c_uint32, ct.c_uint32)

ADAPTER = r"""
#include "bf_guest32_sse_scale.h"
#include <algorithm>
#include <iterator>

using read_callback = std::uint32_t (*)(std::uint32_t);
using write_callback = void (*)(std::uint32_t, std::uint32_t);
using sse_callback = bool (*)(std::uint32_t, std::uint32_t, std::uint32_t);
static read_callback read_word;
static write_callback write_word;

std::uint32_t bf_guest_read_u32(std::uint32_t address) { return read_word(address); }
void bf_guest_write_u32(std::uint32_t address, std::uint32_t value) { write_word(address, value); }

static bool execute(void* context, std::uint32_t eip, bf_sse_scale_opcode op, std::uint32_t address)
{
    return (*static_cast<sse_callback*>(context))(eip, static_cast<std::uint32_t>(op), address);
}

extern "C" bool run(std::uint32_t* registers, read_callback read, write_callback write, sse_callback sse)
{
    read_word = read;
    write_word = write;
    bf_guest32_constructor_state guest{
        registers[0], registers[1], registers[2], registers[3], registers[4],
        registers[5], registers[6], registers[7], registers[8], registers[9], registers[10]
    };
    const bool complete = FUN_002d9cc0(guest, {&sse, execute});
    const std::uint32_t result[] = {guest.eax, guest.ebx, guest.ecx, guest.edx, guest.esi,
        guest.edi, guest.ebp, guest.esp, guest.eip, guest.eflags, guest.eflags_defined};
    std::copy(std::begin(result), std::end(result), registers);
    return complete;
}
"""


def fixture(number, count, mode, alias=False):
    rng = Random(ENTRY + number)
    esp = STACK + 4 * (number % 4)
    aligned_frame = ((esp - 4) & ~0xf) - 0x10
    if alias:
        eax = aligned_frame
    else:
        eax = BASE + 0x100 + (number % 16 if mode == 0 else 0)
    registers = State(eax, rng.getrandbits(32), mode, count & 0xffffffff, rng.getrandbits(32),
                      rng.getrandbits(32), rng.getrandbits(32), esp, ENTRY,
                      0x202 | (rng.getrandbits(12) & 0xCD5), 0xffffffff)
    memory = bytearray(rng.randbytes(SIZE))
    def put(address, word):
        struct.pack_into("<I", memory, address - BASE, word)
    put(esp, RET)
    put(esp + 4, FLOATS[number % len(FLOATS)])
    if not alias:
        for i in range(16):
            put((eax & ~0xf) + 4 * i, FLOATS[(number + i) % len(FLOATS)])
    # Mask all SSE exceptions. Vary rounding control, DAZ, FTZ and sticky flags.
    mxcsr = (0x1f80 | ((number // 4 % 4) << 13) | (0x40 if number & 1 else 0) |
             (0x8000 if number & 2 else 0) | (number & 0x3f))
    return registers, memory, (mxcsr, *(rng.getrandbits(128) for _ in range(8)))


def prepare(body, values, trace):
    registers, memory, sse = values
    cpu = Uc(UC_ARCH_X86, UC_MODE_32)
    cpu.mem_map(ENTRY & ~0xfff, 0x1000)
    cpu.mem_write(ENTRY, body)
    cpu.mem_map(RET, 0x1000)
    cpu.mem_map(BASE, SIZE)
    cpu.mem_write(BASE, bytes(memory))
    def access(_cpu, kind, address, size, value, _data):
        write = kind == UC_MEM_WRITE
        trace.append((write, address, size, value & ((1 << (size * 8)) - 1) if write else 0))
    cpu.hook_add(UC_HOOK_MEM_READ | UC_HOOK_MEM_WRITE, access)
    for register, value in zip(REGS, registers):
        cpu.reg_write(register, value)
    for register, value in zip(SSE, sse):
        cpu.reg_write(register, value)
    return cpu


def compare(run, body, values, stop=RET):
    native_trace, model_trace = [], []
    native = prepare(body, values, native_trace)
    backend = prepare(body, values, model_trace)
    actual = State(*values[0])
    native.emu_start(ENTRY, stop, count=192)

    @Read
    def read(address):
        model_trace.append((False, address, 4, 0))
        return struct.unpack("<I", backend.mem_read(address, 4))[0]

    @Write
    def write(address, value):
        model_trace.append((True, address, 4, value))
        backend.mem_write(address, struct.pack("<I", value))

    errors = []

    @Execute
    def execute(eip, op, address):
        try:
            code = OPCODES[op]
            assert eip == SITES[op]
            assert body[eip - ENTRY:eip - ENTRY + len(code)] == code
            if op == 0:
                backend.reg_write(x86.UC_X86_REG_ESP, (address - 0xc) & 0xffffffff)
            elif op in (2, 4):
                backend.reg_write(x86.UC_X86_REG_EAX, address)
            else:
                assert address == 0
            if eip == stop:
                return False
            backend.emu_start(eip, eip + len(code), count=1)
            assert backend.reg_read(x86.UC_X86_REG_EIP) == eip + len(code)
            return True
        except Exception as error:
            errors.append(error)
            return False

    assert run(actual, read, write, execute) == (stop == RET)
    assert not errors, errors
    expected = [native.reg_read(register) for register in REGS]
    assert actual[8] == stop
    assert list(actual)[:9] == expected[:9], (stop, list(actual), expected)
    # TEST EDX leaves AF undefined up to INC, or through RET on the empty path.
    positive_count = 0 < actual[3] < 0x80000000
    defined = 0xffffffef if stop in SITES[:2] or not positive_count else 0xffffffff
    assert actual[10] == defined, (stop, hex(actual[10]), hex(defined))
    assert (actual[9] ^ expected[9]) & defined == 0, (stop, hex(actual[9]), hex(expected[9]))
    assert [backend.reg_read(register) for register in SSE] == [native.reg_read(register) for register in SSE]
    assert backend.mem_read(BASE, SIZE) == native.mem_read(BASE, SIZE)
    assert model_trace == native_trace, (stop, model_trace, native_trace)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True)
    parser.add_argument("--cxx", default="c++")
    args = parser.parse_args()
    image = args.xbe.read_bytes()
    assert sha256(image).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch"
    offset = file_offset(sections(image), ENTRY, 74)
    body = image[offset:offset + 74]
    source = source_path(ROOT, f"{ENTRY:#010x}")
    assert sha256(body).hexdigest().upper() == DIGEST and DIGEST in source.read_text(encoding="utf-8")
    counts = (-2147483648, -1, 0, 1, 4, 5, 12)
    cases = [(fixture(i, counts[i % len(counts)], i % 2), RET) for i in range(96)]
    # Rounding the address down adds at least one DWORD and wraps signed EDX.
    cases.extend((fixture(i, 0x7fffffff, 0), RET) for i in range(4, 16))
    cases.extend((fixture(i, 1, i % 2, True), RET) for i in range(16))
    cases.extend((fixture(i, 4 + i, i % 2), site) for i in range(4) for site in SITES)
    with tempfile.TemporaryDirectory(prefix="bf-sse-scale-") as temporary:
        directory = Path(temporary)
        adapter = directory / "adapter.cpp"
        adapter.write_text(ADAPTER, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            library = directory / f"model{opt}.so"
            subprocess.run([args.cxx, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror", opt,
                            "-fPIC", "-shared", "-Wl,--no-undefined", "-I", ROOT/"include",
                            adapter, source, "-o", library], check=True, timeout=60)
            model = ct.CDLL(str(library)).run
            model.argtypes = [ct.POINTER(ct.c_uint32), Read, Write, Execute]
            model.restype = ct.c_bool
            for values, stop in cases:
                compare(model, body, values, stop)
            print(f"{opt}: {len(cases)} linked retail/model comparisons, including 20 SSE callback stops")


if __name__ == "__main__":
    main()
