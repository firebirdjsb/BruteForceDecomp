/* Brute Force retail Xbox original x86 entry: FUN_001736a0, 0x001736A0.
 * Input x86 body SHA-256: DD9E08C3484F856CCED33FC3C5F5512CE2C69949645BCA707669312BF262B4C8
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (EAX initial guest address), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Original 0xC..0x17 byte-write order is non-monotonic; preserve exactly.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_001736a0(std::uint32_t guest_eax)
{
    const std::uint32_t base = guest_eax;
    bf_guest_write_u32(base, UINT32_C(0x0039a3d0));
    bf_guest_write_u32(base + UINT32_C(8), UINT32_C(3));
    for (std::uint32_t offset = UINT32_C(0x0e); offset <= UINT32_C(0x15); ++offset)
        bf_guest_write_u8(base + offset, UINT8_C(0));
    bf_guest_write_u8(base + UINT32_C(0x0c), UINT8_C(0));
    bf_guest_write_u8(base + UINT32_C(0x0d), UINT8_C(0));
    bf_guest_write_u8(base + UINT32_C(0x16), UINT8_C(0));
    bf_guest_write_u8(base + UINT32_C(0x17), UINT8_C(0));
    return base;
}
