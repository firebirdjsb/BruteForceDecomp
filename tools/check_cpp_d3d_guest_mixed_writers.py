#!/usr/bin/env python3
"""Link mixed-input D3D guest models and optionally execute the pinned retail x86."""
import argparse
import json
from pathlib import Path
import random
import shutil
import struct
import subprocess
import tempfile

from check_cpp_direct_call_batches import ROOT, file_offset, require, sections, verify_xbe
from check_cpp_d3d_guest_texture_writers import START, GLOBAL, GLOBAL_SIZE, GUEST, GUEST_SIZE
from body_hash_labels import read_body_digest
from source_layout import source_path

MANIFEST = ROOT / "metadata/cpp_guest32_d3d_mixed_writers_20261113.json"
TABLE = 0x003b7000
DEVICE = GUEST + 0x100
CURSOR = GUEST + 0x1900
REFILL = GUEST + 0x2200
D3D_DEVICE = 0x37dd88
DIRTY = 0x37dd90
REQUEST = 0x37ec88
MASK = 0xffffffff


class Memory:
    def __init__(self, initial):
        self.blocks = {base: bytearray(data) for base, data in initial.items()}

    def locate(self, address, size):
        for base, data in self.blocks.items():
            if base <= address <= base + len(data) - size:
                return data, address - base
        raise ValueError(f"guest address outside fixture: {address:#x}")

    def load(self, address):
        data, offset = self.locate(address, 4)
        return struct.unpack_from("<I", data, offset)[0]

    def store(self, address, value):
        data, offset = self.locate(address, 4)
        struct.pack_into("<I", data, offset, value & MASK)

    def byte(self, address, value):
        data, offset = self.locate(address, 1)
        data[offset] = value & 255

    def snapshot(self):
        return b"".join(self.blocks.values())


