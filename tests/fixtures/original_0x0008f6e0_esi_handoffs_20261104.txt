/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C83564B5BD0C213EA1598C92023CBE67820B89831FC3F077EBE732522791C80E
 * Entry: 0x0008f6e0, Ghidra index: 1756, label: FUN_0008f6e0
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Host parameter models original incoming EDX, NOT native Xbox ABI.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_0008f6e0(std::uint32_t guest_edx)
{
    // XBE 0008F6E0..0008F71C: unlink guest record from a hashed list.
    const std::uint32_t value = bf_guest_read_u32(guest_edx + UINT32_C(4));
    if ((value & UINT32_C(1)) != 0) {
        return;
    }
    const std::uint32_t index =
        (value * UINT32_C(0x19660d) + UINT32_C(0x3c6ef35f)) >> 21;
    std::uint32_t link_va = UINT32_C(0x00414da0) + index * UINT32_C(4);
    bf_guest_write_u32(guest_edx + UINT32_C(4), UINT32_C(0));
    if (bf_guest_read_u32(link_va) == 0) {
        return;
    }
    for (;;) {
        const std::uint32_t next = bf_guest_read_u32(link_va);
        if (next == guest_edx) {
            // Original MOV ECX,[EAX]; MOV EDX,[ECX]; MOV [EAX],EDX.
            bf_guest_write_u32(link_va, bf_guest_read_u32(next));
            return;
        }
        link_va = next;
        if (bf_guest_read_u32(link_va) == 0) {
            return;
        }
    }
}
