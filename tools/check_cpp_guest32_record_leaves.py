#!/usr/bin/env python3
"""Link guest register/memory leaves and run optional retail x86 comparisons."""
import argparse
import hashlib
from pathlib import Path
import random
import shutil
import struct
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from source_layout import source_path


BODIES = {
    "0x002de810": (154, "0B48DCDA345DC860A3F8C1F6ADCF5FE1D36B617096D170D7120547E4C2E6EAFE"),
    "0x002de8b0": (108, "B277FEF3609FAFA1129064960D37E1B0C8497BD73CB4FA9CB3D370541ED39AD4"),
    "0x002de920": (108, "72AA60D608E5D7D82F40811501448E7DDA62F4BBBF3DDC06E3CED60846A7798E"),
    "0x002f4cb2": (18, "DC8EB4151F3CAD9B7E0F4F0C466867D35C68ADD00F3F247A56719AD8D221E73C"),
    "0x002fe401": (27, "ECC913B9CBAD7BF2D299650DE49CB003011D5CBA2B8BDD8439355D467D10C5D4"),
    "0x0033f199": (33, "9D9650E91A1DEED74220BFEE4B2A32485F40E88CBB22715AB532A74171139F99"),
    "0x0034c50e": (42, "B76ECA04939394168681CE37423799EC147B8F47C5703CC64C632C179347479B"),
    "0x001f1b40": (79, "DC7833FDA4E6D81AAC734C2C5F121B4B8FAA6001AD589EED7AF561F889F9C3B6"),
    "0x002f56db": (62, "142180E6CA59889EB454AD465D4EC9ACCF9AA0A0DC33985FB0BF58CD719E7E6D"),
    "0x00341b2d": (72, "BFE1C8694A389FF580B6DBF4FC619A1D08B0466D13D4148C2278E078F393B88C"),
    "0x0037fc73": (43, "E06286D5BAAE0A34FBF1F05B3AAA7DE7AE87AC4FE20E386CD2256E306D21759E"),
    "0x00380f37": (53, "F42F3999A755312D4FAD55D13904CEA37A7E05F639DE3A1372FB987054AE30B2"),
    "0x0031acb1": (37, "AA8482391521EB9D331F447F461828B9D1A1CCF340AFAB49B3DD1EAC2B72B996"),
    "0x0013b770": (80, "90E019EDD1630FAE19D0A6D9246F6264FDB7E3989EA841EAA50B0D430010C5BB"),
    "0x001f2b00": (100, "04C1F0EC26656E5F4F9FD009CB04AA1AC49F0C0B61D0FC1101981D3BBAE3B3AA"),
    "0x00380e30": (90, "8B566564561C29B4AA98BCA7F59410558E878B97D2ED2BF41444CA5475E03B0E"),
    "0x001eb060": (48, "A48461E76CAB08D93A3DC89FCDB119355B51D94704F330866C9F8389158189CA"),
    "0x000d0830": (86, "657B86EB3F69AD621B91DA27D47A0F2E983E2D2F7FDE04370D77C2FC69CBC145"),
    "0x001664b0": (88, "44CCAF35353636DF62DB82941AC88CAD9A7952D51FEB51B1A80D67E0A10ECB51"),
    "0x00162d00": (91, "4A02D41EB754FC8AF2F1FA1AED4343C4C331D06BC9F365E6248D90DE0A16DD45"),
    "0x00236cf0": (88, "F036B2FDE00DBD97E894915F8CE78DAB0D894AD820A4B52EE7E9F86F40DC14FA"),
    "0x002fe7f5": (94, "1375F1D9E4548AE56A29ECE864F13A6FD2D2AAFD5945E1FCBDC719E22FE0F6CC"),
    "0x002ed1a8": (71, "8F54B9FF97497C6688D9B05235C4EB054996BC0EC9EB5E6E690F01D526D7A722"),
    "0x002949b0": (87, "9258407C12F3B8AF378DC5C6D9B2E1364822DC4764662975B1175C96A122911A"),
}
BASE = 0x460000
SIZE = 0x10000
FLAGS = 0xcd5
STACK = BASE + 0x7000
OBJECT = BASE + 0x2000
FILTER = 0x4a90dc
HEAD = 0x414b48
SUFFIX = 0x387860
SUFFIX_SIZE = 32
TYPE_TABLES_SIZE = 32
LOOKUP_TABLE_SIZE = 32
WINDOWS = (
    ("head", HEAD, 4),
    ("filter", FILTER, 4),
    ("type_tables", 0x37eca4, TYPE_TABLES_SIZE),
    ("lookup_table", 0x4071d8, LOOKUP_TABLE_SIZE),
    ("audio_slot", 0x32fdec, 4),
    ("character_types", 0x4a8d5c, 264),
)
SLOTS_SIZE = sum(size for _, _, size in WINDOWS)
NATIVE = ROOT / "tests/fixtures/guest32_constructors_native.s"
FIXTURE = r"""
#include "bf_xbe_guest32_string_leaves.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

static std::uint8_t memory[0x10000];
static std::uint32_t head, filter;
static std::uint8_t suffix[32], type_tables[32], lookup_table[32];
static std::uint32_t audio_slot;
static std::uint8_t character_types[264];
static std::uint8_t* address(std::uint32_t addr, unsigned width)
{
    if (addr >= 0x460000u && addr <= 0x470000u - width)
        return memory + (addr - 0x460000u);
    if (addr == 0x414b48u && width == 4u)
        return reinterpret_cast<std::uint8_t*>(&head);
    if (addr == 0x4a90dcu && width == 4u)
        return reinterpret_cast<std::uint8_t*>(&filter);
    if (addr >= 0x387860u && addr <= 0x387880u - width)
        return suffix + (addr - 0x387860u);
    if (addr >= 0x37eca4u && addr <= 0x37ecc4u - width)
        return type_tables + (addr - 0x37eca4u);
    if (addr >= 0x4071d8u && addr <= 0x4071f8u - width)
        return lookup_table + (addr - 0x4071d8u);
    if (addr == 0x32fdecu && width == 4u)
        return reinterpret_cast<std::uint8_t*>(&audio_slot);
    if (addr >= 0x4a8d5cu && addr <= 0x4a8e64u - width)
        return character_types + (addr - 0x4a8d5cu);
    std::abort();
}
std::uint32_t bf_guest_read_u32(std::uint32_t addr)
{
    std::uint32_t result;
    std::memcpy(&result, address(addr, sizeof(result)), sizeof(result));
    return result;
}
std::uint16_t bf_guest_read_u16(std::uint32_t addr)
{
    std::uint16_t result;
    std::memcpy(&result, address(addr, sizeof(result)), sizeof(result));
    return result;
}
std::uint8_t bf_guest_read_u8(std::uint32_t addr)
{
    return *address(addr, 1);
}
void bf_guest_write_u8(std::uint32_t addr, std::uint8_t value)
{
    *address(addr, 1) = value;
}
void bf_guest_write_u16(std::uint32_t addr, std::uint16_t value)
{
    std::memcpy(address(addr, sizeof(value)), &value, sizeof(value));
}
void bf_guest_write_u32(std::uint32_t addr, std::uint32_t value)
{
    std::memcpy(address(addr, sizeof(value)), &value, sizeof(value));
}
int main()
{
    std::uint32_t selection;
    while (std::fread(&selection, sizeof(selection), 1, stdin) == 1) {
        bf_guest32_constructor_state guest{};
        if (std::fread(&guest, sizeof(guest), 1, stdin) != 1 ||
            std::fread(&head, sizeof(head), 1, stdin) != 1 ||
            std::fread(&filter, sizeof(filter), 1, stdin) != 1 ||
            std::fread(type_tables, sizeof(type_tables), 1, stdin) != 1 ||
            std::fread(lookup_table, sizeof(lookup_table), 1, stdin) != 1 ||
            std::fread(&audio_slot, sizeof(audio_slot), 1, stdin) != 1 ||
            std::fread(character_types, sizeof(character_types), 1, stdin) != 1 ||
            std::fread(suffix, sizeof(suffix), 1, stdin) != 1 ||
            std::fread(memory, sizeof(memory), 1, stdin) != 1)
            return 1;
        switch (guest.eip) {
@DISPATCH@
        default: return 2;
        }
        if (std::fwrite(&guest, sizeof(guest), 1, stdout) != 1 ||
            std::fwrite(&head, sizeof(head), 1, stdout) != 1 ||
            std::fwrite(&filter, sizeof(filter), 1, stdout) != 1 ||
            std::fwrite(type_tables, sizeof(type_tables), 1, stdout) != 1 ||
            std::fwrite(lookup_table, sizeof(lookup_table), 1, stdout) != 1 ||
            std::fwrite(&audio_slot, sizeof(audio_slot), 1, stdout) != 1 ||
            std::fwrite(character_types, sizeof(character_types), 1, stdout) != 1 ||
            std::fwrite(memory, sizeof(memory), 1, stdout) != 1)
            return 1;
    }
}
"""


