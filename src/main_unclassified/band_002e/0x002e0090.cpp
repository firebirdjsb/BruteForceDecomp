/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 87806BDF16C676D2C60F10A2C05CCAD1E9DDB78B0560AC4F468DD4056A071ACE
 * Entry: 0x002e0090, Ghidra index: 10346, label: FUN_002e0090
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_002e0090(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination)
{
    // EAX holds the output-slot address. Each record is four ordered DWORDs.
    return bf_guest_copy_records_forward(guest_eax, first, last, destination, 4u);
}
