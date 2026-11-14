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

# Non-contiguous Ghidra ranges in hashing order.
BODY_RANGES = {
    0x00371BC0: ((0x00371BC0, 218), (0x00371CA0, 49)),
    0x00372050: ((0x00372050, 56), (0x00372090, 34)),
}

BODIES = {
    0x00371B60: (95, "F16934FA75EF9CF1324CBB5368F2B7FE11D39CEC94FB54FB787CD3D3E3E4FAC6",
                 "FUN_00371b60"),
    0x00371BC0: (273, "E945A86206E9B4901F3631DED512414FF06A5B87AAA2E84BFB3AF558E749BB89",
                 "FUN_00371bc0"),
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


def search_cases():
    # Inline ring entries are 12 bytes apart, starting at device+0x4c.
    for name, start, end, base, adjustment, records, expected_index in (
        ("inline-single", 2, 4, 100, 20, {1: 95}, 1),
        ("inline-scan", 2, 8, 100, 20, {1: 90, 2: 100, 3: 121}, 1),
        ("inline-reject", 2, 8, 100, 20, {1: 90, 2: 89}, None),
        ("inline-ring-wrap", 126, 130, 100, 20, {63: 120, 0: 120}, 63),
        ("inline-boundary", 2, 130, 100, 20, {1: 200, 2: 199}, None),
        ("inline-fallback", 2, 400, 100, 20, {8: 200, 9: 199}, None),
    ):
        regs = [start, 0x13579bdf, 0x2468ace0, 0x11112222, 0x33334444, 0x55556666,
                0x77778888, STACK, 0x00371BC0, 0xC97, FLAGS]
        memory = {STACK: RETURN, STACK - 4: 0xCAFE9898, 0x37DD88: DEVICE, DEVICE: base,
                  DEVICE + 0x2C: end, DEVICE + 0x40: adjustment, DEVICE + 0x48: RECORD,
                  DEVICE + 0x34: 3, RECORD + 36: 1}
        memory.update({DEVICE + 0x50 + index * 12: value for index, value in records.items()})
        result = 0 if expected_index is None else DEVICE + 0x4C + expected_index * 12
        yield name, regs, memory, [], result

    for name, current, starts, keys, table, expected_index in (
        ("external-single", 3, (0, 0, 0, 250), (110, 120, 130, 140), RECORD, 3),
        ("external-scan", 3, (250, 250, 250, 250), (90, 100, 125, 150), RECORD, 0),
        ("external-advance-before-match", 3, (10, 20, 250, 250), (90, 92, 110, 120), RECORD, 2),
        ("external-reject", 3, (250, 250, 250, 250), (90, 89, 125, 150), RECORD, None),
        ("external-stack-alias", 3, (250, 250, 250, 250), (90, 100, 125, 150), STACK - 8, 0),
        ("external-fresh-device-base", 3, (250, 250, 250, 250), (90, 100, 125, 150), RECORD, None),
        ("external-fresh-spill", 3, (250, 250, 250, 250), (90, 100, 125, 150), RECORD, None),
    ):
        regs = [200, 0x13579bdf, 0x2468ace0, 0x11112222, 0x33334444, 0x55556666,
                0x77778888, STACK, 0x00371BC0, 0xC97, FLAGS]
        memory = {STACK: RETURN, 0x37DD88: DEVICE, DEVICE: 100, DEVICE + 0x2C: 500,
                  DEVICE + 0x34: current, DEVICE + 0x38: 3, DEVICE + 0x40: 20, DEVICE + 0x48: table}
        for index, (start, key) in enumerate(zip(starts, keys)):
            memory[table + index * 12] = start
            memory[table + index * 12 + 4] = key
        result = 0 if expected_index is None else table + expected_index * 12
        scripted = []
        if name == "external-fresh-device-base":
            scripted = [(DEVICE, 100), (DEVICE, 99)]
        if name == "external-fresh-spill":
            scripted = [(STACK - 8, 121)]
        yield name, regs, memory, scripted, result


def corpus():
    yield from search_cases()
    for entry in BODIES:
        if entry == 0x00371BC0:
            continue
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
            yield f"{entry:#010x} scenario {i}", regs, memory, scripted, None


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
                          for _, regs, memory, scripted, _ in cases)
    expected = [emulate(bodies, regs, memory, scripted) for _, regs, memory, scripted, _ in cases] if bodies else None
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
                context, regs, _, scripted, search_result = cases[index]
                require(state[7:9] == (regs[7] + 4, RETURN), f"{context} return stack differs")
                fences = bool(scripted) and regs[8] != 0x00371BC0
                require(sum(row[0] == FENCE for row in effects) == fences, f"{context} fence count differs")
                if search_result is not None:
                    require(state[0] == search_result, f"{context} search result differs")
                    require(state[10] == FLAGS, f"{context} ADD ESP flags must be defined")
                if expected:
                    native, native_effects = expected[index]
                    require(state[:9] == tuple(native[:9]), f"{context} guest registers differ")
                    require((state[9] ^ native[9]) & state[10] == 0, f"{context} defined flags differ")
                    require(effects == native_effects, f"{context} ordered guest effects differ")
            print(f"PASS {opt}: {len(BODIES)} linked guest functions, {len(cases)} cases"
                  + (" against executed retail x86" if expected else ""))


if __name__ == "__main__":
    main()
