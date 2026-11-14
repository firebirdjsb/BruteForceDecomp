#!/usr/bin/env python3
"""Verify the linked campaign record initializer against original i386 code."""
import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections, target
import check_cpp_guest32_record_leaves as fixture
from source_layout import source_path

ENTRY = "0x0007b3c0"
BODY_SHA = "E0F42FF24D5DC38ECB0B0E15951A0111A93E923A0C790626AADC2E435F8AC9D7"
CALLER_SHA = "0FDBE6FD4DFAD0AD2B74FBC9F16D67C66B05C318DC3AD54E1A97307780C0A388"
FIELDS = (
    (0x18, "I", 0), (0x1C, "I", 15), (0x08, "B", 0), (0x38, "I", 15),
    (0x34, "I", 0), (0x24, "B", 0), (0x54, "I", 7), (0x50, "I", 0),
    (0x40, "H", 0), (0x58, "I", 0),
    *((offset, "I", 0) for offset in range(0x5C, 0x7C, 4)),
    *((offset, "I", 0) for offset in (0x80, 0x84, 0x88, 0x90, 0x94, 0x98)),
)


def authenticate_caller(image):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail image")
    layout = sections(image)
    spans = ((file_offset(layout, start, size), size) for start, size in ((0x7B100, 237), (0x7B1F0, 458)))
    caller = b"".join(image[offset:offset + size] for offset, size in spans)
    require(hashlib.sha256(caller).hexdigest().upper() == CALLER_SHA,
            "campaign caller body changed")
    for site in (0x7B179, 0x7B2B9):
        o = file_offset(layout, site, 5)
        require(target(site, image[o:o + 5]) == int(ENTRY, 16), "campaign call changed")
    for va, value in ((0x40DD04, b"\\campaign\0"), (0x40DD10, b"campaign-bf\0")):
        o = file_offset(layout, va, len(value))
        require(image[o:o + len(value)] == value, "campaign string changed")
    for pc, opcode in ((0x7B106, "a110dd4000"), (0x7B23C, "b804dd4000")):
        encoding = bytes.fromhex(opcode)
        o = file_offset(layout, pc, len(encoding))
        require(image[o:o + len(encoding)] == encoding, "campaign reference changed")


def cases(returns):
    for index, delta in enumerate((0x400, 0x401, -0x44, -0x9C)):
        obj = fixture.STACK + delta
        esp = fixture.STACK
        pc = returns[index % len(returns)]
        for df in (0, 0x400):
            regs = (obj, 0x1234AABB, 0x2345BBCC, 0x3456CCDD, 0x4567DDEE, 0x5678EEFF,
                    0x6789FF00, esp, int(ENTRY, 16), 0x893 | df, fixture.FLAGS)
            original = bytearray((i * 53 + (i >> 3)) & 255 for i in range(fixture.SIZE))
            struct.pack_into("<I", original, esp - fixture.BASE, pc)
            expected = original.copy()
            for offset, width, value in FIELDS[:8]:
                struct.pack_into("<" + width, expected, obj - fixture.BASE + offset, value)
            struct.pack_into("<I", expected, esp - fixture.BASE - 4, regs[4])
            for offset, width, value in FIELDS[8:]:
                struct.pack_into("<" + width, expected, obj - fixture.BASE + offset, value)
            esi, = struct.unpack_from("<I", expected, esp - fixture.BASE - 4)
            # Final ADD ECX,8 is from an aligned/misaligned record. DEC ESI
            # carries its CF forward, sets ZF/PF and leaves DF untouched.
            flags = 0x46 | df
            final = (obj, regs[1], obj + 0x7C, 0, esi, regs[5], regs[6], esp + 4, pc, flags, fixture.FLAGS)
            yield regs, original, final, expected


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    path = source_path(ROOT, ENTRY)
    require(read_body_digest(path.read_text(encoding="utf-8")) == (BODY_SHA, False), "source body label changed")
    image = args.xbe.read_bytes() if args.xbe else None
    if image:
        authenticate_caller(image)
    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-campaign-record-") as directory:
        temp = Path(directory)
        fixture.BODIES = {ENTRY: (100, BODY_SHA)}
        oracle, returns, suffix = (fixture.native_oracle(temp, image) if image else
                                   (None, (0x8048100, 0x8048200), bytes(fixture.SUFFIX_SIZE)))
        suite = list(cases(returns))
        slots = bytes(fixture.SLOTS_SIZE)
        header = '#include "bf_guest32_campaign_records.h"\n'
        code = header + fixture.FIXTURE.replace("@DISPATCH@", f"case {ENTRY}u: FUN_0007b3c0(guest); break;")
        host = temp / "fixture.cpp"
        host.write_text(code, encoding="utf-8")
        request = b"".join(struct.pack("<12I", i, *regs) + slots + suffix + memory
                           for i, (regs, memory, _, _) in enumerate(suite))
        expected = b"".join(struct.pack("<11I", *final) + slots + memory for _, _, final, memory in suite)
        if oracle:
            native_request = b"".join(struct.pack("<12I", i, *regs) + memory + slots
                                       for i, (regs, memory, _, _) in enumerate(suite))
            observed = fixture.execute(oracle, native_request, temp)
            size = 40 + fixture.SIZE + fixture.SLOTS_SIZE
            require(len(observed) == len(suite) * size, "incomplete retail result")
            for i, (_, _, final, memory) in enumerate(suite):
                offset = i * size
                state = struct.unpack_from("<10I", observed, offset)
                require(state[:9] == final[:9] and (state[9] ^ final[9]) & final[10] == 0,
                        f"retail state differs in case {i}")
                require(observed[offset + 40:offset + size] == memory + slots,
                        f"retail memory differs in case {i}")
        for opt in ("-O0", "-O2"):
            exe = temp / "model"
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", ROOT / "include", host, path, "-o", exe], check=True, timeout=60)
            require(fixture.execute(exe, request, temp) == expected, f"model differs at {opt}")
            print(f"PASS {opt}: linked campaign initializer, {len(suite)} cases" +
                  (" against retail x86" if oracle else ""))


if __name__ == "__main__":
    main()
