#!/usr/bin/env python3
"""Check the retail XNET conditional tail transfers and link their C++ models."""
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

MANIFEST = ROOT / "metadata/cpp_xnet_conditional_tail_20261113.json"
FIXTURE = r"""
#include <cstdio>
#include <cstdlib>
#include <initializer_list>
#include "bf_xbe_guest32_xnet_conditional_tail.h"

struct case_record {
    void (*model)(bf_xnet_conditional_tail_state&);
    std::uint32_t entry, prefix, target, cleanup;
};

static const case_record cases[] = {
@CASES@
};

static bf_xnet_conditional_tail_state* current;
static const case_record* tested;
static std::uint32_t input, read_result;
static unsigned reads;
static unsigned fail_read;
static constexpr std::uint32_t initial_eax = 0xbad01234u;
static constexpr std::uint32_t stack = 0xfffffffcu;
static constexpr std::uint32_t flags = 0xedffffffu;

static void check(bool ok, const char* label)
{
    if (!ok) {
        std::fprintf(stderr, "%08x: %s, input %08x\n", tested->entry, label, input);
        std::exit(1);
    }
}
std::uint32_t bf_guest_read_u32(std::uint32_t address)
{
    ++reads;
    if (tested->prefix != 0u && reads == 1u) {
        check(address == 0x0040f5b4u && current->eip == tested->entry, "MOV operand");
        check(current->eax == initial_eax && current->eflags == flags, "MOV state");
        if (fail_read == reads) throw reads;
        return input;
    }
    check(current->eip == tested->entry + tested->prefix + 9u, "RET address");
    check(current->eax == 0x276du && current->ecx == 0u, "state before RET");
    check(current->esp == stack && address == stack, "RET stack operand");
    if (fail_read == reads) throw reads;
    return read_result;
}
static std::uint32_t expected_flags(std::uint32_t value)
{
    unsigned count = 0;
    for (unsigned bit = 0; bit < 8; ++bit)
        count += (value >> bit) & 1u;
    return (flags & ~0x8c5u) | ((count % 2u == 0u) ? 4u : 0u) |
           (value == 0u ? 0x40u : 0u) | ((value >> 31u) != 0u ? 0x80u : 0u);
}
int main()
{
    unsigned count = 0;
    for (const auto& test : cases) {
        tested = &test;
        for (std::uint32_t value : {0u, 1u, 3u, 0xffu, 0x100u, 0x80000000u, 0xffffffffu}) {
            input = value;
            for (std::uint32_t destination : {0u, 0x01234567u, 0xffffffffu}) {
                read_result = destination;
                const unsigned expected_reads = (test.prefix != 0u) + (value == 0u);
                for (unsigned fault = 0; fault <= expected_reads; ++fault) {
                    fail_read = fault;
                    reads = 0;
                    bf_xnet_conditional_tail_state state{
                        initial_eax, test.prefix ? 0x13579bdfu : value, stack, test.entry,
                        flags, 0xffffffffu
                    };
                    const auto before = state;
                    current = &state;
                    unsigned caught = 0;
                    try { test.model(state); } catch (unsigned ordinal) { caught = ordinal; }
                    check(caught == fault, "guest backend fault");
                    check(reads == (fault ? fault : expected_reads), "read count");
                    if (fault == 1u && test.prefix) {
                        check(state.eip == before.eip && state.esp == before.esp &&
                              state.eax == before.eax && state.ecx == before.ecx &&
                              state.eflags == before.eflags &&
                              state.eflags_defined == before.eflags_defined, "MOV fault state");
                    } else {
                        check(state.ecx == value && state.eflags == expected_flags(value) &&
                              state.eflags_defined == 0xffffffefu, "TEST flags and ECX");
                        check(state.eax == (value ? initial_eax : 0x276du), "EAX");
                        check(state.esp == (value || fault ? stack : stack + 4u + test.cleanup), "ESP");
                        const auto eip = value ? test.target : fault ? test.entry + test.prefix + 9u : destination;
                        check(state.eip == eip, "EIP");
                    }
                    ++count;
                }
            }
        }
    }
    std::printf("PASS %u cases: ECX, TEST flags, direct EIP and RET stack/fault effects\n", count);
}
"""


def verify_retail(raw, cases):
    require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE digest differs")
    layout = sections(raw)
    for case in cases:
        entry = int(case["entry"], 16)
        size = case["size"]
        offset = file_offset(layout, entry, size)
        body = raw[offset:offset + size]
        require(hashlib.sha256(body).hexdigest().upper() == case["sha256"],
                f"body hash differs at {entry:#x}")
        if size == 23:
            require(body[:6] == bytes.fromhex("8b0db4f54000"), f"MOV differs at {entry:#x}")
        require(body[-17:-7] == bytes.fromhex("85c97508b86d270000c2"),
                f"TEST/JNE/MOV/RET differs at {entry:#x}")
        require(int.from_bytes(body[-7:-5], "little") == case["cleanup"],
                f"RET cleanup differs at {entry:#x}")
        target = int(case["target"], 16)
        require(jump_target(entry + size - 5, body[-5:]) == target,
                f"tail destination differs at {entry:#x}")
        altered = body[-5:-1] + bytes((body[-1] ^ 1,))
        require(jump_target(entry + size - 5, altered) != target,
                f"tail destination mutation survived at {entry:#x}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    doc = json.loads(MANIFEST.read_text(encoding="utf-8"))
    cases = doc["cases"]
    require(doc["original_xbe_sha256"] == XBE_SHA256, "manifest XBE digest differs")
    require(len({case["entry"] for case in cases}) == len(cases) == 12, "unexpected entries")
    sources, rows = [], []
    for case in cases:
        entry = case["entry"]
        require(case["size"] in (17, 23) and case["cleanup"] in (4, 8, 12), "invalid encoding size")
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (case["sha256"], False),
                f"source body hash differs at {entry}")
        require(source_path(ROOT, case["target"]).is_file(), f"target missing for {entry}")
        sources.append(str(path))
        rows.append("    {FUN_%s, %su, %du, %su, %du}," % (
            entry[2:], entry, case["size"] - 17, case["target"], case["cleanup"]))
    if args.xbe:
        verify_retail(args.xbe.read_bytes(), cases)
        print(f"PASS retail XBE: {len(cases)} bodies, cleanup operands and direct destinations")
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-xnet-tail-") as tmp:
        folder = Path(tmp)
        source = folder / "fixture.cpp"
        fixture = FIXTURE.replace("@CASES@", "\n".join(rows))
        source.write_text(fixture, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            exe = folder / "tail_model"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                            "-Werror", opt, "-I", str(ROOT / "include"),
                            *sources, str(source), "-o", str(exe)], check=True, timeout=60)
            subprocess.run([str(exe)], check=True, timeout=30)
    print(f"PASS {len(cases)} C++17 model links at -O0 and -O2")


if __name__ == "__main__":
    main()
