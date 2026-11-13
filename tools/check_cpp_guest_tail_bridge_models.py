#!/usr/bin/env python3
"""Verify and link 27 captured guest MOV/JMP state-transition models."""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from check_cpp_tail_jumps import jump_target
from source_layout import source_path

MANIFEST = ROOT / "metadata/cpp_guest32_tail_bridges_20261113.json"
EXPECTED_ENTRIES = {
    0x00344FEF, 0x00345079, 0x00345084, 0x0034508F, 0x0034509A,
    0x003450B4, 0x003450BF, 0x003450CA, 0x003450D5, 0x003450FE,
    0x00345109, 0x00345132, 0x0034768E, 0x00347699, 0x003476A4,
    0x003476AF, 0x003476BA, 0x003476C5, 0x003476D0, 0x003476DB,
    0x003476E6, 0x0034790D, 0x00330020, 0x0033002B, 0x00330045,
    0x00330050, 0x0033005B,
}


def verify_manifest_and_sources(cases: list[dict]) -> list[Path]:
    require(len(cases) == 27, "tail bridge inventory must contain 27 cases")
    entries = {int(case["entry"], 16) for case in cases}
    require(entries == EXPECTED_ENTRIES, "tail bridge entry inventory changed")
    require(len(entries) == len(cases), "duplicate tail bridge entry")
    require(len({case["symbol"] for case in cases}) == len(cases), "duplicate bridge symbol")
    paths: list[Path] = []
    for case in cases:
        entry = int(case["entry"], 16)
        global_va = int(case["global"], 16)
        target = int(case["target"], 16)
        require(case["size"] == 11, f"unexpected bridge size at {entry:#x}")
        require(global_va in (0x0040F5A4, 0x0040F5B4),
                f"unexpected guest global cell at {entry:#x}")
        require(case["entry"] == f"0x{entry:08x}",
                f"noncanonical entry encoding at {entry:#x}")
        require(case["target"] == f"0x{target:08x}",
                f"noncanonical target encoding at {entry:#x}")
        require(case["symbol"] == f"FUN_{entry:08x}", f"source label changed at {entry:#x}")

        path = source_path(ROOT, case["entry"])
        require(path.relative_to(ROOT).as_posix() == case["source"],
                f"canonical source path changed at {entry:#x}")
        text = path.read_text(encoding="utf-8")
        digest = read_body_digest(text)
        require(digest == (case["sha256"], False),
                f"original body label changed at {entry:#x}")
        required_transition = (
            f"guest_ecx = bf_guest_read_u32({case['global']}u);\n"
            f"    guest_eip = {case['target']}u;"
        )
        require(required_transition in text, f"captured MOV/JMP transition changed at {entry:#x}")
        require(re.search(rf"\bFUN_{target:08x}\s*\(", text) is None,
                f"bridge must not call target at {entry:#x}")

        target_path = source_path(ROOT, case["target"])
        require(target_path.relative_to(ROOT).as_posix() == case["target_source"],
                f"canonical target source changed for {entry:#x}")
        target_text = target_path.read_text(encoding="utf-8")
        target_digest = read_body_digest(target_text)
        require(target_digest == (case["target_body_sha256"], False),
                f"canonical target body label changed for {entry:#x}")
        paths.append(path)
    return paths


def verify_xbe(raw: bytes, cases: list[dict]) -> None:
    require(hashlib.sha256(raw).hexdigest().lower() == XBE_SHA256.lower(),
            "retail XBE SHA-256 mismatch")
    layout = sections(raw)
    for case in cases:
        entry = int(case["entry"], 16)
        global_va = int(case["global"], 16)
        target = int(case["target"], 16)
        offset = file_offset(layout, entry, case["size"])
        body = raw[offset:offset + case["size"]]
        require(hashlib.sha256(body).hexdigest().upper() == case["sha256"],
                f"retail body SHA-256 mismatch at {entry:#x}")
        require(body[:6] == b"\x8b\x0d" + global_va.to_bytes(4, "little"),
                f"retail MOV ECX source differs at {entry:#x}")
        require(body[6] == 0xE9, f"retail bridge lacks direct E9 tail JMP at {entry:#x}")
        require(jump_target(entry + 6, body[6:]) == target,
                f"retail JMP target differs at {entry:#x}")
        mutated = bytearray(body[6:])
        mutated[1] ^= 1
        require(jump_target(entry + 6, bytes(mutated)) != target,
                f"JMP displacement negative control failed at {entry:#x}")


