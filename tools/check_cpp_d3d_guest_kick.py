#!/usr/bin/env python3
"""Link D3D guest models and compare retail x86 with scripted device reads."""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections, target
from source_layout import source_path

# The 0x00372050 body has two ordered Ghidra ranges separated by eight bytes.
BODY_RANGES = {0x00372050: ((0x00372050, 56), (0x00372090, 34))}

BODIES = {
    0x00371B60: (95, "F16934FA75EF9CF1324CBB5368F2B7FE11D39CEC94FB54FB787CD3D3E3E4FAC6",
                 "FUN_00371b60"),
    0x00371FA0: (171, "379B43248B1DB7734516CBE34FF3B71249CEB0E75905F1D604FD6FAB97FF73B7",
                 "D3D8LTCG__CDevice_KickOff_0__LTCG_edx1"),
    0x00372050: (98, "DEBF01DFDEECBEBCD09E17F114EACEE09C45CADFCFD56C6A417C8D51CA1279BF",
                 "FUN_00372050"),
    0x00372180: (45, "0DF5852FADA8AFCE10EE319D1018E67752D87B5644E734F065AC44734EF2EF1F",
                 "FUN_00372180"),
}
DEVICE = 0x460000
GLOBAL_DEVICE = 0x470000
STACK = 0x481000
RECORD = 0x485000
PUT = 0x486000
FLUSH_BASE = 0x800000
WAIT_BASE = 0xA00000
FLUSH_WORD = FLUSH_BASE + 0x100410
STATUS_WORD = WAIT_BASE + 0x400700
RETURN = 0x402000
FLAGS = 0xCD5
MASK = 0xFFFFFFFF
READ, WRITE, FENCE = 1, 2, 3

FIXTURE = r"""
#include "bf_d3d_guest_kick.h"

#include <cstdio>
#include <cstdlib>
#include <map>
#include <vector>

using Word = std::uint32_t;
struct Effect { Word kind, address, value; };
static std::map<Word, Word> memory;
static std::vector<Effect> scripted, effects;
static std::size_t next_read;

static Word read_word()
{
    Word value;
    if (std::fread(&value, sizeof(value), 1, stdin) != 1) {
        std::abort();
    }
    return value;
}

Word bf_guest_read_u32(Word address)
{
    auto value = memory[address];
    if (next_read < scripted.size() && scripted[next_read].address == address) {
        value = scripted[next_read++].value;
    }
    effects.push_back({1u, address, value});
    if (effects.size() > 128u) {
        std::abort();
    }
    return value;
}

void bf_guest_write_u32(Word address, Word value)
{
    memory[address] = value;
    effects.push_back({2u, address, value});
}

void bf_guest_store_fence()
{
    effects.push_back({3u, 0x0037218bu, 0u});
}

int main()
{
    Word count;
    while (std::fread(&count, sizeof(count), 1, stdin) == 1) {
        memory.clear();
        scripted.clear();
        effects.clear();
        next_read = 0;
        for (Word index = 0; index < count; ++index) {
            const auto address = read_word();
            memory.emplace(address, read_word());
        }
        count = read_word();
        for (Word index = 0; index < count; ++index) {
            const auto address = read_word();
            scripted.push_back({1u, address, read_word()});
        }
        bf_guest32_constructor_state state{};
        if (std::fread(&state, sizeof(state), 1, stdin) != 1) {
            return 1;
        }
        switch (state.eip) {
@DISPATCH@
        default: return 2;
        }
        count = static_cast<Word>(effects.size());
        if (next_read != scripted.size() ||
            std::fwrite(&state, sizeof(state), 1, stdout) != 1 ||
            std::fwrite(&count, sizeof(count), 1, stdout) != 1 ||
            std::fwrite(effects.data(), sizeof(Effect), count, stdout) != count) {
            return 3;
        }
    }
}
"""


def words(values):
    return struct.pack(f"<{len(values)}I", *values)


def pairs(entries):
    return words([len(entries), *(word for pair in entries for word in pair)])


