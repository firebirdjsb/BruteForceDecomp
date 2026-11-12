/* Brute Force retail Xbox original x86 entry: FUN_0027cac0, 0x0027CAC0.
 * Input x86 body SHA-256: 31C31481B3FD03C996A9BA81B4155FB3D88C630A81D884F5F729CC2C0E48864C
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (EAX), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Original loop uses guest byte +0x1d, link at +0, and returns predecessor EAX.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_0027cac0(std::uint32_t guest_eax)
{
    std::uint32_t current = bf_guest_read_u32(guest_eax);
    while (bf_guest_read_u8(current + UINT32_C(0x1d)) == 0) {
        guest_eax = current;
        current = bf_guest_read_u32(guest_eax);
    }
    return guest_eax;
}
