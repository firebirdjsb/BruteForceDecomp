/* Brute Force original Xbox - explicit guest DWORD command model.
 * Input x86 body SHA-256: 68DE5467DED1F2F418560A00DBE332AFDA31A3F6BBA2FDD2E277F323ABCCB59A
 * Entry: 0x0036cd50, Ghidra index: 13286, label: D3DDevice_SetVertexDataColor
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Inputs model two captured stack DWORDs; return models EAX at RET.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetVertexDataColor(uint32_t guest_param_1,
                                               uint32_t guest_param_2)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    const uint32_t limit = bf_guest_read_u32(device + 4u);
    if (cursor >= limit) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
    }

    const uint32_t command = (guest_param_1 << 2) + 0x00041940u;
    const uint32_t color = ((guest_param_2 >> 16) & 0x000000ffu) |
                           ((guest_param_2 & 0x000000ffu) << 16) |
                           (guest_param_2 & 0xff00ff00u);
    bf_guest_write_u32(cursor, command);
    bf_guest_write_u32(cursor + 4u, color);
    cursor += 8u;
    bf_guest_write_u32(device, cursor);
    return cursor;
}
