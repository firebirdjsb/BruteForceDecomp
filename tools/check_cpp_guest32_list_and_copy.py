#!/usr/bin/env python3
"""Link guest list/copy models and compare observable data and EAX."""
import argparse
import hashlib
import json
from pathlib import Path
import random
import shutil
import struct
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections, target
from source_layout import source_path

BASE = 0x00420000
SIZE = 4096
COPY = {
    # Record size, DF-sensitive string move, EDI rather than EAX output slot,
    # and the exact (offset, byte width) sequence within each record.
    0x0001D510: (64, True, False, [(i, 4) for i in range(0, 64, 4)]),
    0x0008F4F0: (40, True, False, [(i, 4) for i in range(0, 40, 4)]),
    0x000B18E0: (44, True, False, [(i, 4) for i in range(0, 44, 4)]),
    0x001D6690: (28, True, False, [(i, 4) for i in range(0, 28, 4)]),
    0x001D6D60: (52, True, False, [(i, 4) for i in range(0, 52, 4)]),
    0x002634D0: (20, True, False, [(i, 4) for i in range(0, 20, 4)]),
    0x001D6840: (12, False, False, [(0, 4), (4, 4), (8, 4)]),
    0x0024AD20: (12, False, False, [(0, 4), (4, 4), (8, 4)]),
    0x0024AA10: (16, False, False, [(0, 4), (4, 4), (8, 4), (12, 4)]),
    0x001D65F0: (16, False, True, [(0, 4), (4, 1), (8, 4), (12, 4)]),
    0x001D6640: (16, False, True, [(0, 4), (4, 4), (8, 4), (12, 1)]),
    0x001D6BF0: (12, False, True, [(0, 4), (4, 4), (8, 1), (9, 1)]),
    0x001D7E10: (16, False, False, [(0, 4), (4, 4), (8, 4), (12, 4)]),
    0x001D8180: (20, False, False, [(0, 4), (4, 4), (8, 4), (12, 4), (16, 4)]),
    0x001D64E0: (24, False, False, [(0, 4), (4, 4), (8, 4), (12, 4), (16, 4), (20, 4)]),
    0x001D67A0: (28, False, False, [(0, 4), (4, 4), (8, 4), (12, 4), (16, 4), (20, 4), (24, 4)]),
    0x001D84B0: (16, False, True, [(0, 4), (4, 4), (8, 4), (12, 1), (13, 1)]),
    0x001D6B00: (24, False, True, [(0, 4), (4, 4), (8, 4), (12, 1), (13, 1), (16, 4), (20, 4)]),
    0x001328E0: (20, False, True, [(0, 4), (4, 4), (8, 4), (12, 4), (16, 1)]),
}
AUDIO = {0x003118C0, 0x00315F72, 0x0031AA11, 0x0031AA47, 0x0031AE9C}


# Forward shift takes owner/output/destination/source from the four stack DWORDs.
SHIFT = {
    0x0001C930: 16,
    0x001B6D40: 10,
    0x001B7330: 7,
    0x001B7660: 8,
    0x001B99C0: 13,
    0x002463A0: 6,
    0x002633D0: 5,
}
FORWARD = {0x002E0090, 0x00176700}
FIXED = {
    0x001667C0: (648, 4),
    0x001668B0: (120, 4),
    0x001CAB70: (128, 4),
    0x001CAB20: (60, 1),
}


def packet(values, memory):
    return struct.pack(f"<{len(values)}I", *values) + memory


def write(memory, address, word, width=4):
    offset = address - BASE
    memory[offset:offset + width] = word.to_bytes(width, "little")


