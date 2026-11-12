/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: CCF297E74B170638A2CA9067E077DBF3848FA2248377B091A6DE86B9D05B39F1
 * Entry: 0x001d6d60, Ghidra index: 6378, label: FUN_001d6d60
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d6d60(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end, bool guest_df)
{
    // EAX is the output-slot address. REP MOVSD moves 13 DWORDs per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 13u, guest_df);
}
