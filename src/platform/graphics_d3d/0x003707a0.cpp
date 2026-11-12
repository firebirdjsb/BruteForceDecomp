/* Brute Force original Xbox - ordered guest DWORD model.
 * Input x86 body SHA-256: F05B8B2C2D138788184029EF0C8320CE09314EBFCBED24E4EE7761197BA06894
 * Entry: 0x003707a0, Ghidra index: 13353, label: D3DDevice_SetRenderState_RopZCmpAlwaysRead
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_model.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint32_t D3D8LTCG__D3D_CommonSetDebugRegisters(void);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_RopZCmpAlwaysRead(uint32_t value)
{
    // Store the full stack DWORD, then carry the callee's EAX to RET 4.
    bf_guest_write_u32(0x0037e024u, value);
    return D3D8LTCG__D3D_CommonSetDebugRegisters();
}
