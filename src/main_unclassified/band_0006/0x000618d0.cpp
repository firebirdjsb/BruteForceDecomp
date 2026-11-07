/* Brute Force retail Xbox original x86 entry: FUN_000618d0, 0x000618D0.
 * Input x86 body SHA-256: BAA5DACA98E69D531ECCDB4CA4C7DDCB5C15A3BC92E78CE82276BC361C398B79
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (EAX result address and 3 original stack words), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Original copies [source],write [dest],read [source+4],write [dest+4].
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_000618d0(std::uint32_t guest_out,
                                std::uint32_t guest_begin,
                                std::uint32_t guest_end,
                                std::uint32_t guest_dst)
{
    std::uint32_t src = guest_begin;
    std::uint32_t dst = guest_dst;
    while (src != guest_end) {
        const std::uint32_t word0 = bf_guest_read_u32(src);
        bf_guest_write_u32(dst, word0);
        const std::uint32_t word1 = bf_guest_read_u32(src + UINT32_C(4));
        bf_guest_write_u32(dst + UINT32_C(4), word1);
        src += UINT32_C(8);
        dst += UINT32_C(8);
    }
    bf_guest_write_u32(guest_out, dst);
    return guest_out;
}
