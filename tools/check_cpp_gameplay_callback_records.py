#!/usr/bin/env python3
"""Link and compare four retail record models used by the gameplay callback."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_d3d_guest_kick import FIXTURE, FLAGS, STACK, RETURN, emulate, outputs, pairs, words
import check_cpp_gameplay_record_links as prior
from check_cpp_direct_call_batches import ROOT, file_offset, require, sections, target
from source_layout import source_path

BODIES = {
    0x120F0: (71, "9FEFE68C61CEC0943A913B1988495825BFD1E3F128E1F92DB0A3DA5D8376BB9C"),
    0x23EE0: (53, "7DEE718511B83945A878535AA238DFA83FD306C84F352806D54E2E9FA7CB54A1"),
    0x23B20: (94, "9CE7FD9D9BC4D6F77E95EBDFFD8D7F549F0100D0380FB6FC4B80B70894B869A8"),
    0x8F6A0: (64, "339DC70ADE9DA431A03D8964268E2B983BF89DF209448A87B645006C63D4420D"),
}
OBJECT = 0x466000
OTHER = 0x466400
RESULT = 0x466821


def authenticate(image):
    bodies = prior.authenticate(image)
    layout = sections(image)
    for entry, (size, digest) in BODIES.items():
        offset = file_offset(layout, entry, size)
        body = image[offset:offset + size]
        require(hashlib.sha256(body).hexdigest().upper() == digest, f"body changed at {entry:#x}")
        bodies[entry] = body
    for site, destination in ((0x2E4A9, 0x120F0), (0x2E673, 0x120F0), (0x2E53E, 0x23B20),
                              (0x2E6C3, 0x23EE0), (0x2E73C, 0x23EE0), (0x23EF6, 0x120F0),
                              (0x1212B, 0x8F6E0), (0x23B70, 0x8F6A0), (0x8F6AE, 0x8F6E0)):
        offset = file_offset(layout, site, 5)
        require(target(site, image[offset:offset + 5]) == destination, f"call changed at {site:#x}")
    return bodies


def corpus():
    for entry, modes in {
        0x120F0: ("ordinary", "empty", "local-alias", "wrap", "live-scratch"),
        0x23EE0: ("null", "masked", "zero-field", "state-four", "state-other", "scratch"),
        0x23B20: ("unchanged", "odd", "even", "object-stack"),
        0x8F6A0: ("zero", "odd", "even", "replace", "stack-alias"),
    }.items():
        for mode in modes:
            for df in (0, 0x400):
                regs = [OBJECT, 0x55667788, 2, 0x99aabbcc, OTHER, OBJECT, 0xdef01234,
                        STACK, entry, 0x893 | df, FLAGS]
                memory = {STACK: RETURN, STACK - 0x20: 0}
                scripted = []
                cleanup = 4
                if entry == 0x120F0:
                    if mode == "local-alias":
                        regs[0] = STACK - 16
                    elif mode == "wrap":
                        regs[0] = 0xfffffffc
                    obj = regs[0]
                    memory.update({(obj + 8) & 0xffffffff: int(mode in ("empty", "live-scratch")),
                                   (obj + 16) & 0xffffffff: RESULT if mode != "local-alias" else RETURN})
                    expected = 0 if mode in ("empty", "live-scratch") else (
                        RETURN if mode == "local-alias" else RESULT
                    )
                    if mode == "live-scratch":
                        scripted = [(STACK - 4, 0), (STACK - 4, 3), (STACK - 4, 3)]
                elif entry == 0x23EE0:
                    expected = (RESULT & 0xffffff00) | int(mode in ("zero-field", "state-four"))
                    memory.update({OBJECT + 0x80: 0, OTHER + 8: int(mode == "scratch"),
                                   OTHER + 16: RESULT, RESULT + 0x59c: int(mode != "zero-field"),
                                   OTHER + 0x58: 4 if mode == "state-four" else 5})
                    if mode == "null":
                        regs[0] = expected = 0
                    if mode == "masked":
                        memory[OBJECT + 0x80] = 0xabcdefc0
                        expected = (0xabcdefc0 >> 6) & 0xffffff00
                    if mode == "scratch":
                        memory[0x59c] = 0
                        expected = 1
                elif entry == 0x23B20:
                    cleanup = 8
                    regs[2] = {"unchanged": 0, "odd": 3, "even": 2, "object-stack": 2}[mode]
                    if mode == "object-stack":
                        regs[5] = STACK + 4
                    obj = regs[5]
                    memory.update({STACK + 4: 0x12345678, obj + 0x38: 0xdeadbef1,
                                   obj + 0x3c: 0x9876ab85, prior.bucket(2): OTHER})
                    expected = obj
                else:
                    if mode == "stack-alias":
                        regs[4] = STACK - 8
                    obj = regs[4]
                    word = {"zero": 0, "odd": 3, "even": 2, "replace": 4, "stack-alias": 3}[mode]
                    memory.update({obj: 0, obj + 4: 2 if mode == "replace" else 0,
                                   STACK + 4: word, STACK: RETURN,
                                   prior.bucket(2): OTHER, prior.bucket(4): 0x12345678})
                    if mode == "replace":
                        memory[prior.bucket(2)] = obj
                    expected = (0x12345678 if mode == "replace" else OTHER) if word and word % 2 == 0 else 0
                yield f"{entry:x}/{mode}/{df}", regs, memory, scripted, expected, cleanup


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    paths, dispatch = [], []
    for entry, (_, digest) in {**BODIES, prior.CALLEE: prior.BODIES[prior.CALLEE]}.items():
        path = source_path(ROOT, f"{entry:#010x}")
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False), f"body label differs at {entry:#x}")
        paths.append(path)
        if entry in BODIES:
            dispatch.append(f"case 0x{entry:x}u: FUN_{entry:08x}(state); break;")
    bodies = authenticate(args.xbe.read_bytes()) if args.xbe else None
    suite = list(corpus())
    inputs = b"".join(pairs(list(memory.items())) + pairs(scripted) + words(regs)
                      for _, regs, memory, scripted, _, _ in suite)
    original = [emulate(bodies, regs, memory, scripted, allowed_widths=(1, 4),
                        allowed_write_widths=(1, 4))
                for _, regs, memory, scripted, _, _ in suite] if bodies else None
    code = FIXTURE.replace("bf_d3d_guest_kick.h", "bf_guest32_linked_records.h").replace(
        "@DISPATCH@", "\n".join(dispatch)).replace("void bf_guest_write_u32", """
