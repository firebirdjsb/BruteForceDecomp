/* Brute Force original Xbox - bounded guest32 tail bridge instruction model.
 * Input x86 body SHA-256: B5874999D4357EEFC87918FC7106BEC271F5C68ECBE67E7E4D786332A3E5B2FD
 * Entry: 0x00330050, Ghidra index: 12355, label: FUN_00330050
 * STATUS: GUEST32_TAIL_BRIDGE_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models only MOV ECX,[0x0040f5a4] then JMP 0x00330bd2.
 * guest_ecx and guest_eip are machine-state values, not recovered C++ parameters.
 * The target body and its return state are not executed or inferred here.
 */
#include "bf_xbe_guest_tail_bridge_models.h"

void FUN_00330050(uint32_t& guest_ecx, uint32_t& guest_eip)
{
    guest_ecx = bf_guest_read_u32(0x0040f5a4u);
    guest_eip = 0x00330bd2u;
}