def cases():
    rng = random.Random(0x3118C0)
    seed = bytes(rng.randrange(256) for _ in range(SIZE))
    for entry, (stride, string_move, in_edi, accesses) in COPY.items():
        for count in (0, 1, 3):
            for df in (0, 1):
                first = BASE + 0x600
                last = first + count * stride
                for dst in (last + 4, last - 1, BASE + 0x900):
                    slot = dst - stride if count else BASE + 0x200
                    expected = bytearray(seed)
                    for row in range(1, count + 1):
                        for offset, width in accesses:
                            offset = -offset if string_move and df else offset
                            source = last - row * stride + offset - BASE
                            dest = dst - row * stride + offset - BASE
                            expected[dest:dest + width] = expected[source:source + width]
                    write(expected, slot, dst - count * stride)
                    host = (entry, slot, first, last, dst, df)
                    guest = (entry, 0 if in_edi else slot, 0, slot if in_edi else 0, df,
                             first, last, dst, 0)
                    yield f"{entry:#x}/count={count}/df={df}/dst={dst:#x}", host, guest, seed, expected, slot

    for entry, words in {**SHIFT, 0x00236EC0: 2}.items():
        stride = words * 4
        source = BASE + 0x680
        for df in (0, 1):
            for count in (0, 1, 3):
                for destination in (source, source - 1, source + 4, BASE + 0x900):
                    # End pointer can be overwritten during copying. The output
                    # store may also alias the updated owner field.
                    owner = destination - 8
                    slot = owner + 8 if count % 2 else BASE + 0x100
                    initial = bytearray(seed)
                    write(initial, owner + 8, source + count * stride)
                    expected = initial.copy()
                    if destination != source:
                        for record in range(count):
                            for word in range(words):
                                offset = record * stride + (word * -4 if df and entry in SHIFT else word * 4)
                                src = source + offset - BASE
                                dst = destination + offset - BASE
                                expected[dst:dst + 4] = expected[src:src + 4]
                        write(expected, owner + 8, destination + count * stride)
                    write(expected, slot, destination)
                    if entry in SHIFT:
                        host = (entry, owner, slot, destination, source, df)
                        guest = (entry, 0, 0, 0, df, owner, slot, destination, source)
                    else:
                        host = (entry, slot, owner, destination, source, 0)
                        guest = (entry, slot, 0, 0, df, destination, source, 0, 0, owner)
                    yield f"{entry:#x}/shift/{count}/{df}/{destination:#x}", host, guest, initial, expected, slot

    for entry in sorted(FORWARD):
        first = BASE + 0x600
        for count in (0, 1, 3):
            for destination in (first, first - 1, first + 4, BASE + 0x900):
                slot = destination + 4
                last = first + count * 16
                expected = bytearray(seed)
                for offset in range(0, count * 16, 4):
                    src = first + offset - BASE
                    dst = destination + offset - BASE
                    expected[dst:dst + 4] = expected[src:src + 4]
                write(expected, slot, destination + count * 16)
                host = (entry, slot, first, last, destination, 0)
                guest = (entry, slot, 0, 0, 0, first, last, destination, 0)
                yield f"{entry:#x}/forward/{count}/{destination:#x}", host, guest, seed, expected, slot

    for entry, (size, first_width) in FIXED.items():
        source = BASE + 0x600
        for destination in (source, source - 1, source + 1, source + 4, BASE + 0xa00):
            expected = bytearray(seed)
            if first_width == 1:
                expected[destination - BASE] = expected[source - BASE]
            for offset in range(0 if first_width == 4 else 4, size, 4):
                src = source + offset - BASE
                dst = destination + offset - BASE
                expected[dst:dst + 4] = expected[src:src + 4]
            host = (entry, destination, source, 0, 0, 0)
            guest = (entry, destination, source, 0, 0, 0, 0, 0, 0)
            yield f"{entry:#x}/fixed/{destination:#x}", host, guest, seed, expected, destination

    def byte_copy(initial, source, destination, size, df):
        result = bytearray(initial)
        step = -1 if df else 1
        words, tail = divmod(size, 4)
        accesses = [(step * 4 * i, 4) for i in range(words)]
        accesses.extend((step * (words * 4 + i), 1) for i in range(tail))
        for offset, width in accesses:
            src = source + offset - BASE
            dst = destination + offset - BASE
            result[dst:dst + width] = result[src:src + width]
        return result

    source, context, slot = BASE + 0x680, BASE + 0x420, BASE + 0x200
    for size in (0, 1, 3, 4, 5, 6, 7, 13):
        for df in (0, 1):
            for destination in (source - 1, source + 1, context):
                initial = bytearray(seed)
                write(initial, context + 16, slot)
                write(initial, slot, destination - 3)
                expected = byte_copy(initial, source, destination, size, df)
                host = (0x0031B21F, context, 3, source, size, df)
                guest = (0x0031B21F, 0, context, 0, df, 3, source, size, 0)
                yield f"31b21f/{size}/{df}/{destination:#x}", host, guest, initial, expected, size
                for available in (max(size - 1, 0), size):
                    initial = bytearray(seed)
                    write(initial, context, destination)
                    write(initial, context + 4, available)
                    expected = initial.copy()
                    if available >= size:
                        expected = byte_copy(initial, source, destination, size, df)
                        index = context - BASE
                        cursor, remaining = struct.unpack_from("<II", expected, index)
                        write(expected, context, (cursor + size) & 0xffffffff)
                        write(expected, context + 4, (remaining - size) & 0xffffffff)
                    host = (0x00352E8D, context, source, size, 0, df)
                    guest = (0x00352E8D, 0, context, 0, df, source, size, 0, 0)
                    yield (f"352e8d/{size}/{available}/{df}/{destination:#x}", host, guest,
                           initial, expected, context)

    node, next_node, previous, head = (BASE + offset for offset in (0x200, 0x300, 0x400, 0x500))

    def audio(entry, args, ecx, stack, fields, changes, eax):
        memory = bytearray(seed)
        for address, value in fields:
            write(memory, address, value)
        expected = memory.copy()
        for address, value, width in changes:
            write(expected, address, value, width)
        host = (entry, *args, *(0 for _ in range(5 - len(args))))
        guest = (entry, 0, ecx, 0, 0, *stack, *(0 for _ in range(4 - len(stack))))
        return f"{entry:#x}/{len(fields)}/{eax:#x}", host, guest, memory, expected, eax

    self_link = [(node, node), (node + 4, node)]
    linked = [(node, next_node), (node + 4, previous)]
    unlink = [(next_node + 4, previous, 4), (previous, next_node, 4),
              (node + 4, node, 4), (node, node, 4)]
    yield audio(0x3118C0, (node,), 0, (node,), self_link, [], node)
    yield audio(0x3118C0, (node,), 0, (node,), linked, unlink, node)
    # The first store aliases the node's next field, which must be reloaded.
    yield audio(0x3118C0, (node,), 0, (node,), [(node, node - 4), (node + 4, previous)],
                [(previous, previous, 4), (node + 4, node, 4), (node, node, 4)], node)
    ecx = BASE + 0x318
    insert_head = ecx + 0x6E8
    yield audio(0x315F72, (ecx, node), ecx, (node,), [(node + 8, 2)], [], 1)
    yield audio(0x315F72, (ecx, node), ecx, (node,), [(node + 8, 0), (insert_head + 4, previous)],
                [(node, insert_head, 4), (node + 4, previous, 4), (previous, node, 4),
                 (insert_head + 4, node, 4)], 1)
    for successor in (next_node, node):
        insert = [(node + 4, head, 4), (node, successor, 4), (successor + 4, node, 4),
                  (node if successor == node else head, node, 4), (node + 12, 0, 4)]
        fields = [(head, successor)]
        args = (node, 0xFEDDABCD, head)
        yield audio(0x31AA47, args, 0, args, fields, insert + [(node + 8, args[1], 4)], node)
        args = (node, 0xFEDDABCD, 0xABCD1234, head)
        yield audio(0x31AA11, args, 0, args, fields,
                    insert + [(node + 16, 0, 4), (node + 8, 0xABCD, 2), (node + 10, 0x1234, 2)], node)
    yield audio(0x31AE9C, (head, node), 0, (head, node),
                linked + [(node + 8, 0xFFFFFFFC), (head + 8, 5)], [(head + 8, 1, 4), *unlink], head)
    yield audio(0x31AE9C, (node, node), 0, (node, node),
                self_link + [(node + 8, 0xA0000000)], [(node + 8, 0x40000000, 4)], node)


