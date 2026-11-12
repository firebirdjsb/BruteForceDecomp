/* Brute Force original Xbox - ordered guest DWORD memory operations.
 * Input x86 body SHA-256: 7A83B0C387114D8F1A7AB1E629BFDF90497E0B11E54EDDDA319A39949712D669
 * Entry: 0x00311b03, Ghidra index: 11914, label: FUN_00311b03
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_initializers.h"

uint32_t FUN_00311b03(uint32_t guest_ecx)
{
    // 0x00311B05 computes the guest address of the embedded record at +0x10.
    const uint32_t link = guest_ecx + 0x10u;
    bf_guest_write_u32(guest_ecx + 4u, 2u);
    bf_guest_write_u32(guest_ecx, 0x00386988u);
    bf_guest_write_u32(0x0032fe68u, guest_ecx);
    bf_guest_write_u32(guest_ecx + 0x14u, link);
    bf_guest_write_u32(link, link);
    return guest_ecx; // MOV EAX,ECX at entry supplies the original return word.
}
