#!/usr/bin/env python3
"""Link three D3D command guest models and compare against retail x86."""
import argparse
import hashlib
import json
from pathlib import Path
import random
import shutil
import struct
import subprocess
import tempfile

from check_cpp_direct_call_batches import ROOT, file_offset, require, sections, verify_sources, verify_xbe

MANIFEST = ROOT / "metadata/cpp_direct_call_batches/20261113_d3d_texture_state_writers.json"
GLOBAL = 0x0037B000
GLOBAL_SIZE = 0x4000
GUEST = 0x00420000
GUEST_SIZE = 0x3000
DEVICE = GUEST + 0x100
REQUEST = 0xF123ABCD
REFILL_CURSOR = GUEST + 0x1000
ENTRIES = (0x0036CD50, 0x00370CC0, 0x00370D10)


def write(globals_, guest, address, value):
    value &= 0xFFFFFFFF
    if GLOBAL <= address < GLOBAL + GLOBAL_SIZE:
        offset = address - GLOBAL
        require(offset % 4 == 0, f"unaligned global store {address:#x}")
        struct.pack_into("<I", globals_, offset, value)
    elif GUEST <= address < GUEST + GUEST_SIZE:
        offset = address - GUEST
        require(offset % 4 == 0, f"unaligned guest store {address:#x}")
        struct.pack_into("<I", guest, offset, value)
    else:
        raise ValueError(f"store outside modeled guest windows: {address:#x}")


def read(memory, base, address):
    offset = address - base
    require(0 <= offset <= len(memory) - 4 and offset % 4 == 0,
            f"read outside modeled window: {address:#x}")
    return struct.unpack_from("<I", memory, offset)[0]


def cases():
    rng = random.Random(0x370CC0)
    initial_globals = bytes(rng.randrange(256) for _ in range(GLOBAL_SIZE))
    initial_guest = bytes(rng.randrange(256) for _ in range(GUEST_SIZE))

    for entry in ENTRIES:
        stages = (0, 1, 3, 0x12) if entry != 0x0036CD50 else (0, 1, 7, 0x12345678)
        for stage in stages:
            state_address = ((0x0037BBA4 if entry == 0x00370CC0 else 0x0037BBA8) + stage * 0x80
                             if entry != 0x0036CD50 else None)
            for value in (0, 0x80000001, 0x12345678, 0xFFFFFFFF):
                modes = ("available", "refill", "state_alias", "device_alias")
                if entry == 0x0036CD50:
                    modes = ("available", "refill", "device_alias")
                for mode in modes:
                    globals_ = bytearray(initial_globals)
                    guest = bytearray(initial_guest)
                    if mode == "state_alias":
                        cursor, limit = state_address, state_address + 8
                    elif mode == "device_alias":
                        cursor, limit = DEVICE, DEVICE + 8
                    else:
                        cursor = GUEST + 0x800
                        limit = cursor if mode == "refill" else cursor + 0x20

                    write(globals_, guest, 0x0037DD88, DEVICE)
                    write(globals_, guest, 0x0037EC88, REQUEST)
                    write(globals_, guest, DEVICE, cursor)
                    write(globals_, guest, DEVICE + 4, limit)

                    expected_globals = bytearray(globals_)
                    expected_guest = bytearray(guest)
                    refill_count = 0
                    refill_half = 0
                    refill_full = 0
                    if cursor >= limit:
                        cursor = REFILL_CURSOR
                        refill_count = 1
                        refill_half = REQUEST >> 1
                        refill_full = REQUEST

                    if entry == 0x0036CD50:
                        command = (stage << 2) + 0x41940
                        payload = (((value >> 16) & 0xff) | ((value & 0xff) << 16) |
                                   (value & 0xff00ff00))
                    else:
                        command = ((stage << 6) + 0x41B24 if entry == 0x00370CC0
                                   else (stage << 2) + 0x40AE0)
                        payload = value
                    command &= 0xFFFFFFFF
                    write(expected_globals, expected_guest, cursor, command)
                    write(expected_globals, expected_guest, cursor + 4, payload)
                    cursor = (cursor + 8) & 0xFFFFFFFF
                    write(expected_globals, expected_guest, DEVICE, cursor)
                    if state_address is not None:
                        write(expected_globals, expected_guest, state_address, value)

                    header = struct.pack("<4I", entry, stage, value, REFILL_CURSOR)
                    packet = header + globals_ + guest
                    expected = (struct.pack("<4I", cursor, refill_count, refill_half, refill_full) +
                                expected_globals + expected_guest)
                    yield f"{entry:#x}/stage={stage:#x}/value={value:#x}/{mode}", packet, expected


