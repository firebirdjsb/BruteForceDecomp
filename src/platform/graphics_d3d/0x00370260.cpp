/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: C62A502E5284077FF4D8515D87DA71709248DD37A10EC741B581E218B3FF77F6
 * Entry: 0x00370260, Ghidra index: 13341, label: D3DDevice_SetRenderState_CullMode
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Explicit guest DWORDs and EAX output. Native ABI_UNVERIFIED.
 */
#include "bf_ghidra_types.h"
#include "bf_d3d_guest_command_cursor.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_CullMode(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(static_cast<int>(request >> 1),
                                                    bf_d3d_guest_signed_dword(request));
    }

    bf_guest_write_u32(cursor, 0x40308u);
    if (value == 0u) {
        bf_guest_write_u32(cursor + 4u, 0u);
        cursor += 8u;
    } else {
        bf_guest_write_u32(cursor + 4u, 1u);
        const uint32_t face = bf_guest_read_u32(0x0037dfe0u);
        bf_guest_write_u32(cursor + 8u, 0x4039cu);
        bf_guest_write_u32(cursor + 0x0cu, 0x404u + uint32_t(face != value));
        cursor += 0x10u;
    }
    bf_guest_write_u32(device, cursor);
    bf_guest_write_u32(0x0037dfe4u, value);
    return cursor;
}
