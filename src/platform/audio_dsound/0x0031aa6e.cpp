/* Brute Force original Xbox - ordered guest DWORD memory operations.
 * Input x86 body SHA-256: D5A21810BF144AC242E095C71B4622FA5B696A16FE81DA5BFD9C34E1BE4542B2
 * Entry: 0x0031aa6e, Ghidra index: 12270, label: FUN_0031aa6e
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_0031aa6e(uint32_t guest_ecx)
{
    // The two LEAs at 0x0031AA70 and 0x0031AA78 form 32-bit guest self-links.
    const uint32_t first_link = guest_ecx + 4u;
    const uint32_t second_link = guest_ecx + 0x0cu;
    bf_guest_write_u32(guest_ecx + 8u, first_link);
    bf_guest_write_u32(first_link, first_link);
    bf_guest_write_u32(guest_ecx, 0x00386ad4u);
    bf_guest_write_u32(guest_ecx + 0x1cu, 0x0032f7d4u);
    bf_guest_write_u32(guest_ecx + 0x10u, second_link);
    bf_guest_write_u32(second_link, second_link);
    return guest_ecx; // MOV EAX,ECX at entry supplies the original return word.
}
