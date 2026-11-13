/* Brute Force original Xbox - bounded guest32 tail bridge instruction model.
 * Input x86 body SHA-256: DFAE3B34EB0FF09C9828CA5C991F0442BE6F891D599318D982154C4E3F366EF2
 * Entry: 0x003476db, Ghidra index: 12861, label: FUN_003476db
 * STATUS: GUEST32_TAIL_BRIDGE_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models only MOV ECX,[0x0040f5b4] then JMP 0x00348ad6.
 * guest_ecx and guest_eip are machine-state values, not recovered C++ parameters.
 * The target body and its return state are not executed or inferred here.
 */
#include "bf_xbe_guest_tail_bridge_models.h"

void FUN_003476db(uint32_t& guest_ecx, uint32_t& guest_eip)
{
    guest_ecx = bf_guest_read_u32(0x0040f5b4u);
    guest_eip = 0x00348ad6u;
}
