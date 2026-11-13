/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: BAB7F79E826F66A1BA7DC8093B0AAAC4F7B100B904063860DEC38B17F9FB3E34
 * Entry: 0x00370200, Ghidra index: 13340, label: D3DDevice_SetRenderState_FogColor
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Explicit guest DWORDs and EAX output. Native ABI_UNVERIFIED.
 */
#include "bf_ghidra_types.h"
#include "bf_d3d_guest_command_cursor.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_FogColor(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(static_cast<int>(request >> 1),
                                                    bf_d3d_guest_signed_dword(request));
    }

    const uint32_t swizzled = ((value >> 16) & 0xffu) |
                              ((value & 0xffu) << 16) | (value & 0xff00ff00u);
    bf_guest_write_u32(cursor, 0x402a8u);
    bf_guest_write_u32(cursor + 4u, swizzled);
    cursor += 8u;
    bf_guest_write_u32(device, cursor);
    bf_guest_write_u32(0x0037dfc0u, value);
    return cursor;
}
