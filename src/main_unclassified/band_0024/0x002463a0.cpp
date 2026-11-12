/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: E04927CD5883B795B0D495555A87EC4E43ECDB2B4DEEA2F40AFD874FF0C7CD1F
 * Entry: 0x002463a0, Ghidra index: 8090, label: FUN_002463a0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_002463a0(uint32_t owner, uint32_t output_slot, uint32_t destination,
                      uint32_t source, bool guest_df)
{
    // Four incoming stack DWORDs. Each REP MOVSD visits 6 DWORDs.
    return bf_guest_shift_records_forward(owner, output_slot, destination, source, 6u, guest_df);
}
