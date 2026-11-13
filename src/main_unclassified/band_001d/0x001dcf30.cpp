/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 8E3BFD99E60690E672D44AF20EB6751D61A568794D04B8AE090F97DBCC5EBD9D
 * Entry: 0x001dcf30, Ghidra index: 6604, label: FUN_001dcf30
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

// A guest WORD operation has distinct width from two byte accesses.
uint16_t bf_guest_read_u16(uint32_t guest_va);
void bf_guest_write_u16(uint32_t guest_va, uint16_t value);

uint32_t FUN_001dcf30(uint32_t guest_eax, uint32_t guest_ecx)
{
    if (guest_eax == 0u)
        return guest_eax;

    bf_guest_write_u32(guest_eax, bf_guest_read_u32(guest_ecx));
    bf_guest_write_u16(guest_eax + 4u, bf_guest_read_u16(guest_ecx + 4u));
    bf_guest_write_u8(guest_eax + 6u, bf_guest_read_u8(guest_ecx + 6u));
    // No store at +7. The following DWORD moves retain overlap order.
    bf_guest_copy_record_dwords(guest_ecx + 8u, guest_eax + 8u, 4u, 4u);
    return guest_eax;
}
