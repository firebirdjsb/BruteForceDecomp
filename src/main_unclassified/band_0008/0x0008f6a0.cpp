/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 339DC70ADE9DA431A03D8964268E2B983BF89DF209448A87B645006C63D4420D
 * Entry: 0x0008f6a0, Ghidra index: 1755, label: FUN_0008f6a0
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Host parameters model original guest ESI and stack[0]. They are
 * NOT an original Xbox C++ ABI and do NOT establish a recovered class layout.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0)
{
    // XBE 0008F6A0..0008F6DF: [ESI+4] is a 32-bit guest word.
    if (bf_guest_read_u32(guest_esi + UINT32_C(4)) != 0) {
        // XBE MOV EDX,ESI / CALL 0008F6E0. EDX is an implicit guest input.
        FUN_0008f6e0(guest_esi);
    }
    bf_guest_write_u32(guest_esi + UINT32_C(4), guest_word_0);

    if (guest_word_0 == 0 || (guest_word_0 & UINT32_C(1)) != 0) {
        return;
    }
    // x86 IMUL/ADD followed by SHR 0x15: modulo-2^32 arithmetic.
    const std::uint32_t index =
        (guest_word_0 * UINT32_C(0x19660d) + UINT32_C(0x3c6ef35f)) >> 21;
    const std::uint32_t bucket_va = UINT32_C(0x00414da0) + (index * UINT32_C(4));
    bf_guest_write_u32(guest_esi, bf_guest_read_u32(bucket_va));
    bf_guest_write_u32(bucket_va, guest_esi);
}

#include "bf_guest32_linked_records.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0008f6a0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x0008f6a0u, guest.esi + 4u);
    logic_flags(guest, guest.eax);
    push(guest, 0x0008f6a5u, guest.ebx);
    guest.ebx = read32(guest, 0x0008f6a6u, guest.esp + 8u);
    if (guest.eax != 0u) {
        guest.edx = guest.esi;
        push(guest, 0x0008f6aeu, 0x0008f6b3u);
        FUN_0008f6e0(guest);
        if (guest.eip != 0x0008f6b3u)
            return;
    }

    logic_flags(guest, guest.ebx);
    write32(guest, 0x0008f6b5u, guest.esi + 4u, guest.ebx);
    if (guest.ebx != 0u) {
        logic_flags(guest, guest.ebx & 1u, 0x80u);
        if ((guest.ebx & 1u) == 0u) {
            const auto hash = bf_guest32_leaf_add(guest, guest.ebx * 0x19660du, 0x3c6ef35fu);
            guest.ebx = hash >> 21u;
            constexpr auto shift_flags = carry | parity | zero | sign;
            guest.eflags = (guest.eflags & ~shift_flags) | szp(guest.ebx, 0x80000000u) |
                           ((hash & 0x100000u) != 0u ? carry : 0u);
            guest.eflags_defined = (guest.eflags_defined | shift_flags) & ~(auxiliary | overflow);
            const auto bucket = 0x00414da0u + guest.ebx * 4u;
            guest.eax = read32(guest, 0x0008f6ceu, bucket);
            write32(guest, 0x0008f6d5u, guest.esi, guest.eax);
            write32(guest, 0x0008f6d7u, bucket, guest.esi);
        }
    }
    guest.ebx = pop(guest, 0x0008f6deu);
    ret(guest, 0x0008f6dfu);
}
