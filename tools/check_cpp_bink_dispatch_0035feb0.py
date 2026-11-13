#!/usr/bin/env python3
"""Compare the guest dispatch stores at 0035feb0 against the pinned x86 body."""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_d3d_guest_command_writers import START
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from source_layout import source_path


ENTRY = 0x0035feb0
BODY_SIZE = 141
BODY_SHA = "FE3B9A017F31847F12ED380AA857D366575B43EB83DDF2B52F72AB200F7A94C6"
GLOBAL_BASE = 0x00414000
GUEST_BASE = 0x004c0000
REGION_SIZE = 0x3000
HARNESS = r"""
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "bf_0035feb0_guest_model.h"

static std::uint8_t globals[0x3000], guest[0x3000];
static std::uint32_t stack_argument;
static unsigned stack_reads;
static constexpr std::uint32_t guest_esp = 0xfffffffcu;

static std::uint8_t* guest_address(std::uint32_t address)
{
    if (address >= 0x00414000u && address <= 0x00416ffcu)
        return globals + (address - 0x00414000u);
    if (address >= 0x004c0000u && address <= 0x004c2ffcu)
        return guest + (address - 0x004c0000u);
    std::abort();
}
std::uint32_t bf_guest_read_u32(std::uint32_t address)
{
    if (address == 0u) {
        ++stack_reads;
        return stack_argument;
    }
    std::uint32_t value;
    std::memcpy(&value, guest_address(address), sizeof(value));
    return value;
}
void bf_guest_write_u32(std::uint32_t address, std::uint32_t value)
{
    std::memcpy(guest_address(address), &value, sizeof(value));
}
int main()
{
    std::uint32_t input[3];
    if (std::fread(input, sizeof(input), 1, stdin) != 1 ||
        std::fread(globals, sizeof(globals), 1, stdin) != 1 ||
        std::fread(guest, sizeof(guest), 1, stdin) != 1)
        return 1;
    stack_argument = input[2];
    const auto result = FUN_0035feb0(input[1], guest_esp);
    const std::uint32_t output[] = {
        result.eax, result.edx, result.eflags_values, result.eflags_defined, stack_reads,
    };
    return std::fwrite(output, sizeof(output), 1, stdout) != 1 ||
           std::fwrite(globals, sizeof(globals), 1, stdout) != 1 ||
           std::fwrite(guest, sizeof(guest), 1, stdout) != 1;
}
"""


def make_oracle(folder, xbe):
    image = xbe.read_bytes()
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail XBE")
    offset = file_offset(sections(image), ENTRY, BODY_SIZE)
    body = image[offset:offset + BODY_SIZE]
    require(hashlib.sha256(body).hexdigest().upper() == BODY_SHA, "retail body digest differs")
    (folder / "body").write_bytes(body)
    asm = START.replace("0x37d000", "0x414000").replace("0x420000", "0x4c0000")
    asm = asm.replace("    pushl input+4\n    call *input\n    mov %eax,result",
                      "    pushl input+8\n    mov input+4,%ecx\n    call *input\n"
                      "    mov %eax,result\n    mov %edx,result+4\n"
                      "    pushfl\n    pop %eax\n    mov %eax,result+8\n    mov %ecx,result+12")
    asm += '\n.section .retail,"ax"\n.incbin "body"\n'
    (folder / "oracle.s").write_text(asm, encoding="utf-8")
    subprocess.run(["as", "--32", "-o", "oracle.o", "oracle.s"],
                   cwd=folder, check=True, timeout=30)
    subprocess.run(["ld", "-m", "elf_i386", "--section-start=.retail=0x35feb0",
                    "--section-start=.globals=0x414000", "--section-start=.guest=0x4c0000",
                    "-o", "oracle", "oracle.o"], cwd=folder, check=True, timeout=30)
    return folder / "oracle"