def native_oracle(temp, image):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail image")
    layout = sections(image)
    sections_asm, sections_ld = [], []
    for entry, (length, digest) in BODIES.items():
        offset = file_offset(layout, int(entry, 16), length)
        body = image[offset:offset + length]
        require(hashlib.sha256(body).hexdigest().upper() == digest,
                f"retail body mismatch at {entry}")
        path = temp / f"{entry}.bin"
        path.write_bytes(body)
        sections_asm.append(f'.section .retail_{entry},"ax"\n.incbin "{path}"\n')
        sections_ld.append(f".retail_{entry} {entry} : {{ *(.retail_{entry}) }}")
    suffix_offset = file_offset(layout, SUFFIX, SUFFIX_SIZE)
    suffix = image[suffix_offset:suffix_offset + SUFFIX_SIZE]
    require(b"\0" in suffix, "retail byte-string data has no terminator in window")
    literal_path = temp / "suffix.bin"
    literal_path.write_bytes(suffix)
    sections_asm.append(f'.section .suffix,"aw"\n.incbin "{literal_path}"\n')
    sections_ld.append(".suffix 0x387860 : { *(.suffix) }")
    # Copy each fixed-address window between the IO buffer and guest memory.
    loads, stores, offset = [], [], 0
    for name, address, size in WINDOWS:
        sections_ld.append(f".{name} {address:#x} (NOLOAD) : {{ . += {size}; }}")
        slot = f"$slots+{offset}"
        count = f"    mov ${size // 4}, %ecx\n    rep movsl\n"
        loads.append(f"    mov {slot}, %esi\n    mov ${address:#x}, %edi\n" + count)
        stores.append(f"    mov ${address:#x}, %esi\n    mov {slot}, %edi\n" + count)
        offset += size
    asm = NATIVE.read_text(encoding="ascii").replace(
        "    pushl request+40", f"""    mov $3, %eax
    xor %ebx, %ebx
    mov $slots, %ecx
    mov ${SLOTS_SIZE}, %edx
    int $0x80
    cmp ${SLOTS_SIZE}, %eax
    jne failed
    cld
{''.join(loads)}
    pushl request+40""").replace(
        "    jmp _start", f"""{''.join(stores)}    mov $4, %eax
    mov $1, %ebx
    mov $slots, %ecx
    mov ${SLOTS_SIZE}, %edx
    int $0x80
    cmp ${SLOTS_SIZE}, %eax
    jne failed
    jmp _start""")
    sources = temp / "oracle.s"
    sources.write_text(asm + f"\n.lcomm slots, {SLOTS_SIZE}\n" + "\n".join(sections_asm), encoding="ascii")
    script = temp / "oracle.ld"
    script.write_text("ENTRY(_start)\nSECTIONS {\n" + "\n".join(sections_ld) +
                      "\n.guest 0x460000 (NOLOAD) : { . += 0x10000; }\n"
                      ".text 0x8048000 : { *(.text) }\n"
                      ".bss 0x8050000 (NOLOAD) : { *(.bss) }\n}\n", encoding="ascii")
    obj, exe = temp / "oracle.o", temp / "oracle"
    subprocess.run(["as", "--32", "-o", obj, sources], check=True, timeout=15)
    subprocess.run(["ld", "-m", "elf_i386", "-T", script, "-o", exe, obj], check=True, timeout=15)
    symbols = subprocess.check_output(["nm", exe], text=True, timeout=10)
    returns = sorted(int(line.split()[0], 16) for line in symbols.splitlines()
                     if line.split()[-1] in {"normal_return", "alternate_return"})
    require(len(returns) == 2, "missing native return labels")
    return exe, returns, suffix


