#!/usr/bin/env python3
"""Check bounded guest32 models for three XNET record functions.

The default checks compile and exercise the host models. Supplying --xbe also
authenticates the exact retail bodies and return instructions. On Linux with
ELF32 support, --retail-native executes those pinned bodies for direct comparison.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import random
import shutil
import struct
import subprocess
import sys
import tempfile

from body_hash_labels import read_body_digest
from source_layout import source_path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections  # noqa: E402

BASE = 0x00420000
SIZE = 4096


def require(condition: bool, message: str) -> None:
    if not condition:
        raise ValueError(message)


def put_u32(memory: bytearray, address: int, value: int) -> None:
    offset = (address - BASE) & 0xFFFFFFFF
    require(offset <= len(memory) - 4, f"DWORD outside fixture memory: {address:#x}")
    memory[offset:offset + 4] = (value & 0xFFFFFFFF).to_bytes(4, "little")


def get_u32(memory: bytearray, address: int) -> int:
    offset = (address - BASE) & 0xFFFFFFFF
    require(offset <= len(memory) - 4, f"DWORD outside fixture memory: {address:#x}")
    return int.from_bytes(memory[offset:offset + 4], "little")


def put_u8(memory: bytearray, address: int, value: int) -> None:
    offset = (address - BASE) & 0xFFFFFFFF
    require(offset < len(memory), f"byte outside fixture memory: {address:#x}")
    memory[offset] = value & 0xFF


def get_u8(memory: bytearray, address: int) -> int:
    offset = (address - BASE) & 0xFFFFFFFF
    require(offset < len(memory), f"byte outside fixture memory: {address:#x}")
    return memory[offset]


def expected_353101(ecx: int, stack_arg: int, memory: bytearray) -> int:
    """Instruction-order reference for the observed loads, stores, and DEC."""
    head = (stack_arg + 0x64) & 0xFFFFFFFF
    first = get_u32(memory, head)
    tail = get_u32(memory, stack_arg + 0x68)
    put_u32(memory, tail, first)
    put_u32(memory, first + 4, tail)
    get_u32(memory, stack_arg + 0x60)  # AND [mem],0 performs a read-modify-write.
    put_u32(memory, stack_arg + 0x60, 0)
    put_u32(memory, stack_arg + 0x68, head)
    put_u32(memory, head, head)
    counter = (ecx + 0x7D) & 0xFFFFFFFF
    put_u8(memory, counter, get_u8(memory, counter) - 1)
    return head


def expected_3537fa(ecx: int, memory: bytearray) -> int:
    """Model the LEA/sub/NEG/SBB/AND candidate formation modulo 2^32."""
    head = (ecx + 0x64) & 0xFFFFFFFF
    link = get_u32(memory, head)
    node = ((link - 0x64) & 0xFFFFFFFF) if link != head else 0
    while node != 0:
        if get_u8(memory, node + 0x0C) & 0x40:
            return node
        link = get_u32(memory, node + 0x64)
        node = ((link - 0x64) & 0xFFFFFFFF) if link != head else 0
    return 0


def cases():
    rng = random.Random(0x353101)
    seed = bytes(rng.randrange(256) for _ in range(SIZE))

    # Empty list with counter underflow: the exact DEC byte result is observable.
    memory = bytearray(seed)
    arg, ecx = BASE + 0x200, BASE + 0x600
    head = arg + 0x64
    put_u32(memory, head, head)
    put_u32(memory, arg + 0x68, head)
    put_u32(memory, arg + 0x60, 0xF00DBEEF)
    put_u8(memory, ecx + 0x7D, 0)
    out = memory.copy()
    eax = expected_353101(ecx, arg, out)
    yield "35101/empty/counter-wrap", 0x00353101, ecx, arg, memory, eax, out

    # Nonempty list: two captured links and a counter with nonzero high bits.
    memory = bytearray(seed)
    arg, ecx = BASE + 0x280, BASE + 0x680
    head, first, tail = arg + 0x64, BASE + 0x480, BASE + 0x700
    put_u32(memory, head, first)
    put_u32(memory, arg + 0x68, tail)
    put_u32(memory, arg + 0x60, 0xFFFFFFFF)
    put_u8(memory, ecx + 0x7D, 0x80)
    out = memory.copy()
    eax = expected_353101(ecx, arg, out)
    yield "35101/nonempty", 0x00353101, ecx, arg, memory, eax, out

    # Alias case: tail and first alias the DWORD zeroed after the first stores.
    memory = bytearray(seed)
    arg, ecx = BASE + 0x320, BASE + 0x780
    head, alias = arg + 0x64, arg + 0x60
    put_u32(memory, head, alias)
    put_u32(memory, arg + 0x68, alias)
    put_u32(memory, alias, 0xA5A55A5A)
    put_u8(memory, ecx + 0x7D, 1)
    out = memory.copy()
    eax = expected_353101(ecx, arg, out)
    yield "35101/aliased-fields", 0x00353101, ecx, arg, memory, eax, out

    # ECX-relative circular sentinel; no candidate node is read.
    memory = bytearray(seed)
    ecx = BASE + 0x100
    head = ecx + 0x64
    put_u32(memory, head, head)
    out = memory.copy()
    eax = expected_3537fa(ecx, out)
    yield "3537fa/empty", 0x003537FA, ecx, 0, memory, eax, out

    # First candidate matches the low-byte flag; only one byte is examined.
    memory = bytearray(seed)
    ecx, node = BASE + 0x100, BASE + 0x300
    head = ecx + 0x64
    put_u32(memory, head, node + 0x64)
    put_u8(memory, node + 0x0C, 0xC0)
    out = memory.copy()
    eax = expected_3537fa(ecx, out)
    yield "3537fa/first-match", 0x003537FA, ecx, 0, memory, eax, out

    # Follow one unmarked node to a marked node, then return its base address.
    memory = bytearray(seed)
    ecx, first, second = BASE + 0x100, BASE + 0x300, BASE + 0x380
    head = ecx + 0x64
    put_u32(memory, head, first + 0x64)
    put_u8(memory, first + 0x0C, 0x02)
    put_u32(memory, first + 0x64, second + 0x64)
    put_u8(memory, second + 0x0C, 0x40)
    out = memory.copy()
    eax = expected_3537fa(ecx, out)
    yield "3537fa/skip-then-match", 0x003537FA, ecx, 0, memory, eax, out

    # One unmarked node terminates at the sentinel with zero in EAX.
    memory = bytearray(seed)
    ecx, node = BASE + 0x100, BASE + 0x300
    head = ecx + 0x64
    put_u32(memory, head, node + 0x64)
    put_u8(memory, node + 0x0C, 0)
    put_u32(memory, node + 0x64, head)
    out = memory.copy()
    eax = expected_3537fa(ecx, out)
    yield "3537fa/end-no-match", 0x003537FA, ecx, 0, memory, eax, out

    # A non-sentinel link that maps to node base zero follows the computed-zero exit.
    memory = bytearray(seed)
    ecx = BASE + 0x100
    head = ecx + 0x64
    put_u32(memory, head, 0x64)
    out = memory.copy()
    eax = expected_3537fa(ecx, out)
    yield "3537fa/computed-zero", 0x003537FA, ecx, 0, memory, eax, out


    # The wrapper returns the found node after unlinking it, even though unlink
    # itself returns the address of that node's embedded link.
    ecx, first, node = BASE + 0x100, BASE + 0x300, BASE + 0x380
    head = ecx + 0x64
    for flag in (0, 0x40):
        memory = bytearray(seed)
        put_u32(memory, head, first + 0x64)
        put_u32(memory, first + 0x64, node + 0x64)
        put_u32(memory, node + 0x64, head)
        put_u32(memory, node + 0x68, first + 0x64)
        put_u8(memory, first + 0x0c, 0)
        put_u8(memory, node + 0x0c, flag)
        put_u8(memory, ecx + 0x7d, 2)
        out = memory.copy()
        if flag:
            expected_353101(ecx, node, out)
        yield f"353829/{flag}", 0x00353829, ecx, 0, memory, node if flag else 0, out


def packet(entry: int, ecx: int, stack_arg: int, memory: bytes) -> bytes:
    return struct.pack("<III", entry, ecx & 0xFFFFFFFF, stack_arg & 0xFFFFFFFF) + memory


def read_retail(xbe: Path, doc: dict) -> dict[int, bytes]:
    raw = xbe.read_bytes()
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256,
            "retail XBE SHA-256 mismatch")
    layout = sections(raw)
    result: dict[int, bytes] = {}
    for entry, evidence in doc["bodies"].items():
        chunks = []
        for start, size in evidence["ranges"]:
            address = int(start, 16)
            offset = file_offset(layout, address, size)
            chunk = raw[offset:offset + size]
            require(len(chunk) == size, f"short XBE read at {start}")
            chunks.append((address, chunk))
        require(hashlib.sha256(b"".join(chunk for _, chunk in chunks)).hexdigest().upper() ==
                evidence["sha256"], f"retail body hash mismatch at {entry}")
        for address, pop in evidence["returns"]:
            expected = b"\xc2" + pop.to_bytes(2, "little") if pop else b"\xc3"
            offset = file_offset(layout, int(address, 16), len(expected))
            require(raw[offset:offset + len(expected)] == expected,
                    f"retail RET changed at {address}")
        result.update(chunks)
    for site, callee in doc["calls"]:
        va = int(site, 16)
        offset = file_offset(layout, va, 5)
        opcode = raw[offset:offset + 5]
        require(len(opcode) == 5 and opcode[0] == 0xe8 and
                va + 5 + int.from_bytes(opcode[1:], "little", signed=True) == int(callee, 16),
                f"retail CALL changed at {site}")
    return result


START = r"""
.globl _start
.section .bss
input: .zero 12
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
    mov $12,%edx
    call read_exact
    mov $0x420000,%ecx
    mov $4096,%edx
    call read_exact
    mov input+4,%ecx
    cmpl $0x00353101,input
    jne invoke_no_stack
    pushl input+8
    mov $0x00353101,%eax
    call *%eax
    jmp emit
