#!/usr/bin/env python3
"""Link guest list/copy models and compare observable data and EAX."""
import argparse
import hashlib
import json
from pathlib import Path
import random
import re
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
    0x001D8D60: (36, False, False, [(i, 4) for i in range(0, 36, 4)]),
    0x0024AAE0: (48, False, False, [(i, 4) for i in range(0, 48, 4)]),
    0x0027A870: (16, False, False, [(i, 4) for i in range(0, 16, 4)]),
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


CURSOR = {
    0x0001C5D0: 0xA9,
    0x00075720: 0x29,
    0x00076220: 0x19,
    0x00139260: 0x21,
    0x00142510: 0x1D,
    0x0017D4C0: 0x81,
    0x00180D60: 0x41,
    0x0024F7D0: 0x45,
    0x002506C0: 0x11,
    0x0025DDE0: 0x25,
    0x00270DF0: 0x2D,
}
PACKED = {
    0x001CFB40: ('fill', 24, [(0, 4), (4, 2), (6, 1), (8, 4), (12, 4), (16, 4), (20, 4)]),
    0x001D0300: ('fill', 28, [(0, 4), (4, 4), (8, 1), (9, 4), (13, 1), (16, 4), (20, 4), (24, 4)]),
    0x001D7650: ('forward', 24, [(0, 4), (4, 2), (6, 1), (8, 4), (12, 4), (16, 4), (20, 4)]),
    0x001D8050: ('forward', 28, [(0, 4), (4, 4), (8, 1), (9, 4), (13, 1), (16, 4), (20, 4), (24, 4)]),
    0x001D76B0: ('stackback', 24, [(0, 4), (4, 2), (6, 1), (8, 4), (12, 4), (16, 4), (20, 4)]),
    0x001D80C0: ('stackback', 28, [(0, 4), (4, 4), (8, 1), (9, 4), (13, 1), (16, 4), (20, 4), (24, 4)]),
    0x001D7790: ('ediback', 36, [(0, 4), (4, 4), (8, 4), (12, 4), (16, 4), (20, 4), (24, 4), (28, 1), (29, 1), (32, 4)]),
    0x001D8B50: ('ediback', 60, [(0, 4), (4, 4), (8, 4), (12, 1), (13, 1), (16, 4), (20, 4), (24, 4), (28, 4), (32, 4), (36, 4), (40, 4), (44, 4), (48, 4), (52, 4), (56, 1)]),
    0x001D9380: ('ediback', 28, [(0, 1), (1, 1), (2, 1), (4, 4), (8, 4), (12, 4), (16, 4), (20, 4), (24, 4)]),
    0x001DD070: ('one', 28, [(0, 4), (4, 4), (8, 1), (9, 4), (13, 1), (16, 4), (20, 4), (24, 4)]),
}

# Bytes before and after the E8 call establish the two register transfers,
# duplicate fourth stack word, 16-byte cleanup and plain RET.
COPY_CALL_SHAPES = {
    "esi": (
        bytes.fromhex("8b44240c 8b542408 50 51 8b4c2414 8bc4 8908 51 8bc4 8910 "
                      "51 8b4c2414 8bc4 8908 8bc6"),
        bytes.fromhex("83c410 8bc6 c3"),
    ),
    "eax": (
        bytes.fromhex("8b542408 57 8bf8 8b442410 50 51 8b4c2418 8bc4 8908 51 8bc4 "
                      "51 8b4c2418 8910 8bc4 8908"),
        bytes.fromhex("83c410 8bc7 5f c3"),
    ),
}


def packet(values, memory):
    return struct.pack(f"<{len(values)}I", *values) + memory


def write(memory, address, word, width=4):
    offset = address - BASE
    memory[offset:offset + width] = word.to_bytes(width, "little")


