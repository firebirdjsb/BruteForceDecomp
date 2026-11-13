#include "bf_xbe_guest32_xnet_record_models.h"

#include <array>
#include <cstdio>
#include <cstdlib>
#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

constexpr uint32_t base = 0x00420000u;
static std::array<uint8_t, 4096> memory;

static uint8_t& at(uint32_t address)
{
    const uint32_t offset = address - base;
    if (offset >= memory.size())
        std::abort();
    return memory[offset];
}

uint8_t bf_guest_read_u8(uint32_t address)
{
    return at(address);
}

uint32_t bf_guest_read_u32(uint32_t address)
{
    uint32_t value = 0;
    for (unsigned i = 0; i < 4; ++i)
        value |= uint32_t(at(address + i)) << (i * 8);
    return value;
}

void bf_guest_write_u8(uint32_t address, uint8_t value)
{
    at(address) = value;
}

void bf_guest_write_u32(uint32_t address, uint32_t value)
{
    for (unsigned i = 0; i < 4; ++i)
        at(address + i) = static_cast<uint8_t>(value >> (i * 8));
}

int main()
{
#ifdef _WIN32
    _setmode(_fileno(stdin), _O_BINARY);
    _setmode(_fileno(stdout), _O_BINARY);
#endif
    std::array<uint32_t, 3> input{};
    if (std::fread(input.data(), sizeof(uint32_t), input.size(), stdin) != input.size() ||
        std::fread(memory.data(), 1, memory.size(), stdin) != memory.size())
        return 1;

    uint32_t eax = 0;
    switch (input[0]) {
    case 0x00353101u:
        eax = FUN_00353101(input[1], input[2]);
        break;
    case 0x003537fau:
        eax = FUN_003537fa(input[1]);
        break;
    case 0x00353829u:
        eax = FUN_00353829(input[1]);
        break;
    default:
        std::abort();
    }
    return std::fwrite(&eax, sizeof(eax), 1, stdout) == 1 &&
           std::fwrite(memory.data(), 1, memory.size(), stdout) == memory.size() ? 0 : 1;
}
