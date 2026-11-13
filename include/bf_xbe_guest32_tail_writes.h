#ifndef BF_XBE_GUEST32_TAIL_WRITES_H
#define BF_XBE_GUEST32_TAIL_WRITES_H

#include "bf_xbe_guest32_record_model.h"

struct bf_guest32_tail_write_state {
    std::uint32_t eax, ecx, edx, esp, eip;
    std::uint32_t eflags, eflags_defined;
};

inline std::uint32_t bf_guest32_tail_szp(std::uint32_t value)
{
    const std::uint32_t byte = value & 0xffu;
    const std::uint32_t folded = (byte ^ (byte >> 4u)) & 0xfu;
    return (((0x6996u >> folded) & 1u) == 0u ? 0x004u : 0u) |
           (value == 0u ? 0x040u : 0u) |
           ((value & 0x80000000u) != 0u ? 0x080u : 0u);
}

inline std::uint32_t bf_guest32_tail_add_four(bf_guest32_tail_write_state& guest,
                                             std::uint32_t input)
{
    const std::uint32_t result = input + 4u;
    const std::uint32_t flags = bf_guest32_tail_szp(result) |
        (result < input ? 0x001u : 0u) |
        (((input ^ 4u ^ result) & 0x10u) != 0u ? 0x010u : 0u) |
        ((~(input ^ 4u) & (input ^ result) & 0x80000000u) != 0u ? 0x800u : 0u);
    guest.eflags = (guest.eflags & ~0x8d5u) | flags;
    guest.eflags_defined |= 0x8d5u;
    return result;
}

// EIP tracks each guest memory access so an exception from the guest backend
// leaves the completed instruction effects visible. A tail JMP leaves ESP alone.
inline void bf_guest32_advance_tail(bf_guest32_tail_write_state& guest,
                                    std::uint32_t& adjusted_register,
                                    std::uint32_t entry, std::uint32_t target)
{
    guest.eip = entry;
    adjusted_register = bf_guest_read_u32(guest.esp + 4u);
    adjusted_register = bf_guest32_tail_add_four(guest, adjusted_register);
    guest.eip = entry + 7u;
    bf_guest_write_u32(guest.esp + 4u, adjusted_register);
    guest.eip = target;
}

inline void bf_guest32_copy_tail(bf_guest32_tail_write_state& guest,
                                 std::uint32_t entry, std::uint32_t target)
{
    // TEST EAX,EAX defines SF/ZF/PF and clears CF/OF. AF becomes undefined.
    guest.eflags = (guest.eflags & ~0x8c5u) | bf_guest32_tail_szp(guest.eax);
    guest.eflags_defined = (guest.eflags_defined & ~0x010u) | 0x8c5u;
    if (guest.eax == 0u) {
        guest.eip = entry + 23u; // RET 4 consumes a DWORD address and four argument bytes.
        const std::uint32_t return_address = bf_guest_read_u32(guest.esp);
        guest.esp += 8u;
        guest.eip = return_address;
        return;
    }
    guest.eip = entry + 4u;
    guest.edx = bf_guest_read_u32(guest.ecx);
    guest.eip = entry + 6u;
    bf_guest_write_u32(guest.eax, guest.edx);
    guest.ecx = bf_guest32_tail_add_four(guest, guest.ecx);
    guest.eax = bf_guest32_tail_add_four(guest, guest.eax);
    guest.eip = entry + 14u;
    bf_guest_write_u32(guest.esp + 4u, guest.eax);
    guest.eip = target;
}

inline void bf_guest32_adjust_tail(bf_guest32_tail_write_state& guest,
                                   std::uint32_t entry, std::uint32_t target,
                                   std::uint32_t first, std::uint32_t second,
                                   std::uint32_t third, std::uint32_t fourth,
                                   std::uint32_t fifth, std::uint32_t bias)
{
    // MOV, LEA and JMP preserve flags. Reload ECX+0x4c after each
    // potentially aliasing store through the decoded displacement.
    guest.eip = entry;
    guest.eax = bf_guest_read_u32(guest.ecx + 0x4cu);
    guest.eip = entry + 3u;
    bf_guest_write_u32(guest.ecx, first);
    guest.eip = entry + 9u;
    bf_guest_write_u32(guest.ecx + 0x48u, second);
    guest.eip = entry + 16u;
    bf_guest_write_u32(guest.ecx + 0x68u, third);
    guest.eip = entry + 23u;
    guest.edx = bf_guest_read_u32(guest.eax + 4u);
    guest.eip = entry + 26u;
    bf_guest_write_u32(guest.edx + guest.ecx + 0x4cu, fourth);
    guest.eip = entry + 34u;
    guest.eax = bf_guest_read_u32(guest.ecx + 0x4cu);
    guest.eip = entry + 37u;
    guest.edx = bf_guest_read_u32(guest.eax + 4u);
    guest.eip = entry + 40u;
    bf_guest_write_u32(guest.edx + guest.ecx + 0x50u, fifth);
    guest.eip = entry + 48u;
    guest.eax = bf_guest_read_u32(guest.ecx + 0x4cu);
    guest.eip = entry + 51u;
    guest.eax = bf_guest_read_u32(guest.eax + 4u);
    guest.edx = guest.eax - bias;
    guest.eip = entry + 60u;
    bf_guest_write_u32(guest.eax + guest.ecx + 0x48u, guest.edx);
    guest.eip = target;
}

void FUN_0015f180(bf_guest32_tail_write_state& guest);
void FUN_00162f70(bf_guest32_tail_write_state& guest);
void FUN_001dce10(bf_guest32_tail_write_state& guest);
void FUN_001dce70(bf_guest32_tail_write_state& guest);
void FUN_001dceb0(bf_guest32_tail_write_state& guest);
void FUN_001dd0f0(bf_guest32_tail_write_state& guest);
void FUN_001dd1a0(bf_guest32_tail_write_state& guest);
void FUN_0024bb60(bf_guest32_tail_write_state& guest);
void FUN_0029feb0(bf_guest32_tail_write_state& guest);
void FUN_0029fec0(bf_guest32_tail_write_state& guest);
void FUN_002a8680(bf_guest32_tail_write_state& guest);
void FUN_002a8690(bf_guest32_tail_write_state& guest);
void FUN_002a8720(bf_guest32_tail_write_state& guest);

#endif
