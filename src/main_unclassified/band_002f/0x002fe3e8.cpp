/* Brute Force original Xbox - ordered guest DWORD memory operations.
 * Input x86 body SHA-256: 8D99C40E3F1F79A0D08113896C85903187C82074D0D82BA9CC0EF4CE2E196A9B
 * Entry: 0x002fe3e8, Ghidra index: 11020, label: ?_CreateFrameInfo@@YAPAUFrameInfo@@PAU1@PAX@Z
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_initializers.h"

uint32_t __CreateFrameInfo__YAPAUFrameInfo__PAU1_PAX_Z(uint32_t guest_record, uint32_t word)
{
    // 0x002FE3F0 stores the second stack DWORD before reading the guest head.
    // This ordering matters when the destination aliases 0x00414B48.
    constexpr uint32_t head_va = 0x00414b48u;
    bf_guest_write_u32(guest_record, word);
    const uint32_t old_head = bf_guest_read_u32(head_va);
    bf_guest_write_u32(guest_record + 4u, old_head);
    bf_guest_write_u32(head_va, guest_record);
    return guest_record; // EAX still holds the first stack DWORD at RET.
}