def read_retail(xbe, doc):
    raw = xbe.read_bytes()
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
    layout = sections(raw)

    def read(va, size):
        offset = file_offset(layout, va, size)
        return raw[offset:offset + size]

    result = {}
    for entry, evidence in doc["bodies"].items():
        ranges = [(int(start, 16), size) for start, size in evidence["ranges"]]
        chunks = [(va, read(va, size)) for va, size in ranges]
        require(hashlib.sha256(b"".join(chunk for _, chunk in chunks)).hexdigest().upper() ==
                evidence["sha256"], f"retail body hash changed at {entry}")
        for address, pop in evidence["returns"]:
            opcode = b"\xc2" + pop.to_bytes(2, "little") if pop else b"\xc3"
            require(read(int(address, 16), len(opcode)) == opcode, f"retail RET changed at {address}")
        result.update(chunks)
    call = doc["direct_call"]
    site = int(call["site"], 16)
    require(target(site, read(site, 5)) == int(call["callee"], 16), "retail unlink call changed")
    return result


# The optional Linux runner executes only the pinned functions, with isolated
# data and no game runtime. It compares memory plus EAX, with flat segments.
START = r"""
.globl _start
.section .bss
input: .zero 40
result: .zero 4
.section .guest,"aw"
.zero 4096
.section .text
read_exact:
    mov $3,%eax
    xor %ebx,%ebx
    int $0x80
    test %eax,%eax
    jle fail
    add %eax,%ecx
    sub %eax,%edx
    jne read_exact
    ret
_start:
    mov $input,%ecx
    mov $40,%edx
    call read_exact
    mov $0x420000,%ecx
    mov $4096,%edx
    call read_exact
    pushl input+32
    pushl input+28
    pushl input+24
    pushl input+20
    cmpl $0,input+16
    je invoke
    std
invoke:
    mov input+4,%eax
    mov input+8,%ecx
    mov input+12,%edi
    mov input+36,%ebx
    call *input
    cld
    mov %eax,result
    mov $4,%eax
    mov $1,%ebx
    mov $result,%ecx
    mov $4,%edx
    int $0x80
    mov $4,%eax
    mov $1,%ebx
    mov $0x420000,%ecx
    mov $4096,%edx
    int $0x80
    mov $1,%eax
    xor %ebx,%ebx
    int $0x80
fail:
    mov $1,%eax
    mov $1,%ebx
    int $0x80
"""


