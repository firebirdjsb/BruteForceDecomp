/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: C9DAABEAC7230B27A46D57D9CC0A70FE1B673F3BABCC0BDED8889D247C734824
 * Entry: 0x001cab20, Ghidra index: 5852, label: FUN_001cab20
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001cab20(uint32_t guest_eax, uint32_t guest_ecx)
{
    // MOV CL preserves the three adjacent destination bytes before the
    // original copies the two DWORDs at +4/+8 and six pairs at +0xc..+0x38.
    bf_guest_write_u8(guest_eax, bf_guest_read_u8(guest_ecx));
    bf_guest_copy_record_dwords(guest_ecx + 4u, guest_eax + 4u, 2u, 4u);
    for (uint32_t offset = 12u; offset < 60u; offset += 8u)
        bf_guest_copy_record_dwords(guest_ecx + offset, guest_eax + offset, 2u, 4u);
    return guest_eax;
}
