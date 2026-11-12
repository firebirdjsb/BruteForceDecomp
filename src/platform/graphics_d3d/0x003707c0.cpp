/* Brute Force original Xbox - ordered guest DWORD model.
 * Input x86 body SHA-256: 354BB829F308E1F63EB1594BF05B6F556B05CDDC7FF15DA19B8EFCB1D906D107
 * Entry: 0x003707c0, Ghidra index: 13354, label: D3DDevice_SetRenderState_RopZRead
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_model.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint32_t D3D8LTCG__D3D_CommonSetDebugRegisters(void);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_RopZRead(uint32_t value)
{
    // Store the full stack DWORD, then carry the callee's EAX to RET 4.
    bf_guest_write_u32(0x0037e028u, value);
    return D3D8LTCG__D3D_CommonSetDebugRegisters();
}
