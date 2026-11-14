/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C83564B5BD0C213EA1598C92023CBE67820B89831FC3F077EBE732522791C80E
 * Entry: 0x0008f6e0, Ghidra index: 1756, label: FUN_0008f6e0
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Host parameter models original incoming EDX, NOT native Xbox ABI.
 */
#include "bf_xbe_guest32_record_model.h"
#include "bf_guest32_linked_records.h"
#include "bf_xbe_guest32_record_leaves.h"

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

void FUN_0008f6e0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x0008f6e0u, guest.edx + 4u);
    logic_flags(guest, guest.eax & 1u, 0x80u);
    if ((guest.eax & 1u) == 0u) {
        // IMUL flags are replaced by ADD. SHR EAX,21 is visible at the store.
        guest.eax = bf_guest32_leaf_add(guest, guest.eax * 0x19660du, 0x3c6ef35fu);
        const auto hash = guest.eax;
        guest.eax >>= 21u;
        constexpr std::uint32_t shift_flags = carry | parity | zero | sign;
        guest.eflags = (guest.eflags & ~shift_flags) | szp(guest.eax, 0x80000000u) |
                       ((hash & 0x100000u) != 0u ? carry : 0u);
        guest.eflags_defined = (guest.eflags_defined | shift_flags) & ~(auxiliary | overflow);
        guest.eax = 0x00414da0u + guest.eax * 4u;
        write32(guest, 0x0008f6fcu, guest.edx + 4u, 0u);
        auto link = read32(guest, 0x0008f703u, guest.eax);
        compare_zero(guest, link);
        while (link != 0u) {
            guest.ecx = read32(guest, 0x0008f708u, guest.eax);
            bf_guest32_leaf_sub(guest, guest.ecx, guest.edx);
            if (guest.ecx == guest.edx) {
                guest.ecx = read32(guest, 0x0008f716u, guest.eax);
                guest.edx = read32(guest, 0x0008f718u, guest.ecx);
                write32(guest, 0x0008f71au, guest.eax, guest.edx);
                break;
            }
            guest.eax = guest.ecx;
            link = read32(guest, 0x0008f710u, guest.eax);
            compare_zero(guest, link);
            if (link == 0u) {
                ret(guest, 0x0008f715u);
                return;
            }
        }
    }
    ret(guest, 0x0008f71cu);
}