def packets():
    destinations = (0x004c0100, 0x004c07e0, 0x00414b38, 0x00414b10,
                    0x00414b1c, 0x00414b28, 0x00414b30, 0x00414b44, 0x00414b37)
    for address in destinations:
        for mode in (0, 1, 0x80000001, 0xffffffff):
            for word in (0, 1, 3, 0x1fff, 0x2000, 0x2001, 0xffffffff):
                for argument in (0, 3, 0x7fffffff, 0xffffffff):
                    globals_ = bytearray([0xa5]) * REGION_SIZE
                    guest = bytearray([0x5a]) * REGION_SIZE
                    block, base = (globals_, GLOBAL_BASE) if address < GUEST_BASE else (guest, GUEST_BASE)
                    struct.pack_into("<I", block, address - base, word)
                    struct.pack_into("<I", guest, 0x7e0, mode)
                    initial_word = mode if address == 0x004c07e0 else word
                    data = struct.pack("<III", ENTRY, address, argument) + globals_ + guest
                    yield address, mode, initial_word, argument, data


def execute(exe, data):
    return subprocess.run([str(exe)], input=data, capture_output=True,
                          check=True, timeout=15).stdout


def check_output(context, data, result, expected):
    address, mode, word, argument = context
    eax, edx, flags, defined, reads = struct.unpack_from("<IIIII", result)
    take_argument = mode == 1 and (word & 1) and word <= 0x2000
    require(reads == int(take_argument), f"guest stack read count at {context}")
    require(defined == (0x8c5 if mode == 1 and (take_argument or (word & 1) == 0) else 0x8d5),
            f"defined flag mask at {context}")
    if expected:
        retail_eax, retail_edx, retail_flags, retail_ecx = struct.unpack_from("<IIII", expected)
        require((eax, edx, address) == (retail_eax, retail_edx, retail_ecx),
                f"retail register mismatch at {context}")
        require((flags & defined) == (retail_flags & defined),
                f"retail flags mismatch at {context}")
        require(result[20:] == expected[16:], f"retail memory mismatch at {context}")
    else:
        memory = bytearray(data[12:])
        writes = []
        if take_argument:
            value = (word + argument * 4) & 0xffffffff
            first, second = (0x0035fbb0, 0x0035fc70) if value & 2 else (0x0035fa10, 0x0035fae0)
            registers = (value, argument)
            writes.append((address, value))
        elif mode == 1:
            first, second = 0x0035fe10, 0x0035fe60
            registers = (word, 1)
        else:
            first, second = 0x0035fbb0, 0x0035fc70
            registers = (mode, 1)
        writes.extend(((0x00414b38, first), (0x00414b10, second)))
        if mode == 1 and not take_argument:
            writes.extend(((0x00414b44, address), (address, 0x82), (0x00414b1c, 0x0035fa10),
                           (0x00414b28, 0x0035fae0), (0x00414b30, 1)))
        for destination, value in writes:
            offset = (destination - GLOBAL_BASE if destination < GUEST_BASE
                      else REGION_SIZE + destination - GUEST_BASE)
            struct.pack_into("<I", memory, offset, value)
        require((eax, edx) == registers, f"register mismatch at {context}")
        require(result[20:] == memory, f"guest memory mismatch at {context}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private original image for ELF32 execution")
    args = parser.parse_args()
    source = source_path(ROOT, f"0x{ENTRY:08x}")
    require(read_body_digest(source.read_text(encoding="utf-8")) == (BODY_SHA, False),
            "source body label differs")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-bink-dispatch-") as tmp:
        folder = Path(tmp)
        oracle = make_oracle(folder, args.xbe) if args.xbe else None
        harness = folder / "harness.cpp"
        harness.write_text(HARNESS, encoding="utf-8")
        cases = [(row, execute(oracle, row[-1]) if oracle else None) for row in packets()]
        for opt in ("-O0", "-O2"):
            exe = folder / "dispatch_model"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                            "-Werror", opt, "-I", str(ROOT / "include"), str(source),
                            str(harness), "-o", str(exe)], check=True, timeout=60)
            for (*context, data), expected in cases:
                check_output(context, data, execute(exe, data), expected)
            oracle_name = "retail ELF32" if oracle else "guest state expectations"
            print(f"PASS {opt}: {len(cases)} linked C++17 cases against {oracle_name}")


if __name__ == "__main__":
    main()
