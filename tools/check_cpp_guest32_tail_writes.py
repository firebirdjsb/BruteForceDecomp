#!/usr/bin/env python3
"""Check linked guest tail transfers and stack copies, optionally against their retail x86 bodies."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_d3d_guest_command_writers import START
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from check_cpp_tail_jumps import jump_target
from source_layout import source_path


MANIFEST = ROOT / "metadata/cpp_guest32_tail_writes_20261113.json"
GLOBALS = 0x39a000
GUEST = 0x420000
SIZE = 0x3000
RETURN_PC = 0x370000
FIXTURE = r"""
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "bf_xbe_guest32_stack_copy.h"

static std::uint8_t globals[0x3000], memory[0x3000];
static std::uint8_t* ptr(std::uint32_t address)
{
    if (address >= 0x39a000u && address <= 0x39cffcu)
        return globals + (address - 0x39a000u);
    if (address < 0x420000u || address > 0x422ffcu)
        std::abort();
    return memory + (address - 0x420000u);
}
std::uint32_t bf_guest_read_u32(std::uint32_t address)
{
    std::uint32_t value;
    std::memcpy(&value, ptr(address), sizeof(value));
    return value;
}
void bf_guest_write_u32(std::uint32_t address, std::uint32_t value)
{
    std::memcpy(ptr(address), &value, sizeof(value));
}
int main()
{
    std::uint32_t input[8];
    if (std::fread(input, sizeof(input), 1, stdin) != 1 ||
        std::fread(globals, sizeof(globals), 1, stdin) != 1 ||
        std::fread(memory, sizeof(memory), 1, stdin) != 1)
        return 1;
    bf_guest32_stack_copy_state guest{{input[1], input[2], input[3], input[4],
                                       input[0], input[5], 0xffffffffu}, input[6], input[7]};
    switch (input[0]) {
@DISPATCH@
    default: return 2;
    }
    const std::uint32_t result[] = {guest.eax, guest.ecx, guest.edx, guest.esp,
                                    guest.eip, guest.eflags, guest.esi, guest.edi, guest.eflags_defined};
    return std::fwrite(result, sizeof(result), 1, stdout) != 1 ||
           std::fwrite(globals, sizeof(globals), 1, stdout) != 1 ||
           std::fwrite(memory, sizeof(memory), 1, stdout) != 1;
}
"""


def verify_encoding(body, case):
    kind = case["kind"]
    if kind == "stack_copy":
        require(body.startswith(bytes.fromhex("8b4c2408568b7424083bf1")) and
                body.endswith(bytes.fromhex("8b4c241089085ec3")), "stack copy frame differs")
        return None
    if kind == "copy":
        require(body[:18] == bytes.fromhex("85c074138b11891083c10483c00489442404") and
                body[23:] == bytes.fromhex("c20400"), "copy/branch/RET encoding differs")
        return 18
    if kind in ("ecx", "edx"):
        encoding = "8b4c240483c104894c2404" if kind == "ecx" else "8b54240483c20489542404"
        require(body[:11] == bytes.fromhex(encoding), "stack operand or ADD encoding differs")
        return 11
    require(kind == "adjust", "unexpected tail model")
    offsets = (5, 12, 19, 30, 44, 56)
    constants = [int(value, 16) for value in case["immediates"]]
    require(len(constants) == len(offsets), "adjust immediate inventory differs")
    constants[-1] = (-constants[-1]) & 0xffffffff
    fixed = bytearray(body[:64])
    for offset, value in zip(offsets, constants):
        require(body[offset:offset + 4] == value.to_bytes(4, "little"), "adjust immediate differs")
        fixed[offset:offset + 4] = bytes(4)
    require(fixed == bytes.fromhex("8b414cc70100000000c7414800000000c7416800000000"
                                  "8b5004c7440a4c000000008b414c8b5004c7440a5000000000"
                                  "8b414c8b40048d900000000089540848"), "adjust instructions differ")
    return 64


def native_oracle(folder, image, cases):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "retail XBE digest differs")
    layout = sections(image)
    asm = START.replace("0x37d000", "0x39a000").replace("input: .zero 12", "input: .zero 32").replace(
        "result: .zero 16", "result: .zero 32\nhost_stack: .long 0").replace(
        "    mov $12,%edx\n    call read_exact", "    mov $32,%edx\n    call read_exact").replace(
        "    pushl input+4\n    call *input\n    mov %eax,result",
        """    mov %esp,host_stack
    pushl input+20
    popfl
    mov input+4,%eax
    mov input+8,%ecx
    mov input+12,%edx
    mov input+16,%esp
    mov input+24,%esi
    mov input+28,%edi
    jmp *input
