/* Brute Force original Xbox - bounded guest32 tail bridge instruction model.
 * Input x86 body SHA-256: 1A26ED02697A1D5BAC6D55C1FED9A93C9D15AEF52CAE391353709740E32F3C05
 * Entry: 0x003450b4, Ghidra index: 12782, label: FUN_003450b4
 * STATUS: GUEST32_TAIL_BRIDGE_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models only MOV ECX,[0x0040f5b4] then JMP 0x00346207.
 * guest_ecx and guest_eip are machine-state values, not recovered C++ parameters.
 * The target body and its return state are not executed or inferred here.
 */
#include "bf_xbe_guest_tail_bridge_models.h"

void FUN_003450b4(uint32_t& guest_ecx, uint32_t& guest_eip)
{
    guest_ecx = bf_guest_read_u32(0x0040f5b4u);
    guest_eip = 0x00346207u;
}
