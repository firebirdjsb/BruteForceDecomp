/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: D9A680F04E46FD6BB3EF34AB662A62D837911E9818B1BCE94BEF474CF7E8C73A
 * Entry: 0x001b7660, Ghidra index: 5699, label: FUN_001b7660
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001b7660(uint32_t owner, uint32_t output_slot, uint32_t destination,
                      uint32_t source, bool guest_df)
{
    // Four incoming stack DWORDs. Each REP MOVSD visits 8 DWORDs.
    return bf_guest_shift_records_forward(owner, output_slot, destination, source, 8u, guest_df);
}
