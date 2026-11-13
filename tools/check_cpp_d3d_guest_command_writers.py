#!/usr/bin/env python3
"""Link D3D command writers and optionally compare pinned retail instructions."""
import argparse
import json
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

from check_cpp_direct_call_batches import ROOT, file_offset, require, sections, verify_sources, verify_xbe

MANIFEST = ROOT / "metadata/cpp_direct_call_batches/20261113_d3d_guest_command_callers.json"
GLOBAL = 0x0037D000
GUEST = 0x00420000
SIZE = 0x3000


def cases(entries):
    device = GUEST + 0x100
    for entry in entries:
        for refill in (False, True):
            for i, value in enumerate((0, 0x80000001, 0x12345678, 0xFFFFFFFF)):
                for alias in (False, True):
                    globals_ = bytearray(SIZE)
                    guest = bytearray(SIZE)
                    cursor = device if alias else GUEST + 0x800
                    request = 0xF123ABCD

                    def store(address, word):
                        if GLOBAL <= address < GLOBAL + SIZE:
                            struct.pack_into("<I", globals_, address - GLOBAL, word & 0xffffffff)
                        else:
                            struct.pack_into("<I", guest, address - GUEST, word & 0xffffffff)

                    for address, word in (
                        (0x37DD88, device), (0x37EC88, request), (0x37DDF0, 1),
                        (0x37E020, i & 1), (0x37E01C, int(i != 0)), (0x37DFD8, int(i >= 2)),
                        (0x37DFDC, 0x1E00 if i == 2 else 0), (0x37DFE0, 0x80000001),
                        (device, cursor), (device + 4, cursor if refill else cursor + 8),
                        (device + 0x36C, int(i == 3)), (device + 0x15B8, i & 1),
                    ):
                        store(address, word)
                    packet = struct.pack("<III", entry, value, cursor) + globals_ + guest
                    state = (2 if i & 1 else 0) | (1 if i in (1, 2) else 0)
                    global_write = None
                    early = entry == 0x370530 and i == 3
                    if entry == 0x3701C0:
                        commands, global_write = (0x41E6C, value - 0x200), (0x37E008, value)
                    elif entry == 0x370200:
                        swizzled = ((value >> 16) & 255) | ((value & 255) << 16) | (value & 0xff00ff00)
                        commands, global_write = (0x402A8, swizzled), (0x37DFC0, value)
                    elif entry == 0x370260:
                        commands = (0x40308, 1, 0x4039C, 0x404 + (value != 0x80000001)) if value else (0x40308, 0)
                        global_write = (0x37DFE4, value)
                    elif entry == 0x370330:
                        commands, global_write = (0x403A4, value), (0x37DFD0, value)
                        store(0x37DD90, 0x200)
                    elif entry == 0x370420:
                        commands = (0x41D84, state, 0x4032C, int(value != 0 and bool(i & 1)))
                        global_write = (0x37DFD8, value)
                    elif entry == 0x3704B0:
                        commands, global_write = (0x41D84, state, 0x40370, value), (0x37DFDC, value)
                    elif entry == 0x370530:
                        commands, global_write = (0x400A60,) + (value,) * 16, (0x37DFE8, value)
                    elif entry == 0x3706C0:
                        store(0x37E01C, value)
                        commands = (0x41D84, (state & 2) | int(bool(value) and i in (1, 2)))
                    elif entry == 0x370730:
                        store(0x37E020, value)
                        commands = (0x41D84, (state & 1) | (2 if value else 0))
                    elif entry == 0x370990:
                        commands = (0x817BC, 1, value) if value else (0x417BC, 0)
                        global_write = (0x37DFF0, value)
                    elif entry == 0x370A90:
                        commands, global_write = (0x40328, value), (0x37DFBC, value)
                        store(0x37DD90, 0x200)
                    else:
                        raise ValueError(f"unrecognized writer {entry:#x}")
                    if early:
                        result = value
                    else:
                        for index, command in enumerate(commands):
                            store(cursor + index * 4, command)
                        result = cursor + len(commands) * 4
                        store(device, result)
                    if global_write:
                        store(*global_write)
                    args = (1, request >> 1, request) if refill and not early else (0, 0, 0)
                    expected = struct.pack("<4I", result, *args) + globals_ + guest
                    yield f"{entry:#x}/state={i}/refill={refill}/alias={alias}", packet, expected


