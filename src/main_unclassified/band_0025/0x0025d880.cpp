/* Brute Force retail Xbox original x86 entry: FUN_0025d880, 0x0025D880.
 * Input x86 body SHA-256: E15B4AF8376AD8D6BD10BBE873C59BA03249057D053F61A63FE8168CB3A1D219
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (EAX), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Original loop uses guest byte +0x25, link at +0, and returns predecessor EAX.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_0025d880(std::uint32_t guest_eax)
{
    std::uint32_t current = bf_guest_read_u32(guest_eax);
    while (bf_guest_read_u8(current + UINT32_C(0x25)) == 0) {
        guest_eax = current;
        current = bf_guest_read_u32(guest_eax);
    }
    return guest_eax;
}
