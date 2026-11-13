#ifndef BF_XBE_GUEST32_XNET_CONDITIONAL_TAIL_H
#define BF_XBE_GUEST32_XNET_CONDITIONAL_TAIL_H

#include "bf_xbe_guest32_record_model.h"

struct bf_xnet_conditional_tail_state {
    std::uint32_t eax, ecx, esp, eip;
    std::uint32_t eflags, eflags_defined;
};

inline void bf_xnet_conditional_tail(bf_xnet_conditional_tail_state& guest,
                                     std::uint32_t entry, std::uint32_t prefix_bytes,
                                     std::uint32_t target, std::uint32_t cleanup)
{
    // TEST ECX,ECX defines SF/ZF/PF and clears CF/OF. AF is undefined.
    const std::uint32_t low_byte = guest.ecx & 0xffu;
    const std::uint32_t folded = (low_byte ^ (low_byte >> 4u)) & 0xfu;
    const bool even_parity = ((0x6996u >> folded) & 1u) == 0u;
    guest.eflags = (guest.eflags & ~0x8c5u) |
                   (even_parity ? 0x004u : 0u) |
                   (guest.ecx == 0u ? 0x040u : 0u) |
                   ((guest.ecx >> 31u) != 0u ? 0x080u : 0u);
    guest.eflags_defined = (guest.eflags_defined & ~0x010u) | 0x8c5u;

    if (guest.ecx != 0u) {
        guest.eip = target; // Direct JMP with ESP and EAX unchanged.
        return;
    }
    guest.eax = 0x276du;
    guest.eip = entry + prefix_bytes + 9u; // RET imm16 before reading its stack target.
    const std::uint32_t return_address = bf_guest_read_u32(guest.esp);
    guest.esp += 4u + cleanup; // Pop the DWORD return address and discard imm16 bytes.
    guest.eip = return_address;
}

void FUN_00344f20(bf_xnet_conditional_tail_state& guest);
void FUN_00344f31(bf_xnet_conditional_tail_state& guest);
void FUN_00344f42(bf_xnet_conditional_tail_state& guest);
void FUN_00344f7f(bf_xnet_conditional_tail_state& guest);
void FUN_00344fa6(bf_xnet_conditional_tail_state& guest);
void FUN_00344fb7(bf_xnet_conditional_tail_state& guest);
void FUN_00344fc8(bf_xnet_conditional_tail_state& guest);
void FUN_0034501b(bf_xnet_conditional_tail_state& guest);
void FUN_00345032(bf_xnet_conditional_tail_state& guest);
void FUN_0034516d(bf_xnet_conditional_tail_state& guest);
void FUN_0034517e(bf_xnet_conditional_tail_state& guest);
void FUN_00345195(bf_xnet_conditional_tail_state& guest);

#endif
