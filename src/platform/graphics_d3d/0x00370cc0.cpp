/* Brute Force original Xbox - explicit guest register command model.
 * Input x86 body SHA-256: 34DA05D2FB4B863A75DF09EB303EFC52C662BD79B418F7995330AE8CA402E19C
 * Entry: 0x00370cc0, Ghidra index: 13371, label: D3DDevice_SetTextureState_BorderColor_0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Inputs model the captured EAX stage and EBX value; return models EAX at RET.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetTextureState_BorderColor_0(uint32_t guest_eax,
                                                          uint32_t guest_ebx)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    const uint32_t limit = bf_guest_read_u32(device + 4u);
    if (cursor >= limit) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
    }

    const uint32_t command = (guest_eax << 6) + 0x00041b24u;
    bf_guest_write_u32(cursor, command);
    bf_guest_write_u32(cursor + 4u, guest_ebx);
    cursor += 8u;
    bf_guest_write_u32(device, cursor);

    const uint32_t state = 0x0037bba4u + (guest_eax << 7);
    bf_guest_write_u32(state, guest_ebx);
    return cursor;
}