def fixture_source(cases: list[dict]) -> str:
    entries = []
    for case in cases:
        entries.append(
            f'    {{"{case["entry"]}", &{case["symbol"]}, '
            f'{case["entry"]}u, {case["global"]}u, {case["target"]}u}},')
    return r'''#include "bf_xbe_guest_tail_bridge_models.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>

struct BridgeCase {
    const char* name;
    void (*model)(uint32_t&, uint32_t&);
    uint32_t entry;
    uint32_t global_va;
    uint32_t target;
};

static const BridgeCase cases[] = {
''' + "\n".join(entries) + r'''
};
static uint32_t* observed_ecx;
static uint32_t* observed_eip;
static uint32_t expected_old_ecx;
static uint32_t expected_old_eip;
static uint32_t expected_global;
static uint32_t read_value;
static unsigned read_count;
static bool fail_read;

uint32_t bf_guest_read_u32(uint32_t address)
{
    ++read_count;
    if (read_count != 1 || address != expected_global ||
        *observed_ecx != expected_old_ecx || *observed_eip != expected_old_eip)
        throw 2;
    if (fail_read)
        throw 1;
    return read_value;
}

static void require(bool condition, const char* name, const char* phase)
{
    if (!condition) {
        std::fprintf(stderr, "FAIL %s (%s)\n", name, phase);
        std::exit(1);
    }
}

int main()
{
    unsigned index = 0;
    for (const BridgeCase& item : cases) {
        uint32_t ecx = 0x13570000u + index;
        uint32_t eip = item.entry;
        observed_ecx = &ecx;
        observed_eip = &eip;
        expected_old_ecx = ecx;
        expected_old_eip = eip;
        expected_global = item.global_va;
        read_value = 0xA5000000u + index;
        read_count = 0;
        fail_read = false;
        item.model(ecx, eip);
        require(read_count == 1, item.name, "successful read count");
        require(ecx == read_value, item.name, "ECX guest read value");
        require(eip == item.target, item.name, "EIP direct target");

        ecx = 0x24680000u + index;
        eip = item.entry;
        expected_old_ecx = ecx;
        expected_old_eip = eip;
        read_count = 0;
        fail_read = true;
        bool caught = false;
        try {
            item.model(ecx, eip);
        } catch (int error) {
            caught = error == 1;
        }
        require(caught, item.name, "guest-read fault propagation");
        require(read_count == 1, item.name, "faulting read count");
        require(ecx == expected_old_ecx, item.name, "ECX unchanged after read fault");
        require(eip == expected_old_eip, item.name, "EIP unchanged after read fault");
        ++index;
    }
    std::printf("PASS %u actual bridge objects: one guest read, ECX, EIP, fault ordering\n",
                index);
    return 0;
}
'''


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path,
                        help="private retail XBE for exact body and target verification")
    args = parser.parse_args()
    document = json.loads(MANIFEST.read_text(encoding="utf-8"))
    require(document["original_xbe_sha256"].lower() == XBE_SHA256.lower(),
            "manifest XBE pin mismatch")
    cases = document["cases"]
    paths = verify_manifest_and_sources(cases)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes(), cases)
        print(f"PASS retail XBE: {len(cases)} exact MOV/JMP bodies, targets, negative controls")

    clang = shutil.which("clang++")
    require(clang is not None, "clang++ is required")
    with tempfile.TemporaryDirectory(prefix="bf-guest-tail-bridges-") as folder:
        directory = Path(folder)
        fixture = directory / "guest_tail_bridge_fixture.cpp"
        fixture.write_text(fixture_source(cases), encoding="utf-8")
        for optimization in ("-O0", "-O2"):
            objects = []
            for index, source in enumerate(paths):
                obj = directory / f"bridge_{index:02}.o"
                subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                                "-Werror", optimization, "-I", str(ROOT / "include"),
                                "-c", str(source), "-o", str(obj)],
                               check=True, timeout=60)
                objects.append(str(obj))
            fixture_object = directory / "fixture.o"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                            "-Werror", optimization, "-I", str(ROOT / "include"), "-c",
                            str(fixture), "-o", str(fixture_object)],
                           check=True, timeout=60)
            executable = directory / ("bridges.exe" if os.name == "nt" else "bridges")
            subprocess.run([clang, *objects, str(fixture_object), "-o", str(executable)],
                           check=True, timeout=60)
            subprocess.run([str(executable)], check=True, timeout=20)
    print("PASS canonical source and target identities, captured model interfaces, object links")


if __name__ == "__main__":
    main()