def copy_caller_cases(callers, seed):
    for entry_text, evidence in callers.items():
        entry, callee = int(entry_text, 16), int(evidence["target"], 16)
        if callee in COPY:
            stride, string_move, in_edi, fields = COPY[callee]
            require(not string_move, f"unexpected DF-sensitive caller target at {entry_text}")
        else:
            kind, stride, fields = PACKED[callee]
            require(kind == "ediback", f"unexpected packed caller target at {entry_text}")
            in_edi = True
        require(in_edi == (evidence["output_register"] == "eax"),
                f"callee output register differs for {entry_text}")
        first = BASE + 0x600
        for count in (0, 1, 3):
            last = first + count * stride
            for delta in (-1, 0, 1, 0x300):
                dst = first + delta
                end = dst + count * stride
                for slot in (BASE + 0x100, first + 1, dst + 3):
                    expected = bytearray(seed)
                    for row in range(count - 1, -1, -1):
                        for field, width in fields:
                            src_idx = first + row * stride + field - BASE
                            dst_idx = dst + row * stride + field - BASE
                            expected[dst_idx:dst_idx + width] = expected[src_idx:src_idx + width]
                    write(expected, slot, dst)
                    for df in (0, 1):
                        # Poison other incoming registers. ESI is input to the first
                        # family only. Neither caller receives the slot in ECX or EDI.
                        eax = slot if in_edi else 0x12345678
                        esi = 0x87654321 if in_edi else slot
                        host = (entry, slot, first, last, end, df)
                        guest = (entry, eax, 0x23456789, 0x3456789a, df, first, last, end,
                                 0x456789ab, 0x56789abc, 0x6789abcd, esi)
                        label = f"{entry_text}/caller/{count}/{delta}/{slot:#x}/{df}"
                        yield label, host, guest, seed, expected, slot


