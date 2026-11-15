#!/usr/bin/env python3
"""Link the guest hash lookup to its retail hash model and compare x86 effects."""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_d3d_guest_kick import FIXTURE, FLAGS, RETURN, STACK, emulate, outputs, pairs, words
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections, target
from source_layout import source_path

CALLER = 0x183530
HASH = 0x2383B0
BODIES = {
    CALLER: ("6A79730AC8DFA4DF3AFC3C588E39AF990C5D7F1D4604C42F155C6EA25B47F68D",
             ((CALLER, 29), (0x183550, 22))),
    HASH: ("D410734EA4A6CB1222DACFB5476C267844303F561A7367F821575587A489FA6C",
           ((HASH, 57),)),
}
BASE_TABLE = 0x3BC150
BYTE_TABLE = 0x3BC550
TABLE_SIZE = 0x480
OBJECT = 0x466000
RECORDS = 0x467001
STRING = 0x469005


def retail(image):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail image")
    layout = sections(image)
    chunks = {}
    for entry, (digest, ranges) in BODIES.items():
        body = []
        for address, size in ranges:
            offset = file_offset(layout, address, size)
            chunks[address] = image[offset:offset + size]
            body.append(chunks[address])
        require(hashlib.sha256(b"".join(body)).hexdigest().upper() == digest,
                f"retail body changed at {entry:#x}")
    require(target(0x183536, chunks[CALLER][6:11]) == HASH, "retail hash call changed")
    offset = file_offset(layout, BASE_TABLE, TABLE_SIZE)
    return chunks, image[offset:offset + TABLE_SIZE]


def hash_bytes(data, tables):
    value = 0xffffffff
    for byte in data:
        signed = byte if byte < 128 else byte - 256
        normalized = tables[BYTE_TABLE - BASE_TABLE + signed]
        index = (normalized ^ value) & 255
        value = (value >> 8) ^ struct.unpack_from("<I", tables, index * 4)[0]
    return value ^ 0xffffffff


def corpus(tables):
    for name, data, where in (
        ("null-empty-range", None, None),
        ("null-key", None, 0),
        ("empty-miss", b"", None),
        ("ascii-first", b"camp", 0),
        ("high-byte-last", b"\x80\xffT", 2),
        ("high-byte-miss", b"\xfe\x81", None),
        ("stack-nul", b"", 1),
        ("stack-byte", b"\xfe", 1),
        ("stack-records", b"", 0),
        ("wrapped-records", b"wrap", 1),
    ):
        for direction in (0, 0x400):
            begin = RECORDS
            count = 0 if name == "null-empty-range" else 3
            edi = 0x73482917
            if name in ("stack-nul", "stack-byte"):
                edi = 0 if not data else 0xfe
            if name == "stack-records":
                begin, count, edi = STACK - 8, 1, 0
            if name == "wrapped-records":
                begin, count = 0xfffffff8, 2
            pointer = 0 if data is None else STRING
            if name in ("stack-nul", "stack-byte"):
                pointer = STACK - 8
            regs = (OBJECT, 0x98a2b3c4, 0x56a0fedc, pointer, 0x5678dcba, edi,
                    0xfef0a0b0, STACK, CALLER, 0x893 | direction, FLAGS)
            memory = {BASE_TABLE + i: value for i, (value,) in
                      zip(range(0, TABLE_SIZE, 4), struct.iter_unpack("<I", tables))}
            memory.update({STACK: RETURN, STACK - 12: 0, OBJECT + 0xb4: begin,
                           OBJECT + 0xb8: (begin + count * 8) & 0xffffffff})
            if pointer == STRING:
                for i in range(0, len(data) + 1, 4):
                    memory[STRING + i] = int.from_bytes(data[i:i + 4], "little")
            key = hash_bytes(data or b"", tables)
            values = [0x11223344, 0x8000000e, 0xabcdef05]
            for i in range(count):
                address = (begin + i * 8) & 0xffffffff
                memory.update({address: key if i == where else key ^ (1 << i),
                               address + 4: values[i]})
            expected = (regs[4] if name == "stack-records" else values[where]) if where is not None else 0
            yield name, regs, memory, expected


def host_fixture():
    # The common wire format stores DWORDs. Expand them into byte-backed
    # fixture memory so a guest byte read can observe a prior stack DWORD write.
    prefix = r"""
static Word read_memory(Word address, unsigned size)
{
    Word value = 0;
    for (unsigned i = 0; i < size; ++i)
        value |= memory[address + i] << (i * 8u);
    return value;
}
static void write_memory(Word address, Word value)
{
    for (unsigned i = 0; i < 4u; ++i)
        memory[address + i] = (value >> (i * 8u)) & 0xffu;
}
std::uint8_t bf_guest_read_u8(Word address)
{
    const auto value = read_memory(address, 1u);
    effects.push_back({1u, address, value});
    return static_cast<std::uint8_t>(value);
}
"""
    return (FIXTURE.replace("bf_d3d_guest_kick.h", "bf_xbe_guest32_string_leaves.h")
            .replace("Word bf_guest_read_u32", prefix + "\nWord bf_guest_read_u32")
            .replace("auto value = memory[address];", "auto value = read_memory(address, 4u);")
            .replace("memory[address] = value;", "write_memory(address, value);")
            .replace("memory.emplace(address, read_word());", "write_memory(address, read_word());")
            .replace("@DISPATCH@", "case 0x183530u: FUN_00183530(state); break;"))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    sources = []
    for entry, (digest, _) in BODIES.items():
        path = source_path(ROOT, f"{entry:#010x}")
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"source original-body label differs at {entry:#x}")
        sources.append(path)
    bodies, tables = (retail(args.xbe.read_bytes()) if args.xbe else
                      (None, bytes((i * 53 + (i >> 3)) & 255 for i in range(TABLE_SIZE))))
    cases = list(corpus(tables))
    inputs = b"".join(pairs(list(memory.items())) + pairs([]) + words(regs)
                      for _, regs, memory, _ in cases)
    references = ([emulate(bodies, regs, memory, [], allowed_widths=(1, 4))
                   for _, regs, memory, _ in cases] if bodies else None)
    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-guest-hash-lookup-") as directory:
        folder = Path(directory)
        fixture = folder / "lookup.cpp"
        fixture.write_text(host_fixture(), encoding="utf-8")
        previous = None
        for opt in ("-O0", "-O2"):
            exe = folder / "lookup"
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", ROOT / "include", fixture, *sources, "-o", exe], check=True, timeout=60)
            data = subprocess.check_output([exe], input=inputs, timeout=10)
            require(previous is None or data == previous, "optimization changed modeled state")
            previous = data
            actual = list(outputs(data))
            require(len(actual) == len(cases), "missing fixture output")
            for i, ((name, regs, _, expected), (state, effects)) in enumerate(zip(cases, actual)):
                require(state[0] == expected and state[7:9] == (STACK + 4, RETURN),
                        f"{name}: wrong lookup or return state")
                require(state[9] & 0x400 == regs[9] & 0x400 and state[10] == FLAGS,
                        f"{name}: direction or flag mask differs")
                if references:
                    original, accesses = references[i]
                    require(state[:9] == tuple(original[:9]), f"{name}: registers differ")
                    require((state[9] ^ original[9]) & state[10] == 0, f"{name}: defined flags differ")
                    require(effects == accesses, f"{name}: ordered accesses differ")
            print(f"PASS {opt}: two linked hash lookup objects, {len(actual)} cases" +
                  (" against executed retail x86" if references else ""))


if __name__ == "__main__":
    main()