invoke_no_stack:
    call *input
emit:
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


def native_runner(directory: Path, bodies: dict[int, bytes]) -> Path:
    assembler, linker = shutil.which("as"), shutil.which("ld")
    require(assembler and linker, "--retail-native needs GNU as and ld with ELF32 support")
    require(sys.platform.startswith("linux"), "--retail-native requires Linux ELF32 execution")
    assembly = START
    for address, body in sorted(bodies.items()):
        name = f"retail_{address:08x}.bin"
        (directory / name).write_bytes(body)
        assembly += (f'\n.section .retail_353000,"ax"\n'
                     f'.org {address - 0x00353000:#x}\n'
                     f'.incbin "{name}"\n')
    (directory / "retail.s").write_text(assembly, encoding="utf-8")
    subprocess.run([assembler, "--32", "-o", "retail.o", "retail.s"],
                   cwd=directory, check=True, timeout=30)
    subprocess.run([linker, "-m", "elf_i386", "--section-start=.guest=0x420000",
                    "--section-start=.retail_353000=0x353000", "-o", "retail", "retail.o"],
                   cwd=directory, check=True, timeout=30)
    return directory / "retail"


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail XBE for exact byte checks")
    parser.add_argument("--retail-native", action="store_true",
                        help="execute the pinned x86 bodies (Linux ELF32 only; requires --xbe)")
    args = parser.parse_args()
    if args.retail_native and not args.xbe:
        parser.error("--retail-native requires --xbe")

    clang = shutil.which("clang++")
    if not clang and Path(r"C:\Program Files\LLVM\bin\clang++.exe").exists():
        clang = r"C:\Program Files\LLVM\bin\clang++.exe"
    require(clang is not None, "clang++ is required")

    doc = json.loads((ROOT / "metadata/cpp_guest32_xnet_record_models_20261112.json")
                     .read_text(encoding="utf-8"))
    require(doc["original_xbe_sha256"].lower() == XBE_SHA256.lower(),
            "metadata XBE pin mismatch")
    expected_entries = {"0x00353101", "0x003537fa", "0x00353829"}
    require(set(doc["bodies"]) == expected_entries, "model inventory changed")

    sources = []
    for entry, evidence in doc["bodies"].items():
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) ==
                (evidence["sha256"].upper(), False), f"source body pin changed at {entry}")
        sources.append(str(path))

    raw_bodies = read_retail(args.xbe, doc) if args.xbe else None
    suite = list(cases())
    fixture = ROOT / "tests/fixtures/guest32_xnet_record_models_20261112.cpp"
    with tempfile.TemporaryDirectory(prefix="bf-guest-xnet-records-") as folder:
        directory = Path(folder)
        model = directory / ("model.exe" if sys.platform == "win32" else "model")
        retail = native_runner(directory, raw_bodies) if args.retail_native else None
        for optimization in ("-O0", "-O2"):
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            optimization, "-I", str(ROOT / "include"), str(fixture), *sources,
                            "-o", str(model)], check=True, timeout=60)
            for name, entry, ecx, stack_arg, initial, eax, expected in suite:
                request = packet(entry, ecx, stack_arg, initial)
                observed = subprocess.check_output([str(model)], input=request, timeout=10)
                require(observed == struct.pack("<I", eax) + expected,
                        f"{optimization} model fixture differs: {name}")
                if retail is not None:
                    original = subprocess.check_output([str(retail)], input=request, timeout=10)
                    require(observed == original, f"{optimization} retail x86 differs: {name}")
            suffix = " and exact retail x86" if retail is not None else " fixture"
            print(f"PASS {optimization}: three models, {len(suite)} cases{suffix}")

    if args.xbe and not args.retail_native:
        print("PASS retail XBE identity, body hashes, and RET instructions")


if __name__ == "__main__":
    main()
