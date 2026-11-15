#!/usr/bin/env python3
"""Link indirect-call models and compare actual retail x86 with controlled targets."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from check_cpp_d3d_guest_kick import FIXTURE, FLAGS, RETURN, STACK, emulate, outputs, pairs, words
from source_layout import source_path

BODIES = {
    0x0031198A: (35, "E67E2460D9F65EE794B0EC38E78CA61BA2BED9B03EC1976DB770EEA560232518",
                 "DSOUND__DSound_CRefCount_Release"),
    0x00311A3D: (22, "0A72B625B8E9E1A301DDF3C84EC304EDED77FC8886C86F41F03EFD6FA1FAC2B5",
                 "DSOUND__IDirectSound_Release"),
    0x00311A58: (22, "D3270BE9D4962CDCDB62EF4C3242B41B960C1F0CB7621E035393E8B7607DE92C",
                 "DSOUND__IDirectSoundBuffer_Release"),
    0x00330C3E: (21, "4A8177662C75769C41C98596F54EC585833D3D8EBB2830F05C3092B57F003045",
                 "FUN_00330c3e"),
    0x00330C53: (24, "9449D08232FFBDD1DD7824BAA00AE9DF0660072BF4BA395F04888285A347EA07",
                 "FUN_00330c53"),
    0x00380EDA: (20, "B814D967BC73B0CE3CBEABBA0B340B24C6B4BABE88E4CC19D28D552174B702AF",
                 "FUN_00380eda"),
}
CALLBACK_4 = 0x417000
CALLBACK_8 = 0x417020
CALLBACK_RESULT = 0x13579BDF
OBJECT = 0x460010
SOUND_TABLE = 0x00386994
BUFFER_TABLE = 0x003869E0
DIRECT_RELEASE = 0x0031198A
CALLBACK = r"""
static void fixture_dispatch(bf_guest32_constructor_state& state)
{
    if (state.eip == 0x0031198au) {
        DSOUND__DSound_CRefCount_Release(state, fixture_dispatch);
        return;
    }
    if (state.eip == 0x00417000u) {
        state.edx = bf_guest32_constructor::read32(state, state.eip, state.esp + 4u);
        state.eax = 0x13579bdfu;
        bf_guest32_leaf_ret(state, state.eip + 9u, 4u);
        return;
    }
    if (state.eip == 0x00417020u) {
        state.edx = bf_guest32_constructor::read32(state, state.eip, state.esp + 8u);
        state.eax = 0x13579bdfu;
        bf_guest32_leaf_ret(state, state.eip + 9u, 8u);
        return;
    }
    std::abort();
}
"""


def authenticate(image):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "unexpected retail image")
    layout = sections(image)
    bodies = {}
    for entry, (length, digest, _) in BODIES.items():
        offset = file_offset(layout, entry, length)
        data = image[offset:offset + length]
        require(hashlib.sha256(data).hexdigest().upper() == digest, f"body changed at {entry:#x}")
        bodies[entry] = data
    for table in (SOUND_TABLE, BUFFER_TABLE):
        offset = file_offset(layout, table + 8, 4)
        require(int.from_bytes(image[offset:offset + 4], "little") == DIRECT_RELEASE,
                f"retail audio Release slot changed at {table + 8:#x}")
    # Test targets: MOV EDX,[ESP+N]; MOV EAX,0x13579bdf; RET N.
    bodies[CALLBACK_4] = bytes.fromhex("8b542404b8df9b5713c20400")
    bodies[CALLBACK_8] = bytes.fromhex("8b542408b8df9b5713c20800")
    return bodies


def corpus():
    for entry in BODIES:
        for scenario in range(8):
            flags = (0x897 if scenario & 1 else 0x2) | (0x400 if scenario & 2 else 0)
            ecx = 0 if scenario % 4 == 0 else 0x86abcdef
            obj = OBJECT if scenario != 7 else STACK - 4
            regs = [0x11111111, 0x22222222, ecx, 0x44444444, 0x55555555,
                    0x66666666, 0x77777777, STACK, entry, flags, FLAGS]
            mem = {STACK: RETURN, STACK + 4: obj}
            if entry in (0x0031198A, 0x00311A3D, 0x00311A58):
                # Use original Release slot identity and test-only destructor semantics.
                obj = OBJECT
                table = SOUND_TABLE if entry != 0x00311A58 else BUFFER_TABLE
                count = (0, 1, 2, 0xFFFFFFFF, 0x80000000, 1, 3, 0x7FFFFFFF)[scenario]
                interface = {0x00311A3D: 8, 0x00311A58: 0x1C}.get(entry, 0)
                if scenario == 5 and interface:
                    # The null-adjusted vptr read is still performed at guest VA zero.
                    mem[STACK + 4] = 0
                    obj = 0
                else:
                    mem[STACK + 4] = obj + interface
                mem.update({obj: table, obj + 4: count, table: CALLBACK_4, table + 8: DIRECT_RELEASE})
                want = max(count - 1, 0)
            elif entry == 0x00380EDA:
                if scenario == 7:
                    obj = STACK - 0x18
                    mem[STACK + 4] = obj
                mem[obj + 8] = 0 if scenario == 0 else CALLBACK_8
                mem[obj + 0xc] = scenario | 0xefcd0000
                want = obj if scenario == 0 else CALLBACK_RESULT
            else:
                slot = 0 if entry == 0x00330C3E else 4
                if obj == STACK - 4:
                    # Use a normal table slot here; the callback argument push can
                    # alias the input argument's object, so keep it in the model.
                    obj = STACK - 12
                    mem[STACK + 4] = obj
                mem[obj + slot] = CALLBACK_4
                want = 0x80150005 if ecx == 0 else (CALLBACK_RESULT if slot == 0 else 0)
            yield f"{entry:#010x} scenario {scenario}", regs, mem, want


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    compiler = shutil.which("clang++")
    require(compiler, "clang++ is required")
    paths, dispatch = [], []
    for entry, (_, digest, symbol) in BODIES.items():
        path = source_path(ROOT, f"{entry:#010x}")
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"body label changed at {entry:#x}")
        paths.append(path)
        dispatch.append(f"        case {entry:#x}u: {symbol}(state, fixture_dispatch); break;")
    cases = list(corpus())
    inp = b"".join(pairs(list(mem.items())) + pairs([]) + words(regs) for _, regs, mem, _ in cases)
    bodies = authenticate(args.xbe.read_bytes()) if args.xbe else None
    native = [emulate(bodies, regs, mem, []) for _, regs, mem, _ in cases] if bodies else None
    code = FIXTURE.replace("bf_d3d_guest_kick.h", "bf_guest32_indirect_wrappers.h")
    code = code.replace("int main()", CALLBACK + chr(10) + "int main()")
    code = code.replace("@DISPATCH@", chr(10).join(dispatch))
    with tempfile.TemporaryDirectory(prefix="bf-indirect-wrappers-") as temporary:
        directory = Path(temporary)
        fixture = directory / "fixture.cpp"
        fixture.write_text(code, encoding="utf-8")
        for level in ("-O0", "-O2"):
            model = directory / "model"
            subprocess.run([compiler, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            level, "-I", ROOT / "include", fixture, *paths, "-o", model],
                           check=True, timeout=60)
            actual = list(outputs(subprocess.check_output([model], input=inp, timeout=15)))
            require(len(actual) == len(cases), "incomplete model result")
            for index, ((label, regs, _, want), (state, accesses)) in enumerate(zip(cases, actual)):
                require(state[7:9] == (STACK + 8, RETURN), f"{label}: return and cleanup differ")
                require(state[0] == want, f"{label}: EAX differs")
                require(state[10] == (FLAGS & ~0x10), f"{label}: defined flags differ")
                if native:
                    original, original_accesses = native[index]
                    require(state[:9] == tuple(original[:9]), f"{label}: guest registers differ")
                    require((state[9] ^ original[9]) & state[10] == 0, f"{label}: flags differ")
                    require(accesses == original_accesses, f"{label}: ordered guest accesses differ")
            print(f"PASS {level}: {len(paths)} linked Xbox wrapper objects, {len(cases)} cases"
                  + (" against retail x86" if native else ""))


if __name__ == "__main__":
    main()
