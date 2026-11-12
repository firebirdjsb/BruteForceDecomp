/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: BB55665E8A8E000CDAE9DF21A1EEA55F6A1EB3E604E7CE697FBEBB0288DB35ED
 * Entry: 0x001b99c0, Ghidra index: 5715, label: FUN_001b99c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001b99c0(uint32_t owner, uint32_t output_slot, uint32_t destination,
                      uint32_t source, bool guest_df)
{
    // Four incoming stack DWORDs. Each REP MOVSD visits 13 DWORDs.
    return bf_guest_shift_records_forward(owner, output_slot, destination, source, 13u, guest_df);
}
