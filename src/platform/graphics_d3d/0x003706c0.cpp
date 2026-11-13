/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 103D3D3EEFA7BDFB6391D6672D7B8C559CBA91B74AB2770C7ECAF1EBD663D02F
 * Entry: 0x003706c0, Ghidra index: 13351, label: D3DDevice_SetRenderState_OcclusionCullEnable
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Explicit guest DWORDs and EAX output. Native ABI_UNVERIFIED.
 */
#include "bf_ghidra_types.h"
#include "bf_d3d_guest_command_cursor.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_OcclusionCullEnable(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    bf_guest_write_u32(0x0037e01cu, value);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(static_cast<int>(request >> 1),
                                                    bf_d3d_guest_signed_dword(request));
    }

    uint32_t state = bf_guest_read_u32(0x0037e020u) != 0u ? 2u : 0u;
    if (bf_guest_read_u32(0x0037e01cu) != 0u &&
        (bf_guest_read_u32(0x0037dfd8u) == 0u || bf_guest_read_u32(0x0037dfdcu) == 0x1e00u))
        state |= 1u;
    bf_guest_write_u32(cursor, 0x41d84u);
    bf_guest_write_u32(cursor + 4u, state);
    cursor += 8u;
    bf_guest_write_u32(device, cursor);
    return cursor;
}