def cases(entries):
    rng = random.Random(0x0036CCF0)
    initial = {base: bytes(rng.randrange(256) for _ in range(size))
               for base, size in ((GLOBAL, GLOBAL_SIZE), (GUEST, GUEST_SIZE), (TABLE, 0x1000))}
    modes = ("available", "refill", "device_alias", "global_alias")
    values = (0, 1, 0x000100fe, 0x000200d1, 0x00030003, 0x80000001, 0xffffffff)
    for entry in entries:
        for mode in modes:
            for index, value in enumerate(values):
                mem = Memory(initial)
                surface = GUEST + 0x1c00
                address = CURSOR
                if mode == "device_alias":
                    address = DEVICE
                if mode == "global_alias":
                    address = 0x37dfe0
                if mode == "global_alias" and entry == 0x36dcc0:
                    address = 0x37df94
                if mode == "global_alias" and entry == 0x370c50:
                    address = 0x37bb30 + (index * 32 + 6) * 4
                limit = address if mode == "refill" else address + 0x80
                request = 3 if index & 1 else 0xf123abcd
                state = 6
                reg = 0
                stack = [value, 0, 0, 0]
                surface_format = (0x2d, 0x2b, 0x31, 0x2f, 0x45, 0x80, 0xff)[index]
                refill_count = 0
                half = full = 0

                def space(cursor, limit, minimum=0):
                    nonlocal refill_count, half, full
                    if cursor < limit:
                        return cursor
                    refill_count += 1
                    full = max(minimum, mem.load(REQUEST))
                    half = max(minimum, mem.load(REQUEST) >> 1)
                    return REFILL

                def commands(cursor, *words):
                    for i, word in enumerate(words):
                        mem.store(cursor + i * 4, word)
                    return cursor + len(words) * 4

                for target, word in (
                    (D3D_DEVICE, DEVICE), (DEVICE, address), (DEVICE + 4, limit),
                    (DEVICE + 8, 0x80002000 | (index & 1)), (REQUEST, request),
                    (DEVICE + 0x15b4, surface), (DEVICE + 0x15b8, surface if index != 6 else 0),
                    (DEVICE + 0x36c, index % 3 == 0), (DEVICE + 0x514, 0xa0000010 if index & 1 else 0),
                    (0x37dfe4, value if index % 3 != 1 else 0), (0x37dfd4, 2 if index & 1 else 0),
                    (0x37e018, value), (DIRTY, 0x1000),
                ):
                    mem.store(target, word)
                mem.byte(surface + 0xd, surface_format)
                mem.byte(0x37b790 + surface_format, 0x23 if index % 3 != 2 else 0x41)

                if entry == 0x36ccf0:
                    reg = (0, 1, 3, 4, 0x12345678, 0x80000001, MASK)[index]
                    stack = [value, 0x80000000, 0x7fc12345, 0xff800000]
                elif entry == 0x36dcc0:
                    reg = DEVICE
                    slots = DEVICE + 0x15bc
                    records = tuple(GUEST + 0x1a00 + i * 0x20 for i in range(4))
                    last = 2 + (index & 1)
                    flags = (0, 1, 2, 4, 0x80000000, 0x80000004, MASK)[index]
                    mem.store(0x37df94, flags)
                    mem.store(slots, last)
                    for i, record in enumerate(records, start=1):
                        mem.store(slots + i * 4, record)
                        mem.store(record + 4, i * 0x10001)
                        mem.store(record + 8, 0x98765432 + i)
                    if index & 1:
                        mem.store(DEVICE + 0x15b4, records[0])
                elif entry == 0x36fb10:
                    record = GUEST + 0x1a00
                    used = (0x420, 0x419, 0x418, 0x428, 0x3d0, 0, 0x390)[index]
                    mem.store(DEVICE + 0x34c, record)
                    mem.store(record + 4, address - used)
                    mem.store(DEVICE + 8, 0x80 if index == 4 else 0x8000)
                    if mode == "refill":
                        # This variant adds 0x200 to the limit before comparing.
                        mem.store(DEVICE + 4, address - 0x200)
                    stack[0] = DEVICE if mode == "device_alias" else GUEST + 0x1b00
                elif entry == 0x3702e0 and mode == "global_alias":
                    # First packet overwrites the cull state that is then loaded for the tail.
                    mem.store(DEVICE, 0x37dfe4)
                    mem.store(DEVICE + 4, 0x37dff0)
                elif entry == 0x370b40:
                    reg = 33 if index == 6 else index
                elif entry == 0x370c50:
                    reg = index
                    stack[:2] = [state, value]
                elif entry == 0x371190:
                    reg = address
                    stack[0] = DEVICE

                packet = struct.pack("<7I", entry, reg, *stack, REFILL) + mem.snapshot()
                if entry == 0x36ccf0:
                    cursor = space(address, limit)
                    method = 0x1518 if reg == MASK else (reg + 0x1a0) * 16
                    eax = commands(cursor, 0x100000 + method, *stack)
                    mem.store(DEVICE, eax)
                elif entry == 0x36dcc0:
                    pairs = [(mem.load(record + 4), mem.load(record + 8)) for record in records[:last]]
                    pairs = pairs[-1:] + pairs[:-1]
                    for record, (first, second) in zip(records, pairs):
                        mem.store(record + 4, first)
                        mem.store(record + 8, second)
                    cursor = space(address, limit)
                    first = pairs[1][0]
                    commands(cursor, 0x40110, 0)
                    selected = mem.load(0x37df94) or 1
                    method = first | (3 if selected & 4 else selected & 3) | ((selected >> 28) & 8)
                    eax = commands(cursor + 8, 0x40100, (method << 5) | 1, 0x4012c, 0, 0x40100, 0)
                    if index & 1 or mem.load(0x37df94) == 0x80000000:
                        eax = commands(eax, 0x40130, 0)
                    else:
                        mem.store(DEVICE + 8, mem.load(DEVICE + 8) | 0x100)
                    eax = commands(eax, 0x40210, pairs[0][0])
                    mem.store(DEVICE, eax)
                elif entry == 0x36fb10:
                    flags = mem.load(DEVICE + 8)
                    count = max(0, (0x420 - used) // 8)
                    if not count:
                        eax = (0x420 - used + (7 if used > 0x420 else 0)) & MASK
                        mem.store(stack[0], used)
                    elif flags & 0x80:
                        eax = flags
                        mem.store(stack[0], used)
                    else:
                        mem.store(DEVICE + 8, flags | 0x80)
                        end = address + 4 + count * 4
                        limit = mem.load(DEVICE + 4) + 0x200
                        cursor = space(address, address, count * 4 + 0x208) if end >= limit else address
                        advanced = commands(cursor, 0x40000100 + (count << 18), *([0] * count))
                        mem.store(DEVICE, advanced)
                        eax = (advanced - mem.load(record + 4)) & MASK
                        mem.store(stack[0], eax)
                elif entry in (0x370260, 0x3702e0):
                    if entry == 0x3702e0:
                        cursor = space(mem.load(DEVICE), mem.load(DEVICE + 4))
                        mem.store(DEVICE, commands(cursor, 0x403a0, value))
                        value = mem.load(0x37dfe4)
                        mem.store(0x37dfe0, stack[0])
                    cursor = space(mem.load(DEVICE), mem.load(DEVICE + 4))
                    eax = commands(cursor, 0x40308, bool(value))
                    if value:
                        eax = commands(eax, 0x4039c, 0x404 + (mem.load(0x37dfe0) != value))
                    mem.store(DEVICE, eax)
                    mem.store(0x37dfe4, value)
                elif entry == 0x370600:
                    selected = value if index % 3 != 2 else 0
                    flags = mem.load(DEVICE + 8)
                    eax = flags
                    if selected != (flags & 1):
                        mem.store(DEVICE + 8, flags ^ 1)
                        cursor = space(address, limit)
                        eax = commands(cursor, 0x40110, 0, 0x40100, (selected << 5) | 8)
                        mem.store(DEVICE, eax)
                    mem.store(0x37e014, value)
                elif entry in (0x370680, 0x371190):
                    if entry == 0x370680:
                        mem.store(0x37e018, value)
                        cursor = space(address, limit)
                    else:
                        cursor = reg
                    method = 0x100001 | (0x10000000 if value else 0)
                    method |= 0x10000 if index & 1 else 0
                    method |= 0x1000 if surface_format in (0x2b, 0x2d, 0x2f, 0x31) else 0
                    eax = commands(cursor, 0x40290, method)
                    if entry == 0x370680:
                        mem.store(DEVICE, eax)
                elif entry == 0x370b40:
                    mem.store(0x37bba0 + reg * 0x80, value)
                    cursor = space(address, limit)
                    high = value >> 16
                    selector = {0: 0, 1: 0x8511, 2: 0x2400, 3: 0x8512}.get(high, 0x2401)
                    if high:
                        cursor = commands(cursor, 0x41964 + reg * 4, 0xff000000)
                    mem.byte(0x3b7e09 + reg, (reg if high else value) + 9)
                    advanced = commands(cursor, 0xc03c0 + reg * 16, *([selector] * 3))
                    mem.store(DEVICE, advanced)
                    old_mask = mem.load(DEVICE + 0x514)
                    bit = 1 << (reg % 32)
                    enabled = high in (1, 3)
                    new_mask = (old_mask & ~bit) | (bit if enabled else 0)
                    eax = mem.load(DIRTY) | 0x47f | (0x200 if enabled and not old_mask else 0)
                    mem.store(DEVICE + 0x514, new_mask)
                    mem.store(DIRTY, eax)
                elif entry == 0x370c50:
                    stage = reg + (index % 3 != 0)
                    if stage % 4:
                        cursor = space(address, limit)
                        advanced = commands(cursor, 0x41ad0 + 64 * stage + 4 * state, value)
                        mem.store(DEVICE, advanced)
                    mem.store(0x37bb30 + reg * 128 + state * 4, value)
                    eax = state
                else:
                    raise ValueError(f"unrecognized writer {entry:#x}")

                expected = struct.pack("<4I", eax, refill_count, half, full) + mem.snapshot()
                yield f"{entry:#x}/{mode}/{index}", packet, expected


def retail_runner(folder, image, manifest):
    layout = sections(image)
    before, rest = START.split("    cmpl $0x0036cd50,input", 1)
    _, after = rest.split("entry_done:\n", 1)
    before = (before.replace("input: .zero 16", "input: .zero 28")
              .replace("    mov $input,%ecx\n    mov $16,%edx", "    mov $input,%ecx\n    mov $28,%edx")
              .replace(".section .text", '.section .table,"aw"\n.zero 0x1000\n.section .text'))
    asm = before + """
    mov $0x3b7000,%ecx
    mov $0x1000,%edx
    call read_exact
    mov %esp,%ebp
"""
    for row in manifest["entries"]:
        entry = row["entry"]
        asm += "    cmpl $" + entry + f",input\n    je entry_{entry}\n"
    asm += "    jmp fail\n"
    for row in manifest["entries"]:
        asm += f'entry_{row["entry"]}:\n'
        for word in reversed(range(row["stack_words"])):
            asm += f"    pushl input+{8 + word * 4}\n"
        if row["register"]:
            asm += f'    mov input+4,%{row["register"]}\n'
        asm += "    call *input\n    jmp entry_done\n"
    asm += "entry_done:\n    cmp %ebp,%esp\n    jne fail\n" + after.replace(
        "    call write_exact\n    mov $1,%eax",
        "    call write_exact\n    mov $0x3b7000,%ecx\n    mov $0x1000,%edx\n"
        "    call write_exact\n    mov $1,%eax", 1)
    link = ["ld", "-m", "elf_i386", "--section-start=.globals=0x37b000",
            "--section-start=.guest=0x420000", "--section-start=.table=0x3b7000",
            "--section-start=.retail_36=0x360000", "--section-start=.retail_37=0x370000",
            "--section-start=.refill=0x371e10"]
    for row in manifest["entries"]:
        for va_text, length in manifest["bodies"][row["entry"]]["ranges"]:
            va = int(va_text, 16)
            offset = file_offset(layout, va, length)
            name = f"retail_{va:x}.bin"
            (folder / name).write_bytes(image[offset:offset + length])
            asm += (f'\n.section .retail_{va >> 16:x},"ax"\n'
                    f'.org {va & 0xffff:#x}\n.incbin "{name}"\n')

    # Test-only refill edge records the last two arguments and all invocations.
    asm += """
.section .refill,"ax"
    incl result+4
    mov 4(%esp),%eax
    mov %eax,result+8
    mov 8(%esp),%eax
    mov %eax,result+12
    mov input+24,%eax
    ret $8
"""
    (folder / "retail.s").write_text(asm, encoding="utf-8")
    subprocess.run(["as", "--32", "-o", "retail.o", "retail.s"], cwd=folder,
                   check=True, timeout=30)
    subprocess.run([*link, "-o", "retail", "retail.o"], cwd=folder,
                   check=True, timeout=30)
    return folder / "retail"


def verify_retail(image, manifest):
    verify_xbe(image, [manifest])
    layout = sections(image)

    def read(address, length):
        start = file_offset(layout, address, length)
        return image[start:start + length]

    tail = int(manifest["tail_site"], 16)
    opcode, displacement = struct.unpack("<Bi", read(tail, 5))
    require(opcode == 0xe9 and tail + 5 + displacement == int(manifest["tail_target"], 16),
            "FrontFace direct tail target changed")
    for row in manifest["entries"]:
        pop = row["stack_words"] * 4
        expected = b"\xc2" + struct.pack("<H", pop) if pop else b"\xc3"
        for site in row["ret_sites"]:
            require(read(int(site, 16), len(expected)) == expected, f"retail RET differs at {site}")


def compare(observed, expected, name):
    if observed == expected:
        return
    require(len(observed) == len(expected), f"{name}: wrong snapshot size")
    first = next(i for i, (actual, wanted) in enumerate(zip(observed, expected)) if actual != wanted)
    start = first & ~3
    raise ValueError(f"{name}: output byte {first:#x}, got {observed[start:start + 4].hex()}, "
                     f"expected {expected[start:start + 4].hex()}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail XBE for Linux ELF32 comparison")
    args = parser.parse_args()
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    entries = [int(row["entry"], 16) for row in manifest["entries"]]
    files = [source_path(ROOT, row["entry"]) for row in manifest["entries"]]
    require(len(entries) == len(set(entries)), "duplicate D3D entry")
    for entry, evidence in manifest["bodies"].items():
        source = source_path(ROOT, entry).read_text(encoding="utf-8")
        require(read_body_digest(source) == (evidence["sha256"], False),
                f"source body label changed at {entry}")
    image = args.xbe.read_bytes() if args.xbe else None
    if image:
        verify_retail(image, manifest)
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    fixture = ROOT / "tests/fixtures/guest32_d3d_mixed_writers_20261113.cpp"
    suite = list(cases(entries))
    with tempfile.TemporaryDirectory(prefix="bf-d3d-mixed-") as directory:
        folder = Path(directory)
        retail = retail_runner(folder, image, manifest) if image else None
        if retail:
            for name, packet, expected in suite:
                compare(subprocess.check_output([str(retail)], input=packet, timeout=10),
                        expected, f"retail {name}")
        for optimization in ("-O0", "-O2"):
            model = folder / f"model_{optimization[2:]}.exe"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            optimization, "-I", str(ROOT / "include"), str(fixture),
                            *map(str, files), "-o", str(model)], check=True, timeout=60)
            for name, packet, expected in suite:
                compare(subprocess.check_output([str(model)], input=packet, timeout=10),
                        expected, f"{optimization} model {name}")
            oracle = "retail x86 and fixtures" if retail else "fixtures"
            print(f"PASS {optimization}: {len(files)} linked models, {len(suite)} cases against {oracle}")


if __name__ == "__main__":
    main()
