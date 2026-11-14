#ifndef BF_XBE_GUEST32_STRING_LEAVES_H
#define BF_XBE_GUEST32_STRING_LEAVES_H

#include "bf_xbe_guest32_record_leaves.h"

inline std::uint8_t bf_guest32_byte_read(bf_guest32_constructor_state& guest,
                                         std::uint32_t instruction, std::uint32_t address)
{
    guest.eip = instruction;
    return bf_guest_read_u8(address);
}

inline std::uint32_t bf_guest32_set_low_byte(std::uint32_t reg, std::uint8_t byte)
{
    return (reg & 0xffffff00u) | byte;
}

inline void bf_guest32_scan_nul(bf_guest32_constructor_state& guest, std::uint32_t instruction)
{
    using namespace bf_guest32_constructor;
    do {
        const auto byte = bf_guest32_byte_read(guest, instruction, guest.eax);
        guest.edx = bf_guest32_set_low_byte(guest.edx, byte);
        increment(guest, guest.eax);
        logic_flags(guest, byte, 0x80u);
    } while ((guest.edx & 0xffu) != 0u);
}

inline void bf_guest32_copy_nul(bf_guest32_constructor_state& guest,
                                std::uint32_t instruction, std::uint32_t destination_bias)
{
    using namespace bf_guest32_constructor;
    do {
        const auto byte = bf_guest32_byte_read(guest, instruction, guest.ecx);
        guest.edx = bf_guest32_set_low_byte(guest.edx, byte);
        write8(guest, instruction + 2u, destination_bias + guest.ecx, byte);
        increment(guest, guest.ecx);
        logic_flags(guest, byte, 0x80u);
    } while ((guest.edx & 0xffu) != 0u);
}

inline bool bf_guest32_space_or_tab(bf_guest32_constructor_state& guest, std::uint8_t byte)
{
    bf_guest32_leaf_sub(guest, byte, 0x20u, 0xffu);
    if (byte == 0x20u)
        return true;
    bf_guest32_leaf_sub(guest, byte, 0x09u, 0xffu);
    return byte == 0x09u;
}

void FUN_001f1b40(bf_guest32_constructor_state& guest);
void FUN_002f56db(bf_guest32_constructor_state& guest);
void FUN_00341b2d(bf_guest32_constructor_state& guest);

#endif