START = r"""
.globl _start
.section .bss
input: .zero 16
result: .zero 16
.section .globals,"aw"
.zero 0x4000
.section .guest,"aw"
.zero 0x3000
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
write_exact:
    mov $4,%eax
    mov $1,%ebx
    int $0x80
    test %eax,%eax
    jle fail
    add %eax,%ecx
    sub %eax,%edx
    jne write_exact
    ret
_start:
    mov $input,%ecx
    mov $16,%edx
    call read_exact
    mov $0x37b000,%ecx
    mov $0x4000,%edx
    call read_exact
    mov $0x420000,%ecx
    mov $0x3000,%edx
    call read_exact
    cmpl $0x0036cd50,input
    jne register_entry
    push input+8
    push input+4
    call *input
    jmp entry_done
register_entry:
    mov input+4,%eax
    mov input+8,%ebx
    call *input
entry_done:
    mov %eax,result
    mov $result,%ecx
    mov $16,%edx
    call write_exact
    mov $0x37b000,%ecx
    mov $0x4000,%edx
    call write_exact
    mov $0x420000,%ecx
    mov $0x3000,%edx
    call write_exact
    mov $1,%eax
    xor %ebx,%ebx
    int $0x80
fail:
    mov $1,%eax
    mov $1,%ebx
    int $0x80
"""


def build_retail(folder, image, manifest):
    layout = sections(image)
    source = START
    link = ["ld", "-m", "elf_i386", "--section-start=.globals=0x37b000",
            "--section-start=.guest=0x420000", "--section-start=.retail_37000=0x370000",
            "--section-start=.retail_36000=0x360000",
            "--section-start=.refill=0x371e10"]
    for row in manifest["callers"]:
        for va_text, length in manifest["bodies"][row["entry"]]["ranges"]:
            va = int(va_text, 16)
            offset = file_offset(layout, va, length)
            name = f"retail_{va:x}.bin"
            (folder / name).write_bytes(image[offset:offset + length])
            section_base = va & 0xFFFF0000
            section_name = ".retail_36000" if section_base == 0x360000 else ".retail_37000"
            source += (f'\n.section {section_name},"ax"\n'
                       f'.org {va - section_base:#x}\n.incbin "{name}"\n')

    # Test-only replacement for 0x00371e10: log both pushed guest DWORDs and
    # return the injected cursor. It is not a refill implementation.
    source += r"""
.section .refill,"ax"
    incl result+4
    mov 4(%esp),%eax
    mov %eax,result+8
    mov 8(%esp),%eax
    mov %eax,result+12
    mov input+12,%eax
    ret $8
"""
    (folder / "retail.s").write_text(source, encoding="utf-8")
    subprocess.run(["as", "--32", "-o", "retail.o", "retail.s"], cwd=folder,
                   check=True, timeout=30)
    subprocess.run([*link, "-o", "retail", "retail.o"], cwd=folder,
                   check=True, timeout=30)
    return folder / "retail"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail XBE for native ELF32 comparison")
    args = parser.parse_args()
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    files = verify_sources(ROOT, manifest)
    image = args.xbe.read_bytes() if args.xbe else None
    if image:
        verify_xbe(image, [manifest])
        layout = sections(image)
        for row in manifest["callers"]:
            site = int(row["declarations"][0]["sites"][0], 16)
            offset = file_offset(layout, site - 9, 9)
            require(image[offset:offset + 9] == bytes.fromhex("a188ec370050d1e850"),
                    f"refill DWORD load/SHR/push order differs at {site:#x}")

    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    fixture = ROOT / "tests/fixtures/guest32_d3d_texture_state_writers_20261113.cpp"
    with tempfile.TemporaryDirectory(prefix="bf-d3d-texture-writers-") as directory:
        folder = Path(directory)
        retail = build_retail(folder, image, manifest) if image else None
        suite = list(cases())
        for optimization in ("-O0", "-O2"):
            model = folder / f"model_{optimization[2:]}.elf"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            optimization, "-I", str(ROOT / "include"), str(fixture),
                            *map(str, files), "-o", str(model)], check=True, timeout=60)
            for name, packet, expected in suite:
                observed = subprocess.check_output([str(model)], input=packet, timeout=10)
                require(observed == expected, f"{optimization} model mismatch: {name}")
                if retail:
                    original = subprocess.check_output([str(retail)], input=packet, timeout=10)
                    require(original == expected, f"{optimization} retail mismatch: {name}")
            oracle = "retail x86 and fixtures" if retail else "fixtures"
            print(f"PASS {optimization}: {len(files)} guest models, {len(suite)} cases against {oracle}")


if __name__ == "__main__":
    main()
