/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 66591BD5DE4B892765E11C40C5DB32EF4F03A28ADA9BA8BE6655AA2525C480DF
 * Entry: 0x001cab70, Ghidra index: 5853, label: FUN_001cab70
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001cab70(uint32_t guest_eax, uint32_t guest_ecx)
{
    // Fixed 8 records of 4 DWORDs. Entry EAX is preserved.
    for (uint32_t offset = 0; offset < 128u; offset += 16u)
        bf_guest_copy_record_dwords(guest_ecx + offset, guest_eax + offset, 4u, 4u);
    return guest_eax;
}