def corpus():
    for entry in BODIES:
        for i in range(12):
            regs = [0x91929394, 0xABACADAE, DEVICE, DEVICE, 0xE1E2E3E4,
                    RECORD, 0xA1A2A3A4, STACK, entry, 0xC97, FLAGS]
            flags = (0x2000 if i % 4 == 2 else 0) | (4 if i & 1 else 0)
            memory = {
                STACK: RETURN, DEVICE: 0xF1234567, DEVICE + 8: flags,
                DEVICE + 0x358: 0xEFFEEDCB, DEVICE + 0x17C0: PUT,
                0x37DD88: GLOBAL_DEVICE, 0x37BD30: i % 3,
                GLOBAL_DEVICE + 0x17C8: FLUSH_BASE, GLOBAL_DEVICE + 0x4F8: WAIT_BASE,
                DEVICE + 0x2C: 1 if i < 6 else 0x80000000, DEVICE + 0x30: RECORD,
                DEVICE + 0x3C: 0x28432423, DEVICE + 0x2018: 0xABCDEF01,
                DEVICE + 0x24: 0x80000010, DEVICE + 0x28: 0x80001000,
                DEVICE + 0x40: 0x101 if i < 6 else 0xFFFFFFF0,
                DEVICE + 0x4F8: WAIT_BASE, WAIT_BASE + 0x324C: 0x00000211,
                PUT + 0x44: (0x11, 0x1000, 0xF)[i % 3], DEVICE + 0x1FE0: 0x8010,
                RECORD + 4: (0x80000300, 0x80000210, 0x80000000, 0xFFFFFFFF)[i % 4],
                RECORD + 8: (0xBE028, 0x8010, 0x800F, 0x80000000)[i % 4],
                FLUSH_WORD: 0xA5000F00,
                WAIT_BASE + 0x3240: 0x102, WAIT_BASE + 0x3244: 0x102, STATUS_WORD: 0,
            }
            scripted = []
            if entry == 0x00371B60:
                memory[DEVICE] = (0x80000000, 0x80000100, 0x80000210)[i % 3]
                if i == 11:
                    # PUSH ESI aliases [ECX], changing the wrapped result.
                    regs[7] = DEVICE + 4
                    memory[regs[7]] = RETURN
            else:
                if entry == 0x00372050:
                    regs[4] = DEVICE
                if i == 10 and entry == 0x00371FA0:
                    # Simulated path can write through [EDX+0x30] into the saved ESI.
                    memory[DEVICE + 0x30] = STACK - 4
                if i == 11 and entry == 0x00372050:
                    # PUT aliases the global pointer after this function captures it.
                    memory[DEVICE + 0x17C0] = 0x37DD88 - 0x40
                if entry == 0x00372180 or (flags & 0x2000) == 0:
                    scripted = [(FLUSH_WORD, 0xA5000F00),
                                *([(FLUSH_WORD, 0xA5010F00)] * (i % 4)),
                                (FLUSH_WORD, 0xA5000F00)]
                    if entry == 0x00372050 or (entry == 0x00371FA0 and i % 3):
                        if i & 1:
                            scripted.extend([
                                (WAIT_BASE + 0x3240, 0x102), (WAIT_BASE + 0x3244, 0x101),
                                (WAIT_BASE + 0x3240, 0x102), (WAIT_BASE + 0x3244, 0x102),
                                (STATUS_WORD, 7),
                            ])
                        scripted.extend([(WAIT_BASE + 0x3240, 0x102),
                                         (WAIT_BASE + 0x3244, 0x102), (STATUS_WORD, 0)])
            yield f"{entry:#010x} scenario {i}", regs, memory, scripted


def authenticate(image):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail image")
    layout = sections(image)
    bodies = {}
    for entry, (length, digest, _) in BODIES.items():
        offset = file_offset(layout, entry, length)
        body = image[offset:offset + length]
        body_hash = hashlib.sha256()
        for start, size in BODY_RANGES.get(entry, ((entry, length),)):
            range_offset = file_offset(layout, start, size)
            body_hash.update(image[range_offset:range_offset + size])
        require(body_hash.hexdigest().upper() == digest, f"retail body mismatch at {entry:#x}")
        bodies[entry] = body
    for entry, site in [(0x00371FA0, 0x00371FB7), (0x00372050, 0x00372066)]:
        rel = site - entry
        require(target(site, bodies[entry][rel:rel + 5]) == 0x00372180, f"wrong call at {site:#x}")
    require(bodies[0x00372180][11:14] == bytes.fromhex("0faef8"), "missing SFENCE")
    return bodies


