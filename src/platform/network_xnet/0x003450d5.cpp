/* Brute Force original Xbox - bounded guest32 tail bridge instruction model.
 * Input x86 body SHA-256: 580948AD3FF5846367561AE0FCEA33A34C0903A16639741355FED79A14BA8F60
 * Entry: 0x003450d5, Ghidra index: 12785, label: FUN_003450d5
 * STATUS: GUEST32_TAIL_BRIDGE_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models only MOV ECX,[0x0040f5b4] then JMP 0x00346386.
 * guest_ecx and guest_eip are machine-state values, not recovered C++ parameters.
 * The target body and its return state are not executed or inferred here.
 */
#include "bf_xbe_guest_tail_bridge_models.h"

void FUN_003450d5(uint32_t& guest_ecx, uint32_t& guest_eip)
{
    guest_ecx = bf_guest_read_u32(0x0040f5b4u);
    guest_eip = 0x00346386u;
}
