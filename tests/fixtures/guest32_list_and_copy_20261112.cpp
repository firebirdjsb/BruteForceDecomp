#include "bf_xbe_guest32_audio_links.h"

#include <array>
#include <cstdio>
#include <cstdlib>
#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

// In-memory fixture at a guest address shared with the optional x86 oracle.
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

uint16_t bf_guest_read_u16(uint32_t address)
{
    return static_cast<uint16_t>(uint16_t(at(address)) | (uint16_t(at(address + 1u)) << 8));
}

void bf_guest_write_u8(uint32_t address, uint8_t value)
{
    at(address) = value;
}

void bf_guest_write_u16(uint32_t address, uint16_t value)
{
    for (unsigned i = 0; i < 2; ++i)
        at(address + i) = static_cast<uint8_t>(value >> (i * 8));
}

void bf_guest_write_u32(uint32_t address, uint32_t value)
{
    for (unsigned i = 0; i < 4; ++i)
        at(address + i) = static_cast<uint8_t>(value >> (i * 8));
}

uint32_t FUN_0001d510(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_0008f4f0(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_000b18e0(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001d6690(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001d6d60(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_002634d0(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001d6840(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_0024ad20(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_0024aa10(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d65f0(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d6640(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d6bf0(uint32_t, uint32_t, uint32_t, uint32_t);

uint32_t FUN_0001c930(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001b6d40(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001b7330(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001b7660(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001b99c0(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_002463a0(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_002633d0(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_001d7e10(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d8180(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d64e0(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d67a0(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d84b0(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001d6b00(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001328e0(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_002e0090(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_00176700(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_001667c0(uint32_t, uint32_t);
uint32_t FUN_001668b0(uint32_t, uint32_t);
uint32_t FUN_001cab70(uint32_t, uint32_t);
uint32_t FUN_001cab20(uint32_t, uint32_t);

uint32_t FUN_00236ec0(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_0031b21f(uint32_t, uint32_t, uint32_t, uint32_t, bool);
uint32_t FUN_00352e8d(uint32_t, uint32_t, uint32_t, bool);

uint32_t FUN_00023b80(uint32_t, uint32_t);
uint32_t FUN_00235d10(uint32_t, uint32_t);
uint32_t FUN_001dcf30(uint32_t, uint32_t);
uint32_t FUN_002f466f(uint32_t, uint32_t, bool);
uint32_t FUN_00251790(uint32_t, bool);
uint32_t FUN_00162c60(uint32_t, uint32_t, bool);
uint32_t FUN_00377f00(uint32_t, uint32_t, uint32_t, bool);

static uint32_t invoke(uint32_t entry, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t df)
{
    switch (entry) {
    case 0x003118c0: return FUN_003118c0(a);
    case 0x00315f72: return FUN_00315f72(a, b);
    case 0x0031aa47: return FUN_0031aa47(a, b, c);
    case 0x0031aa11: return FUN_0031aa11(a, b, c, d);
    case 0x0031ae9c: return FUN_0031ae9c(a, b);
    case 0x0001d510: return FUN_0001d510(a, b, c, d, df != 0);
    case 0x0008f4f0: return FUN_0008f4f0(a, b, c, d, df != 0);
    case 0x000b18e0: return FUN_000b18e0(a, b, c, d, df != 0);
    case 0x001d6690: return FUN_001d6690(a, b, c, d, df != 0);
    case 0x001d6d60: return FUN_001d6d60(a, b, c, d, df != 0);
    case 0x002634d0: return FUN_002634d0(a, b, c, d, df != 0);
    case 0x001d6840: return FUN_001d6840(a, b, c, d);
    case 0x0024ad20: return FUN_0024ad20(a, b, c, d);
    case 0x0024aa10: return FUN_0024aa10(a, b, c, d);
    case 0x001d65f0: return FUN_001d65f0(a, b, c, d);
    case 0x001d6640: return FUN_001d6640(a, b, c, d);
    case 0x001d6bf0: return FUN_001d6bf0(a, b, c, d);
    case 0x0001c930: return FUN_0001c930(a, b, c, d, df != 0);
    case 0x001b6d40: return FUN_001b6d40(a, b, c, d, df != 0);
    case 0x001b7330: return FUN_001b7330(a, b, c, d, df != 0);
    case 0x001b7660: return FUN_001b7660(a, b, c, d, df != 0);
    case 0x001b99c0: return FUN_001b99c0(a, b, c, d, df != 0);
    case 0x002463a0: return FUN_002463a0(a, b, c, d, df != 0);
    case 0x002633d0: return FUN_002633d0(a, b, c, d, df != 0);
    case 0x001d7e10: return FUN_001d7e10(a, b, c, d);
    case 0x001d8180: return FUN_001d8180(a, b, c, d);
    case 0x001d64e0: return FUN_001d64e0(a, b, c, d);
    case 0x001d67a0: return FUN_001d67a0(a, b, c, d);
    case 0x001d84b0: return FUN_001d84b0(a, b, c, d);
    case 0x001d6b00: return FUN_001d6b00(a, b, c, d);
    case 0x001328e0: return FUN_001328e0(a, b, c, d);
    case 0x002e0090: return FUN_002e0090(a, b, c, d);
    case 0x00176700: return FUN_00176700(a, b, c, d);
    case 0x001667c0: return FUN_001667c0(a, b);
    case 0x001668b0: return FUN_001668b0(a, b);
    case 0x001cab70: return FUN_001cab70(a, b);
    case 0x001cab20: return FUN_001cab20(a, b);
    case 0x00236ec0: return FUN_00236ec0(a, b, c, d);
    case 0x0031b21f: return FUN_0031b21f(a, b, c, d, df != 0);
    case 0x00352e8d: return FUN_00352e8d(a, b, c, df != 0);
    case 0x00023b80: return FUN_00023b80(a, b);
    case 0x00235d10: return FUN_00235d10(a, b);
    case 0x001dcf30: return FUN_001dcf30(a, b);
    case 0x002f466f: return FUN_002f466f(a, b, df != 0);
    case 0x00251790: return FUN_00251790(a, df != 0);
    case 0x00162c60: return FUN_00162c60(a, b, df != 0);
    case 0x00377f00: return FUN_00377f00(a, b, c, df != 0);
    default: std::abort();
    }
}

int main()
{
#ifdef _WIN32
    _setmode(_fileno(stdin), _O_BINARY);
    _setmode(_fileno(stdout), _O_BINARY);
#endif
    std::array<uint32_t, 6> input{};
    if (std::fread(input.data(), sizeof(uint32_t), input.size(), stdin) != input.size() ||
        std::fread(memory.data(), 1, memory.size(), stdin) != memory.size())
        return 1;
    const uint32_t eax = invoke(input[0], input[1], input[2], input[3], input[4], input[5]);
    return std::fwrite(&eax, sizeof(eax), 1, stdout) == 1 &&
           std::fwrite(memory.data(), 1, memory.size(), stdout) == memory.size() ? 0 : 1;
}
