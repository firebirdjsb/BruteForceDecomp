/* Brute Force original Xbox - ordered guest DWORD model.
 * Input x86 body SHA-256: 3E965166B55CFC7FF512C2073671D2F5DE91637DAC0EB82ABA01CE10AB6F8A05
 * Entry: 0x003707e0, Ghidra index: 13355, label: D3DDevice_SetRenderState_DoNotCullUncompressed
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_model.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint32_t D3D8LTCG__D3D_CommonSetDebugRegisters(void);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_DoNotCullUncompressed(uint32_t value)
{
    // Store the full stack DWORD, then carry the callee's EAX to RET 4.
    bf_guest_write_u32(0x0037e02cu, value);
    return D3D8LTCG__D3D_CommonSetDebugRegisters();
}
