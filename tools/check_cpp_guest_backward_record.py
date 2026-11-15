#!/usr/bin/env python3
"""Link the backward record pair and optionally compare against pinned retail x86."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_d3d_guest_kick import FIXTURE, FLAGS, MASK, RETURN, STACK, emulate, outputs, pairs, words
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections, target
from source_layout import source_path


CALLER = 0x001cefe0
CALLEE = 0x001d6920
CALL_SITE = 0x001cf002
BODIES = {
    CALLER: (45, "17DE0E74456EE622C4EAF7C4119ED29E0C482B7C8D4EAEFAC23EF0E1093CF5F9",
             "1c257b8116cb9acf92e28b2ed2603d6f69caafe31e8d317817411a1400a8aa75"),
    CALLEE: (162, "8239D2AB2E4D619C3866E6C4434A1A1B67F32B7FEA46BB3358704C56AAD6ADE9",
             "4d83d4ed7f7405cb31201fccd6c32b02ff7d993291f6342391096ad2c04e040c"),
}
DATA = 0x483080
DEST = 0x484080
OUT = 0x485000
STRIDE = 44


def retail(image):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "retail XBE identity differs")
    layout, result = sections(image), {}
    for entry, (size, digest, _) in BODIES.items():
        offset = file_offset(layout, entry, size)
        body = image[offset:offset + size]
        require(hashlib.sha256(body).hexdigest().upper() == digest, f"retail body differs at {entry:#x}")
        result[entry] = body
    site = CALL_SITE - CALLER
    require(target(CALL_SITE, result[CALLER][site:site + 5]) == CALLEE, "retail CALL target differs")
    return result


def corpus():
    for entry in BODIES:
        callee_sp = STACK - 20 if entry == CALLER else STACK
        for name, count, first, output_start, result_address in (
            ("empty", 0, DATA, DEST, OUT),
            ("single", 1, DATA, DEST, OUT),
            ("multiple", 3, DATA, DEST, OUT),
            ("overlap-up", 2, DATA, DATA + 4, OUT),
            ("overlap-down", 2, DATA, DATA - 4, OUT),
            ("unaligned-overlap", 2, DATA + 1, DATA + 3, OUT),
            ("saved-register-destination", 1, DATA, callee_sp - 44, OUT),
            ("incoming-spill-alias", 1, DATA, callee_sp + 4, OUT),
            ("source-reads-stack", 1, callee_sp - 40, DEST, OUT),
            ("empty-result-alias-saved-esi", 0, DATA, DEST, callee_sp - 12),
            ("result-alias-saved-esi", 1, DATA, DEST, callee_sp - 12),
            ("result-alias-saved-ecx", 1, DATA, DEST, callee_sp - 4),
            ("result-alias-ret", 1, DATA, RETURN, callee_sp),
            ("copied-ret", 1, DATA, callee_sp - 36, OUT),
            ("wrapped-source", 2, 0xffffffe0, DEST, OUT),
        ):
            for df in (0, 0x400):
                regs = [result_address, 0xaf631abc, 0x87654321, 0xfedc4321, result_address,
                        0x19346817, 0x4b5d8fac, STACK, entry, 0x893 | df, FLAGS]
                last = (first + count * STRIDE) & MASK
                dest_end = output_start + count * STRIDE
                memory = {((first + i) & MASK): (0x4492fea1 + i * 0x12493017) & MASK
                          for i in range(0, count * STRIDE, 4)}
                memory.update({STACK: RETURN, STACK + 4: first, STACK + 8: last,
                               STACK + 12: dest_end})
                memory.setdefault(output_start, 0)
                memory.setdefault(result_address, 0)
                if name == "incoming-spill-alias" and entry == CALLER:
                    memory[first + 16] = RETURN
                if name == "copied-ret":
                    memory[first + 36] = RETURN
                early_resume = entry == CALLER and name in {"result-alias-ret", "copied-ret"}
                expected_sp = callee_sp + 4 if early_resume else STACK + 4
                yield name, regs, memory, expected_sp, output_start, result_address


def host_fixture():
    # Store byte-addressed memory while the guest performs only DWORD accesses.
    memory = r"""
static void write_memory(Word address, Word value)
{
    for (unsigned i = 0; i < 4u; ++i)
        memory[address + i] = (value >> (i * 8u)) & 0xffu;
}

static Word read_memory(Word address)
{
    Word value = 0;
    for (unsigned i = 0; i < 4u; ++i)
        value |= memory[address + i] << (i * 8u);
    return value;
}
"""
    return (FIXTURE.replace("bf_d3d_guest_kick.h", "bf_xbe_guest32_backward_record.h")
            .replace("Word bf_guest_read_u32", memory + "\nWord bf_guest_read_u32")
            .replace("auto value = memory[address];", "auto value = read_memory(address);")
            .replace("memory[address] = value;", "write_memory(address, value);")
            .replace("memory.emplace(address, read_word());", "write_memory(address, read_word());")
            .replace("@DISPATCH@", '''case 0x001cefe0u: FUN_001cefe0(state); break;
        case 0x001d6920u: FUN_001d6920(state); break;'''))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    sources = []
    for entry, (_, digest, draft_digest) in BODIES.items():
        path = source_path(ROOT, f"{entry:#010x}")
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"source body label differs at {entry:#x}")
        old = ROOT / f"tests/fixtures/original_{entry:#010x}_pre_guest32_20261115.txt"
        historical = old.read_text(encoding="utf-8")
        require(hashlib.sha256(historical.encode("utf-8")).hexdigest() == draft_digest,
                f"archived source differs at {entry:#x}")
        sources.append(path)
    bodies = retail(args.xbe.read_bytes()) if args.xbe else None
    cases = list(corpus())
    inputs = b"".join(pairs(memory.items()) + pairs([]) + words(regs) for _, regs, memory, *_ in cases)
    references = []
    if bodies:
        for name, regs, memory, *_ in cases:
            try:
                references.append(emulate(bodies, regs, memory, [], instruction_limit=256))
            except Exception as error:
                raise RuntimeError(f"{regs[8]:#x}/{name}: retail execution failed") from error
    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-guest-backward-record-") as directory:
        folder = Path(directory)
        fixture = folder / "copy.cpp"
        fixture.write_text(host_fixture(), encoding="utf-8")
        previous = None
        for opt in ("-O0", "-O2"):
            executable = folder / "copy"
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", ROOT / "include", fixture, *sources, "-o", executable],
                           check=True, timeout=60)
            data = subprocess.check_output([executable], input=inputs, timeout=10)
            require(previous is None or data == previous, "optimization changed guest effects")
            previous = data
            actual = list(outputs(data))
            require(len(actual) == len(cases), "missing fixture output")
            for i, ((name, regs, _, expected_sp, start, result_address), (state, effects)) in enumerate(
                    zip(cases, actual)):
                name = f"{regs[8]:#x}/{name}"
                require(state[7:9] == (expected_sp, RETURN), f"{name}: wrong guest return")
                require(state[9] & 0x400 == regs[9] & 0x400 and state[10] == FLAGS,
                        f"{name}: direction or flag mask differs")
                require((2, result_address, start) in effects, f"{name}: missing final destination write")
                if references:
                    original, accesses = references[i]
                    require(state[:9] == tuple(original[:9]), f"{name}: registers differ")
                    require((state[9] ^ original[9]) & state[10] == 0, f"{name}: defined flags differ")
                    require(effects == accesses, f"{name}: ordered accesses differ")
            print(f"PASS {opt}: two linked backward record objects, {len(actual)} cases" +
                  (" against executed retail x86" if references else ""))


if __name__ == "__main__":
    main()
