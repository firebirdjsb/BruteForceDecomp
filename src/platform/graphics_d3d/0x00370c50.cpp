/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: B166EB9066C8FF377E84318040CAC7FD8E365838EB407C5B3359A60333489FB9
 * Entry: 0x00370c50, Ghidra index: 13370, label: D3DDevice_SetTextureState_BumpEnv_8
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Stage is EAX. Two guest stack DWORDs carry state and payload. RET 8 EAX is state.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetTextureState_BumpEnv_8(uint32_t guest_eax,
                                                     uint32_t state, uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    const uint32_t stage = guest_eax + uint32_t(bf_guest_read_u32(device + 0x36cu) == 0u);
    if ((stage & 3u) != 0u) {
        uint32_t cursor = bf_guest_read_u32(device);
        if (cursor >= bf_guest_read_u32(device + 4u)) {
            const uint32_t request = bf_guest_read_u32(0x0037ec88u);
            cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
                static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
        }
        const uint32_t command = 0x41ad0u + ((stage << 4) + state) * 4u;
        bf_guest_write_u32(cursor, command);
        bf_guest_write_u32(cursor + 4u, value);
        bf_guest_write_u32(device, cursor + 8u);
    }

    const uint32_t deferred = 0x0037bb30u + ((guest_eax << 5) + state) * 4u;
    bf_guest_write_u32(deferred, value);
    return state;
}
