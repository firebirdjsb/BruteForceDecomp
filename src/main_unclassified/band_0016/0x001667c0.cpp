/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 631A542D6404D1CBA5A567C3CBCD72BF81E95944BA4ADEAF5EBC1300C43A0DC9
 * Entry: 0x001667c0, Ghidra index: 4719, label: FUN_001667c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001667c0(uint32_t guest_eax, uint32_t guest_ecx)
{
    // Fixed 27 records of 6 DWORDs. Entry EAX is preserved.
    for (uint32_t offset = 0; offset < 648u; offset += 24u)
        bf_guest_copy_record_dwords(guest_ecx + offset, guest_eax + offset, 6u, 4u);
    return guest_eax;
}
