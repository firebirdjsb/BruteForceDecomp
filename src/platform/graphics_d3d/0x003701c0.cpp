/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 77F1D7D75B0F12227B431FD7EECB875B3B4A8BFE65D59AEFD5EB5725C57DFC84
 * Entry: 0x003701c0, Ghidra index: 13339, label: D3DDevice_SetRenderState_ShadowFunc
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Explicit guest DWORDs and EAX output. Native ABI_UNVERIFIED.
 */
#include "bf_ghidra_types.h"
#include "bf_d3d_guest_command_cursor.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_ShadowFunc(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(static_cast<int>(request >> 1),
                                                    bf_d3d_guest_signed_dword(request));
    }

    bf_guest_write_u32(cursor, 0x41e6cu);
    bf_guest_write_u32(cursor + 4u, value - 0x200u);
    cursor += 8u;
    bf_guest_write_u32(device, cursor);
    bf_guest_write_u32(0x0037e008u, value);
    return cursor;
}
