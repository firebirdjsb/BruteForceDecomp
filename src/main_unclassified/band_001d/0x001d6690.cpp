/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: C97E21991E98CF4F28774BE43164863959569F0C512B21960024748E5D226E11
 * Entry: 0x001d6690, Ghidra index: 6360, label: FUN_001d6690
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d6690(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end, bool guest_df)
{
    // EAX is the output-slot address. REP MOVSD moves 7 DWORDs per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 7u, guest_df);
}
