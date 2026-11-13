/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: F8439DE13AEC578CFB318ACD8FE282755EAC266C107669EE85BCF6A95231E0CF
 * Entry: 0x003702e0, Ghidra index: 13342, label: D3DDevice_SetRenderState_FrontFace
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * One guest stack DWORD, then a tail transfer with the replacement DWORD.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

extern uint32_t D3D8LTCG__D3DDevice_SetRenderState_CullMode(uint32_t value);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_FrontFace(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
    }

    bf_guest_write_u32(cursor, 0x403a0u);
    bf_guest_write_u32(cursor + 4u, value);
    bf_guest_write_u32(device, cursor + 8u);
    const uint32_t cull_mode = bf_guest_read_u32(0x0037dfe4u);
    bf_guest_write_u32(0x0037dfe0u, value);
    return D3D8LTCG__D3DDevice_SetRenderState_CullMode(cull_mode);
}
