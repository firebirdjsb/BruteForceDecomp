/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 17CF07353871ADEAFB5D21954C4B62CDBE961465A6E460C2057DD16C7E3DF0DA
 * Entry: 0x001dd070, Ghidra index: 6610, label: FUN_001dd070
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001dd070(uint32_t guest_eax, uint32_t guest_ecx)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    if (guest_eax != 0u) {
        bf_guest_write_u32(guest_eax, bf_guest_read_u32(guest_ecx));
        bf_guest_write_u32(guest_eax + 0x4u, bf_guest_read_u32(guest_ecx + 0x4u));
        bf_guest_write_u8(guest_eax + 0x8u, bf_guest_read_u8(guest_ecx + 0x8u));
        bf_guest_write_u32(guest_eax + 0x9u, bf_guest_read_u32(guest_ecx + 0x9u));
        bf_guest_write_u8(guest_eax + 0xdu, bf_guest_read_u8(guest_ecx + 0xdu));
        bf_guest_write_u32(guest_eax + 0x10u, bf_guest_read_u32(guest_ecx + 0x10u));
        bf_guest_write_u32(guest_eax + 0x14u, bf_guest_read_u32(guest_ecx + 0x14u));
        bf_guest_write_u32(guest_eax + 0x18u, bf_guest_read_u32(guest_ecx + 0x18u));
    }
    return guest_eax;
}
