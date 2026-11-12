/* Brute Force retail Xbox original x86 entry: FUN_002f108b, 0x002F108B.
 * Input x86 body SHA-256: 5A528C5CD9161A40EE3ADCF2610D926C9C800753337218F0661092D1D2929180
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (2 original stack words; incoming EAX overwritten by source), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Original copies three DWORDs in 3 read/write pairs, preserves overlap order.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_002f108b(std::uint32_t guest_dst,
                                std::uint32_t guest_src)
{
    std::uint32_t src = guest_src;
    std::uint32_t dst = guest_dst;
    for (unsigned i = 0; i < 3; ++i) {
        const std::uint32_t word = bf_guest_read_u32(src);
        bf_guest_write_u32(dst, word);
        src += UINT32_C(4);
        dst += UINT32_C(4);
    }
    return src;
}
