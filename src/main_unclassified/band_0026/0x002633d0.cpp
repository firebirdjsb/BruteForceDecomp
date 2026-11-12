/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 46FEDDECB333DFE93A51C8BD2DC8D01298979187927A6F4A4B1D1DE2BA2C1AE0
 * Entry: 0x002633d0, Ghidra index: 8674, label: FUN_002633d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_002633d0(uint32_t owner, uint32_t output_slot, uint32_t destination,
                      uint32_t source, bool guest_df)
{
    // Four incoming stack DWORDs. Each REP MOVSD visits 5 DWORDs.
    return bf_guest_shift_records_forward(owner, output_slot, destination, source, 5u, guest_df);
}
