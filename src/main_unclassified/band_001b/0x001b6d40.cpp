/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: D73BBFDB1C3D11ADDCB01FE4A2395700AC07FD95CBA2EFF71CC329AF4164E9DF
 * Entry: 0x001b6d40, Ghidra index: 5694, label: FUN_001b6d40
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001b6d40(uint32_t owner, uint32_t output_slot, uint32_t destination,
                      uint32_t source, bool guest_df)
{
    // Four incoming stack DWORDs. Each REP MOVSD visits 10 DWORDs.
    return bf_guest_shift_records_forward(owner, output_slot, destination, source, 10u, guest_df);
}
