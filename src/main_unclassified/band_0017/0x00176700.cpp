/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 797431D434EEEAECF2C99A3E9D88E6F7D2DFAFAAE01C4BEEEE8A9D5BEC881FA7
 * Entry: 0x00176700, Ghidra index: 4938, label: FUN_00176700
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00176700(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination)
{
    // EAX holds the output-slot address. Each record is four ordered DWORDs.
    return bf_guest_copy_records_forward(guest_eax, first, last, destination, 4u);
}
