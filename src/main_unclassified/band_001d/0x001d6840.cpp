/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: C3B9515121E45B180301364EFEEDCC366A064C6F71FF9AA4614A326BC9447D25
 * Entry: 0x001d6840, Ghidra index: 6366, label: FUN_001d6840
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d6840(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Explicit MOV instructions visit 3 ascending DWORD offsets in each record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 3u, false);
}