capture:
    mov %eax,result
    mov %ecx,result+4
    mov %edx,result+8
    mov %esp,result+12
    mov %esi,result+24
    mov %edi,result+28
    mov host_stack,%esp
    pushfl
    pop %eax
    mov %eax,result+20""").replace("    mov $16,%edx\n    call write_block", "    mov $32,%edx\n    call write_block")
    flags = ["--section-start=.guest=0x420000", "--section-start=.globals=0x39a000"]
    destinations = {RETURN_PC}
    for case in cases:
        entry, size = int(case["entry"], 16), case["size"]
        offset = file_offset(layout, entry, size)
        body = image[offset:offset + size]
        require(hashlib.sha256(body).hexdigest().upper() == case["sha256"], "body digest differs")
        jump = verify_encoding(body, case)
        if jump is not None:
            target = int(case["target"], 16)
            require(jump_target(entry + jump, body[jump:jump + 5]) == target, "jump target differs")
            altered = body[jump:jump + 4] + bytes((body[jump + 4] ^ 1,))
            require(jump_target(entry + jump, altered) != target, "jump mutation survived")
            file_offset(layout, target, 1)
            destinations.add(target)
        name = f"body_{entry:x}"
        (folder / name).write_bytes(body)
        flags.append(f"--section-start=.{name}={entry:#x}")
        asm += f'\n.section .{name},"ax"\n.incbin "{name}"\n'
    for target in sorted(destinations):
        name = f"target_{target:x}"
        flags.append(f"--section-start=.{name}={target:#x}")
        asm += '\n.section .%s,"ax"\nmovl $%#x,result+16\njmp capture\n' % (name, target)
    (folder / "oracle.s").write_text(asm, encoding="utf-8")
    subprocess.run(["as", "--32", "-o", "oracle.o", "oracle.s"], cwd=folder, check=True, timeout=30)
    subprocess.run(["ld", "-m", "elf_i386", *flags, "-o", "oracle", "oracle.o"],
                   cwd=folder, check=True, timeout=30)
    return folder / "oracle"


def dword(memory, address, value=None, base=GUEST):
    offset = address - base
    require(0 <= offset <= len(memory) - 4, f"fixture access outside guest memory: {address:#x}")
    if value is None:
        return struct.unpack_from("<I", memory, offset)[0]
    struct.pack_into("<I", memory, offset, value & 0xffffffff)


def add_four(value):
    result = (value + 4) & 0xffffffff
    flags = (1 if result < value else 0) | (0x10 if (value ^ 4 ^ result) & 0x10 else 0)
    flags |= 4 if (result & 0xff).bit_count() % 2 == 0 else 0
    flags |= 0x40 if result == 0 else 0
    flags |= 0x80 if result & 0x80000000 else 0
    flags |= 0x800 if value < 0x80000000 <= result else 0
    return result, flags


def expected(case, packet):
    _, eax, ecx, edx, esp, flags, esi, edi = struct.unpack_from("<8I", packet)
    globals_ = bytearray(packet[32:32 + SIZE])
    memory = bytearray(packet[32 + SIZE:])
    def read(address):
        if GLOBALS <= address < GLOBALS + SIZE:
            return dword(globals_, address, base=GLOBALS)
        return dword(memory, address)
    eip = int(case.get("target", "0"), 16)
    defined = 0xffffffff
    kind = case["kind"]
    if kind == "stack_copy":
        stride = case["record_bytes"]
        first, last, destination = (dword(memory, esp + n) for n in (4, 8, 12))
        ecx = last
        dword(memory, esp - 4, esi)
        if first == last:
            ecx = destination
            dword(memory, eax, ecx)
        else:
            edx = destination
            dword(memory, esp - 8, edi)
            while ecx != first:
                ecx -= stride
                edx -= stride
                high = 8 if stride == 12 else 12
                dword(memory, esp + (4 if stride == 12 else 8), dword(memory, ecx + high))
                if stride != 12:
                    dword(memory, esp + 4, dword(memory, ecx + 8))
                dword(memory, esp + 12, dword(memory, ecx + 4))
                for offset in range(0, stride, 4):
                    source = {4: esp + 12, 8: esp + 4, 12: esp + 8}.get(offset, ecx + offset)
                    dword(memory, edx + offset, dword(memory, source))
            edi = dword(memory, esp - 8)
            dword(memory, eax, edx)
        esi = dword(memory, esp - 4)
        eip = dword(memory, esp)
        esp += 4
        flags = (flags & ~0x8d5) | 0x44  # The final CMP compares equal.
    elif kind == "copy" and eax == 0:
        eip = dword(memory, esp)
        esp += 8
        flags = (flags & ~0x8c5) | 0x44
        defined &= ~0x10
    elif kind == "copy":
        edx = dword(memory, ecx)
        dword(memory, eax, edx)
        ecx = (ecx + 4) & 0xffffffff
        eax, arith = add_four(eax)
        flags = (flags & ~0x8d5) | arith
        dword(memory, esp + 4, eax)
    elif kind in ("ecx", "edx"):
        updated, arith = add_four(dword(memory, esp + 4))
        dword(memory, esp + 4, updated)
        flags = (flags & ~0x8d5) | arith
        if kind == "ecx":
            ecx = updated
        else:
            edx = updated
    else:
        first, second, third, fourth, fifth, bias = (int(x, 16) for x in case["immediates"])
        link = dword(memory, ecx + 0x4c)
        for address, value in ((ecx, first), (ecx + 0x48, second), (ecx + 0x68, third)):
            dword(memory, address, value)
        displacement = read(link + 4)
        dword(memory, (ecx + 0x4c + displacement) & 0xffffffff, fourth)
        link = dword(memory, ecx + 0x4c)
        displacement = read(link + 4)
        dword(memory, (ecx + 0x50 + displacement) & 0xffffffff, fifth)
        eax = read(dword(memory, ecx + 0x4c) + 4)
        edx = (eax - bias) & 0xffffffff
        dword(memory, (ecx + 0x48 + eax) & 0xffffffff, edx)
    return (eax, ecx, edx, esp, eip, flags, esi, edi, defined), globals_ + memory


def packets(case):
    entry = int(case["entry"], 16)
    esp = GUEST + 0x1100
    kind = case["kind"]
    initial = bytes((i * 73 + (i >> 4)) & 0xff for i in range(SIZE))
    if kind == "stack_copy":
        stride = case["record_bytes"]
        inputs = []
        for first in (0x420800, esp + 16):
            for count in (0, 1, 3):
                for destination in (0x420b00, first + stride * count,
                                    first + stride * count + 2, esp + 4 + stride):
                    # Keep multi-record destination writes away from the return PC.
                    if count > 1 and destination == esp + 4 + stride:
                        continue
                    for eax in (0x420250, esp - 4):
                        writes = ((esp + 4, first), (esp + 8, first + stride * count),
                                  (esp + 12, destination))
                        inputs.append((eax, 0x50607080, writes))
    elif kind == "copy":
        pairs = [(0, 0), (0x420240, 0x420220), (0x420220, 0x420220),
                 (0x420221, 0x420220), (esp, 0x420220),
                 (esp + 4, esp), (0x420240, esp + 4)]
        inputs = [(eax, ecx, ()) for eax, ecx in pairs]
    elif kind in ("ecx", "edx"):
        inputs = [(0x10203040, 0x50607080, ((esp + 4, word),)) for word in
                  (0, 7, 0xc, 0x7ffffffc, 0x80000001, 0xfffffffb, 0xfffffffc, 0xffffffff)]
    else:
        ecx = 0x420320
        inputs = [(0x12345678, ecx, ((ecx + 0x4c, link), (link + 4, delta))) for link, delta in
                  ((0x420700, 0x100), (0x420700, 0xfffffffc), (0x420700, 0), (ecx + 0x60, 0x20),
                   (ecx + 0x6c, 0xffffff00))]
    for eax, ecx, writes in inputs:
        for flags in (0x202, 0x202 | 0x8d5):
            memory = bytearray(initial)
            dword(memory, esp, RETURN_PC)
            for address, value in writes:
                dword(memory, address, value)
            globals_ = bytearray(SIZE)
            if kind == "adjust":
                for address in case["immediates"][3:5]:
                    dword(globals_, int(address, 16) + 4, 0x150, base=GLOBALS)
            yield struct.pack("<8I", entry, eax, ecx, 0xdeadbeef, esp, flags, 0x98765432, 0x2468ace1) + globals_ + memory


def run(exe, packet):
    return subprocess.check_output([str(exe)], input=packet, timeout=15)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail XBE for ELF32 differential")
    args = parser.parse_args()
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    cases = manifest["cases"]
    require(manifest["original_xbe_sha256"] == XBE_SHA256, "manifest XBE digest differs")
    require(len(cases) == len({case["entry"] for case in cases}) == 16, "entry inventory differs")
    paths, dispatch = [], []
    for case in cases:
        entry = case["entry"]
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (case["sha256"], False),
                f"source body hash differs at {entry}")
        if "target" in case:
            require(source_path(ROOT, case["target"]).is_file(), f"target source missing at {entry}")
        paths.append(str(path))
        dispatch.append(f"    case {entry}u: FUN_{entry[2:]}(guest); break;")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-guest-tail-write-") as directory:
        folder = Path(directory)
        oracle = native_oracle(folder, args.xbe.read_bytes(), cases) if args.xbe else None
        fixture = folder / "model.cpp"
        fixture.write_text(FIXTURE.replace("@DISPATCH@", "\n".join(dispatch)), encoding="utf-8")
        suite = []
        for case in cases:
            for packet in packets(case):
                regs, memory = expected(case, packet)
                if oracle:
                    actual = run(oracle, packet)
                    require(struct.unpack_from("<5I", actual) == regs[:5] and
                            ((struct.unpack_from("<I", actual, 20)[0] ^ regs[5]) & regs[8]) == 0
                            and struct.unpack_from("<2I", actual, 24) == regs[6:8]
                            and actual[32:] == memory, f"retail state differs at {case['entry']}")
                suite.append((case["entry"], packet, regs, memory))
        for opt in ("-O0", "-O2"):
            exe = folder / "model"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", str(ROOT / "include"), *paths, str(fixture), "-o", str(exe)],
                           check=True, timeout=60)
            for entry, packet, regs, memory in suite:
                actual = run(exe, packet)
                observed = struct.unpack_from("<9I", actual)
                require(observed == regs and actual[36:] == memory,
                        f"{opt}: modeled state differs at {entry}: {observed} != {regs}")
            print(f"PASS {opt}: {len(cases)} linked models, {len(suite)} state cases" +
                  (" compared with retail x86" if oracle else ""))


if __name__ == "__main__":
    main()
