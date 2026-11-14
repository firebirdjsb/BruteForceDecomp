#!/usr/bin/env python3
"""Link two D3D packet writers and compare their ordered retail guest effects."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_d3d_guest_kick import FIXTURE, FLAGS, RETURN, STACK, WRITE, emulate, outputs, pairs, words
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from source_layout import source_path

BODIES = {
    0x00370E10: (77, "6C032181F7B88352120F449AB12B68941B5211F005218032B2B26C810467E956"),
    0x0036EF80: (96, "E2CA26B1B1B04ECBA639E49668C899006CC5BC74D620652103AB7C3B51AE4AE9"),
}
TABLE = 0x37BB88
SOURCE = 0x465400
DESTINATION = 0x466000
DEVICE = 0x460000


def corpus():
    for df in (0, 1):
        for bank in (0, 0x80000000):
            for alias in (False, True):
                source = TABLE + (128 if bank else 0)
                dst = source if alias else DESTINATION
                memory = {TABLE + i * 4: 0x40700000 + i for i in range(-6, 120)}
                memory.setdefault(dst - 24, 0)
                memory.setdefault(dst + 84, 0)
                memory.update({STACK: RETURN, DEVICE + 0x36C: bank})
                yield f"fixed/{df}/{bank:#x}/{alias}", 0x00370E10, df, dst, memory, dst + 84, 4

        for count in (0, 1, 31, 32, 33):
            for delta in (0xC00, -4, 0, 4):
                dst = SOURCE + delta
                memory = {SOURCE + i * 4: 0x50600000 + i for i in range(-36, 70)}
                memory.setdefault(dst - 128, 0)
                memory.setdefault(dst + 140, 0)
                memory.update({STACK: RETURN, STACK + 4: SOURCE, STACK + 8: count})
                packets = max(1, (count + 31) // 32)
                yield f"chunk/{df}/{count}/{delta}", 0x0036EF80, df, dst, memory, dst + 4 * (count + packets), 12

        # The header changes the saved EBX. A separate case has the header
        # overwrite the source argument, with the one-word copy aliasing count.
        memory = {STACK: RETURN, STACK + 4: SOURCE, STACK + 8: 0}
        yield f"saved-ebx/{df}", 0x0036EF80, df, STACK - 4, memory, STACK, 12
        memory = {STACK: RETURN, STACK + 4: SOURCE, STACK + 8: 1, SOURCE: 1}
        yield f"source-arg/{df}", 0x0036EF80, df, STACK + 4, memory, STACK + 12, 12


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="retail XBE for ordered Unicorn execution")
    args = parser.parse_args()
    sources, dispatch = [], []
    bodies = {}
    if args.xbe:
        image = args.xbe.read_bytes()
        require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail XBE")
        layout = sections(image)
    for entry, (size, digest) in BODIES.items():
        path = source_path(ROOT, f"{entry:#010x}")
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"body label differs at {entry:#x}")
        sources.append(path)
        dispatch.append(f"        case {entry:#x}u: FUN_{entry:08x}(state); break;")
        if args.xbe:
            offset = file_offset(layout, entry, size)
            body = image[offset:offset + size]
            require(hashlib.sha256(body).hexdigest().upper() == digest, f"body digest differs at {entry:#x}")
            bodies[entry] = body

    cases = []
    for label, entry, df, dst, memory, result, cleanup in corpus():
        regs = [dst, 0x01234567, 0x13579BDF, DEVICE, 0x76543210, 0xFEDCBA98,
                0x89ABCDEF, STACK, entry, 0x897 | (df << 10), FLAGS]
        cases.append((label, regs, memory, result, cleanup))
    payload = b"".join(pairs(list(memory.items())) + pairs([]) + words(regs)
                       for _, regs, memory, _, _ in cases)
    references = [emulate(bodies, regs, memory, []) for _, regs, memory, _, _ in cases] if bodies else None

    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    fixture_code = FIXTURE.replace('#include "bf_d3d_guest_kick.h"', '#include "bf_d3d_guest_packet_writers.h"')
    with tempfile.TemporaryDirectory(prefix="bf-d3d-packet-writers-") as directory:
        fixture = Path(directory) / "fixture.cpp"
        fixture.write_text(fixture_code.replace("@DISPATCH@", "\n".join(dispatch)), encoding="utf-8")
        executable = Path(directory) / "model"
        previous = None
        for opt in ("-O0", "-O2"):
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror", opt,
                            "-I", ROOT / "include", fixture, *sources, "-o", executable],
                           check=True, timeout=60)
            data = subprocess.check_output([executable], input=payload, timeout=20)
            require(previous is None or data == previous, "optimization changed guest state")
            previous = data
            actual = list(outputs(data))
            require(len(actual) == len(cases), "incomplete fixture result")
            for index, (state, effects) in enumerate(actual):
                label, regs, _, result, cleanup = cases[index]
                require(state[0] == result and state[7:9] == (regs[7] + cleanup, RETURN),
                        f"{label}: returned cursor or stack differs")
                require(state[9] & 0x400 == regs[9] & 0x400 and state[10] == FLAGS,
                        f"{label}: direction or flags mask differs")
                if label.startswith("saved-ebx"):
                    require(state[1] == 0xB00, f"{label}: lost aliased saved EBX")
                if label.startswith("source-arg"):
                    require((WRITE, STACK + 4, 0x40B04) in effects, f"{label}: source slot reload lost")
                if references:
                    native, native_effects = references[index]
                    require(state[:9] == tuple(native[:9]), f"{label}: registers differ")
                    require((state[9] ^ native[9]) & state[10] == 0, f"{label}: defined flags differ")
                    require(effects == native_effects, f"{label}: ordered memory effects differ")
            print(f"PASS {opt}: {len(BODIES)} linked objects, {len(cases)} packet cases" +
                  (" against executed retail x86" if references else ""))


if __name__ == "__main__":
    main()
