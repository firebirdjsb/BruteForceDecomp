/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 7B2F74219F528C4046AF2E21A787296E56CBAA0368D23C6FDB085B97966B51F2
 * Entry: 0x002634d0, Ghidra index: 8679, label: FUN_002634d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_002634d0(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end, bool guest_df)
{
    // EAX is the output-slot address. REP MOVSD moves 5 DWORDs per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 5u, guest_df);
}
