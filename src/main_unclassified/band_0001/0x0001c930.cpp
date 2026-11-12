/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 3FD50A9E26AD11E6AFD1D70AA643691AD1F4DBCC96221A84ADC4977C64D12F84
 * Entry: 0x0001c930, Ghidra index: 114, label: FUN_0001c930
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_0001c930(uint32_t owner, uint32_t output_slot, uint32_t destination,
                      uint32_t source, bool guest_df)
{
    // Four incoming stack DWORDs. Each REP MOVSD visits 16 DWORDs.
    return bf_guest_shift_records_forward(owner, output_slot, destination, source, 16u, guest_df);
}
