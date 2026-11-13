/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: DDBD6BC8391CF4FDC35B2882BC7CB3345C4A5EB6C332B33757C809B94C602F50
 * Entry: 0x00023b80, Ghidra index: 241, label: FUN_00023b80
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00023b80(uint32_t guest_eax, uint32_t guest_ecx)
{
    // Follow the two guest links before the first store. Null links are
    // carried as zero in the corresponding x86 register.
    const uint32_t last = bf_guest_read_u32(guest_ecx + 0x74u);
    const uint32_t last_value = last == 0u ? 0u : bf_guest_read_u32(last);
    const uint32_t first = bf_guest_read_u32(guest_ecx + 0x68u);
    const uint32_t first_value = first == 0u ? 0u : bf_guest_read_u32(first);
    bf_guest_write_u32(guest_eax + 4u, 0u);
    bf_guest_write_u32(guest_eax + 8u, 0u);
    bf_guest_write_u32(guest_eax + 0x0cu, 0u);
    bf_guest_write_u32(guest_eax + 4u, first);
    bf_guest_write_u32(guest_eax + 0x0cu, last);
    bf_guest_write_u32(guest_eax, first_value);
    bf_guest_write_u32(guest_eax + 8u, last_value);
    return guest_eax;
}
