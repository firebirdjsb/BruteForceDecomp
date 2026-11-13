/* Brute Force original Xbox - bounded guest32 tail bridge instruction model.
 * Input x86 body SHA-256: 2B7E8A4C358770EB8E9400E7BD313B7840FDFB78D4A517EFAC3E74A663DA6D90
 * Entry: 0x003476a4, Ghidra index: 12856, label: FUN_003476a4
 * STATUS: GUEST32_TAIL_BRIDGE_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models only MOV ECX,[0x0040f5b4] then JMP 0x003488f2.
 * guest_ecx and guest_eip are machine-state values, not recovered C++ parameters.
 * The target body and its return state are not executed or inferred here.
 */
#include "bf_xbe_guest_tail_bridge_models.h"

void FUN_003476a4(uint32_t& guest_ecx, uint32_t& guest_eip)
{
    guest_ecx = bf_guest_read_u32(0x0040f5b4u);
    guest_eip = 0x003488f2u;
}
