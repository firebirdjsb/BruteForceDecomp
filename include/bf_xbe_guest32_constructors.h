#ifndef BF_XBE_GUEST32_CONSTRUCTORS_H
#define BF_XBE_GUEST32_CONSTRUCTORS_H

#include "bf_xbe_guest32_record_model.h"

// Explicit host model of the retail register file in flat 32-bit guest memory.
// ABI_UNVERIFIED: memory translation, segment checks and fault delivery belong
// to the backend. An access exception leaves EIP at the faulting instruction.
struct bf_guest32_constructor_state {
    std::uint32_t eax, ebx, ecx, edx, esi, edi, ebp, esp, eip;
    std::uint32_t eflags, eflags_defined;
};

namespace bf_guest32_constructor {

constexpr std::uint32_t carry = 0x001u;
constexpr std::uint32_t parity = 0x004u;
constexpr std::uint32_t auxiliary = 0x010u;
constexpr std::uint32_t zero = 0x040u;
constexpr std::uint32_t sign = 0x080u;
constexpr std::uint32_t direction = 0x400u;
constexpr std::uint32_t overflow = 0x800u;
constexpr std::uint32_t arithmetic = carry | parity | auxiliary | zero | sign | overflow;

inline std::uint32_t szp(std::uint32_t value, std::uint32_t sign_bit)
{
    const std::uint32_t byte = value & 0xffu;
    const std::uint32_t folded = (byte ^ (byte >> 4)) & 0xfu;
    return ((value & sign_bit) != 0 ? sign : 0u) |
           (value == 0 ? zero : 0u) |
           (((0x6996u >> folded) & 1u) == 0 ? parity : 0u);
}

inline void logic_flags(bf_guest32_constructor_state& guest, std::uint32_t value,
                        std::uint32_t sign_bit = 0x80000000u)
{
    constexpr std::uint32_t defined = arithmetic & ~auxiliary;
    guest.eflags = (guest.eflags & ~defined) | szp(value, sign_bit);
    guest.eflags_defined = (guest.eflags_defined | defined) & ~auxiliary;
}

// CMP r32,0 has no borrow, auxiliary borrow or signed overflow.
inline void compare_zero(bf_guest32_constructor_state& guest, std::uint32_t value)
{
    guest.eflags = (guest.eflags & ~arithmetic) | szp(value, 0x80000000u);
    guest.eflags_defined |= arithmetic;
}

inline void increment(bf_guest32_constructor_state& guest, std::uint32_t& value)
{
    ++value;
    constexpr std::uint32_t defined = arithmetic & ~carry;
    guest.eflags = (guest.eflags & ~defined) | szp(value, 0x80000000u) |
                   ((value & 0xfu) == 0 ? auxiliary : 0u) |
                   (value == 0x80000000u ? overflow : 0u);
    guest.eflags_defined |= defined;
}

inline std::uint32_t read32(bf_guest32_constructor_state& guest,
                            std::uint32_t site, std::uint32_t address)
{
    guest.eip = site;
    return bf_guest_read_u32(address);
}

inline void write32(bf_guest32_constructor_state& guest, std::uint32_t site,
                    std::uint32_t address, std::uint32_t value)
{
    guest.eip = site;
    bf_guest_write_u32(address, value);
}

inline void write8(bf_guest32_constructor_state& guest, std::uint32_t site,
                   std::uint32_t address, std::uint8_t value)
{
    guest.eip = site;
    bf_guest_write_u8(address, value);
}

inline void or8(bf_guest32_constructor_state& guest, std::uint32_t site,
                std::uint32_t address, std::uint8_t bits)
{
    guest.eip = site;
    const auto value = static_cast<std::uint8_t>(bf_guest_read_u8(address) | bits);
    bf_guest_write_u8(address, value);
    logic_flags(guest, value, 0x80u);
}

inline void push(bf_guest32_constructor_state& guest, std::uint32_t site, std::uint32_t value)
{
    const std::uint32_t address = guest.esp - 4u;
    write32(guest, site, address, value);
    guest.esp = address;
}

inline std::uint32_t pop(bf_guest32_constructor_state& guest, std::uint32_t site)
{
    const std::uint32_t value = read32(guest, site, guest.esp);
    guest.esp += 4u;
    return value;
}

inline void ret(bf_guest32_constructor_state& guest, std::uint32_t site)
{
    guest.eip = pop(guest, site);
}

inline void rep_stosd(bf_guest32_constructor_state& guest, std::uint32_t site)
{
    const std::uint32_t step = (guest.eflags & direction) != 0 ? 0xfffffffcu : 4u;
    while (guest.ecx != 0) {
        write32(guest, site, guest.edi, guest.eax);
        guest.edi += step;
        --guest.ecx;
    }
}

} // namespace bf_guest32_constructor

void FUN_00092330(bf_guest32_constructor_state& guest);
void FUN_00093480(bf_guest32_constructor_state& guest);
void FUN_00094f20(bf_guest32_constructor_state& guest);
void FUN_000979d0(bf_guest32_constructor_state& guest);
void FUN_00099210(bf_guest32_constructor_state& guest);
void FUN_000998c0(bf_guest32_constructor_state& guest);
void FUN_0009a690(bf_guest32_constructor_state& guest);
void FUN_0009e740(bf_guest32_constructor_state& guest);
void FUN_000a3b80(bf_guest32_constructor_state& guest);
void FUN_000a91e0(bf_guest32_constructor_state& guest);
void FUN_00255b70(bf_guest32_constructor_state& guest);
void FUN_00256d80(bf_guest32_constructor_state& guest);
void FUN_0025bd50(bf_guest32_constructor_state& guest);
void FUN_00261fb0(bf_guest32_constructor_state& guest);
void FUN_00263270(bf_guest32_constructor_state& guest);
void FUN_0027c260(bf_guest32_constructor_state& guest);
void FUN_0027c3e0(bf_guest32_constructor_state& guest);
void FUN_0029fbe0(bf_guest32_constructor_state& guest);

#endif
