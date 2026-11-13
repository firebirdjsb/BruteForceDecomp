#ifndef BF_XBE_GUEST32_FRAMED_TAIL_H
#define BF_XBE_GUEST32_FRAMED_TAIL_H

#include "bf_xbe_guest32_record_model.h"

struct bf_guest32_framed_tail_state {
    std::uint32_t ebp, esp, ecx, eip;
};

// The backend owns guest memory and fault delivery. Commit register effects
// after successful memory operations, with EIP at the access if one fails.
inline void bf_guest32_framed_tail(bf_guest32_framed_tail_state& guest,
                                   std::uint32_t entry, std::uint32_t global,
                                   std::uint32_t target)
{
    guest.eip = entry;
    const std::uint32_t pushed_esp = guest.esp - 4u;
    bf_guest_write_u32(pushed_esp, guest.ebp); // PUSH EBP.
    guest.esp = pushed_esp;
    guest.ebp = guest.esp; // MOV EBP,ESP.
    guest.eip = entry + 3u;
    guest.ebp = bf_guest_read_u32(guest.esp); // POP EBP.
    guest.esp += 4u;
    guest.eip = entry + 4u;
    guest.ecx = bf_guest_read_u32(global); // MOV ECX,[disp32].
    guest.eip = target; // JMP rel32. None of these instructions changes flags.
}

void XONLINES__XOnlineLogon(bf_guest32_framed_tail_state& guest);
void FUN_003450a5(bf_guest32_framed_tail_state& guest);
void FUN_003450e0(bf_guest32_framed_tail_state& guest);
void FUN_003450ef(bf_guest32_framed_tail_state& guest);
void FUN_00345114(bf_guest32_framed_tail_state& guest);
void FUN_00345123(bf_guest32_framed_tail_state& guest);
void FUN_0034513d(bf_guest32_framed_tail_state& guest);
void FUN_0034514c(bf_guest32_framed_tail_state& guest);
void FUN_0034515b(bf_guest32_framed_tail_state& guest);

#endif
