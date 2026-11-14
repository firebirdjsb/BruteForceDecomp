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
TABLES_SIZE = 32
SLOTS_SIZE = 8 + TABLES_SIZE
NATIVE = ROOT / "tests/fixtures/guest32_constructors_native.s"
FIXTURE = r"""
#include "bf_xbe_guest32_string_leaves.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

static std::uint8_t memory[0x10000];
static std::uint32_t head, filter;
static std::uint8_t suffix[32], type_tables[32];
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
    # Keep fixed-address configuration slots outside the synthetic data/stack span.
    asm = NATIVE.read_text(encoding="ascii").replace(
        "    pushl request+40", """    mov $3, %eax
    xor %ebx, %ebx
    mov $slots, %ecx
    mov $40, %edx
    int $0x80
    cmp $40, %eax
    jne failed
    mov slots, %eax
    mov %eax, 0x414b48
    mov slots+4, %eax
    mov %eax, 0x4a90dc
    cld
    mov $slots+8, %esi
    mov $0x37eca4, %edi
    mov $8, %ecx
    rep movsl

    pushl request+40""").replace(
        "    jmp _start", """    mov 0x414b48, %eax
    mov %eax, slots
    mov 0x4a90dc, %eax
    mov %eax, slots+4
    mov $0x37eca4, %esi
    mov $slots+8, %edi
    mov $8, %ecx
    rep movsl
    mov $4, %eax
    mov $1, %ebx
    mov $slots, %ecx
    mov $40, %edx
    int $0x80
    cmp $40, %eax
    jne failed
    jmp _start""")
    sources = temp / "oracle.s"
    sources.write_text(asm + "\n.lcomm slots, 40\n" + "\n".join(sections_asm), encoding="ascii")
    script = temp / "oracle.ld"
    script.write_text("ENTRY(_start)\nSECTIONS {\n" + "\n".join(sections_ld) +
                      "\n.type_tables 0x37eca4 (NOLOAD) : { . += 32; }\n"
                      ".head 0x414b48 (NOLOAD) : { . += 4; }\n"
                      ".guest 0x460000 (NOLOAD) : { . += 0x10000; }\n"
                      ".filter 0x4a90dc (NOLOAD) : { . += 4; }\n"
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
            type_tables = bytearray(TABLES_SIZE)
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
            store(frame, returns[scenario % len(returns)])
            yield entry, regs, head, filter_value, type_tables, memory, expected_table_result


def execute(exe, inputs, temp):
    path = temp / "request.bin"
    path.write_bytes(inputs)
    with path.open("rb") as file:
        return subprocess.check_output([exe], stdin=file, timeout=30)


def validate(result, cases):
    size = 44 + SLOTS_SIZE + SIZE
    require(len(result) == len(cases) * size, "truncated host result")
    for index, (entry, regs, head, filter_value, type_tables, memory, expected_table_result) in enumerate(cases):
        pos = index * size
        state = struct.unpack_from("<11I", result, pos)
        after_head, after_filter = struct.unpack_from("<II", result, pos + 44)
        cleanup = {"0x002de8b0": 4, "0x002de920": 4, "0x002f4cb2": 4,
                   "0x0033f199": 8, "0x0034c50e": 12, "0x002f56db": 8,
                   "0x00341b2d": 4, "0x00380f37": 4}.get(entry, 0)
        expected_pc = struct.unpack_from("<I", memory, regs[7] - BASE)[0]
        require(state[7] == regs[7] + 4 + cleanup and state[8] == expected_pc,
                f"return stack differs at {entry}")
        require(after_head == head, f"head slot was written at {entry}")
        require(result[pos + 52:pos + 44 + SLOTS_SIZE] == type_tables, f"table was written at {entry}")
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
            struct.pack("<14I", i, *regs, head, filter_value) + tables + suffix + memory
            for i, (_, regs, head, filter_value, tables, memory, _) in enumerate(cases)
        )
        native_size = 40 + SLOTS_SIZE + SIZE
        if oracle:
            native_requests = b"".join(
                struct.pack("<12I", i, *regs) + memory + struct.pack("<II", head, filter_value) + tables
                for i, (_, regs, head, filter_value, tables, memory, _) in enumerate(cases)
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
