/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: FEBB01B929F5EF645654E7C2B55C19EAC704C001EB6C3FADA99A22DC08243942
 * Entry: 0x00370680, Ghidra index: 13350, label: D3DDevice_SetRenderState_YuvEnable
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * One guest stack DWORD. Passes device on the stack and cursor in EDX.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

extern uint32_t FUN_00371190(uint32_t guest_stack_device, uint32_t guest_edx);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_YuvEnable(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    bf_guest_write_u32(0x0037e018u, value);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
    }
    cursor = FUN_00371190(device, cursor);
    bf_guest_write_u32(device, cursor);
    return cursor;
}
