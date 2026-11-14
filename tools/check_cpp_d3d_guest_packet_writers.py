#!/usr/bin/env python3
"""Link guest REP MOVSD routines and compare their ordered retail effects."""
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
    0x003306DE: (100, "4FF181C43BEFEC6C313C6A58F578D60B09AFAC675B35D520CCF791857F2687BA"),
    0x0012ABA0: (87, "499A2146F4B3AEE2E10A784082225CC5F60EDC497100359BBE57EE0597DEB91C"),
}
TABLE = 0x37BB88
SOURCE = 0x465400
DESTINATION = 0x466000
DEVICE = 0x460000
LAUNCH_GLOBAL = 0x386444
LAUNCH_ROOT = 0x464000
LAUNCH_PAGE = 0x465000


def iterator_cases():
    cursor = DEVICE + 0x300
    node, left, child, sentinel, parent, grandparent = (DEVICE + i * 0x100 for i in range(5, 11))
    for kind in ("unchanged", "left-tip", "left-chain", "parent-flag", "parent-mismatch", "parent-chain",
                 "saved-ebx-alias", "parent-slot-alias"):
        slot = cursor
        memory = {STACK: RETURN, node + 0x15: 0, node + 8: left, left + 0x15: 0,
                  left: child, child + 0x15: 0, child: sentinel, sentinel + 0x15: 0x80,
                  node + 4: parent, parent + 0x15: 0, parent + 4: grandparent,
                  parent + 8: node, grandparent + 0x15: 0x7f}
        eax, ecx = sentinel, child
        if kind == "unchanged":
            memory[node + 0x15] = 0xfe
            eax, ecx = node, 0x13579bfe
        if kind == "left-tip":
            memory[child + 0x15] = 1
            eax, ecx = child, left
        if kind in ("parent-flag", "parent-mismatch", "parent-chain", "parent-slot-alias"):
            memory[left + 0x15] = 0xff
            eax, ecx = grandparent, node | 0x7f
            if kind == "parent-flag":
                memory[parent + 0x15] = 0xf1
                eax, ecx = parent, left | 0xf1
            if kind == "parent-mismatch":
                memory[parent + 8] = child
                eax, ecx = parent, node
            if kind == "parent-slot-alias":
                # The iterator cell occupies the parent link that gets reloaded.
                slot = parent + 4
                eax, ecx = parent, parent
        if kind == "saved-ebx-alias":
            slot = STACK - 4
        memory[slot] = node
        yield kind, slot, memory, eax, ecx


def corpus():
    for kind, slot, memory, eax, _ in iterator_cases():
        yield f"iterator/{kind}", 0x0012ABA0, 0, slot, memory, eax, 4
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

        for kind in ("null-root", "null-page", "plain", "extended", "sentinel", "overlap",
                     "shared-output", "stack-output", "fallback-copy"):
            out_a, out_b = 0x469000, 0x469004
            dst = 0x46D000
            page = LAUNCH_PAGE
            if kind == "overlap":
                dst = page + 0x404
            if kind in ("shared-output", "fallback-copy"):
                out_a = out_b
            if kind == "stack-output":
                out_b = STACK - 4
            memory = {STACK: RETURN, STACK + 4: out_a, STACK + 8: out_b, STACK + 12: dst,
                      LAUNCH_GLOBAL: 0 if kind in ("null-root", "fallback-copy") else LAUNCH_ROOT,
                      LAUNCH_ROOT: 0 if kind == "null-page" else page,
                      out_a: 0x87654321, out_b: 0x12345678}
            source = out_b + 0x400 if kind == "fallback-copy" else page + 0x400
            step = -4 if df else 4
            for i in range(0x300):
                memory[source + i * step] = 0x78560000 + i
                memory.setdefault(dst + i * step, 0)
            memory.update({page: 0xffffffff if kind == "sentinel" else 0x13572468,
                           page + 0x214: int(kind in ("extended", "shared-output", "stack-output")),
                           page + 0x218: 0x24681357})
            result = int(kind in ("extended", "shared-output", "stack-output"))
            yield f"launch/{df}/{kind}", 0x003306DE, df, 0x11119999, memory, result, 16


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
    iterator_ecx = {f"iterator/{k}": ecx for k, _, _, _, ecx in iterator_cases()}
    for label, entry, df, dst, memory, result, cleanup in corpus():
        regs = [dst, 0x01234567, 0x13579BDF, DEVICE, 0x76543210, 0xFEDCBA98,
                0x89ABCDEF, STACK, entry, 0x897 | (df << 10), FLAGS]
        if entry == 0x0012ABA0:
            regs[3] = dst
        cases.append((label, regs, memory, result, cleanup))
    payload = b"".join(pairs(list(memory.items())) + pairs([]) + words(regs)
                       for _, regs, memory, _, _ in cases)
    references = [emulate(bodies, regs, memory, [], allowed_widths=(1, 4), instruction_limit=1024)
                  for _, regs, memory, _, _ in cases] if bodies else None

    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    fixture_code = FIXTURE.replace('#include "bf_d3d_guest_kick.h"', '#include "bf_d3d_guest_packet_writers.h"')
    fixture_code = fixture_code.replace("using Word = std::uint32_t;",
                                        "void FUN_0012aba0(bf_guest32_constructor_state& guest);\n"
                                        "using Word = std::uint32_t;")
    fixture_code = fixture_code.replace("effects.size() > 128u", "effects.size() > 2048u")
    fixture_code = fixture_code.replace("void bf_guest_write_u32", """
std::uint8_t bf_guest_read_u8(Word address)
{
    const auto value = static_cast<std::uint8_t>(memory[address]);
    effects.push_back({1u, address, value});
    return value;
}

void bf_guest_write_u32""")
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
                is_iterator = regs[8] == 0x0012ABA0
                final_compare = label in ("iterator/parent-mismatch", "iterator/parent-slot-alias")
                flag_mask = FLAGS & ~0x10 if is_iterator and not final_compare else FLAGS
                require(state[9] & 0x400 == regs[9] & 0x400 and state[10] == flag_mask,
                        f"{label}: direction or flags mask differs")
                if is_iterator:
                    require(state[2] == iterator_ecx[label], f"{label}: ECX high bytes differ")
                    require(state[1] == (DEVICE + 0x700 if label == "iterator/saved-ebx-alias" else regs[1]),
                            f"{label}: EBX restore differs")
                if label.startswith("saved-ebx"):
                    require(state[1] == 0xB00, f"{label}: lost aliased saved EBX")
                if label.startswith("source-arg"):
                    require((WRITE, STACK + 4, 0x40B04) in effects, f"{label}: source slot reload lost")
                if label.startswith("launch"):
                    kind = label.rsplit("/", 1)[1]
                    copies = kind not in ("null-root", "null-page", "sentinel")
                    output_writes = 3 if kind == "plain" or kind == "overlap" or kind == "sentinel" else (
                        4 if result else 2
                    )
                    require(sum(kind == WRITE for kind, _, _ in effects) ==
                            3 + output_writes + (0x300 if copies else 0),
                            f"{label}: wrong number of writes")
                if references:
                    native, native_effects = references[index]
                    require(state[:9] == tuple(native[:9]), f"{label}: registers differ")
                    require((state[9] ^ native[9]) & state[10] == 0, f"{label}: defined flags differ")
                    require(effects == native_effects, f"{label}: ordered memory effects differ")
            print(f"PASS {opt}: {len(BODIES)} linked objects, {len(cases)} guest copy cases" +
                  (" against executed retail x86" if references else ""))


if __name__ == "__main__":
    main()
