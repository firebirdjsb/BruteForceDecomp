/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 3AE92D47B09394E10D8180815B90689B858BD22A1E63CC411D73B35D45D693E2
 * Entry: 0x001668b0, Ghidra index: 4721, label: FUN_001668b0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001668b0(uint32_t guest_eax, uint32_t guest_ecx)
{
    // Fixed 6 records of 5 DWORDs. Entry EAX is preserved.
    for (uint32_t offset = 0; offset < 120u; offset += 20u)
        bf_guest_copy_record_dwords(guest_ecx + offset, guest_eax + offset, 5u, 4u);
    return guest_eax;
}
