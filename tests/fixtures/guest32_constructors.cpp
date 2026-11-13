#include "bf_xbe_guest32_constructors.h"

#include <array>
#include <cstdio>
#include <cstdlib>
#include <tuple>
#include <vector>

namespace {
constexpr std::uint32_t memory_base = 0x460000u;
std::array<std::uint8_t, 0x10000> memory;
using Event = std::tuple<char, std::uint32_t, std::uint32_t, unsigned>;
std::vector<Event> events;

std::size_t index(std::uint32_t address, std::size_t width)
{
    const std::uint32_t offset = address - memory_base;
    if (offset > memory.size() - width)
        std::abort();
    return offset;
}

constexpr std::array models{
    FUN_00092330, FUN_00093480, FUN_00094f20, FUN_000979d0, FUN_00099210,
    FUN_000998c0, FUN_0009a690, FUN_0009e740, FUN_000a3b80, FUN_000a91e0,
    FUN_00255b70, FUN_00256d80, FUN_0025bd50, FUN_00261fb0, FUN_00263270,
    FUN_0027c260, FUN_0027c3e0, FUN_0029fbe0
};
} // namespace

std::uint32_t bf_guest_read_u32(std::uint32_t address)
{
    const auto offset = index(address, 4);
    std::uint32_t value = 0;
    for (unsigned i = 0; i < 4; ++i)
        value |= static_cast<std::uint32_t>(memory[offset + i]) << (8 * i);
    events.emplace_back('r', address, value, 4);
    return value;
}

void bf_guest_write_u32(std::uint32_t address, std::uint32_t value)
{
    events.emplace_back('w', address, value, 4);
    const auto offset = index(address, 4);
    for (unsigned i = 0; i < 4; ++i)
        memory[offset + i] = static_cast<std::uint8_t>(value >> (8 * i));
}

std::uint8_t bf_guest_read_u8(std::uint32_t address)
{
    const auto value = memory[index(address, 1)];
    events.emplace_back('r', address, value, 1);
    return value;
}

void bf_guest_write_u8(std::uint32_t address, std::uint8_t value)
{
    events.emplace_back('w', address, value, 1);
    memory[index(address, 1)] = value;
}

int main()
{
    // Each request carries a model index, raw guest registers and memory image.
    // A final trace verifies exact access widths and order against the oracle.
    std::uint32_t selection;
    while (std::fread(&selection, sizeof(selection), 1, stdin) == 1) {
        bf_guest32_constructor_state guest{};
        if (selection >= models.size() ||
            std::fread(&guest, sizeof(guest), 1, stdin) != 1 ||
            std::fread(memory.data(), memory.size(), 1, stdin) != 1)
            return 1;
        events.clear();
        models[selection](guest);
        if (std::fwrite(&guest, sizeof(guest), 1, stdout) != 1 ||
            std::fwrite(memory.data(), memory.size(), 1, stdout) != 1)
            return 1;
        const auto count = static_cast<std::uint32_t>(events.size());
        if (std::fwrite(&count, sizeof(count), 1, stdout) != 1)
            return 1;
        for (const auto& [op, address, value, width] : events) {
            const std::uint32_t event[] = {static_cast<std::uint32_t>(op), address, value, width};
            if (std::fwrite(event, sizeof(event), 1, stdout) != 1)
                return 1;
        }
    }
}
