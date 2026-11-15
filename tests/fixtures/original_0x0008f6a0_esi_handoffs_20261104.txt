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
