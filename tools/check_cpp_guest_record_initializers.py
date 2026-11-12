#!/usr/bin/env python3
"""Verify three ordered DWORD memory models and their retail body identities."""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from source_layout import source_path


BODIES = {
    "0x002fe3e8": (25, "8D99C40E3F1F79A0D08113896C85903187C82074D0D82BA9CC0EF4CE2E196A9B"),
    "0x00311b03": (29, "7A83B0C387114D8F1A7AB1E629BFDF90497E0B11E54EDDDA319A39949712D669"),
    "0x0031aa6e": (32, "D5A21810BF144AC242E095C71B4622FA5B696A16FE81DA5BFD9C34E1BE4542B2"),
}

FIXTURE = r"""
#include "bf_xbe_guest32_record_model.h"
#include <cassert>
#include <map>
#include <tuple>
#include <vector>

using Event = std::tuple<char, uint32_t, uint32_t>;
static std::vector<Event> events;
static std::map<uint32_t, uint32_t> words;

uint32_t bf_guest_read_u32(uint32_t address)
{
    const uint32_t value = words.at(address);
    events.emplace_back('r', address, value);
    return value;
}

void bf_guest_write_u32(uint32_t address, uint32_t word)
{
    events.emplace_back('w', address, word);
    words[address] = word;
}

int main()
{
    constexpr uint32_t head = 0x414b48u;
    constexpr uint32_t payload = 0xf123abcdu;
    words[head] = 0x12345678u;
    assert(__CreateFrameInfo__YAPAUFrameInfo__PAU1_PAX_Z(head, payload) == head);
    assert((events == std::vector<Event>{{'w', head, payload}, {'r', head, payload},
                                        {'w', head + 4, payload}, {'w', head, head}}));
    events.clear();
    assert(FUN_00311b03(0xfffffff0u) == 0xfffffff0u);
    assert((events == std::vector<Event>{{'w', 0xfffffff4u, 2}, {'w', 0xfffffff0u, 0x386988u},
                                        {'w', 0x32fe68u, 0xfffffff0u}, {'w', 4, 0}, {'w', 0, 0}}));
    events.clear();
    assert(FUN_0031aa6e(0xfffffff8u) == 0xfffffff8u);
    assert((events == std::vector<Event>{{'w', 0, 0xfffffffcu}, {'w', 0xfffffffcu, 0xfffffffcu},
                                        {'w', 0xfffffff8u, 0x386ad4u}, {'w', 0x14, 0x32f7d4u},
                                        {'w', 8, 4}, {'w', 4, 4}}));
}
"""


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="authenticate body bytes from the private retail XBE")
    args = parser.parse_args()
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    if args.xbe:
        raw = args.xbe.read_bytes()
        require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
        layout = sections(raw)

    paths = []
    for entry, (size, digest) in BODIES.items():
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"source body identity differs at {entry}")
        if args.xbe:
            offset = file_offset(layout, int(entry, 16), size)
            require(hashlib.sha256(raw[offset:offset + size]).hexdigest().upper() == digest,
                    f"retail body differs at {entry}")
        paths.append(str(path))

    with tempfile.TemporaryDirectory(prefix="bf-guest-initializers-") as directory:
        root = Path(directory)
        source = root / "fixture.cpp"
        source.write_text(FIXTURE, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            output = root / "fixture.exe"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                            "-Werror", opt, "-I", str(ROOT / "include"), str(source),
                            *paths, "-o", str(output)], check=True)
            subprocess.run([str(output)], check=True, timeout=10)
    print("PASS three guest DWORD initializers, ordered aliasing/wraparound and EAX results")


if __name__ == "__main__":
    main()
