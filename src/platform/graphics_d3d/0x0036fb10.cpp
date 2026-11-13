/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: C3DDBF9795B85A15EE3FD9295CB1975B8B4E22A68D02A6E0614D2C42C5B020D5
 * Entry: 0x0036fb10, Ghidra index: 13332, label: FUN_0036fb10
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Output address is the stack DWORD. Models forward REP STOS with DF clear.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t FUN_0036fb10(uint32_t output_address)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    const uint32_t record = bf_guest_read_u32(device + 0x34cu);
    const uint32_t cursor = bf_guest_read_u32(device);
    const uint32_t used = cursor - bf_guest_read_u32(record + 4u);
    const uint32_t spare = 0x420u - used;
    // CDQ/AND/ADD/SAR computes signed truncation toward zero, with x86 wrap.
    const uint32_t biased = spare + ((spare & 0x80000000u) != 0u ? 7u : 0u);
    if ((biased & 0x80000000u) != 0u || biased < 8u) {
        bf_guest_write_u32(output_address, used);
        return biased;
    }

    const uint32_t flags = bf_guest_read_u32(device + 8u);
    if ((flags & 0x80u) != 0u) {
        bf_guest_write_u32(output_address, used);
        return flags;
    }
    bf_guest_write_u32(device + 8u, flags | 0x80u);
    const uint32_t count = biased >> 3;
    uint32_t write_cursor = bf_guest_read_u32(device);
    const uint32_t limit = bf_guest_read_u32(device + 4u) + 0x200u;
    if (write_cursor + count * 4u + 4u >= limit) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        const uint32_t minimum = count * 4u + 0x208u;
        const uint32_t half = request >> 1;
        write_cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            bf_d3d_guest_signed_dword(half < minimum ? minimum : half),
            bf_d3d_guest_signed_dword(request < minimum ? minimum : request));
    }

    bf_guest_write_u32(write_cursor, 0x40000100u + (count << 18));
    for (uint32_t word = 0; word < count; ++word)
        bf_guest_write_u32(write_cursor + 4u + word * 4u, 0u);
    const uint32_t advanced = write_cursor + 4u + count * 4u;
    const uint32_t final_record = bf_guest_read_u32(device + 0x34cu);
    bf_guest_write_u32(device, advanced);
    const uint32_t result = advanced - bf_guest_read_u32(final_record + 4u);
    bf_guest_write_u32(output_address, result);
    return result;
}
