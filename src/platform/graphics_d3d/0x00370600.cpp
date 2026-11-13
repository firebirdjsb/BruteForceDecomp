/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 1CC73261414035383C4E2020B65DD5E643922DC390434039BFC7F6B7BBB3BA77
 * Entry: 0x00370600, Ghidra index: 13349, label: D3DDevice_SetRenderState_Dxt1NoiseEnable
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * One guest stack DWORD. Returns the retained flags or advanced cursor in EAX.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetRenderState_Dxt1NoiseEnable(uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    const uint32_t surface = bf_guest_read_u32(device + 0x15b4u);
    const uint8_t format = bf_guest_read_u8(surface + 0x0du);
    const uint8_t format_bits = bf_guest_read_u8(0x0037b790u + format) & 0x3cu;
    const uint32_t selected = format_bits == 0x20u ? value : 0u;
    uint32_t eax = bf_guest_read_u32(device + 8u);

    if (selected != (eax & 1u)) {
        const uint32_t limit = bf_guest_read_u32(device + 4u);
        bf_guest_write_u32(device + 8u, eax ^ 1u);
        eax = bf_guest_read_u32(device);
        if (eax >= limit) {
            const uint32_t request = bf_guest_read_u32(0x0037ec88u);
            eax = D3D8LTCG__D3D_MakeRequestedSpace_8(
                static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
        }
        bf_guest_write_u32(eax, 0x40110u);
        bf_guest_write_u32(eax + 4u, 0u);
        bf_guest_write_u32(eax + 8u, 0x40100u);
        bf_guest_write_u32(eax + 12u, (selected << 5) | 8u);
        eax += 16u;
        bf_guest_write_u32(device, eax);
    }

    bf_guest_write_u32(0x0037e014u, value);
    return eax;
}
