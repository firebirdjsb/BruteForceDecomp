#ifndef BF_XBE_GUEST32_RECORD_LEAVES_H
#define BF_XBE_GUEST32_RECORD_LEAVES_H

#include "bf_xbe_guest32_constructors.h"
#include "bf_xbe_guest32_word_model.h"

inline std::uint32_t bf_guest32_leaf_add(bf_guest32_constructor_state& guest,
                                         std::uint32_t left, std::uint32_t right)
{
    using namespace bf_guest32_constructor;
    const std::uint32_t result = left + right;
    const std::uint32_t flags = szp(result, 0x80000000u) |
        (result < left ? carry : 0u) |
        (((left ^ right ^ result) & 0x10u) != 0u ? auxiliary : 0u) |
        ((~(left ^ right) & (left ^ result) & 0x80000000u) != 0u ? overflow : 0u);
    guest.eflags = (guest.eflags & ~arithmetic) | flags;
    guest.eflags_defined |= arithmetic;
    return result;
}

inline void bf_guest32_leaf_sub(bf_guest32_constructor_state& guest, std::uint32_t left,
                                std::uint32_t right, std::uint32_t mask = 0xffffffffu)
{
    using namespace bf_guest32_constructor;
    const std::uint32_t sign_bit = (mask >> 1u) + 1u;
    const std::uint32_t result = (left - right) & mask;
    const std::uint32_t flags = szp(result, sign_bit) |
        (left < right ? carry : 0u) |
        (((left ^ right ^ result) & 0x10u) != 0u ? auxiliary : 0u) |
        (((left ^ right) & (left ^ result) & sign_bit) != 0u ? overflow : 0u);
    guest.eflags = (guest.eflags & ~arithmetic) | flags;
    guest.eflags_defined |= arithmetic;
}

inline void bf_guest32_leaf_dec(bf_guest32_constructor_state& guest, std::uint32_t& value)
{
    using namespace bf_guest32_constructor;
    const std::uint32_t defined = arithmetic & ~carry;
    --value;
    guest.eflags = (guest.eflags & ~defined) | szp(value, 0x80000000u) |
                   ((value & 0xfu) == 0xfu ? auxiliary : 0u) |
                   (value == 0x7fffffffu ? overflow : 0u);
    guest.eflags_defined |= defined;
}

inline void bf_guest32_leaf_ret(bf_guest32_constructor_state& guest, std::uint32_t instruction,
                                std::uint32_t cleanup)
{
    const std::uint32_t destination = bf_guest32_constructor::pop(guest, instruction);
    guest.esp += cleanup;
    guest.eip = destination;
}

inline void bf_guest32_leaf_clear(bf_guest32_constructor_state& guest, std::uint32_t entry,
                                  std::uint32_t displacement, std::uint32_t data_offset,
                                  std::uint32_t state_offset)
{
    using namespace bf_guest32_constructor;
    const std::uint32_t object = guest.eax;
    const std::uint32_t table = object + displacement;
    const std::uint32_t state = object + state_offset;
    guest.ecx = object + 0x10u;
    write32(guest, entry + 3u, state, guest.ecx);
    guest.edx = object + data_offset;
    write32(guest, entry + 0xcu, state + 0xcu, guest.edx);
    guest.ecx = read32(guest, entry + 0x12u, table + 0x90u);
    write32(guest, entry + 0x18u, state - 4u, guest.ecx);
    guest.edx = read32(guest, entry + 0x1eu, table + 0x94u);
    write32(guest, entry + 0x24u, state + 8u, guest.edx);
    guest.edx = 0u;
    logic_flags(guest, guest.edx);
    write32(guest, entry + 0x2cu, state + 0x10u, guest.edx);
    write32(guest, entry + 0x32u, state + 0x14u, guest.edx);
    guest.ecx = read32(guest, entry + 0x38u, table + 0xa4u);
    const std::uint32_t width = read32(guest, entry + 0x3eu, table + 0x9cu);

    // Signed IMUL defines CF/OF; the following DEC defines the other status flags.
    const auto signed_word = [](std::uint32_t word) {
        return static_cast<std::int64_t>(word) - ((word & 0x80000000u) != 0u ? 0x100000000ll : 0ll);
    };
    const std::int64_t product = signed_word(guest.ecx) * signed_word(width);
    guest.ecx = static_cast<std::uint32_t>(product);
    const bool wide = product < -2147483648ll || product > 2147483647ll;
    guest.eflags = (guest.eflags & ~arithmetic) | (wide ? carry | overflow : 0u);
    guest.eflags_defined = (guest.eflags_defined & ~arithmetic) | carry | overflow;
    bf_guest32_leaf_dec(guest, guest.ecx);
    if ((guest.ecx >> 31u) == 0u) {
        push(guest, entry + 0x48u, guest.esi);
        do {
            bf_guest32_leaf_dec(guest, guest.ecx);
            guest.esi = read32(guest, entry + 0x51u, table + 0x98u);
            write32(guest, entry + 0x57u, guest.esi + guest.ecx * 4u + 4u, guest.edx);
        } while ((guest.ecx >> 31u) == 0u);
        guest.esi = pop(guest, entry + 0x5du);
    }
    for (std::uint32_t i = 0; i < 4u; ++i)
        write32(guest, entry + 0x5eu + i * 3u, object + 0xcu - i * 4u, guest.edx);
    bf_guest32_leaf_ret(guest, entry + 0x69u, 4u);
}

void FUN_002de810(bf_guest32_constructor_state& guest);
void FUN_002de8b0(bf_guest32_constructor_state& guest);
void FUN_002de920(bf_guest32_constructor_state& guest);
void XAPILIB__SetUnhandledExceptionFilter(bf_guest32_constructor_state& guest);
void FUN_002fe401(bf_guest32_constructor_state& guest);
void FUN_0033f199(bf_guest32_constructor_state& guest);
void FUN_0034c50e(bf_guest32_constructor_state& guest);

#endif
