/* Brute Force original Xbox - bounded guest32 tail bridge instruction model.
 * Input x86 body SHA-256: 07B86D87D880AEB4F913C50B7D0A6726469B6DBAC422E1D2B1740CE449173111
 * Entry: 0x0033002b, Ghidra index: 12352, label: FUN_0033002b
 * STATUS: GUEST32_TAIL_BRIDGE_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models only MOV ECX,[0x0040f5a4] then JMP 0x00330c53.
 * guest_ecx and guest_eip are machine-state values, not recovered C++ parameters.
 * The target body and its return state are not executed or inferred here.
 */
#include "bf_xbe_guest_tail_bridge_models.h"

void FUN_0033002b(uint32_t& guest_ecx, uint32_t& guest_eip)
{
    guest_ecx = bf_guest_read_u32(0x0040f5a4u);
    guest_eip = 0x00330c53u;
}