def corpus(returns):
    rng = random.Random(0x6621fc77)
    for entry in BODIES:
        for scenario in range(12):
            memory = bytearray(rng.randbytes(SIZE))
            obj = OBJECT + scenario % 3
            frame = STACK
            table = BASE + 0x3100
            head, filter_value = 0, rng.getrandbits(32)
            type_tables = bytearray(TYPE_TABLES_SIZE)
            lookup = bytearray(LOOKUP_TABLE_SIZE)
            character_types = bytearray(WINDOWS[-1][2])
            audio = rng.getrandbits(32) if entry == "0x0031acb1" else 0
            expected_table_result = None
            address = int(entry, 16)
            flags = (rng.getrandbits(12) & FLAGS) | 2
            regs = [obj, rng.getrandbits(32), rng.getrandbits(32), rng.getrandbits(32),
                    rng.getrandbits(32), rng.getrandbits(32), rng.getrandbits(32), frame,
                    address, flags, FLAGS]

            def store(va, value, fmt="<I"):
                struct.pack_into(fmt, memory, va - BASE, value)

            if entry == "0x002de810":
                if scenario % 3 == 1:
                    regs[7] = frame = obj + 0x305
            elif entry in ("0x002de8b0", "0x002de920"):
                offsets = 0 if entry == "0x002de8b0" else 0x100
                if scenario % 4 == 1:
                    table = obj + 0x98 + offsets
                if scenario % 4 == 2:
                    table = frame - 0x40
                if scenario % 4 == 3:
                    table += 1
                dimensions = [(0, 16), (2, 3), (0xffffffff, 1), (1, 1),
                              (0x80000001, 1), (0x80000000, 2), (3, 2), (7, 0),
                              (2, 2), (0xfffffffe, 0xfffffffe), (13, 0), (1, 0)]
                width, height = dimensions[scenario]
                store(obj + 0x98 + offsets, table)
                store(obj + 0x9c + offsets, width)
                store(obj + 0xa4 + offsets, height)
            elif entry == "0x002f4cb2":
                value = (0, 1, 0xffffffff, 0x80000000, 0x156a24, FILTER)[scenario % 6]
                store(frame + 4, value)
            elif entry in ("0x002fe401", "0x0033f199"):
                nodes = [table + 0x20 * i + scenario % 2 for i in range(scenario % 4)]
                keys = [0xfffffff0 + i for i in range(len(nodes))]
                for i, node in enumerate(nodes):
                    following = nodes[i + 1] if i + 1 < len(nodes) else 0
                    fields = (keys[i], following) if entry == "0x002fe401" else (following, keys[i])
                    store(node, fields[0])
                    store(node + 4, fields[1])
                key = keys[scenario % len(nodes)] if nodes and scenario % 3 else 0x80000001
                store(frame + 4, key)
                if entry == "0x002fe401":
                    head = nodes[0] if nodes else 0
                else:
                    store(frame + 8, nodes[0] if nodes else 0)
            elif entry == "0x0034c50e":
                first, stride = table + scenario % 2, 4 + (scenario % 3) * 2
                count = scenario % 4
                for i in range(count):
                    store(first + i * stride, 0x7fff + i, "<H")
                    store(first + i * stride + 2, stride, "<H")
                target = (0x7fff, 0x8000, 0x8001, 0x12)[scenario % 4]
                store(frame + 4, first)
                store(frame + 8, count * stride)
                store(frame + 12, target | 0xbad00000)
            elif entry == "0x001f1b40":
                source = obj + 0x138
                output = (table, source, source - 2, table + 1)[scenario % 4]
                component = table + 0x340
                first = (b"", b"dir", b"d", b"\x98")[scenario % 4]
                second = (b"", b"foo/bar", b"/x/y", b"//z")[scenario % 4]
                memory[source - BASE:source - BASE + len(first) + 1] = first + b"\0"
                memory[component - BASE:component - BASE + len(second) + 1] = second + b"\0"
                regs[2], regs[3] = output, component
            elif entry == "0x002f56db":
                source = obj + 0x100
                output = (table, source, source - 2, table + 1)[scenario % 4]
                first = (b"", b"alpha", b"abc", b"x\x90y")[scenario % 4]
                memory[source - BASE:source - BASE + len(first) + 1] = first + b"\0"
                store(frame + 4, source)
                store(frame + 8, output)
            elif entry == "0x00341b2d":
                index = table + 0x340
                source = obj + 0x100
                text = (b"", b" \tdata \t", b"   ", b"\t", b"no-trim",
                        b" x", b"z ", b"\tx\t", b"   x ", b"\xff", b"x\t\t", b" x y ")[scenario]
                memory[source - BASE - 1] = ord("!")
                memory[source - BASE:source - BASE + len(text) + 1] = text + b"\0"
                store(index, source)
                store(frame + 4, index)
            elif entry in ("0x0037fc73", "0x00380f37"):
                dword_keys = entry == "0x0037fc73"
                first, count = (0, 2) if dword_keys else (16, 4)
                key = (0, 0xf1, 0x8000, 0xffff)[scenario % 4]
                match = (scenario - 1) % count
                expected_table_result = 0
                if dword_keys:
                    regs[2] = (rng.getrandbits(16) << 16) | key
                else:
                    store(frame + 4, (rng.getrandbits(16) << 16) | key)
                for slot in range(count):
                    if scenario in (0, 3) or (scenario % 2 == 0 and slot < match):
                        continue
                    record = table + slot * 12 + scenario % 2
                    struct.pack_into("<I", type_tables, first + slot * 4, record)
                    matches = slot == match and scenario not in (4, 9)
                    if matches:
                        expected_table_result = record
                    if dword_keys:
                        field = regs[2] if matches else regs[2] ^ 0x80000000
                        store(record + 4, field)
                    else:
                        # A mismatching high byte skips the low-byte compare.
                        field = key if matches else key ^ (0x100 if slot % 2 else 1)
                        store(record, field, "<H")
            elif entry == "0x0031acb1":
                regs[2] = obj
                if scenario in (3, 4):
                    regs[7] = frame = obj + 0x28 + scenario
            elif entry == "0x00380e30":
                regs[2] = obj
                if scenario % 2:
                    regs[9] |= 0x400
                if scenario in (8, 10):
                    # Saved EDI aliases the end of a block, with the return above it.
                    regs[7] = frame = obj + 0xb4
                store(frame + 4, rng.getrandbits(32))
                store(frame + 8, rng.getrandbits(32))
            elif entry == "0x001eb060":
                keys = [0, 0x80000000, 0xffffffff]
                pointers = [obj, obj + 4, obj + 8]
                length = scenario % 4
                for i in range(length):
                    struct.pack_into("<II", lookup, i * 8, pointers[i], keys[i])
                selected = scenario % 6 // 2
                regs[3] = keys[selected] if scenario % 2 else 0x55aa
                expected_table_result = pointers[selected] if scenario % 2 and selected < length else (
                    pointers[0] if length else 0
                )
            elif entry == "0x000d0830":
                index = scenario % 4
                node = table + index * 16
                regs[0] = (rng.getrandbits(16) << 16) | index
                regs[2] = obj
                store(obj + 0x14, table)
                store(node, (0, table + 0x80, node)[scenario % 3])
                store(node + 4, (0, table + 0x60, obj + 0xc, node)[scenario // 3])
                store(obj + 0xc, (0, table + 0xa0, node)[scenario % 3])
                if scenario == 11:
                    regs[7] = frame = node + 8
            elif entry == "0x001664b0":
                source = table + 0x200 + scenario % 3
                destination = (table + 0x400, source, source + 2, source - 7)[scenario % 4]
                if scenario == 11:
                    # The first DWORD of the payload controls the live outer counter.
                    destination = frame - 4
                    store(source, 1)
                    store(source + 4, returns[scenario % len(returns)])
                regs[3] = source
                store(frame + 4, destination)
            elif entry == "0x00162d00":
                regs[2] = obj
                option = obj + 0x600
                payload = table + 0x400
                store(obj + 0x108, (0, 1, 0xff)[scenario % 3], "<B")
                store(option + 0x26, (0, 0x40, 0x41, 0xff)[scenario % 4], "<B")
                store(option + 0xc, payload)
                store(payload + 0xa8, (0x800, 0, 0xfff807ff, 0x80000800)[scenario % 4])
                count = scenario % 4
                store(obj + 0x104, count)
                for i in range(count):
                    store(obj + 4 + i * 4, option if i == scenario // 3 else option + 2 + i)
                store(frame + 4, option)
            elif entry == "0x00236cf0":
                regs[2] = (0, 0xffffffff, obj)[scenario % 3]
                regs[3] = (table + 0x200, table + 0x200, obj + 0x4c, frame + 4)[scenario // 3]
                field = 0 if scenario == 2 else table + 0x400
                store(obj + 0x4c, field)
                if scenario == 8:
                    # The initial destination store aliases the live beginning pointer.
                    field = obj
                store(obj + 0x50, (field - 1, field, field + 3, field + 4)[scenario // 3] & 0xffffffff)
                if field:
                    store(field, rng.getrandbits(32))
                store(frame + 4, rng.getrandbits(32))
            elif entry == "0x002fe7f5":
                first, second = obj + scenario % 2, table + scenario % 2
                strings = [
                    ([], []), ([0x8000], []), ([], [1]), ([1], [1]), ([1], [1, 2]),
                    ([1, 2, 3], [2, 3]), ([1, 2, 3], [3, 4]), ([0xffff, 0x8000], [0x8000]),
                    ([1, 1, 1, 2], [1, 1, 2]), ([1, 1, 1, 2], [1, 1, 3]),
                    ([0xffff, 0xffff, 0x8000], [0xffff, 0xffff]),
                    ([0x8000, 0x8000, 0xffff], [0x8000, 0xffff]),
                ]
                text, pattern = strings[scenario]
                for base, words in ((first, text), (second, pattern)):
                    for i, word in enumerate(words + [0]):
                        store(base + 2 * i, word, "<H")
                store(frame + 4, first)
                store(frame + 8, second)
                match = next((i for i in range(len(text)) if text[i:i + len(pattern)] == pattern), None)
                expected_table_result = first if not pattern else (0 if match is None else first + 2 * match)
            elif entry == "0x002ed1a8":
                data = table + scenario % 3
                text = ([1, 0x81, 0x81, 1], [0xff, 0x81, 1], [1], [0x81],
                        [0x81, 0x81, 0x81, 1], [0xff, 0xff, 1])[scenario % 6]
                for i, value in enumerate(text):
                    store(data + i, value, "<B")
                for byte in (0x81, 0xff):
                    character_types[5 + byte] = 4
                struct.pack_into("<I", character_types, 0, 0 if scenario % 5 == 1 else 1)
                store(frame + 4, data + (len(text) if scenario % 5 == 0 else 0))
                store(frame + 8, data + len(text))
            elif entry == "0x002949b0":
                store(0x469888, obj)
                store(obj + 0x60, table)
                for offset in range(0x174, 0x2e8, 12):
                    store(table + offset, (0, 0xffffffff, 0x80000000)[scenario % 3])
                records = table + (0x174, 0x180, 0x2e0)[scenario % 3]
                buckets = table + 0x500 + scenario % 2
                first = obj + 0x200
                second = [obj + 0x208, first, frame - 8][scenario // 4]
                store(records, 4)
                store(records + 8, buckets)
                pointers = (first, 0, 0x003b9768, second)
                if scenario == 11:
                    # This first node aliases the count, so the outer pass rereads zero.
                    pointers = (records, 0, 0x003b9768, second)
                for i, ptr in enumerate(pointers):
                    store(buckets + 4 * i, ptr)
            store(frame, returns[scenario % len(returns)])
            slots = (struct.pack("<II", head, filter_value) + type_tables + lookup
                     + struct.pack("<I", audio) + character_types)
            yield entry, regs, slots, memory, expected_table_result


def execute(exe, inputs, temp):
    path = temp / "request.bin"
    path.write_bytes(inputs)
    with path.open("rb") as file:
        return subprocess.check_output([exe], stdin=file, timeout=30)


def validate(result, cases):
    size = 44 + SLOTS_SIZE + SIZE
    require(len(result) == len(cases) * size, "truncated host result")
    for index, (entry, regs, slots, memory, expected_table_result) in enumerate(cases):
        pos = index * size
        state = struct.unpack_from("<11I", result, pos)
        head, filter_value = struct.unpack_from("<II", slots)
        after_head, after_filter = struct.unpack_from("<II", result, pos + 44)
        cleanup = {"0x002de8b0": 4, "0x002de920": 4, "0x002f4cb2": 4,
                   "0x0033f199": 8, "0x0034c50e": 12, "0x002f56db": 8,
                   "0x00341b2d": 4, "0x00380f37": 4, "0x00380e30": 8, "0x001664b0": 4,
                   "0x00162d00": 4, "0x00236cf0": 4}.get(entry, 0)
        expected_pc = struct.unpack_from("<I", memory, regs[7] - BASE)[0]
        require(state[7] == regs[7] + 4 + cleanup and state[8] == expected_pc,
                f"return stack differs at {entry}")
        require(after_head == head, f"head slot was written at {entry}")
        expected_slots = bytearray(slots)
        if entry == "0x002f4cb2":
            struct.pack_into("<I", expected_slots, 4, struct.unpack_from("<I", memory, regs[7] - BASE + 4)[0])
        if entry == "0x0031acb1":
            struct.pack_into("<I", expected_slots, 8 + TYPE_TABLES_SIZE + LOOKUP_TABLE_SIZE, regs[2])
        require(result[pos + 44:pos + 44 + SLOTS_SIZE] == expected_slots, f"fixed guest slots differ at {entry}")
        if expected_table_result is not None:
            require(state[0] == expected_table_result, f"table search returned a different record at {entry}")
        if entry == "0x002f4cb2":
            value = struct.unpack_from("<I", memory, regs[7] - BASE + 4)[0]
            require(state[0] == filter_value and state[2] == value and after_filter == value,
                    "filter guest DWORD exchange differs")
        else:
            require(after_filter == filter_value, f"filter slot was written at {entry}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail image for native i386 comparison")
    args = parser.parse_args()
    paths, dispatch = [], []
    for entry, (_, digest) in BODIES.items():
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"body label differs at {entry}")
        symbol = {"0x002f4cb2": "XAPILIB__SetUnhandledExceptionFilter",
                  "0x0037fc73": "XAPILIB__GetTypeInformation_4"}.get(entry, f"FUN_{entry[2:]}")
        paths.append(path)
        dispatch.append(f"        case {entry}u: {symbol}(guest); break;")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-leaf-native-") as directory:
        temp = Path(directory)
        fixture = temp / "fixture.cpp"
        fixture.write_text(FIXTURE.replace("@DISPATCH@", "\n".join(dispatch)), encoding="utf-8")
        oracle, returns, suffix = (native_oracle(temp, args.xbe.read_bytes()) if args.xbe else
                                   (None, (0x8048100, 0x8048200), b"synthetic-suffix\0".ljust(SUFFIX_SIZE, b"\0")))
        cases = list(corpus(returns))
        model_requests = b"".join(
            struct.pack("<12I", i, *regs) + slots + suffix + memory
            for i, (_, regs, slots, memory, _) in enumerate(cases)
        )
        native_size = 40 + SLOTS_SIZE + SIZE
        if oracle:
            native_requests = b"".join(
                struct.pack("<12I", i, *regs) + memory + slots
                for i, (_, regs, slots, memory, _) in enumerate(cases)
            )
            try:
                reference = execute(oracle, native_requests, temp)
            except subprocess.CalledProcessError as error:
                index = len(error.output) // native_size
                raise ValueError(f"retail runner failed at {cases[index][0]} case {index % 12}") from error
            require(len(reference) == len(cases) * native_size, "truncated retail result")
        previous = None
        for opt in ("-O0", "-O2"):
            model = temp / "model"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", ROOT / "include", fixture, *paths, "-o", model],
                           check=True, timeout=60)
            result = execute(model, model_requests, temp)
            validate(result, cases)
            require(previous is None or result == previous, "optimization changed the modeled state")
            previous = result
            if oracle:
                for i, (entry, *_rest) in enumerate(cases):
                    x, y = i * (44 + SLOTS_SIZE + SIZE), i * native_size
                    actual = struct.unpack_from("<11I", result, x)
                    expected = struct.unpack_from("<10I", reference, y)
                    context = f"{entry} case {i % 12} {opt}"
                    require(actual[:9] == expected[:9], f"{context} register or return differs")
                    require((actual[9] ^ expected[9]) & actual[10] == 0, f"{context} flags differ")
                    require(result[x + 44 + SLOTS_SIZE:x + 44 + SLOTS_SIZE + SIZE] == reference[y + 40:y + 40 + SIZE],
                            f"{context} memory differs")
                    require(result[x + 44:x + 44 + SLOTS_SIZE] == reference[y + 40 + SIZE:y + native_size],
                            f"{context} slots differ")
            print(f"PASS {opt}: {len(BODIES)} linked leaf objects, {len(cases)} cases" +
                  (" against retail x86" if oracle else ""))


if __name__ == "__main__":
    main()
