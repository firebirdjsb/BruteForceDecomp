#!/usr/bin/env python3
"""Authenticate and link nine guest x86 framed tail transfers."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from check_cpp_tail_jumps import jump_target
from source_layout import source_path


MANIFEST = ROOT / "metadata/cpp_xnet_framed_tail_20261113.json"
FIXTURE = r"""
#include <cstdio>
#include <cstdlib>
#include <initializer_list>
#include "bf_xbe_guest32_framed_tail.h"

struct entry_record {
    void (*model)(bf_guest32_framed_tail_state&);
    std::uint32_t entry, slot, target;
};
static const entry_record cases[] = {
@CASES@
};
static bf_guest32_framed_tail_state* guest;
static const entry_record* tested;
static std::uint32_t stack, saved;
static unsigned accesses, fault;
static constexpr std::uint32_t old_ebp = 0x0f123456u;
static constexpr std::uint32_t old_ecx = 0x01020304u;
static constexpr std::uint32_t slot_value = 0xfedcba98u;

static void check(bool condition, const char* problem)
{
    if (!condition) {
        std::fprintf(stderr, "%08x: %s\n", tested->entry, problem);
        std::exit(1);
    }
}
void bf_guest_write_u32(std::uint32_t address, std::uint32_t value)
{
    ++accesses;
    check(accesses == 1u && address == stack - 4u && value == old_ebp, "PUSH operand");
    check(guest->eip == tested->entry && guest->esp == stack && guest->ebp == old_ebp,
          "state before PUSH store");
    if (fault == accesses) throw accesses;
    saved = value;
}
std::uint32_t bf_guest_read_u32(std::uint32_t address)
{
    ++accesses;
    if (accesses == 2u) {
        check(address == stack - 4u && guest->esp == address && guest->ebp == address,
              "POP address and EBP");
        check(guest->eip == tested->entry + 3u, "POP EIP");
        if (fault == accesses) throw accesses;
        return saved;
    }
    check(accesses == 3u && address == tested->slot, "MOV ECX address");
    check(guest->eip == tested->entry + 4u && guest->esp == stack && guest->ebp == old_ebp,
          "state before MOV ECX");
    if (fault == accesses) throw accesses;
    return address == stack - 4u ? saved : slot_value;
}
int main()
{
    unsigned scenarios = 0;
    for (const auto& test : cases) {
        tested = &test;
        for (auto input_stack : {0u, 0x4000u, test.slot + 4u}) {
            stack = input_stack;
            for (fault = 0; fault <= 3; ++fault) {
                bf_guest32_framed_tail_state state{old_ebp, stack, old_ecx, test.entry};
                guest = &state;
                accesses = 0;
                saved = 0;
                unsigned caught = 0;
                try { test.model(state); } catch (unsigned step) { caught = step; }
                check(caught == fault && accesses == (fault ? fault : 3u), "backend access count");
                check(saved == (fault == 1u ? 0u : old_ebp), "persisted PUSH write");
                check(state.esp == (fault == 2u ? stack - 4u : stack), "final ESP");
                check(state.ebp == (fault == 2u ? stack - 4u : old_ebp), "final EBP");
                check(state.ecx == (fault ? old_ecx : test.slot == stack - 4u ? old_ebp : slot_value),
                      "final ECX");
                const std::uint32_t fault_pc[] = {test.target, test.entry, test.entry+3u, test.entry+4u};
                check(state.eip == fault_pc[fault], "final EIP");
                ++scenarios;
            }
        }
    }
    std::printf("PASS %u linked frame, alias, wrap and fault cases\n", scenarios);
}
"""


def verify_retail(image, cases):
    require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "retail XBE digest differs")
    layout = sections(image)
    for case in cases:
        entry = int(case["entry"], 16)
        slot = int(case["global"], 16)
        target = int(case["target"], 16)
        offset = file_offset(layout, entry, 15)
        body = image[offset:offset + 15]
        require(hashlib.sha256(body).hexdigest().upper() == case["sha256"], f"body differs at {entry:#x}")
        require(body[:10] == bytes.fromhex("558bec5d8b0d") + slot.to_bytes(4, "little"),
                f"frame or MOV bytes differ at {entry:#x}")
        require(jump_target(entry + 10, body[10:]) == target, f"JMP target differs at {entry:#x}")
        mutation = body[10:-1] + bytes((body[-1] ^ 1,))
        require(jump_target(entry + 10, mutation) != target, f"JMP mutation survived at {entry:#x}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    cases = manifest["cases"]
    require(manifest["original_xbe_sha256"] == XBE_SHA256, "manifest XBE digest differs")
    require(len(cases) == len({case["entry"] for case in cases}) == 9, "entry inventory differs")
    sources, declarations = [], []
    for case in cases:
        path = source_path(ROOT, case["entry"])
        require(read_body_digest(path.read_text(encoding="utf-8")) == (case["sha256"], False),
                f"source body hash differs at {case['entry']}")
        require(source_path(ROOT, case["target"]).is_file(), f"missing target at {case['entry']}")
        sources.append(str(path))
        declarations.append("    {%s, %su, %su, %su}," %
                            (case["symbol"], case["entry"], case["global"], case["target"]))
    if args.xbe:
        verify_retail(args.xbe.read_bytes(), cases)
        print("PASS nine retail PUSH/MOV/POP/MOV/JMP bodies and target mutation controls")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-xnet-framed-tail-") as tmp:
        folder = Path(tmp)
        source = folder / "fixture.cpp"
        source.write_text(FIXTURE.replace("@CASES@", "\n".join(declarations)), encoding="utf-8")
        for opt in ("-O0", "-O2"):
            exe = folder / "frame_model"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            opt, "-I", str(ROOT / "include"), *sources, str(source), "-o", str(exe)],
                           check=True, timeout=60)
            subprocess.run([str(exe)], check=True, timeout=30)


if __name__ == "__main__":
    main()