std::uint8_t bf_guest_read_u8(Word address)
{
    const auto value = static_cast<std::uint8_t>(memory[address]);
    effects.push_back({1u, address, value});
    return value;
}

void bf_guest_write_u8(Word address, std::uint8_t value)
{
    memory[address] = (memory[address] & 0xffffff00u) | value;
    effects.push_back({2u, address, value});
}

void bf_guest_write_u32""")
    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-gameplay-callback-records-") as directory:
        folder = Path(directory)
        fixture = folder / "fixture.cpp"
        fixture.write_text(code, encoding="utf-8")
        previous = None
        for opt in ("-O0", "-O2"):
            exe = folder / "model"
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", ROOT / "include", fixture, *paths, "-o", exe], check=True, timeout=60)
            observed = subprocess.check_output([exe], input=inputs, timeout=15)
            require(previous is None or observed == previous, "optimization changed guest state")
            previous = observed
            output = list(outputs(observed))
            require(len(output) == len(suite), "missing fixture output")
            for i, ((label, _, _, _, expected, cleanup), (state, effects)) in enumerate(zip(suite, output)):
                require(state[0] == expected and state[7:9] == (STACK + cleanup, RETURN),
                        f"{label}: EAX/ESP/EIP differs: {state[0]:#x}")
                if original:
                    native, accesses = original[i]
                    require(state[:9] == tuple(native[:9]), f"{label}: registers differ")
                    require((state[9] ^ native[9]) & state[10] == 0, f"{label}: defined flags differ")
                    require(effects == accesses, f"{label}: ordered guest effects differ")
            print(f"PASS {opt}: {len(paths)} linked objects, {len(suite)} cases" +
                  (" against executed retail x86" if original else ""))


if __name__ == "__main__":
    main()
