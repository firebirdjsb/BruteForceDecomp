/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 7B8AA3A1A189C52ED2FE972A6D94FC461BBA8E92D65AAAE57B57558381606CE2
 * Entry: 0x001b7330, Ghidra index: 5697, label: FUN_001b7330
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001b7330(uint32_t owner, uint32_t output_slot, uint32_t destination,
                      uint32_t source, bool guest_df)
{
    // Four incoming stack DWORDs. Each REP MOVSD visits 7 DWORDs.
    return bf_guest_shift_records_forward(owner, output_slot, destination, source, 7u, guest_df);
}
