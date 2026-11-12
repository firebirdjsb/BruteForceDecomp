#!/usr/bin/env python3
"""Link and exercise the actual debug register writer and three setter drafts."""
import argparse
import json
from pathlib import Path
import shutil
import subprocess
import tempfile

from check_cpp_direct_call_batches import ROOT, require, verify_sources, verify_xbe
from source_layout import source_path


FIXTURE = r"""
#include "bf_xbe_guest32_record_model.h"
#include <cassert>
#include <map>
#include <tuple>
#include <vector>

uint32_t D3D8LTCG__D3D_CommonSetDebugRegisters();
uint32_t D3D8LTCG__D3DDevice_SetRenderState_RopZCmpAlwaysRead(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_RopZRead(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_DoNotCullUncompressed(uint32_t);

using Event = std::tuple<char, uint32_t, uint32_t>;
static std::vector<Event> events;
static std::map<uint32_t, uint32_t> words;
static uint32_t refill_cursor;

uint32_t bf_guest_read_u32(uint32_t address)
{
    const uint32_t value = words.at(address);
    events.emplace_back('r', address, value);
    return value;
}

void bf_guest_write_u32(uint32_t address, uint32_t value)
{
    events.emplace_back('w', address, value);
    words[address] = value;
}

// Test double for the unresolved refill path. Verify the two guest words.
unsigned int D3D8LTCG__D3D_MakeRequestedSpace_8(int half, int full)
{
    events.emplace_back('c', static_cast<uint32_t>(half), static_cast<uint32_t>(full));
    return refill_cursor;
}

int main()
{
    constexpr uint32_t device_slot = 0x0037dd88;
    constexpr uint32_t cmp_always = 0x0037e024;
    constexpr uint32_t read_z = 0x0037e028;
    constexpr uint32_t no_cull = 0x0037e02c;
    constexpr uint32_t request = 0x0037ec88;
    constexpr uint32_t device = 0x00100000;
    constexpr uint32_t first = device + 0x1fc8;
    constexpr uint32_t second = device + 0x1fcc;
    // Cursor aliases the registers, so their command reloads see the preceding
    // stores. Equality takes the refill path and the high bit tests logical SHR.
    words = {{device_slot, device}, {device, first}, {device + 4, first},
             {cmp_always, 0}, {read_z, 1}, {no_cull, 1}, {request, 0xf123abcdu},
             {first, 0xffffffffu}, {second, 0xffffffffu}};
    refill_cursor = first;
    assert(D3D8LTCG__D3DDevice_SetRenderState_RopZCmpAlwaysRead(0x80000000u) == first + 0x30u);
    assert((events == std::vector<Event>{
        {'w', cmp_always, 0x80000000u}, {'r', device_slot, device},
        {'r', first, 0xffffffffu}, {'w', first, 0xfffffff7u}, {'r', no_cull, 1},
        {'w', first, 0xffffffffu}, {'r', second, 0xffffffffu},
        {'w', second, 0xe7efffffu}, {'r', cmp_always, 0x80000000u},
        {'w', second, 0xe7ffffffu}, {'r', read_z, 1}, {'r', second, 0xe7ffffffu},
        {'w', second, 0xefffffffu}, {'r', device, first}, {'r', device + 4, first},
        {'r', request, 0xf123abcdu}, {'c', 0x7891d5e6u, 0xf123abcdu},
        {'w', first, 0x00040110u}, {'w', first + 4, 0}, {'r', first, 0x00040110u},
        {'w', first + 8, 0x00081d8cu}, {'w', first + 12, 0x00400094u},
        {'w', first + 16, 0x00040110u}, {'w', first + 20, 0x00040100u},
        {'w', first + 24, 9}, {'r', second, 0}, {'w', first + 28, 0x00081d8cu},
        {'w', first + 32, 0x00400b80u}, {'w', first + 36, 0},
        {'w', first + 40, 0x00040100u}, {'w', first + 44, 9},
        {'w', device, first + 0x30u},
    }));

    // Unrefilled cursor wraps modulo 2^32. The return propagates through each setter.
    events.clear();
    words[device] = 0xfffffff0u;
    words[device + 4] = 0xfffffff4u;
    assert(D3D8LTCG__D3DDevice_SetRenderState_RopZRead(0) == 0x20u);
    assert(events.front() == Event('w', read_z, 0));
    assert(words.at(0) == 0x00040118u && words.at(0x1c) == 9);
    for (const auto& event : events)
        assert(std::get<0>(event) != 'c');
    events.clear();
    assert(D3D8LTCG__D3DDevice_SetRenderState_DoNotCullUncompressed(0xfedcba98u) == 0x50u);
    assert(events.front() == Event('w', no_cull, 0xfedcba98u));
    assert(words.at(device) == 0x50u);
}
"""


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    directory = ROOT / "metadata/cpp_direct_call_batches"
    batches = [json.loads((directory / name).read_text(encoding="utf-8")) for name in
               ("20261112_debug_registers.json", "20261112_next_reviewed.json")]
    for batch in batches:
        verify_sources(ROOT, batch)
    if args.xbe:
        verify_xbe(args.xbe.read_bytes(), batches)
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    paths = [str(source_path(ROOT, entry)) for entry in
             ("0x003707a0", "0x003707c0", "0x003707e0", "0x00371240")]
    with tempfile.TemporaryDirectory(prefix="bf-d3d-debug-registers-") as folder:
        source = Path(folder) / "fixture.cpp"
        source.write_text(FIXTURE, encoding="utf-8")
        for opt in ("-O0", "-O2"):
            output = Path(folder) / "fixture.exe"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                            "-Werror", opt, "-I", str(ROOT / "include"), str(source),
                            *paths, "-o", str(output)], check=True, timeout=60)
            subprocess.run([str(output)], check=True, timeout=10)
    print("PASS four debug-register models linked at -O0/-O2 with test guest memory and refill")


if __name__ == "__main__":
    main()