def cases(callers):
    rng = random.Random(0x3118C0)
    seed = bytes(rng.randrange(256) for _ in range(SIZE))
    yield from copy_caller_cases(callers, seed)
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

    def read32(memory, address):
        return struct.unpack_from("<I", memory, address - BASE)[0]

    def transfer(memory, source, destination, width):
        start, end = source - BASE, destination - BASE
        memory[end:end + width] = memory[start:start + width]

    def leaf(entry, host, initial, expected, eax, *, label, regs=(0, 0, 0, 0), stack=(), df=0):
        reg_eax, ecx, edi, edx = regs
        guest = (entry, reg_eax, ecx, edi, df, *stack, *([0] * (4 - len(stack))), 0, edx)
        return label, (entry, *host, *([0] * (4 - len(host))), df), guest, initial, expected, eax

    for entry, flag in CURSOR.items():
        root, child, inner, outer, grandparent, sentinel = (BASE + i * 0x180 for i in range(1, 7))
        for mode in range(8):
            for slot in ((BASE + 0x40, grandparent + 8) if mode == 6 else (BASE + 0x40,)):
                initial = bytearray(seed)
                for address in (root, child, inner, outer, grandparent, sentinel):
                    write(initial, address + flag, 0, 1)
                write(initial, slot, root)
                write(initial, sentinel + flag, 0x80, 1)
                write(initial, root + 8, child if mode < 3 else sentinel)
                write(initial, root + 4, sentinel if mode == 3 else outer)
                write(initial, child, sentinel if mode == 1 else inner)
                write(initial, inner, sentinel)
                write(initial, outer + 4, sentinel if mode == 5 else grandparent)
                write(initial, outer + 8, root if mode > 4 else inner)
                write(initial, grandparent + 4, sentinel)
                if slot != grandparent + 8:
                    write(initial, grandparent + 8, outer if mode == 6 else root)
                if mode == 0:
                    write(initial, root + flag, 1, 1)
                expected = initial.copy()
                result, stored = (
                    (root, None), (sentinel, child), (sentinel, inner), (sentinel, sentinel),
                    (outer, outer), (sentinel, sentinel), (sentinel, sentinel), (grandparent, grandparent)
                )[mode]
                if stored is not None:
                    write(expected, slot, stored)
                yield leaf(entry, (slot,), initial, expected, result,
                           label=f"{entry:#x}/cursor/{mode}/{slot:#x}", regs=(0, 0, 0, slot))

    for entry, (kind, stride, fields) in PACKED.items():
        first = BASE + 0x600
        for count in (0, 1, 3):
            last = first + count * stride
            for offset in (-1, 0, 1, 0x300):
                expected = bytearray(seed)
                destination, slot = first + offset, BASE + 0x100
                if kind == "one":
                    if count > 1:
                        continue
                    destination = destination if count else 0
                    for field, width in fields if count else ():
                        transfer(expected, first + field, destination + field, width)
                    host, regs, stack, result = (destination, first), (destination, first, 0, 0), (), destination
                elif kind == "fill":
                    for record in range(count):
                        for field, width in fields:
                            transfer(expected, destination + field, first + record * stride + field, width)
                    host, regs, stack = (destination, first, last), (0, destination, 0, 0), (first, last)
                    result = last + (20 if stride == 24 else 9) if count else last
                elif kind == "forward":
                    for record in range(count):
                        for field, width in fields:
                            index = record * stride + field
                            transfer(expected, first + index, destination + index, width)
                    host, regs, stack = (destination, first, last), (destination, 0, 0, 0), (first, last)
                    result = destination + count * stride
                else:
                    end = destination + count * stride
                    for record in range(count - 1, -1, -1):
                        for field, width in fields:
                            index = record * stride + field
                            transfer(expected, first + index, destination + index, width)
                    write(expected, slot, destination)
                    host, result = (slot, first, last, end), slot
                    if kind == "stackback":
                        regs, stack = (0, 0, 0, 0), (slot, first, last, end)
                    else:
                        regs, stack = (0, 0, slot, 0), (first, last, end)
                yield leaf(entry, host, seed, expected, result,
                           label=f"{entry:#x}/packed/{count}/{offset}", regs=regs, stack=stack or ((0,) if kind == "one" else ()))

    owner, a, b = BASE + 0x180, BASE + 0x700, BASE + 0x800
    for first in (0, a):
        for last in (0, b):
            for slot in (owner + 0x64, a, BASE + 0xa00):
                initial = bytearray(seed)
                write(initial, owner + 0x68, first)
                write(initial, owner + 0x74, last)
                expected = initial.copy()
                for offset, value in ((0, read32(initial, first) if first else 0), (4, first),
                                      (8, read32(initial, last) if last else 0), (12, last)):
                    write(expected, slot + offset, value)
                yield leaf(0x23B80, (slot, owner), initial, expected, slot,
                           label=f"23b80/{first}/{last}/{slot}", regs=(slot, owner, 0, 0))

    for length in (0, 2, 3, 12):
        for needle in (0, 7, 8, 9, 10):
            initial = bytearray(seed)
            cursor = a if length else 0
            write(initial, owner + 0x4c, cursor)
            write(initial, owner + 0x50, cursor + length)
            for index, value in enumerate((7, 8, 9)):
                write(initial, a + index * 4, value)
            result = {0: 7, 7: 8, 8: 9}.get(needle, 0) if length == 12 else 0
            yield leaf(0x235D10, (owner, needle), initial, initial, result,
                       label=f"235d10/{length}/{needle}", regs=(0, 0, needle, owner))

    for destination in (0, a - 1, a, a + 1, b):
        expected = bytearray(seed)
        if destination:
            for offset, width in ((0, 4), (4, 2), (6, 1), (8, 4), (12, 4), (16, 4), (20, 4)):
                transfer(expected, a + offset, destination + offset, width)
        yield leaf(0x1DCF30, (destination, a), seed, expected, destination,
                   label=f"1dcf30/{destination}", regs=(destination, a, 0, 0), stack=(0x8abcdef0,))

    for size in (0, 3, 4, 7, 11):
        for df in (0, 1):
            for destination in (b, a + 1, a + 0x10):
                initial = bytearray(seed)
                # Use a repeated low byte in the payload so aliasing the size
                # can change it without producing an unmapped terminator.
                initial[a - BASE:a - BASE + 0x60] = bytes(0x60)
                write(initial, a + 0x3c, size)
                initial[a + 0x40 - BASE] = 9
                expected = initial.copy()
                for index, offset in enumerate((0x38, 8, 12, 16, 20, 24, 28, 44, 40)):
                    transfer(expected, a + offset, destination + index * 4, 4)
                expected = byte_copy(expected, a + 0x40, destination + 0x2c,
                                     read32(expected, a + 0x3c), df)
                result = read32(expected, a + 0x3c)
                write(expected, destination + 0x2c + result, 0, 1)
                write(expected, destination + 0x130, 0, 1)
                yield leaf(0x2F466F, (a, destination), initial, expected, result,
                           label=f"2f466f/{size}/{df}/{destination}", stack=(a, destination), df=df)

    for df in (0, 1):
        for count, available in ((0, 7), (5, 0), (5, 13), (15, 7)):
            for destination in (a + 1, b, owner + 0x14):
                initial = bytearray(seed)
                context = owner + 0x200
                for addr, value in ((owner + 0xc, destination), (owner + 0x10, count),
                                    (owner + 0x14, 0xfffffffb),
                                    (owner + 0x1c, context), (context + 0x10, a),
                                    (context + 0x14, available), (context + 8, 0x2468ace0)):
                    write(initial, addr, value)
                amount = min(count, available)
                expected = initial.copy()
                result = owner
                if amount:
                    expected = byte_copy(initial, a, destination, amount, df)
                    # Keep the pointer valid in fixture cases that alias fields.
                    if read32(expected, owner + 0x1c) != context:
                        continue
                    for addr, delta in ((owner + 0xc, amount), (context + 0x10, amount),
                                        (owner + 0x14, amount), (owner + 0x10, -amount),
                                        (context + 0x14, -amount)):
                        write(expected, addr, (read32(expected, addr) + delta) & 0xffffffff)
                    if read32(expected, context + 0x14) == 0:
                        write(expected, context + 0x10, read32(expected, context + 8))
                    result = context
                yield leaf(0x251790, (owner,), initial, expected, result,
                           label=f"251790/{count}/{available}/{df}/{destination}", regs=(owner, 0, 0, 0), df=df)

    for df in (0, 1):
        for source in (a, b, a + 4):
            for count in (0, 1, 3, 0x40000003):
                initial = bytearray(seed)
                write(initial, a + 0x104, 2)
                write(initial, source + 0x104, count)
                expected = initial.copy()
                if source != a:
                    start = a + read32(initial, a + 0x104) * 4 + 4
                    expected = byte_copy(initial, source + 4, start, (count * 4) & 0xffffffff, df)
                    write(expected, a + 0x104, (read32(expected, a + 0x104) + read32(expected, source + 0x104)) & 0xffffffff)
                    first = read32(expected, a + 0x10c) | read32(expected, source + 0x10c)
                    second = read32(expected, a + 0x110)
                    write(expected, a + 0x10c, first)
                    write(expected, a + 0x110, second | read32(expected, source + 0x110))
                yield leaf(0x162C60, (a, source), initial, expected, a,
                           label=f"162c60/{count}/{df}/{source}", regs=(a, 0, 0, source), df=df)

    for df in (0, 1):
        for sizes in (None, (), (0,), (3, 7)):
            for update in (0, 1):
                initial = bytearray(seed)
                record, table, obj = owner, a, BASE + 0x400
                device = BASE - 0x2600
                write(initial, record, 0 if sizes is None else table)
                write(initial, record + 4, b)
                write(initial, record + 8, 0x60)
                write(initial, record + 12, 0xf1234567)
                write(initial, obj, device)
                write(initial, obj + 0x818, 0xffffffc0)
                cursor = table
                for index, size in enumerate(sizes or ()):
                    write(initial, cursor, size)
                    write(initial, cursor + 4, index * 0x20)
                    cursor += 8 + size
                write(initial, cursor, 0xffffffff)
                expected = initial.copy()
                cursor = table
                for index, size in enumerate(sizes or ()):
                    expected = byte_copy(expected, cursor + 8, b + index * 0x20, size, df)
                    cursor += 8 + size
                write(expected, b + 0x60, 0x01234568)
                if update:
                    write(expected, device + 0x324c, 0x01234567)
                    write(expected, obj + 0x818, 0x20)
                yield leaf(0x377F00, (obj, record, update), initial, expected, 0x01234567,
                           label=f"377f00/{sizes}/{update}/{df}", stack=(obj, record, update), df=df)

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
    for entry_text, evidence in doc["copy_callers"].items():
        entry = int(entry_text, 16)
        body = read(entry, evidence["size"])
        require(hashlib.sha256(body).hexdigest().upper() == evidence["sha256"],
                f"retail caller body hash changed at {entry_text}")
        site = int(evidence["site"], 16)
        before, after = COPY_CALL_SHAPES[evidence["output_register"]]
        require(site == entry + len(before) and body[:len(before)] == before and
                body[len(before) + 5:] == after, f"retail caller shape differs at {entry_text}")
        require(target(site, read(site, 5)) == int(evidence["target"], 16),
                f"retail caller target differs at {entry_text}")
        result[entry] = body
    return result


