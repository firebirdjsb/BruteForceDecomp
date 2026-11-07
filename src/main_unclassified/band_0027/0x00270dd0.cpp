/* Brute Force retail Xbox original x86 entry: FUN_00270dd0, 0x00270DD0.
 * Input x86 body SHA-256: C6256B14628E62147483E2E7A8718F2169479FCFDEBEA7168C8F7F3E569DD3DB
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (EAX), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Original loop uses guest byte +0x2d, link at +0, and returns predecessor EAX.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00270dd0(std::uint32_t guest_eax)
{
    std::uint32_t current = bf_guest_read_u32(guest_eax);
    while (bf_guest_read_u8(current + UINT32_C(0x2d)) == 0) {
        guest_eax = current;
        current = bf_guest_read_u32(guest_eax);
    }
    return guest_eax;
}
