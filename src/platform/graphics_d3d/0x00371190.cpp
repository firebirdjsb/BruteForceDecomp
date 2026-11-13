/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 833E08B044C713D46344500DBC0951B52D860FDDB510CE974DE6EEFECD74FA93
 * Entry: 0x00371190, Ghidra index: 13377, label: FUN_00371190
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Device is the stack DWORD. Cursor is EDX. Returns EAX at RET 4.
 */
#include "bf_d3d_guest_command_cursor.h"

uint32_t FUN_00371190(uint32_t guest_stack_device, uint32_t guest_edx)
{
    uint32_t value = bf_guest_read_u32(0x0037e018u) == 0u ? 0x100001u : 0x10100001u;
    if (bf_guest_read_u32(0x0037dfd4u) == 2u)
        value |= 0x10000u;

    const uint32_t surface = bf_guest_read_u32(guest_stack_device + 0x15b8u);
    if (surface != 0u) {
        const uint8_t format = bf_guest_read_u8(surface + 0x0du);
        if (format == 0x2du || format == 0x2bu || format == 0x31u || format == 0x2fu)
            value |= 0x1000u;
    }

    bf_guest_write_u32(guest_edx, 0x40290u);
    bf_guest_write_u32(guest_edx + 4u, value);
    return guest_edx + 8u;
}
