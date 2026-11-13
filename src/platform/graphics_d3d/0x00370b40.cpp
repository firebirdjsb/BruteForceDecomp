/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: F7031B90D85ED4BC929FF757E3D19FBC74EDDD279832D7169E8F1FB0003FAA9D
 * Entry: 0x00370b40, Ghidra index: 13369, label: D3DDevice_SetTextureState_TexCoordIndex_4
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Stage is ESI and value is the stack DWORD. Returns final dirty word in EAX.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetTextureState_TexCoordIndex_4(uint32_t guest_esi, uint32_t value)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    bf_guest_write_u32(0x0037bba0u + (guest_esi << 7), value);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
    }

    const uint32_t high_word = value & 0xffff0000u;
    uint32_t mode = 0u;
    if (high_word != 0u) {
        bf_guest_write_u32(cursor, 0x41964u + guest_esi * 4u);
        bf_guest_write_u32(cursor + 4u, 0xff000000u);
        cursor += 8u;
        switch (high_word) {
        case 0x10000u:
            mode = 0x8511u;
            break;
        case 0x30000u:
            mode = 0x8512u;
            break;
        default:
            mode = high_word < 0x30000u ? 0x2400u : 0x2401u;
            break;
        }
    }

    // The zero-high-word path uses CL from the saved input, not from ESI.
    const uint32_t low_byte_source = high_word == 0u ? value : guest_esi;
    bf_guest_write_u8(0x003b7e09u + guest_esi, static_cast<uint8_t>(low_byte_source + 9u));
    bf_guest_write_u32(cursor, (guest_esi + 0xc03cu) << 4);
    bf_guest_write_u32(cursor + 4u, mode);
    bf_guest_write_u32(cursor + 8u, mode);
    bf_guest_write_u32(cursor + 12u, mode);
    bf_guest_write_u32(device, cursor + 16u);

    const uint32_t mask = bf_guest_read_u32(device + 0x514u);
    const bool set_bit = high_word == 0x10000u || high_word == 0x30000u;
    if (mask == 0u && set_bit) {
        const uint32_t dirty = bf_guest_read_u32(0x0037dd90u);
        bf_guest_write_u32(0x0037dd90u, dirty | 0x200u);
    }

    // x86 SHL r32,CL uses only the bottom five bits of CL.
    const uint32_t bit = 1u << (guest_esi & 31u);
    const uint32_t dirty = bf_guest_read_u32(0x0037dd90u);
    bf_guest_write_u32(device + 0x514u, (mask & ~bit) | (set_bit ? bit : 0u));
    const uint32_t eax = dirty | 0x47fu;
    bf_guest_write_u32(0x0037dd90u, eax);
    return eax;
}
