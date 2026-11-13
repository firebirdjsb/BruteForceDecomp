/* Brute Force original Xbox - bounded guest32 tail bridge instruction model.
 * Input x86 body SHA-256: FD3D9C4EC1EEF4FC1AFE08552B003E54A102C8D2E1800842C06288933FC7EB77
 * Entry: 0x003450fe, Ghidra index: 12788, label: FUN_003450fe
 * STATUS: GUEST32_TAIL_BRIDGE_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models only MOV ECX,[0x0040f5b4] then JMP 0x003468f1.
 * guest_ecx and guest_eip are machine-state values, not recovered C++ parameters.
 * The target body and its return state are not executed or inferred here.
 */
#include "bf_xbe_guest_tail_bridge_models.h"

void FUN_003450fe(uint32_t& guest_ecx, uint32_t& guest_eip)
{
    guest_ecx = bf_guest_read_u32(0x0040f5b4u);
    guest_eip = 0x003468f1u;
}
