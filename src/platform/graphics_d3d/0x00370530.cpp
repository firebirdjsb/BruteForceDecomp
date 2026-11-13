/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 0C2A1AAF687BE48CB8A6DF0F45B5D8BF413E96B8D68092C35864DA718073D3C4
 * Entry: 0x00370530, Ghidra index: 13347, label: D3DDevice_SetRenderState_TextureFactor
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Explicit guest DWORDs and EAX output. Native ABI_UNVERIFIED.
 */
#include "bf_ghidra_types.h"
#include "bf_d3d_guest_command_cursor.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_TextureFactor(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    if (bf_guest_read_u32(device + 0x36cu) != 0u) {
        bf_guest_write_u32(0x0037dfe8u, value);
        return value;
    }
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(static_cast<int>(request >> 1),
                                                    bf_d3d_guest_signed_dword(request));
    }

    bf_guest_write_u32(cursor, 0x400a60u);
    cursor += 4u;
    for (unsigned i = 0; i < 16; ++i) {
        bf_guest_write_u32(cursor, value);
        cursor += 4u;
    }
    bf_guest_write_u32(device, cursor);
    bf_guest_write_u32(0x0037dfe8u, value);
    return cursor;
}