def native_runner(directory, bodies):
    assembly = START
    linker = ["ld", "-m", "elf_i386", "--section-start=.guest=0x420000"]
    pages = set()
    for address, chunk in sorted(bodies.items()):
        page = address & ~0xFFF
        section = f".retail_{page:x}"
        if page not in pages:
            linker.append(f"--section-start={section}={page:#x}")
            pages.add(page)
        name = f"body_{address:x}.bin"
        (directory / name).write_bytes(chunk)
        assembly += f'\n.section {section},"ax"\n.org {address - page:#x}\n.incbin "{name}"\n'
    (directory / "retail.s").write_text(assembly, encoding="utf-8")
    subprocess.run(["as", "--32", "-o", "retail.o", "retail.s"], cwd=directory, check=True, timeout=30)
    subprocess.run([*linker, "-o", "retail", "retail.o"], cwd=directory, check=True, timeout=30)
    return directory / "retail"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--retail-native", action="store_true", help="run pinned x86 on a Linux host with ELF32 support")
    args = parser.parse_args()
    if args.retail_native and not args.xbe:
        parser.error("--retail-native needs --xbe")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    doc = json.loads((ROOT / "metadata/cpp_guest32_list_and_copy_20261112.json").read_text(encoding="utf-8"))
    require(doc["original_xbe_sha256"] == XBE_SHA256, "retail identity changed")
    require({int(entry, 16) for entry in doc["bodies"]} ==
            set(COPY) | AUDIO | set(SHIFT) | FORWARD | set(FIXED) | {0x00236EC0, 0x0031B21F, 0x00352E8D}, "model inventory changed")
    paths = []
    for entry, evidence in doc["bodies"].items():
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (evidence["sha256"], False),
                f"source body identity changed at {entry}")
        paths.append(str(path))
    raw = read_retail(args.xbe, doc) if args.xbe else None
    with tempfile.TemporaryDirectory(prefix="bf-guest-list-copy-") as folder:
        directory = Path(folder)
        retail = native_runner(directory, raw) if args.retail_native else None
        model = directory / "model.exe"
        fixture = ROOT / "tests/fixtures/guest32_list_and_copy_20261112.cpp"
        suite = list(cases())
        for opt in ("-O0", "-O2"):
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", str(ROOT / "include"), str(fixture), *paths, "-o", str(model)],
                           check=True, timeout=60)
            for name, host, guest, initial, expected, eax in suite:
                observed = subprocess.check_output([str(model)], input=packet(host, initial), timeout=10)
                require(observed == packet((eax,), expected), f"{opt} fixture differs: {name}")
                if retail:
                    guest_input = (*guest, 0) if len(guest) == 9 else guest
                    original = subprocess.check_output([str(retail)], input=packet(guest_input, initial), timeout=10)
                    require(observed == original, f"{opt} original x86 differs: {name}")
            oracle = " and retail x86" if retail else ""
            print(f"PASS {opt}: linked {len(paths)} models, {len(suite)} cases against fixtures{oracle}")


if __name__ == "__main__":
    main()