START = r"""
.globl _start
.section .bss
input: .zero 12
result: .zero 16
.section .globals,"aw"
.zero 0x3000
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
write_block:
    mov $4,%eax
    mov $1,%ebx
    int $0x80
    test %eax,%eax
    jle fail
    add %eax,%ecx
    sub %eax,%edx
    jne write_block
    ret
_start:
    mov $input,%ecx
    mov $12,%edx
    call read_exact
    mov $0x37d000,%ecx
    mov $0x3000,%edx
    call read_exact
    mov $0x420000,%ecx
    mov $0x3000,%edx
    call read_exact
    pushl input+4
    call *input
    mov %eax,result
    mov $result,%ecx
    mov $16,%edx
    call write_block
    mov $0x37d000,%ecx
    mov $0x3000,%edx
    call write_block
    mov $0x420000,%ecx
    mov $0x3000,%edx
    call write_block
    mov $1,%eax
    xor %ebx,%ebx
    int $0x80
fail:
    mov $1,%eax
    mov $1,%ebx
    int $0x80
"""


def retail_runner(folder, image, manifest):
    layout = sections(image)
    asm = START
    flags = ["ld", "-m", "elf_i386", "--section-start=.guest=0x420000", "--section-start=.globals=0x37d000"]
    pages = set()
    for row in sorted(manifest["callers"], key=lambda row: row["entry"]):
        for va, length in manifest["bodies"][row["entry"]]["ranges"]:
            address = int(va, 16)
            page = address & ~0xFFF
            section = f".retail_{page:x}"
            if page not in pages:
                flags.append(f"--section-start={section}={page:#x}")
                pages.add(page)
            start = file_offset(layout, address, length)
            filename = f"body_{address:x}.bin"
            (folder / filename).write_bytes(image[start:start + length])
            asm += f'\n.section {section},"ax"\n.org {address - page:#x}\n.incbin "{filename}"\n'
    flags.append("--section-start=.refill=0x371e10")
    asm += r'''
.section .refill,"ax"
    incl result+4
    mov 4(%esp),%eax
    mov %eax,result+8
    mov 8(%esp),%eax
    mov %eax,result+12
    mov input+8,%eax
    ret $8
'''
    (folder / "oracle.s").write_text(asm, encoding="utf-8")
    subprocess.run(["as", "--32", "-o", "oracle.o", "oracle.s"], cwd=folder, check=True, timeout=30)
    subprocess.run([*flags, "-o", "oracle", "oracle.o"], cwd=folder, check=True, timeout=30)
    return folder / "oracle"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--retail-native", action="store_true", help="execute the pinned writers in Linux ELF32")
    args = parser.parse_args()
    if args.retail_native and not args.xbe:
        parser.error("--retail-native needs --xbe")
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    paths = verify_sources(ROOT, manifest)
    image = args.xbe.read_bytes() if args.xbe else None
    if image:
        verify_xbe(image, [manifest])
        layout = sections(image)
        for row in manifest["callers"]:
            site = int(row["declarations"][0]["sites"][0], 16)
            start = file_offset(layout, site - 9, 9)
            require(image[start:start + 9] == bytes.fromhex("a188ec370050d1e850"), f"refill arguments differ at {site:#x}")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-d3d-writers-") as directory:
        folder = Path(directory)
        retail = retail_runner(folder, image, manifest) if args.retail_native else None
        model = folder / "model.exe"
        fixture = ROOT / "tests/fixtures/guest32_d3d_command_writers_20261113.cpp"
        suite = list(cases(int(row["entry"], 16) for row in manifest["callers"]))
        for opt in ("-O0", "-O2"):
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", str(ROOT / "include"), str(fixture), *map(str, paths),
                            "-o", str(model)], check=True, timeout=60)
            for name, packet, expected in suite:
                observed = subprocess.check_output([str(model)], input=packet, timeout=10)
                require(observed == expected, f"{opt} fixture differs: {name}")
                if retail:
                    original = subprocess.check_output([str(retail)], input=packet, timeout=10)
                    require(observed == original, f"{opt} retail differs: {name}")
            print(f"PASS {opt}: {len(paths)} writers, {len(suite)} cases, test refill")


if __name__ == "__main__":
    main()
