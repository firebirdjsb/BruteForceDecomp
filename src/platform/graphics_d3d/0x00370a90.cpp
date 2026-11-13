/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 8A42821254B1DC069AED610F1B837B90CF1E9FE7C4E228DE6876C57DF4EEB5E2
 * Entry: 0x00370a90, Ghidra index: 13366, label: D3DDevice_SetRenderState_VertexBlend
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Explicit guest DWORDs and EAX output. Native ABI_UNVERIFIED.
 */
#include "bf_ghidra_types.h"
#include "bf_d3d_guest_command_cursor.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_VertexBlend(uint32_t value)
{
    const uint32_t dirty = bf_guest_read_u32(0x0037dd90u);
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    const uint32_t limit = bf_guest_read_u32(device + 4u);
    bf_guest_write_u32(0x0037dd90u, dirty | 0x200u);
    if (cursor >= limit) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(static_cast<int>(request >> 1),
                                                    bf_d3d_guest_signed_dword(request));
    }

    bf_guest_write_u32(cursor, 0x40328u);
    bf_guest_write_u32(cursor + 4u, value);
    cursor += 8u;
    bf_guest_write_u32(device, cursor);
    bf_guest_write_u32(0x0037dfbcu, value);
    return cursor;
}
