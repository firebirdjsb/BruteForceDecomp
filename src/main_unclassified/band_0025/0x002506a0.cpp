/* Brute Force retail Xbox original x86 entry: FUN_002506a0, 0x002506A0.
 * Input x86 body SHA-256: 1B615C5A819D609B490DA97A0AC27A23E456C4EF7F934A67F1CD8F370A733431
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (EAX), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Original loop uses guest byte +0x11, link at +0, and returns predecessor EAX.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_002506a0(std::uint32_t guest_eax)
{
    std::uint32_t current = bf_guest_read_u32(guest_eax);
    while (bf_guest_read_u8(current + UINT32_C(0x11)) == 0) {
        guest_eax = current;
        current = bf_guest_read_u32(guest_eax);
    }
    return guest_eax;
}
