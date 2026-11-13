/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 8F5E31D43BFA9F871371299FD043C0657EAFA7CB3D3FEAC268A401E998A90BC2
 * Entry: 0x0036dcc0, Ghidra index: 13297, label: FUN_0036dcc0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Device is ESI. Returns the advanced cursor in EAX.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t FUN_0036dcc0(uint32_t guest_esi)
{
    const uint32_t device = guest_esi;
    const uint32_t slots = device + 0x15bcu;
    uint32_t index = bf_guest_read_u32(slots);
    uint32_t current = bf_guest_read_u32(slots + index * 4u);
    const uint32_t saved_second = bf_guest_read_u32(current + 8u);
    const uint32_t saved_first = bf_guest_read_u32(current + 4u);
    --index;
    do {
        const uint32_t previous = bf_guest_read_u32(slots + index * 4u);
        const uint32_t first = bf_guest_read_u32(previous + 4u);
        bf_guest_write_u32(current + 4u, first);
        const uint32_t second = bf_guest_read_u32(previous + 8u);
        bf_guest_write_u32(current + 8u, second);
        current = previous;
        --index;
    } while (index != 0u);
    bf_guest_write_u32(current + 4u, saved_first);
    bf_guest_write_u32(current + 8u, saved_second);

    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
    }
    const uint32_t slot2 = bf_guest_read_u32(slots + 8u);
    uint32_t packed = bf_guest_read_u32(slot2 + 4u);
    bf_guest_write_u32(cursor, 0x40110u);
    bf_guest_write_u32(cursor + 4u, 0u);
    uint32_t flags = bf_guest_read_u32(0x0037df94u);
    if (flags == 0u)
        flags = 1u;
    packed |= flags & 3u;
    if ((flags & 4u) != 0u)
        packed |= 3u;
    if ((flags & 0x80000000u) != 0u)
        packed |= 8u;
    bf_guest_write_u32(cursor + 8u, 0x40100u);
    bf_guest_write_u32(cursor + 12u, (packed << 5) | 1u);
    bf_guest_write_u32(cursor + 16u, 0x4012cu);
    bf_guest_write_u32(cursor + 20u, 0u);
    bf_guest_write_u32(cursor + 24u, 0x40100u);
    bf_guest_write_u32(cursor + 28u, 0u);
    cursor += 32u;

    const uint32_t active = bf_guest_read_u32(device + 0x15b4u);
    const uint32_t slot1 = bf_guest_read_u32(slots + 4u);
    if (active == slot1 || bf_guest_read_u32(0x0037df94u) == 0x80000000u) {
        bf_guest_write_u32(cursor, 0x40130u);
        bf_guest_write_u32(cursor + 4u, 0u);
        cursor += 8u;
    } else {
        const uint32_t device_flags = bf_guest_read_u32(device + 8u);
        bf_guest_write_u32(device + 8u, device_flags | 0x100u);
    }

    const uint32_t final_slot1 = bf_guest_read_u32(slots + 4u);
    const uint32_t final_first = bf_guest_read_u32(final_slot1 + 4u);
    bf_guest_write_u32(cursor, 0x40210u);
    bf_guest_write_u32(cursor + 4u, final_first);
    cursor += 8u;
    bf_guest_write_u32(device, cursor);
    return cursor;
}