# The optional Linux runner executes only the pinned functions, with isolated
# data and no game runtime. It compares memory plus EAX, with flat segments.
START = r"""
.globl _start
.section .bss
input: .zero 48
result: .zero 4
saved_esp: .zero 4
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
    mov $48,%edx
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
    mov input+40,%edx
    mov input+44,%esi
    mov %esp,saved_esp
    call *input
    cld
    mov %eax,result
    # Only copy-caller packets set ESI. Their plain RET restores outer ESP.
    cmpl $0,input+44
    je emit
    cmp saved_esp,%esp
    jne fail
emit:
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
            set(COPY) | AUDIO | set(SHIFT) | FORWARD | set(FIXED) | set(CURSOR) | set(PACKED) |
            {0x00236EC0, 0x0031B21F, 0x00352E8D, 0x00023B80, 0x00235D10,
             0x001DCF30, 0x002F466F, 0x00251790, 0x00162C60, 0x00377F00}, "model inventory changed")
    paths = []
    for entry, evidence in doc["bodies"].items():
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (evidence["sha256"], False),
                f"source body identity changed at {entry}")
        paths.append(str(path))
    callers = doc["copy_callers"]
    require(len(callers) == 18 and len({item["target"] for item in callers.values()}) == 18,
            "unexpected copy caller inventory")
    require(sum(item["output_register"] == "esi" for item in callers.values()) == 9,
            "unexpected copy caller register families")
    for entry, evidence in callers.items():
        path = source_path(ROOT, entry)
        source = path.read_text(encoding="utf-8")
        require(read_body_digest(source) == (evidence["sha256"], False),
                f"source caller body identity changed at {entry}")
        require(evidence["target"] in doc["bodies"], f"missing copy target for {entry}")
        calls = re.findall(r"\bFUN_([0-9a-f]{8})\s*\(", source.partition("{")[2])
        require(calls == [evidence["target"][2:]], f"source caller target differs at {entry}")
        paths.append(str(path))
    raw = read_retail(args.xbe, doc) if args.xbe else None
    with tempfile.TemporaryDirectory(prefix="bf-guest-list-copy-") as folder:
        directory = Path(folder)
        retail = native_runner(directory, raw) if args.retail_native else None
        model = directory / "model.exe"
        fixture = ROOT / "tests/fixtures/guest32_list_and_copy_20261112.cpp"
        suite = list(cases(callers))
        for opt in ("-O0", "-O2"):
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", str(ROOT / "include"), str(fixture), *paths, "-o", str(model)],
                           check=True, timeout=60)
            for name, host, guest, initial, expected, eax in suite:
                try:
                    observed = subprocess.check_output([str(model)], input=packet(host, initial), timeout=10)
                except (subprocess.CalledProcessError, subprocess.TimeoutExpired) as exc:
                    raise ValueError(f"{opt} fixture failed to execute: {name}") from exc
                require(observed == packet((eax,), expected), f"{opt} fixture differs: {name}")
                if retail:
                    guest_input = (*guest, *([0] * (12 - len(guest))))
                    original = subprocess.check_output([str(retail)], input=packet(guest_input, initial), timeout=10)
                    require(observed == original, f"{opt} original x86 differs: {name}")
            oracle = " and retail x86" if retail else ""
            print(f"PASS {opt}: linked {len(paths)} models, {len(suite)} cases against fixtures{oracle}")


if __name__ == "__main__":
    main()