def emulate(bodies, regs, memory, scripted):
    from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE
    from unicorn.x86_const import (UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX,
                                   UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP, UC_X86_REG_ESP,
                                   UC_X86_REG_EIP, UC_X86_REG_EFLAGS)

    cpu = Uc(UC_ARCH_X86, UC_MODE_32)
    mapped = set()
    def map_page(address):
        page = address & ~0xFFF
        if page not in mapped:
            cpu.mem_map(page, 0x1000)
            mapped.add(page)

    for address, body in bodies.items():
        map_page(address)
        map_page(address + len(body) - 1)
        cpu.mem_write(address, body)
    for address, value in memory.items():
        map_page(address)
        cpu.mem_write(address, words([value]))
    for address in (STACK - 8, DEVICE + 0x1984, DEVICE + 0x1FE0, 0x37DD80):
        map_page(address)
    identities = (UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX,
                  UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP, UC_X86_REG_ESP,
                  UC_X86_REG_EIP, UC_X86_REG_EFLAGS)
    for reg, value in zip(identities, regs):
        cpu.reg_write(reg, value)
    effects = []
    scripted = iter(scripted)
    next_read = next(scripted, None)

    def record_code(_cpu, address, _size, _data):
        if address == 0x0037218B:
            effects.append((FENCE, address, 0))

    def record_read(_cpu, _event, address, size, _value, _data):
        nonlocal next_read
        require(size == 4, f"retail memory width {size} at {address:#x}")
        if next_read is not None and address == next_read[0]:
            value = next_read[1]
            cpu.mem_write(address, words([value]))
            next_read = next(scripted, None)
        else:
            value, = struct.unpack("<I", cpu.mem_read(address, size))
        effects.append((READ, address, value))

    def record_write(_cpu, _event, address, size, value, _data):
        require(size == 4, f"retail memory width {size} at {address:#x}")
        effects.append((WRITE, address, value & MASK))

    cpu.hook_add(UC_HOOK_CODE, record_code)
    cpu.hook_add(UC_HOOK_MEM_READ, record_read)
    cpu.hook_add(UC_HOOK_MEM_WRITE, record_write)
    cpu.emu_start(regs[8], RETURN, timeout=1_000_000, count=128)
    state = [cpu.reg_read(reg) for reg in identities]
    require(state[8] == RETURN and next_read is None, "retail fixture did not return")
    return state, effects


def outputs(data):
    offset = 0
    while offset < len(data):
        state = struct.unpack_from("<11I", data, offset)
        count, = struct.unpack_from("<I", data, offset + 44)
        offset += 48
        extent = offset + count * 12
        yield state, list(struct.iter_unpack("<III", data[offset:extent]))
        offset = extent


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="retail image for an ordered Unicorn x86 comparison")
    args = parser.parse_args()
    sources, dispatch = [], []
    for entry, (_, digest, symbol) in BODIES.items():
        path = source_path(ROOT, f"{entry:#010x}")
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"body label differs at {entry:#x}")
        sources.append(path)
        dispatch.append(f"        case {entry:#x}u: {symbol}(state); break;")
    bodies = authenticate(args.xbe.read_bytes()) if args.xbe else None
    cases = list(corpus())
    input_data = b"".join(pairs(list(memory.items())) + pairs(scripted) + words(regs)
                          for _, regs, memory, scripted in cases)
    expected = [emulate(bodies, regs, memory, scripted) for _, regs, memory, scripted in cases] if bodies else None
    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    previous = None
    with tempfile.TemporaryDirectory(prefix="bf-d3d-kick-") as directory:
        fixture = Path(directory) / "fixture.cpp"
        fixture.write_text(FIXTURE.replace("@DISPATCH@", "\n".join(dispatch)), encoding="utf-8")
        executable = Path(directory) / "model"
        for opt in ("-O0", "-O2"):
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror", opt,
                            "-I", ROOT / "include", fixture, *sources, "-o", executable],
                           check=True, timeout=60)
            data = subprocess.check_output([executable], input=input_data, timeout=20)
            require(previous is None or data == previous, "optimization changed the modeled state")
            previous = data
            actual = list(outputs(data))
            require(len(actual) == len(cases), "incomplete fixture result")
            for index, (state, effects) in enumerate(actual):
                context, regs, _, scripted = cases[index]
                require(state[7:9] == (regs[7] + 4, RETURN), f"{context} return stack differs")
                require(sum(row[0] == FENCE for row in effects) == bool(scripted), f"{context} fence count differs")
                if expected:
                    native, native_effects = expected[index]
                    require(state[:9] == tuple(native[:9]), f"{context} guest registers differ")
                    require((state[9] ^ native[9]) & state[10] == 0, f"{context} defined flags differ")
                    require(effects == native_effects, f"{context} ordered guest effects differ")
            print(f"PASS {opt}: {len(BODIES)} linked guest functions, {len(cases)} cases"
                  + (" against executed retail x86" if expected else ""))


if __name__ == "__main__":
    main()
